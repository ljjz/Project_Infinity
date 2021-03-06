// CC BY-NC 4.0

#include "Framework.h"
#include "VisualEffect.h"

UVisualEffect::UVisualEffect() {}

UVisualEffect::UVisualEffect(TAssetPtr<UParticleEmitter> Particle) {
	this->Particle = Particle;
}

bool UVisualEffect::Execute_Implementation() {
	bIsExecuted = true;
	if (Particle == NULL) return false;
	//else bind particle to instigator/actor/pawn and turn it on
	return true;
}

EEffectType UVisualEffect::GetEffectType() {
	return EEffectType::VISUAL;
}

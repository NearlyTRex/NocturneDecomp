#include "core/actor/actorrenderowners.h"
#include "core/actor/demonactor.h"
#include "core/box/boundingbox3d.h"
#include "engine/drender/demonrenderer.h"

#include <functional>

namespace nocturne::core {

// nocedit 0x00408b00
void CDemonActor::setupRenderState(engine::CDemonRenderer &renderer) const {
    renderer.processCameraRelativeVertex(location_.position);
    renderer.applyScaledTransform(orientation_, nullptr);
}

// nocedit 0x00408b40
void CDemonActor::restoreRenderState(engine::CDemonRenderer &renderer) {
    renderer.matrixPop();
}

// The original repeats this in each actor's draws.
bool CDemonActor::renderIfBoxVisible(const SActorRenderOwners &owners,
                                     const std::function<void()> &draw) {
    setupRenderState(owners.renderer);
    CBoundingBox3D box;
    const bool visible = getBoundingBox(&box)->isVisible(owners);
    if (visible) {
        draw();
    }
    restoreRenderState(owners.renderer);
    return visible;
}

} // namespace nocturne::core

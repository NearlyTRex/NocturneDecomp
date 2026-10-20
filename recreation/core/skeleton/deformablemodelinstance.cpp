#include "core/skeleton/deformablemodelinstance.h"

namespace nocturne::core {

// deferred: the transformed vertices, and the defaults the constructor gives the model, skinning,
//   root motion and scale fields, with the steps that read them
// nocedit 0x0059ddc0
CDeformableModelInstance::CDeformableModelInstance() = default;

// deferred: freeing what the model loaded, with free
// nocedit 0x0059de40
CDeformableModelInstance::~CDeformableModelInstance() = default;

} // namespace nocturne::core

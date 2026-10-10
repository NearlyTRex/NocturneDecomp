#pragma once

#include "common/fwd.h"
#include "core/fwd.h"
#include "core/particle/particle.h"
#include "platform/fwd.h"

namespace nocturne::core {

class CGlassParticle : public CParticle {
public:
    CGlassParticle();
    ~CGlassParticle() override;

    void process() override;
    void render() override;
    int onCollision(common::CVector3f *collision_normal) override;

    void init(STriangleVertices *triangle_vertices, common::CVector3i *uv_u_per_vertex,
              common::CVector3i *uv_v_per_vertex, platform::SMRGLTextureBasic *texture,
              int lifetime);
};

} // namespace nocturne::core

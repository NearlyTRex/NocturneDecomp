#pragma once

#include "core/fwd.h"
#include "core/particle/particle.h"

namespace nocturne::core {

class CGlassParticle : public CParticle {
public:
    CGlassParticle();
    ~CGlassParticle() override;

    void process() override;
    void render() override;
    int onCollision(CVector3f *collision_normal) override;

    void init(STriangleVertices *triangle_vertices, CVector3i *uv_u_per_vertex,
              CVector3i *uv_v_per_vertex, SMRGLTextureBasic *texture, int lifetime);
};

} // namespace nocturne::core

// Name: shape_meshlod.cpp_CLodMesh_computeMeshCRC32_FUN_0051c6f0
// Address: 0051c6f0
// MANUAL RECONSTRUCTION
// Address Range: [[0051c6f0, 0051cded]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_computeMeshCRC32_FUN_0051c6f0(CLodMesh *this_ptr,uint *out_crc)

#include "nocturne.h"

// Bytewise CRC-32 (MSB-first, polynomial 0x04C11DB7) folding `nbytes` of `data`
// into *crc: each source byte is XORed into the top of the accumulator, then
// eight shift/conditional-xor rounds are applied. This is exactly the per-byte
// update the decompiler emitted, unrolled inline, at every hash site below.
static void crc32_msb_bytes(uint *crc, const void *data, int nbytes)
{
  const byte *p;
  int i;
  int bit;

  p = (const byte *)data;
  for (i = 0; i < nbytes; i = i + 1) {
    *crc = *crc ^ (uint)p[i] << 0x18;
    for (bit = 0; bit < 8; bit = bit + 1) {
      if ((*crc & 0x80000000) == 0) {
        *crc = *crc * 2;
      }
      else {
        *crc = *crc * 2 ^ 0x4c11db7;
      }
    }
  }
}

void __cdecl shape_meshlod_cpp_CLodMesh_computeMeshCRC32_FUN_0051c6f0(CLodMesh *this_ptr,uint *out_crc)

{
  CLodFace *face;
  CLodVert *vert_data;
  int tri;
  int vert;
  int i;
  int k;

  // Per triangle: the enabled attribute indices, then for each of the three
  // triangle corners its vertex index followed by that corner's sort
  // attributes (the UV pairs).
  for (tri = 0; tri < this_ptr->tri_count; tri = tri + 1) {
    face = this_ptr->tri_data + tri;
    for (i = 0; i < this_ptr->active_attribute_count; i = i + 1) {
      if (this_ptr->attribute_enabled_flags[i] != 0) {
        crc32_msb_bytes(out_crc, &face->attribute_indices[i], 4);
      }
    }
    for (vert = 0; vert < 3; vert = vert + 1) {
      crc32_msb_bytes(out_crc, &face->vertex_idx_0 + vert, 4);
      for (k = 0; k < this_ptr->sort_attribute_count; k = k + 1) {
        crc32_msb_bytes(out_crc, &face->uv_coords[vert][k], 4);
      }
    }
  }

  // Per vertex: the position (three floats), then the extra attributes, which
  // are stored as consecutive ints starting at material_id.
  for (vert = 0; vert < this_ptr->vertex_count; vert = vert + 1) {
    vert_data = this_ptr->vertex_data + vert;
    crc32_msb_bytes(out_crc, &vert_data->position, sizeof(CVector3f));
    for (k = 0; k < this_ptr->extra_attribute_count; k = k + 1) {
      crc32_msb_bytes(out_crc, &vert_data->material_id + k, 4);
    }
  }
  return;
}

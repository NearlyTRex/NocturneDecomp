// Name: engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0046dbd0
// Address: 0046dbd0
// Address Range: [[0046dbd0, 0046de64]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderFaceList_FUN_0046dbd0(CDemonRenderer *this_ptr,SInputFace *face_array,int face_count,int render_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderFaceList_FUN_0046dbd0(CDemonRenderer *this_ptr,SInputFace *face_array,int face_count,int render_flags)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  
  if (render_flags == -1) {
    render_flags = 0x2cd;
  }
  if (*(int *)(this_ptr + 0x1c) == 0) {
    if (((*(int *)(this_ptr + 0x10) == 0) && (*(int *)(this_ptr + 0xc) == 0)) && (DAT_007303fc != 0)
       ) {
      if (*(int *)(this_ptr + 4) == 0) {
        if (DAT_005fba20 == 0x20) {
          _DAT_01c6b5cc = engine_special_cpp_FUN_00560f31;
        }
        else {
          _DAT_01c6b5cc = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_00561713;
        }
        _DAT_01c6e2b4 = render_flags;
        _DAT_01c6e2b8 = 6;
        if (_DAT_01c6cee8 == 0) {
          for (; 0 < face_count; face_count = face_count + -1) {
            local_24 = (uint)*(ushort *)face_array;
            local_20 = (uint)*(ushort *)(face_array + 2);
            local_1c = (uint)*(ushort *)(face_array + 4);
            if (*(int *)(this_ptr + 0x20) == 0) {
              *(uint *)(local_24 * 0x30 + 0x18 + *(int *)this_ptr) =
                   (uint)*(ushort *)(face_array + 6) << 8;
              *(uint *)(*(int *)this_ptr + 0x1c + local_24 * 0x30) =
                   (uint)*(ushort *)(face_array + 0xc) << 8;
              *(uint *)(local_20 * 0x30 + 0x18 + *(int *)this_ptr) =
                   (uint)*(ushort *)(face_array + 8) << 8;
              *(uint *)(*(int *)this_ptr + 0x1c + local_20 * 0x30) =
                   (uint)*(ushort *)(face_array + 0xe) << 8;
              *(uint *)(local_1c * 0x30 + 0x18 + *(int *)this_ptr) =
                   (uint)*(ushort *)(face_array + 10) << 8;
              *(uint *)(*(int *)this_ptr + 0x1c + local_1c * 0x30) =
                   (uint)*(ushort *)(face_array + 0x10) << 8;
            }
            face_array = face_array + 0x12;
            unkafter_dpart_cpp_FUN_00466d50((int *)&local_24,3);
          }
        }
        else {
          iVar4 = 0;
          local_14 = 0;
          if (0 < face_count) {
            local_18 = 0;
            do {
              iVar3 = engine_prim_c_getTriangleWindingFromPackedIndices_FUN_00515d60(face_array);
              if (iVar3 != 0) {
                iVar4 = iVar4 + 1;
                iVar3 = local_18 + 4;
                *(SInputFace **)(&DAT_005f2b04 + local_18) = face_array;
                local_18 = iVar3;
                if (1999 < iVar4) {
                  _DAT_01d71de0 = "..\\engine\\drender.cpp";
                  _DAT_01d71de4 = 0xa30;
                  core_main_c_FUN_004e4330("CDemonRenderer::demonGZFacetList - Too many visible faces at once : %d",iVar4);
                }
              }
              local_14 = local_14 + 1;
              face_array = face_array + 0x12;
            } while (local_14 < face_count);
          }
          if (0 < iVar4) {
            engine_special_cpp_drawPolyList2_FUN_00565db0
                      (*(uint *)this_ptr,&DAT_005f2b04,iVar4,_DAT_01c6e2b4);
            return;
          }
        }
      }
      else {
        _DAT_01c6b5cc = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_0046f9a6;
        _DAT_01c6e2b4 = 0;
        _DAT_01c6e2b8 = 0;
        uVar1 = 0;
        uVar2 = 0;
        if (0 < face_count) {
          do {
            _DAT_01c6e2b8 = uVar2;
            _DAT_01c6e2b4 = uVar1;
            local_24 = (uint)*(ushort *)face_array;
            local_20 = (uint)*(ushort *)(face_array + 2);
            local_1c = (uint)*(ushort *)(face_array + 4);
            face_count = face_count + -1;
            face_array = face_array + 0x12;
            unkafter_dpart_cpp_FUN_004673d0((CVector3i *)&local_24,3);
            uVar1 = _DAT_01c6e2b4;
            uVar2 = _DAT_01c6e2b8;
          } while (0 < face_count);
          return;
        }
      }
    }
    else {
      iVar4 = 0;
      if (0 < face_count) {
        do {
          iVar4 = iVar4 + 1;
          engine_drender_cpp_CDemonRenderer_renderTexturedFace_FUN_0046ba70
                    (this_ptr,face_array,render_flags);
          face_array = face_array + 0x12;
        } while (iVar4 < face_count);
        return;
      }
    }
  }
  else {
    iVar4 = 0;
    if (0 < face_count) {
      do {
        iVar4 = iVar4 + 1;
        engine_drender_cpp_CDemonRenderer_captureFace_FUN_0046e300
                  (this_ptr,(STrianglePackedIndices *)face_array,render_flags);
        face_array = face_array + 0x12;
      } while (iVar4 < face_count);
    }
  }
  return;
}

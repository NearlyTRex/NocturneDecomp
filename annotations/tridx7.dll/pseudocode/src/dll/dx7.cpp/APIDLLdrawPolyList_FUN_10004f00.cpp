// Name: dll_dx7.cpp_APIDLLdrawPolyList_FUN_10004f00
// Address: 10004f00
// Address Range: [[10004f00, 10005008]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_APIDLLdrawPolyList_FUN_10004f00(SRenderVertex *vertex_buffer,SMRGLPrimitiveTriangle **polygons,int polygon_count,int render_flags)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_APIDLLdrawPolyList_FUN_10004f00(SRenderVertex *vertex_buffer,SMRGLPrimitiveTriangle **polygons,int polygon_count,int render_flags)

{
  SMRGLPrimitiveTriangle *pSVar1;
  int iVar2;
  ushort uVar3;
  SMRGLVertex *pSVar4;
  int local_c;
  SMRGLPrimitiveTriangle **local_8;
  int local_4;
  
                    /* 0x4f00  11  APIDLLdrawPolyList */
  if (g_InScene == 0) {
    return 0;
  }
  dll_dx7_cpp_FUN_10003f10(render_flags);
  DAT_10014234 = DAT_10014234 + 1;
  if (0 < polygon_count) {
    local_8 = polygons;
    local_4 = polygon_count;
    do {
      local_c = 0;
      pSVar1 = *local_8;
      iVar2 = (pSVar1->base).base.count;
      if (iVar2 != 2 && -1 < iVar2 + -2) {
        pSVar4 = pSVar1->vertices + 1;
        do {
          uVar3 = dll_dx7_cpp_FUN_10005010(pSVar1->vertices,vertex_buffer,render_flags);
          *(ushort *)(&DAT_10238910 + DAT_1001422c * 2) = uVar3;
          uVar3 = dll_dx7_cpp_FUN_10005010(pSVar4,vertex_buffer,render_flags);
          *(ushort *)(&DAT_10238912 + DAT_1001422c * 2) = uVar3;
          uVar3 = dll_dx7_cpp_FUN_10005010(pSVar4 + 1,vertex_buffer,render_flags);
          iVar2 = DAT_1001422c;
          local_c = local_c + 1;
          DAT_1001422c = DAT_1001422c + 3;
          *(ushort *)(&DAT_10238914 + iVar2 * 2) = uVar3;
          pSVar4 = pSVar4 + 1;
        } while (local_c < (pSVar1->base).base.count + -2);
      }
      if (0x3e76 < DAT_1001422c) {
        dll_dx7_cpp_FUN_10002340("You're shoving too many faces");
      }
      local_8 = local_8 + 1;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  dll_dx7_cpp_FUN_100047b0();
  return 1;
}

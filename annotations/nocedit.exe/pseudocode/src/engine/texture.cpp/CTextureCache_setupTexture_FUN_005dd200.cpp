// Name: engine_texture.cpp_CTextureCache_setupTexture_FUN_005dd200
// Address: 005dd200
// Address Range: [[005dd200, 005dd56a]]
// Convention: __cdecl
// Signature: void engine_texture.cpp_CTextureCache_setupTexture_FUN_005dd200(CTextureCache * cache, int texture_index)
// Cross-references:
//   engine_texture.cpp_CTextureCache_renderAllTextures_FUN_005dd580 (005dd580) at 005dd5aa [UNCONDITIONAL_CALL]
//   engine_texture.cpp_ensureTextureLoaded_FUN_005dd800 (005dd800) at 005dd869 [UNCONDITIONAL_CALL]
// Globals:
//   int g_BitsPerPixel = 0x8
//   int g_CurrentTextureDimension = 0x100
//   ulonglong g_TextureShift1 = 0x10
//   ulonglong g_TextureShift2 = 0x8
//   ulonglong g_TextureMask1 = 0xff
//   ulonglong g_TextureMask2 = 0xff00
//   byte* g_CurrentPalette
//   uint[256] g_Hardware32BitPalette
//   undefined4 g_GlobalPalette[1]
//   ushort[256] g_Hardware16BitPalette
//   int g_RedBitPosition
//   int g_RedScaleFactor
//   int g_GreenBitPosition
//   int g_GreenScaleFactor
//   int g_BlueBitPosition
//   int g_BlueScaleFactor
//   void* g_CurrentTextureData
//   void* g_CurrentTextureOpacityData
//   int g_CurrentTextureOffsetU
//   int g_CurrentTextureOffsetV
//   int g_TextureBits
//   int g_UseExternalRenderer

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005dd2de) */

void __cdecl
engine_texture_cpp_CTextureCache_setupTexture_FUN_005dd200(CTextureCache *cache,int texture_index)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  int local_14;
  
  g_CurrentTextureData = cache->texture_data_ptrs[texture_index];
  g_CurrentTextureOpacityData = cache->texture_opacity_ptrs[texture_index];
  g_CurrentTextureOffsetU = 0;
  g_CurrentTextureOffsetV = 0;
  g_CurrentTextureDimension = cache->texture_dimensions[texture_index];
  pbVar6 = cache->texture_palette_ptrs[texture_index];
  g_CurrentPalette = pbVar6;
  if (g_UseExternalRenderer == 0) {
    if (g_BitsPerPixel == 0x20) {
      iVar7 = 0;
      do {
        pbVar1 = pbVar6 + 1;
        bVar3 = *pbVar6;
        pbVar2 = pbVar6 + 2;
        iVar4 = iVar7 + 4;
        pbVar6 = pbVar6 + 3;
        *(uint *)((int)g_Hardware32BitPalette + iVar7) =
             (uint)*pbVar2 << ((byte)g_BlueBitPosition & 0x1f) |
             (uint)*pbVar1 << ((byte)g_GreenBitPosition & 0x1f) |
             (uint)bVar3 << ((byte)g_RedBitPosition & 0x1f);
        iVar7 = iVar4;
      } while (iVar4 != 0x400);
    }
    else {
      local_14 = g_UseExternalRenderer;
      iVar7 = 0;
      do {
        *(ushort *)((int)g_Hardware16BitPalette + iVar7) =
             (ushort)((uint)pbVar6[1] / (uint)g_GreenScaleFactor <<
                     ((byte)g_GreenBitPosition & 0x1f)) |
             (ushort)((uint)*pbVar6 / (uint)g_RedScaleFactor << ((byte)g_RedBitPosition & 0x1f)) |
             (ushort)((uint)pbVar6[2] / (uint)g_BlueScaleFactor << ((byte)g_BlueBitPosition & 0x1f))
        ;
        if (g_BitsPerPixel == 0x20) {
          uVar5 = (uint)pbVar6[2] << ((byte)g_BlueBitPosition & 0x1f) |
                  (uint)*pbVar6 << ((byte)g_RedBitPosition & 0x1f) |
                  (uint)pbVar6[1] << ((byte)g_GreenBitPosition & 0x1f);
        }
        else {
          uVar5 = (uint)pbVar6[1] << 8 | (uint)*pbVar6 << 0x10 | (uint)pbVar6[2];
        }
        pbVar6 = pbVar6 + 3;
        *(uint *)((int)g_Hardware32BitPalette + local_14) = uVar5;
        local_14 = local_14 + 4;
        iVar7 = iVar7 + 2;
      } while (iVar7 != 0x200);
    }
  }
  if ((uint)g_CurrentTextureDimension < 0x80) {
    if (0x1f < (uint)g_CurrentTextureDimension) {
      if ((uint)g_CurrentTextureDimension < 0x21) {
        g_TextureShift1._0_4_ = 0x13;
        g_TextureShift2._0_4_ = 0xe;
        g_TextureMask1._0_4_ = 0x1f;
        g_TextureMask2._0_4_ = 0x3e0;
        g_TextureBits = 5;
        return;
      }
      if (g_CurrentTextureDimension == 0x40) {
        g_TextureShift1._0_4_ = 0x12;
        g_TextureShift2._0_4_ = 0xc;
        g_TextureMask1._0_4_ = 0x3f;
        g_TextureMask2._0_4_ = 0xfc0;
        g_TextureBits = 6;
        return;
      }
    }
    return;
  }
  if ((uint)g_CurrentTextureDimension < 0x81) {
    g_TextureShift1._0_4_ = 0x11;
    g_TextureShift2._0_4_ = 10;
    g_TextureMask1._0_4_ = 0x7f;
    g_TextureMask2._0_4_ = 0x3f80;
    g_TextureBits = 7;
    return;
  }
  if ((uint)g_CurrentTextureDimension < 0x200) {
    if (g_CurrentTextureDimension != 0x100) {
      return;
    }
    g_TextureShift1._0_4_ = 0x10;
    g_TextureShift2._0_4_ = 8;
    g_TextureMask1._0_4_ = 0xff;
    g_TextureMask2._0_4_ = 0xff00;
    g_TextureBits = 8;
    return;
  }
  if ((uint)g_CurrentTextureDimension < 0x201) {
    g_TextureShift1._0_4_ = 0xf;
    g_TextureShift2._0_4_ = 6;
    g_TextureMask1._0_4_ = 0x1ff;
    g_TextureMask2._0_4_ = 0x3fe00;
    g_TextureBits = 9;
    return;
  }
  if (g_CurrentTextureDimension != 0x400) {
    return;
  }
  g_TextureShift1._0_4_ = 0xe;
  g_TextureShift2._0_4_ = 4;
  g_TextureMask1._0_4_ = 0x3ff;
  g_TextureMask2._0_4_ = 0xffc00;
  g_TextureBits = 10;
  return;
}


// Assembly code:
// 005dd200: PUSH EBX
//   Label: engine_texture.cpp_CTextureCache_setupTexture_FUN_005dd200
// 005dd201: PUSH ESI
// 005dd202: PUSH EDI
// 005dd203: PUSH EBP
// 005dd204: SUB ESP,0xc
// 005dd207: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 005dd20b: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 005dd20f: SHL EAX,0x2
// 005dd212: ADD EAX,EDX
// 005dd214: MOV ECX,dword ptr [EAX + 0x1008]
// 005dd21a: MOV dword ptr [0x02d03e80],ECX
//   XREF to: 02d03e80 (WRITE)
// 005dd220: MOV ECX,dword ptr [EAX + 0x2008]
// 005dd226: MOV dword ptr [0x02d03e84],ECX
//   XREF to: 02d03e84 (WRITE)
// 005dd22c: XOR ECX,ECX
// 005dd22e: MOV ESI,dword ptr [0x02d03e94]
//   XREF to: 02d03e94 (READ)
// 005dd234: MOV dword ptr [0x02d03e88],ECX
//   XREF to: 02d03e88 (WRITE)
// 005dd23a: MOV dword ptr [0x02d03e8c],ECX
//   XREF to: 02d03e8c (WRITE)
// 005dd240: MOV ECX,dword ptr [EAX + 0x8]
// 005dd243: MOV EAX,dword ptr [EAX + 0x13008]
// 005dd249: MOV dword ptr [0x006793a4],ECX
//   XREF to: 006793a4 (WRITE)
// 005dd24f: MOV [0x02d01920],EAX
//   XREF to: 02d01920 (WRITE)
// 005dd254: TEST ESI,ESI
// 005dd256: JNZ 0x005dd2b2
//   XREF to: 005dd2b2 (CONDITIONAL_JUMP)
// 005dd258: MOV EDI,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 005dd25e: MOV EBX,EAX
// 005dd260: CMP EDI,0x20
// 005dd263: JNZ 0x005dd2ec
//   XREF to: 005dd2ec (CONDITIONAL_JUMP)
// 005dd269: MOV EDX,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 005dd26f: XOR EAX,EAX
// 005dd271: MOVZX ESI,byte ptr [EBX + 0x1]
//   Label: LAB_005dd271
// 005dd275: MOVZX EBP,byte ptr [EBX]
// 005dd278: MOVZX EDI,byte ptr [EBX + 0x2]
// 005dd27c: CMP EDX,0x20
// 005dd27f: JNZ 0x005dd2de
//   XREF to: 005dd2de (CONDITIONAL_JUMP)
// 005dd281: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 005dd287: SHL EBP,CL
// 005dd289: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 005dd28f: SHL ESI,CL
// 005dd291: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 005dd297: SHL EDI,CL
// 005dd299: OR ESI,EBP
// 005dd29b: MOV ECX,EDI
// 005dd29d: OR ECX,ESI
// 005dd29f: ADD EAX,0x4
//   Label: LAB_005dd29f
// 005dd2a2: ADD EBX,0x3
// 005dd2a5: MOV dword ptr [EAX + 0x2d01920],ECX
//   XREF to: 02d01924 (WRITE)
//   XREF to: 02d01928 (WRITE)
// 005dd2ab: CMP EAX,0x400
// 005dd2b0: JNZ 0x005dd271
//   XREF to: 005dd271 (CONDITIONAL_JUMP)
// 005dd2b2: MOV EAX,[0x006793a4]
//   Label: LAB_005dd2b2
//   XREF to: 006793a4 (READ)
// 005dd2b7: CMP EAX,0x80
// 005dd2bc: JNC 0x005dd532
//   XREF to: 005dd532 (CONDITIONAL_JUMP)
// 005dd2c2: CMP EAX,0x20
// 005dd2c5: JC 0x005dd2d6
//   XREF to: 005dd2d6 (CONDITIONAL_JUMP)
// 005dd2c7: JBE 0x005dd4f4
//   XREF to: 005dd4f4 (CONDITIONAL_JUMP)
// 005dd2cd: CMP EAX,0x40
// 005dd2d0: JZ 0x005dd4b5
//   XREF to: 005dd4b5 (CONDITIONAL_JUMP)
// 005dd2d6: ADD ESP,0xc
//   Label: LAB_005dd2d6
// 005dd2d9: POP EBP
// 005dd2da: POP EDI
// 005dd2db: POP ESI
// 005dd2dc: POP EBX
// 005dd2dd: RET
// 005dd2de: MOV ECX,ESI
//   Label: LAB_005dd2de
// 005dd2e0: SHL EBP,0x10
// 005dd2e3: SHL ECX,0x8
// 005dd2e6: OR ECX,EBP
// 005dd2e8: OR ECX,EDI
// 005dd2ea: JMP 0x005dd29f
//   XREF to: 005dd29f (UNCONDITIONAL_JUMP)
// 005dd2ec: MOV dword ptr [ESP + 0x8],ESI
//   Label: LAB_005dd2ec
//   XREF to: Stack[-0x14] (WRITE)
// 005dd2f0: MOV EDI,dword ptr [0x02d01f28]
//   Label: LAB_005dd2f0
//   XREF to: 02d01f28 (READ)
// 005dd2f6: XOR EAX,EAX
// 005dd2f8: XOR EDX,EDX
// 005dd2fa: MOV AL,byte ptr [EBX]
// 005dd2fc: DIV EDI
// 005dd2fe: MOVZX EBP,byte ptr [EBX + 0x1]
// 005dd302: MOV dword ptr [ESP],EBP
//   XREF to: Stack[-0x1c] (DATA)
// 005dd305: MOV EDI,EAX
// 005dd307: XOR EDX,EDX
// 005dd309: MOV EAX,EBP
// 005dd30b: DIV dword ptr [0x02d01f34]
//   XREF to: 02d01f34 (READ)
// 005dd311: XOR ECX,ECX
// 005dd313: MOV CL,byte ptr [EBX + 0x2]
// 005dd316: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 005dd31a: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x1c] (DATA)
// 005dd31d: XOR EDX,EDX
// 005dd31f: MOV EAX,ECX
// 005dd321: DIV dword ptr [0x02d01f40]
//   XREF to: 02d01f40 (READ)
// 005dd327: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 005dd32d: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005dd331: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 005dd334: SHL EDI,CL
// 005dd336: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 005dd33c: SHL EAX,CL
// 005dd33e: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 005dd344: OR EAX,EDI
// 005dd346: MOV EDI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (READ)
// 005dd34a: SHL EDI,CL
// 005dd34c: OR EAX,EDI
// 005dd34e: MOV word ptr [ESI + 0x2d01d24],AX
//   XREF to: 02d01d24 (DATA)
// 005dd355: MOV EDX,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 005dd35b: MOVZX EBP,byte ptr [EBX + 0x2]
// 005dd35f: XOR EAX,EAX
// 005dd361: MOVZX EDI,byte ptr [EBX + 0x1]
// 005dd365: MOV AL,byte ptr [EBX]
// 005dd367: CMP EDX,0x20
// 005dd36a: JNZ 0x005dd3b2
//   XREF to: 005dd3b2 (CONDITIONAL_JUMP)
// 005dd36c: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 005dd372: SHL EAX,CL
// 005dd374: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 005dd37a: SHL EDI,CL
// 005dd37c: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 005dd382: SHL EBP,CL
// 005dd384: OR EAX,EDI
// 005dd386: MOV ECX,EBP
// 005dd388: OR ECX,EAX
// 005dd38a: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_005dd38a
//   XREF to: Stack[-0x14] (READ)
// 005dd38e: ADD EBX,0x3
// 005dd391: MOV dword ptr [EAX + 0x2d01924],ECX
//   XREF to: 02d01924 (DATA)
// 005dd397: LEA ECX,[EAX + 0x4]
// 005dd39a: ADD ESI,0x2
// 005dd39d: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 005dd3a1: CMP ESI,0x200
// 005dd3a7: JZ 0x005dd2b2
//   XREF to: 005dd2b2 (CONDITIONAL_JUMP)
// 005dd3ad: JMP 0x005dd2f0
//   XREF to: 005dd2f0 (UNCONDITIONAL_JUMP)
// 005dd3b2: MOV ECX,EDI
//   Label: LAB_005dd3b2
// 005dd3b4: SHL EAX,0x10
// 005dd3b7: SHL ECX,0x8
// 005dd3ba: OR ECX,EAX
// 005dd3bc: OR ECX,EBP
// 005dd3be: JMP 0x005dd38a
//   XREF to: 005dd38a (UNCONDITIONAL_JUMP)
// 005dd3c0: MOV EBX,0xe
//   Label: LAB_005dd3c0
// 005dd3c5: MOV ESI,0x4
// 005dd3ca: MOV EDI,0x3ff
// 005dd3cf: MOV EBP,0xffc00
// 005dd3d4: MOV ECX,0xa
// 005dd3d9: MOV dword ptr [0x006826e0],EBX
//   XREF to: 006826e0 (WRITE)
// 005dd3df: MOV dword ptr [0x00682700],ESI
//   XREF to: 00682700 (WRITE)
// 005dd3e5: MOV dword ptr [0x00682720],EDI
//   XREF to: 00682720 (WRITE)
// 005dd3eb: MOV dword ptr [0x00682740],EBP
//   XREF to: 00682740 (WRITE)
// 005dd3f1: MOV dword ptr [0x02d03e90],ECX
//   XREF to: 02d03e90 (WRITE)
// 005dd3f7: ADD ESP,0xc
// 005dd3fa: POP EBP
// 005dd3fb: POP EDI
// 005dd3fc: POP ESI
// 005dd3fd: POP EBX
// 005dd3fe: RET
// 005dd3ff: MOV EDX,0xf
//   Label: LAB_005dd3ff
// 005dd404: MOV ECX,0x6
// 005dd409: MOV EBX,0x1ff
// 005dd40e: MOV ESI,0x3fe00
// 005dd413: MOV EAX,0x9
// 005dd418: MOV dword ptr [0x006826e0],EDX
//   XREF to: 006826e0 (WRITE)
// 005dd41e: MOV dword ptr [0x00682700],ECX
//   XREF to: 00682700 (WRITE)
// 005dd424: MOV dword ptr [0x00682720],EBX
//   XREF to: 00682720 (WRITE)
// 005dd42a: MOV dword ptr [0x00682740],ESI
//   XREF to: 00682740 (WRITE)
// 005dd430: MOV [0x02d03e90],EAX
//   XREF to: 02d03e90 (WRITE)
// 005dd435: ADD ESP,0xc
// 005dd438: POP EBP
// 005dd439: POP EDI
// 005dd43a: POP ESI
// 005dd43b: POP EBX
// 005dd43c: RET
// 005dd43d: MOV EBP,0x10
//   Label: LAB_005dd43d
// 005dd442: MOV EDI,0x8
// 005dd447: MOV EDX,0xff
// 005dd44c: MOV ECX,0xff00
// 005dd451: MOV dword ptr [0x006826e0],EBP
//   XREF to: 006826e0 (WRITE)
// 005dd457: MOV dword ptr [0x00682700],EDI
//   XREF to: 00682700 (WRITE)
// 005dd45d: MOV dword ptr [0x00682720],EDX
//   XREF to: 00682720 (WRITE)
// 005dd463: MOV dword ptr [0x00682740],ECX
//   XREF to: 00682740 (WRITE)
// 005dd469: MOV dword ptr [0x02d03e90],EDI
//   XREF to: 02d03e90 (WRITE)
// 005dd46f: ADD ESP,0xc
// 005dd472: POP EBP
// 005dd473: POP EDI
// 005dd474: POP ESI
// 005dd475: POP EBX
// 005dd476: RET
// 005dd477: MOV ESI,0x11
//   Label: LAB_005dd477
// 005dd47c: MOV EDI,0xa
// 005dd481: MOV EBP,0x7f
// 005dd486: MOV EAX,0x3f80
// 005dd48b: MOV EBX,0x7
// 005dd490: MOV dword ptr [0x006826e0],ESI
//   XREF to: 006826e0 (WRITE)
// 005dd496: MOV dword ptr [0x00682700],EDI
//   XREF to: 00682700 (WRITE)
// 005dd49c: MOV dword ptr [0x00682720],EBP
//   XREF to: 00682720 (WRITE)
// 005dd4a2: MOV [0x00682740],EAX
//   XREF to: 00682740 (WRITE)
// 005dd4a7: MOV dword ptr [0x02d03e90],EBX
//   XREF to: 02d03e90 (WRITE)
// 005dd4ad: ADD ESP,0xc
// 005dd4b0: POP EBP
// 005dd4b1: POP EDI
// 005dd4b2: POP ESI
// 005dd4b3: POP EBX
// 005dd4b4: RET
// 005dd4b5: MOV ECX,0x12
//   Label: LAB_005dd4b5
// 005dd4ba: MOV EBX,0xc
// 005dd4bf: MOV ESI,0x3f
// 005dd4c4: MOV EDI,0xfc0
// 005dd4c9: MOV EDX,0x6
// 005dd4ce: MOV dword ptr [0x006826e0],ECX
//   XREF to: 006826e0 (WRITE)
// 005dd4d4: MOV dword ptr [0x00682700],EBX
//   XREF to: 00682700 (WRITE)
// 005dd4da: MOV dword ptr [0x00682720],ESI
//   XREF to: 00682720 (WRITE)
// 005dd4e0: MOV dword ptr [0x00682740],EDI
//   XREF to: 00682740 (WRITE)
// 005dd4e6: MOV dword ptr [0x02d03e90],EDX
//   XREF to: 02d03e90 (WRITE)
// 005dd4ec: ADD ESP,0xc
// 005dd4ef: POP EBP
// 005dd4f0: POP EDI
// 005dd4f1: POP ESI
// 005dd4f2: POP EBX
// 005dd4f3: RET
// 005dd4f4: MOV EAX,0x13
//   Label: LAB_005dd4f4
// 005dd4f9: MOV EDX,0xe
// 005dd4fe: MOV ECX,0x1f
// 005dd503: MOV EBX,0x3e0
// 005dd508: MOV EBP,0x5
// 005dd50d: MOV [0x006826e0],EAX
//   XREF to: 006826e0 (WRITE)
// 005dd512: MOV dword ptr [0x00682700],EDX
//   XREF to: 00682700 (WRITE)
// 005dd518: MOV dword ptr [0x00682720],ECX
//   XREF to: 00682720 (WRITE)
// 005dd51e: MOV dword ptr [0x00682740],EBX
//   XREF to: 00682740 (WRITE)
// 005dd524: MOV dword ptr [0x02d03e90],EBP
//   XREF to: 02d03e90 (WRITE)
// 005dd52a: ADD ESP,0xc
// 005dd52d: POP EBP
// 005dd52e: POP EDI
// 005dd52f: POP ESI
// 005dd530: POP EBX
// 005dd531: RET
// 005dd532: JBE 0x005dd477
//   Label: LAB_005dd532
//   XREF to: 005dd477 (CONDITIONAL_JUMP)
// 005dd538: CMP EAX,0x200
// 005dd53d: JNC 0x005dd552
//   XREF to: 005dd552 (CONDITIONAL_JUMP)
// 005dd53f: CMP EAX,0x100
// 005dd544: JZ 0x005dd43d
//   XREF to: 005dd43d (CONDITIONAL_JUMP)
// 005dd54a: ADD ESP,0xc
// 005dd54d: POP EBP
// 005dd54e: POP EDI
// 005dd54f: POP ESI
// 005dd550: POP EBX
// 005dd551: RET
// 005dd552: JBE 0x005dd3ff
//   Label: LAB_005dd552
//   XREF to: 005dd3ff (CONDITIONAL_JUMP)
// 005dd558: CMP EAX,0x400
// 005dd55d: JZ 0x005dd3c0
//   XREF to: 005dd3c0 (CONDITIONAL_JUMP)
// 005dd563: ADD ESP,0xc
// 005dd566: POP EBP
// 005dd567: POP EDI
// 005dd568: POP ESI
// 005dd569: POP EBX
// 005dd56a: RET

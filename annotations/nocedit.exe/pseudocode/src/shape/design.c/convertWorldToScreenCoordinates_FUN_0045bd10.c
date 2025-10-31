// Name: shape_design.c_convertWorldToScreenCoordinates_FUN_0045bd10
// Address: 0045bd10
// Address Range: [[0045bd10, 0045be3d]]
// Convention: __cdecl
// Signature: void * shape_design.c_convertWorldToScreenCoordinates_FUN_0045bd10(SScreenCoord * input_coords, SVertexData * output_vertex)
// Globals:
//   double g_WindowAspectRatioMultiplier = 3
//   double g_WindowAspectRatioCorrection = 0.25
//   double g_WindowViewportCenterOffset = 0.5
//   float g_WindowWorldScaleFactor = 0.00390625
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   undefined4 g_PolygonScreenCache[19999].view_mode
//   int g_ZoomLevel
//   int g_StoredWorldYCoordinate

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0045be1d) */

void * __cdecl
shape_design_c_convertWorldToScreenCoordinates_FUN_0045bd10
          (SScreenCoord *input_coords,SVertexData *output_vertex)

{
  float fVar1;
  float fVar2;
  float *unaff_ESI;
  float local_38;
  float local_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  
  fVar1 = (float)g_ZoomLevel *
          (((float)input_coords->x - (float)g_WindowWidth * (float)g_WindowViewportCenterOffset) /
          ((float)g_WindowWidth * (float)g_WindowViewportCenterOffset)) * g_WindowWorldScaleFactor *
          (((float)g_WindowWidth * (float)g_WindowAspectRatioMultiplier) / (float)g_WindowHeight) *
          (float)g_WindowAspectRatioCorrection;
  fVar2 = (float)g_ZoomLevel *
          (-((float)input_coords->y - (float)g_WindowHeight * (float)g_WindowViewportCenterOffset) /
          ((float)g_WindowHeight * (float)g_WindowViewportCenterOffset)) * g_WindowWorldScaleFactor;
  if (g_PolygonScreenCache[19999].view_mode == 0) {
    local_34 = (float)g_StoredWorldYCoordinate;
    local_38 = fVar1;
    local_30 = fVar2;
  }
  else if ((uint)g_PolygonScreenCache[19999].view_mode < 2) {
    local_38 = (float)g_StoredWorldYCoordinate;
    local_34 = fVar2;
    local_30 = fVar1;
  }
  else if (g_PolygonScreenCache[19999].view_mode == 2) {
    local_30 = (float)g_StoredWorldYCoordinate;
    local_38 = fVar1;
    local_34 = fVar2;
  }
  *unaff_ESI = local_38;
  unaff_ESI[1] = local_34;
  unaff_ESI[2] = local_30;
  unaff_ESI[3] = fStack_2c;
  unaff_ESI[4] = fStack_28;
  return unaff_ESI;
}


// Assembly code:
// 0045bd10: PUSH EBX
//   Label: shape_design.c_convertWorldToScreenCoordinates_FUN_0045bd10
// 0045bd11: PUSH EDI
// 0045bd12: PUSH EBP
// 0045bd13: MOV EBP,ESP
// 0045bd15: SUB ESP,0x90
// 0045bd1b: MOV dword ptr [EBP + -0x8],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 0045bd1e: FILD dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0045bd24: FMUL double ptr [0x0061b2ee]
//   XREF to: 0061b2ee (READ)
// 0045bd2a: FILD dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0045bd30: FDIVP
// 0045bd32: FMUL double ptr [0x0061b2f6]
//   XREF to: 0061b2f6 (READ)
// 0045bd38: FSTP float ptr [EBP + -0x18]
//   XREF to: Stack[-0x24] (WRITE)
// 0045bd3b: MOV EAX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0045bd3e: FILD dword ptr [EAX]
// 0045bd40: FILD dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0045bd46: FMUL double ptr [0x0061b2fe]
//   XREF to: 0061b2fe (READ)
// 0045bd4c: FSUBP
// 0045bd4e: FILD dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0045bd54: FMUL double ptr [0x0061b2fe]
//   XREF to: 0061b2fe (READ)
// 0045bd5a: FDIVP
// 0045bd5c: FSTP float ptr [EBP + -0x14]
//   XREF to: Stack[-0x20] (WRITE)
// 0045bd5f: MOV EAX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0045bd62: FILD dword ptr [EAX + 0x4]
// 0045bd65: FILD dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0045bd6b: FMUL double ptr [0x0061b2fe]
//   XREF to: 0061b2fe (READ)
// 0045bd71: FSUBP
// 0045bd73: FCHS
// 0045bd75: FILD dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0045bd7b: FMUL double ptr [0x0061b2fe]
//   XREF to: 0061b2fe (READ)
// 0045bd81: FDIVP
// 0045bd83: FSTP float ptr [EBP + -0x10]
//   XREF to: Stack[-0x1c] (WRITE)
// 0045bd86: FILD dword ptr [0x01626344]
//   XREF to: 01626344 (READ)
// 0045bd8c: FMUL float ptr [EBP + -0x14]
//   XREF to: Stack[-0x20] (READ)
// 0045bd8f: FMUL float ptr [0x0061b306]
//   XREF to: 0061b306 (READ)
// 0045bd95: FMUL float ptr [EBP + -0x18]
//   XREF to: Stack[-0x24] (READ)
// 0045bd98: FSTP float ptr [EBP + -0x14]
//   XREF to: Stack[-0x20] (WRITE)
// 0045bd9b: FILD dword ptr [0x01626344]
//   XREF to: 01626344 (READ)
// 0045bda1: FMUL float ptr [EBP + -0x10]
//   XREF to: Stack[-0x1c] (READ)
// 0045bda4: FMUL float ptr [0x0061b306]
//   XREF to: 0061b306 (READ)
// 0045bdaa: FSTP float ptr [EBP + -0x10]
//   XREF to: Stack[-0x1c] (WRITE)
// 0045bdad: MOV EAX,[0x01626360]
//   XREF to: 01626360 (READ)
// 0045bdb2: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0045bdb5: MOV EAX,[0x01626340]
//   XREF to: 01626340 (READ)
// 0045bdba: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0045bdbd: JMP 0x0045be03
//   XREF to: 0045be03 (UNCONDITIONAL_JUMP)
// 0045bdbf: MOV EAX,dword ptr [EBP + -0x14]
//   Label: LAB_0045bdbf
//   XREF to: Stack[-0x20] (READ)
// 0045bdc2: MOV dword ptr [EBP + -0x2c],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0045bdc5: MOV EAX,[0x01626360]
//   XREF to: 01626360 (READ)
// 0045bdca: MOV dword ptr [EBP + -0x28],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0045bdcd: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x1c] (READ)
// 0045bdd0: MOV dword ptr [EBP + -0x24],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0045bdd3: JMP 0x0045be1f
//   XREF to: 0045be1f (UNCONDITIONAL_JUMP)
// 0045bdd5: MOV EAX,[0x01626360]
//   Label: LAB_0045bdd5
//   XREF to: 01626360 (READ)
// 0045bdda: MOV dword ptr [EBP + -0x2c],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0045bddd: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x1c] (READ)
// 0045bde0: MOV dword ptr [EBP + -0x28],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0045bde3: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x20] (READ)
// 0045bde6: MOV dword ptr [EBP + -0x24],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0045bde9: JMP 0x0045be1f
//   XREF to: 0045be1f (UNCONDITIONAL_JUMP)
// 0045bdeb: MOV EAX,dword ptr [EBP + -0x14]
//   Label: LAB_0045bdeb
//   XREF to: Stack[-0x20] (READ)
// 0045bdee: MOV dword ptr [EBP + -0x2c],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0045bdf1: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x1c] (READ)
// 0045bdf4: MOV dword ptr [EBP + -0x28],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0045bdf7: MOV EAX,[0x01626360]
//   XREF to: 01626360 (READ)
// 0045bdfc: MOV dword ptr [EBP + -0x24],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0045bdff: JMP 0x0045be1f
//   XREF to: 0045be1f (UNCONDITIONAL_JUMP)
// 0045be01: JMP 0x0045be1f
//   Label: LAB_0045be01
//   XREF to: 0045be1f (UNCONDITIONAL_JUMP)
// 0045be03: CMP dword ptr [EBP + -0x4],0x1
//   Label: LAB_0045be03
//   XREF to: Stack[-0x10] (READ)
// 0045be07: JC 0x0045be17
//   XREF to: 0045be17 (CONDITIONAL_JUMP)
// 0045be09: CMP dword ptr [EBP + -0x4],0x1
//   XREF to: Stack[-0x10] (READ)
// 0045be0d: JBE 0x0045bdd5
//   XREF to: 0045bdd5 (CONDITIONAL_JUMP)
// 0045be0f: CMP dword ptr [EBP + -0x4],0x2
//   XREF to: Stack[-0x10] (READ)
// 0045be13: JZ 0x0045bdeb
//   XREF to: 0045bdeb (CONDITIONAL_JUMP)
// 0045be15: JMP 0x0045be01
//   XREF to: 0045be01 (UNCONDITIONAL_JUMP)
// 0045be17: CMP dword ptr [EBP + -0x4],0x0
//   Label: LAB_0045be17
//   XREF to: Stack[-0x10] (READ)
// 0045be1b: JZ 0x0045bdbf
//   XREF to: 0045bdbf (CONDITIONAL_JUMP)
// 0045be1d: JMP 0x0045be01
//   XREF to: 0045be01 (UNCONDITIONAL_JUMP)
// 0045be1f: LEA EDI,[EBP + -0x40]
//   Label: LAB_0045be1f
//   XREF to: Stack[-0x4c] (DATA)
// 0045be22: LEA ESI,[EBP + -0x2c]
//   XREF to: Stack[-0x38] (DATA)
// 0045be25: MOVSD ES:EDI,ESI
// 0045be26: MOVSD ES:EDI,ESI
// 0045be27: MOVSD ES:EDI,ESI
// 0045be28: MOVSD ES:EDI,ESI
// 0045be29: MOVSD ES:EDI,ESI
// 0045be2a: MOV EDI,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x14] (READ)
// 0045be2d: LEA ESI,[EBP + -0x40]
//   XREF to: Stack[-0x4c] (DATA)
// 0045be30: MOVSD ES:EDI,ESI
// 0045be31: MOVSD ES:EDI,ESI
// 0045be32: MOVSD ES:EDI,ESI
// 0045be33: MOVSD ES:EDI,ESI
// 0045be34: MOVSD ES:EDI,ESI
// 0045be35: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x14] (READ)
// 0045be38: MOV ESP,EBP
// 0045be3a: POP EBP
// 0045be3b: POP EDI
// 0045be3c: POP EBX
// 0045be3d: RET

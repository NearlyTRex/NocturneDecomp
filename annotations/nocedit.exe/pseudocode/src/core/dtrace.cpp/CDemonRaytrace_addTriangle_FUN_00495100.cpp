// Name: core_dtrace.cpp_CDemonRaytrace_addTriangle_FUN_00495100
// Address: 00495100
// Address Range: [[00495100, 004952ae]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_addTriangle_FUN_00495100(CDemonRaytrace * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3, uchar triangle_flags)
// Cross-references:
//   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 (00578d80) at 0057934a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dtrace_cpp_00622a9f
//   TerminatedCString s_CDemonRaytrace_addTriang_00622ab2
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl
core_dtrace_cpp_CDemonRaytrace_addTriangle_FUN_00495100
          (CDemonRaytrace *this_ptr,CVector3f *vertex1,CVector3f *vertex2,CVector3f *vertex3,
          uchar triangle_flags)

{
  int iVar1;
  uchar in_stack_00000018;
  
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            (this_ptr->triangle_list + this_ptr->triangle_count,vertex1,vertex2,vertex3);
  this_ptr->triangle_flags[this_ptr->triangle_count] = in_stack_00000018;
  iVar1 = this_ptr->triangle_count + 1;
  this_ptr->triangle_count = iVar1;
  if (199999 < iVar1) {
    g_CurrentFilename = "..\\core\\dtrace.cpp";
    g_CurrentLineNumber = 0x290;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonRaytrace::addTriangle - Too many triangles!");
  }
  if (vertex1->x < (this_ptr->bbox_min).x) {
    (this_ptr->bbox_min).x = vertex1->x;
  }
  if (vertex2->x < (this_ptr->bbox_min).x) {
    (this_ptr->bbox_min).x = vertex2->x;
  }
  if (vertex3->x < (this_ptr->bbox_min).x) {
    (this_ptr->bbox_min).x = vertex3->x;
  }
  if ((this_ptr->bbox_max).x < vertex1->x) {
    (this_ptr->bbox_max).x = vertex1->x;
  }
  if ((this_ptr->bbox_max).x < vertex2->x) {
    (this_ptr->bbox_max).x = vertex2->x;
  }
  if ((this_ptr->bbox_max).x < vertex3->x) {
    (this_ptr->bbox_max).x = vertex3->x;
  }
  if (vertex1->y < (this_ptr->bbox_min).y) {
    (this_ptr->bbox_min).y = vertex1->y;
  }
  if (vertex2->y < (this_ptr->bbox_min).y) {
    (this_ptr->bbox_min).y = vertex2->y;
  }
  if (vertex3->y < (this_ptr->bbox_min).y) {
    (this_ptr->bbox_min).y = vertex3->y;
  }
  if ((this_ptr->bbox_max).y < vertex1->y) {
    (this_ptr->bbox_max).y = vertex1->y;
  }
  if ((this_ptr->bbox_max).y < vertex2->y) {
    (this_ptr->bbox_max).y = vertex2->y;
  }
  if ((this_ptr->bbox_max).y < vertex3->y) {
    (this_ptr->bbox_max).y = vertex3->y;
  }
  if (vertex1->z < (this_ptr->bbox_min).z) {
    (this_ptr->bbox_min).z = vertex1->z;
  }
  if (vertex2->z < (this_ptr->bbox_min).z) {
    (this_ptr->bbox_min).z = vertex2->z;
  }
  if (vertex3->z < (this_ptr->bbox_min).z) {
    (this_ptr->bbox_min).z = vertex3->z;
  }
  if ((this_ptr->bbox_max).z < vertex1->z) {
    (this_ptr->bbox_max).z = vertex1->z;
  }
  if ((this_ptr->bbox_max).z < vertex2->z) {
    (this_ptr->bbox_max).z = vertex2->z;
  }
  if (vertex3->z <= (this_ptr->bbox_max).z) {
    return;
  }
  (this_ptr->bbox_max).z = vertex3->z;
  return;
}


// Assembly code:
// 00495100: PUSH EBX
//   Label: core_dtrace.cpp_CDemonRaytrace_addTriangle_FUN_00495100
// 00495101: PUSH ESI
// 00495102: PUSH EDI
// 00495103: PUSH EBP
// 00495104: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00495108: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0049510c: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00495110: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00495114: MOV EAX,dword ptr [EBX + 0x4]
// 00495117: SHL EAX,0x3
// 0049511a: PUSH ESI
// 0049511b: MOV EDX,EAX
// 0049511d: SHL EAX,0x3
// 00495120: PUSH EDI
// 00495121: SUB EAX,EDX
// 00495123: MOV EDX,dword ptr [EBX + 0x8]
// 00495126: PUSH EBP
// 00495127: ADD EAX,EDX
// 00495129: PUSH EAX
// 0049512a: CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
//   XREF to: 0049a790 (UNCONDITIONAL_CALL)
// 0049512f: MOV EAX,dword ptr [EBX + 0xc]
// 00495132: MOV EDX,dword ptr [EBX + 0x4]
// 00495135: ADD ESP,0x10
// 00495138: ADD EAX,EDX
// 0049513a: MOV DL,byte ptr [ESP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 0049513e: MOV byte ptr [EAX],DL
// 00495140: MOV ECX,dword ptr [EBX + 0x4]
// 00495143: INC ECX
// 00495144: MOV dword ptr [EBX + 0x4],ECX
// 00495147: CMP ECX,0x30d40
// 0049514d: JGE 0x0049527c
//   XREF to: 0049527c (CONDITIONAL_JUMP)
// 00495153: FLD float ptr [EBP]
//   Label: LAB_00495153
// 00495156: FCOMP float ptr [EBX + 0x10]
// 00495159: FNSTSW AX
// 0049515b: SAHF
// 0049515c: JNC 0x00495164
//   XREF to: 00495164 (CONDITIONAL_JUMP)
// 0049515e: MOV EAX,dword ptr [EBP]
// 00495161: MOV dword ptr [EBX + 0x10],EAX
// 00495164: FLD float ptr [EDI]
//   Label: LAB_00495164
// 00495166: FCOMP float ptr [EBX + 0x10]
// 00495169: FNSTSW AX
// 0049516b: SAHF
// 0049516c: JNC 0x00495173
//   XREF to: 00495173 (CONDITIONAL_JUMP)
// 0049516e: MOV EAX,dword ptr [EDI]
// 00495170: MOV dword ptr [EBX + 0x10],EAX
// 00495173: FLD float ptr [ESI]
//   Label: LAB_00495173
// 00495175: FCOMP float ptr [EBX + 0x10]
// 00495178: FNSTSW AX
// 0049517a: SAHF
// 0049517b: JNC 0x00495182
//   XREF to: 00495182 (CONDITIONAL_JUMP)
// 0049517d: MOV EAX,dword ptr [ESI]
// 0049517f: MOV dword ptr [EBX + 0x10],EAX
// 00495182: FLD float ptr [EBP]
//   Label: LAB_00495182
// 00495185: FCOMP float ptr [EBX + 0x1c]
// 00495188: FNSTSW AX
// 0049518a: SAHF
// 0049518b: JBE 0x00495193
//   XREF to: 00495193 (CONDITIONAL_JUMP)
// 0049518d: MOV EAX,dword ptr [EBP]
// 00495190: MOV dword ptr [EBX + 0x1c],EAX
// 00495193: FLD float ptr [EDI]
//   Label: LAB_00495193
// 00495195: FCOMP float ptr [EBX + 0x1c]
// 00495198: FNSTSW AX
// 0049519a: SAHF
// 0049519b: JBE 0x004951a2
//   XREF to: 004951a2 (CONDITIONAL_JUMP)
// 0049519d: MOV EAX,dword ptr [EDI]
// 0049519f: MOV dword ptr [EBX + 0x1c],EAX
// 004951a2: FLD float ptr [ESI]
//   Label: LAB_004951a2
// 004951a4: FCOMP float ptr [EBX + 0x1c]
// 004951a7: FNSTSW AX
// 004951a9: SAHF
// 004951aa: JBE 0x004951b1
//   XREF to: 004951b1 (CONDITIONAL_JUMP)
// 004951ac: MOV EAX,dword ptr [ESI]
// 004951ae: MOV dword ptr [EBX + 0x1c],EAX
// 004951b1: FLD float ptr [EBP + 0x4]
//   Label: LAB_004951b1
// 004951b4: FCOMP float ptr [EBX + 0x14]
// 004951b7: FNSTSW AX
// 004951b9: SAHF
// 004951ba: JNC 0x004951c2
//   XREF to: 004951c2 (CONDITIONAL_JUMP)
// 004951bc: MOV EAX,dword ptr [EBP + 0x4]
// 004951bf: MOV dword ptr [EBX + 0x14],EAX
// 004951c2: FLD float ptr [EDI + 0x4]
//   Label: LAB_004951c2
// 004951c5: FCOMP float ptr [EBX + 0x14]
// 004951c8: FNSTSW AX
// 004951ca: SAHF
// 004951cb: JNC 0x004951d3
//   XREF to: 004951d3 (CONDITIONAL_JUMP)
// 004951cd: MOV EAX,dword ptr [EDI + 0x4]
// 004951d0: MOV dword ptr [EBX + 0x14],EAX
// 004951d3: FLD float ptr [ESI + 0x4]
//   Label: LAB_004951d3
// 004951d6: FCOMP float ptr [EBX + 0x14]
// 004951d9: FNSTSW AX
// 004951db: SAHF
// 004951dc: JNC 0x004951e4
//   XREF to: 004951e4 (CONDITIONAL_JUMP)
// 004951de: MOV EAX,dword ptr [ESI + 0x4]
// 004951e1: MOV dword ptr [EBX + 0x14],EAX
// 004951e4: FLD float ptr [EBP + 0x4]
//   Label: LAB_004951e4
// 004951e7: FCOMP float ptr [EBX + 0x20]
// 004951ea: FNSTSW AX
// 004951ec: SAHF
// 004951ed: JBE 0x004951f5
//   XREF to: 004951f5 (CONDITIONAL_JUMP)
// 004951ef: MOV EAX,dword ptr [EBP + 0x4]
// 004951f2: MOV dword ptr [EBX + 0x20],EAX
// 004951f5: FLD float ptr [EDI + 0x4]
//   Label: LAB_004951f5
// 004951f8: FCOMP float ptr [EBX + 0x20]
// 004951fb: FNSTSW AX
// 004951fd: SAHF
// 004951fe: JBE 0x00495206
//   XREF to: 00495206 (CONDITIONAL_JUMP)
// 00495200: MOV EAX,dword ptr [EDI + 0x4]
// 00495203: MOV dword ptr [EBX + 0x20],EAX
// 00495206: FLD float ptr [ESI + 0x4]
//   Label: LAB_00495206
// 00495209: FCOMP float ptr [EBX + 0x20]
// 0049520c: FNSTSW AX
// 0049520e: SAHF
// 0049520f: JBE 0x00495217
//   XREF to: 00495217 (CONDITIONAL_JUMP)
// 00495211: MOV EAX,dword ptr [ESI + 0x4]
// 00495214: MOV dword ptr [EBX + 0x20],EAX
// 00495217: FLD float ptr [EBP + 0x8]
//   Label: LAB_00495217
// 0049521a: FCOMP float ptr [EBX + 0x18]
// 0049521d: FNSTSW AX
// 0049521f: SAHF
// 00495220: JNC 0x00495228
//   XREF to: 00495228 (CONDITIONAL_JUMP)
// 00495222: MOV EAX,dword ptr [EBP + 0x8]
// 00495225: MOV dword ptr [EBX + 0x18],EAX
// 00495228: FLD float ptr [EDI + 0x8]
//   Label: LAB_00495228
// 0049522b: FCOMP float ptr [EBX + 0x18]
// 0049522e: FNSTSW AX
// 00495230: SAHF
// 00495231: JNC 0x00495239
//   XREF to: 00495239 (CONDITIONAL_JUMP)
// 00495233: MOV EAX,dword ptr [EDI + 0x8]
// 00495236: MOV dword ptr [EBX + 0x18],EAX
// 00495239: FLD float ptr [ESI + 0x8]
//   Label: LAB_00495239
// 0049523c: FCOMP float ptr [EBX + 0x18]
// 0049523f: FNSTSW AX
// 00495241: SAHF
// 00495242: JNC 0x0049524a
//   XREF to: 0049524a (CONDITIONAL_JUMP)
// 00495244: MOV EAX,dword ptr [ESI + 0x8]
// 00495247: MOV dword ptr [EBX + 0x18],EAX
// 0049524a: FLD float ptr [EBP + 0x8]
//   Label: LAB_0049524a
// 0049524d: FCOMP float ptr [EBX + 0x24]
// 00495250: FNSTSW AX
// 00495252: SAHF
// 00495253: JBE 0x0049525b
//   XREF to: 0049525b (CONDITIONAL_JUMP)
// 00495255: MOV EAX,dword ptr [EBP + 0x8]
// 00495258: MOV dword ptr [EBX + 0x24],EAX
// 0049525b: FLD float ptr [EDI + 0x8]
//   Label: LAB_0049525b
// 0049525e: FCOMP float ptr [EBX + 0x24]
// 00495261: FNSTSW AX
// 00495263: SAHF
// 00495264: JBE 0x0049526c
//   XREF to: 0049526c (CONDITIONAL_JUMP)
// 00495266: MOV EAX,dword ptr [EDI + 0x8]
// 00495269: MOV dword ptr [EBX + 0x24],EAX
// 0049526c: FLD float ptr [ESI + 0x8]
//   Label: LAB_0049526c
// 0049526f: FCOMP float ptr [EBX + 0x24]
// 00495272: FNSTSW AX
// 00495274: SAHF
// 00495275: JA 0x004952a4
//   XREF to: 004952a4 (CONDITIONAL_JUMP)
// 00495277: POP EBP
// 00495278: POP EDI
// 00495279: POP ESI
// 0049527a: POP EBX
// 0049527b: RET
// 0049527c: MOV EDX,0x622a9f
//   Label: LAB_0049527c
//   XREF to: 00622a9f (PARAM)
// 00495281: MOV ECX,0x290
// 00495286: PUSH 0x622ab2
//   XREF to: 00622ab2 (DATA)
// 0049528b: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00495291: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00495297: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0049529c: ADD ESP,0x4
// 0049529f: JMP 0x00495153
//   XREF to: 00495153 (UNCONDITIONAL_JUMP)
// 004952a4: MOV EAX,dword ptr [ESI + 0x8]
//   Label: LAB_004952a4
// 004952a7: MOV dword ptr [EBX + 0x24],EAX
// 004952aa: POP EBP
// 004952ab: POP EDI
// 004952ac: POP ESI
// 004952ad: POP EBX
// 004952ae: RET

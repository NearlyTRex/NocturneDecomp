; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CVector3f * shape_meshlod.cpp_CLodMesh_computeFaceCentroid_FUN_00518870(CLodMesh * this_ptr, CVector3f * out_centroid, CLodFace * face)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_centroid
; CLodFace *       Stack[0xc]:4   face
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   shape_meshlod.cpp_CLodMesh_computeClosestPointOnTriangle_FUN_0051a6b0 at 0051a8ac
;   shape_meshlod.cpp_CLodMesh_computeEdgeCollapseCost_FUN_00518910 at 00518de7
;   shape_meshlod.cpp_CLodMesh_computePointToFaceDistance_FUN_0051a400 at 0051a65c
;   shape_meshlod.cpp_CLodMesh_createOrigSamplePoints_FUN_00517000 at 005170e0
;
; Referenced Globals:
;   float FLOAT_00637919 = 3
;   float FLOAT_0063791d = 0.3333333
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00518870
        ;   Label: shape_meshlod.cpp_CLodMesh_computeFaceCentroid_FUN_00518870
    PUSH ESI                            ; 00518871
    PUSH EDI                            ; 00518872
    PUSH EBP                            ; 00518873
    SUB ESP,0x18                        ; 00518874
    MOV EBX,dword ptr [ESP + 0x30]      ; 00518877
    MOV ESI,dword ptr [ESP + 0x34]      ; 0051887b
    IMUL EDX,dword ptr [ESI + 0x18],0x4c4 ; 0051887f
    MOV EBP,dword ptr [ESI + 0x10]      ; 00518886
    MOV EDI,dword ptr [ESI + 0x14]      ; 00518889
    IMUL ESI,EBP,0x4c4                  ; 0051888c
    IMUL ECX,EDI,0x4c4                  ; 00518892
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00518898
    MOV EAX,dword ptr [EAX + 0x4]       ; 0051889c
    FLD float ptr [ESI + EAX*0x1]       ; 0051889f
    FADD float ptr [ECX + EAX*0x1]      ; 005188a2
    FSTP float ptr [ESP + 0xc]          ; 005188a5
    FLD float ptr [ESI + EAX*0x1 + 0x4] ; 005188a9
    FADD float ptr [ECX + EAX*0x1 + 0x4] ; 005188ad
    FSTP float ptr [ESP + 0x10]         ; 005188b1
    FLD float ptr [ESI + EAX*0x1 + 0x8] ; 005188b5
    FADD float ptr [ECX + EAX*0x1 + 0x8] ; 005188b9
    FLD float ptr [ESP + 0xc]           ; 005188bd
    FXCH                                ; 005188c1
    FSTP float ptr [ESP + 0x14]         ; 005188c3
    FADD float ptr [EDX + EAX*0x1]      ; 005188c7
    FST float ptr [ESP]                 ; 005188ca
    FDIV float ptr [0x00637919]         ; 005188cd | FLOAT_00637919
    FLD float ptr [ESP + 0x10]          ; 005188d3
    FADD float ptr [EDX + EAX*0x1 + 0x4] ; 005188d7
    FLD float ptr [ESP + 0x14]          ; 005188db
    FXCH                                ; 005188df
    FSTP float ptr [ESP + 0x4]          ; 005188e1
    FADD float ptr [EDX + EAX*0x1 + 0x8] ; 005188e5
    FSTP float ptr [ESP + 0x8]          ; 005188e9
    FSTP float ptr [EBX]                ; 005188ed
    FLD float ptr [0x0063791d]          ; 005188ef | FLOAT_0063791d
    FLD float ptr [ESP + 0x4]           ; 005188f5
    FMUL ST1                            ; 005188f9
    FSTP float ptr [EBX + 0x4]          ; 005188fb
    FMUL float ptr [ESP + 0x8]          ; 005188fe
    MOV EAX,EBX                         ; 00518902
    FSTP float ptr [EBX + 0x8]          ; 00518904
    ADD ESP,0x18                        ; 00518907
    POP EBP                             ; 0051890a
    POP EDI                             ; 0051890b
    POP ESI                             ; 0051890c
    POP EBX                             ; 0051890d
    RET                                 ; 0051890e


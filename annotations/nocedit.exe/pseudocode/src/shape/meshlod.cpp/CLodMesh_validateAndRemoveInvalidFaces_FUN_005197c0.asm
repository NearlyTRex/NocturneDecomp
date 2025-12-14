; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_meshlod.cpp_CLodMesh_validateAndRemoveInvalidFaces_FUN_005197c0(CLodMesh * this_ptr)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   shape_meshlod.cpp_CLodMesh_postprocessMesh_FUN_0051b330 at 0051b3b5
;   shape_meshlod.cpp_CLodMesh_scaleVertices_FUN_005165c0 at 0051660a
;   shape_meshlod.cpp_CLodMesh_translateVertices_FUN_00516570 at 005165b5
;
; Referenced Globals:
;   TerminatedCString s_WARNING_encountered_d_in_00637a16
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsPtr
;
; Called Functions:
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_meshlod.cpp_CLodMesh_validateFace_FUN_00519830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005197c0
        ;   Label: shape_meshlod.cpp_CLodMesh_validateAndRemoveInvalidFaces_FUN_005197c0
    PUSH ESI                            ; 005197c1
    PUSH EDI                            ; 005197c2
    PUSH EBP                            ; 005197c3
    MOV EDI,dword ptr [ESP + 0x14]      ; 005197c4
    MOV EDX,dword ptr [EDI + 0x8]       ; 005197c8
    XOR ESI,ESI                         ; 005197cb
    XOR EBP,EBP                         ; 005197cd
    TEST EDX,EDX                        ; 005197cf
    JLE 0x005197ee                      ; 005197d1
        ;   XREF to: 005197ee (CONDITIONAL_JUMP)  ; LAB_005197ee
    XOR EBX,EBX                         ; 005197d3
    MOV EAX,dword ptr [EDI + 0xc]       ; 005197d5
        ;   Label: LAB_005197d5
    ADD EAX,EBX                         ; 005197d8
    CMP dword ptr [EAX + 0x40],0x0      ; 005197da
    JZ 0x005197f7                       ; 005197de
        ;   XREF to: 005197f7 (CONDITIONAL_JUMP)  ; LAB_005197f7
    INC ESI                             ; 005197e0
        ;   Label: LAB_005197e0
    MOV ECX,dword ptr [EDI + 0x8]       ; 005197e1
    ADD EBX,0x8c                        ; 005197e4
    CMP ESI,ECX                         ; 005197ea
    JL 0x005197d5                       ; 005197ec
        ;   XREF to: 005197d5 (CONDITIONAL_JUMP)  ; LAB_005197d5
    TEST EBP,EBP                        ; 005197ee
        ;   Label: LAB_005197ee
    JG 0x00519808                       ; 005197f0
        ;   XREF to: 00519808 (CONDITIONAL_JUMP)  ; LAB_00519808
    POP EBP                             ; 005197f2
    POP EDI                             ; 005197f3
    POP ESI                             ; 005197f4
    POP EBX                             ; 005197f5
    RET                                 ; 005197f6
    PUSH EAX                            ; 005197f7
        ;   Label: LAB_005197f7
    PUSH EDI                            ; 005197f8
    CALL shape_meshlod.cpp_CLodMesh_validateFace_FUN_00519830 ; 005197f9
        ;   XREF to: 00519830 (UNCONDITIONAL_CALL)  ; int shape_meshlod.cpp_CLodMesh_validateFace_FUN_00519830(CLodMesh * this_ptr, CLodFace * face)
    ADD ESP,0x8                         ; 005197fe
    TEST EAX,EAX                        ; 00519801
    JNZ 0x005197e0                      ; 00519803
        ;   XREF to: 005197e0 (CONDITIONAL_JUMP)  ; LAB_005197e0
    INC EBP                             ; 00519805
    JMP 0x005197e0                      ; 00519806
        ;   XREF to: 005197e0 (UNCONDITIONAL_JUMP)  ; LAB_005197e0
    PUSH EBP                            ; 00519808
        ;   Label: LAB_00519808
    PUSH 0x637a16                       ; 00519809 | = "WARNING - encountered %d invalid face..."
    MOV EBX,dword ptr [0x00678a60]      ; 0051980e | g_CEditorToolsPtr
    PUSH EBX                            ; 00519814 | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00519815
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 0051981a
    POP EBP                             ; 0051981d
    POP EDI                             ; 0051981e
    POP ESI                             ; 0051981f
    POP EBX                             ; 00519820
    RET                                 ; 00519821


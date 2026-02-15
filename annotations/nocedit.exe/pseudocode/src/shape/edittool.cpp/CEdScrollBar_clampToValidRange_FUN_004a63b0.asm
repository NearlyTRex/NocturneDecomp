; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEdScrollBar_clampToValidRange_FUN_004a63b0(CEdScrollBar *this_ptr,int *value_ptr)
;
; Parameters:
; CEdScrollBar *   Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   value_ptr
;
; XREF[1]:
;   shape_edittool.cpp_CEdScrollBar_updateWithSelection_FUN_004a6450 at 004a645c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a63b0
        ;   Label: shape_edittool.cpp_CEdScrollBar_clampToValidRange_FUN_004a63b0
    MOV ECX,dword ptr [ESP + 0x8]       ; 004a63b1
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a63b5
    MOV EBX,dword ptr [ECX + 0x4]       ; 004a63b9
    CMP EBX,dword ptr [EDX]             ; 004a63bc
    JLE 0x004a63c7                      ; 004a63be
        ;   XREF to: 004a63c7 (CONDITIONAL_JUMP)  ; LAB_004a63c7
    CMP dword ptr [EDX],0x0             ; 004a63c0
    JL 0x004a63d3                       ; 004a63c3
        ;   XREF to: 004a63d3 (CONDITIONAL_JUMP)  ; LAB_004a63d3
    POP EBX                             ; 004a63c5
    RET                                 ; 004a63c6
    LEA EAX,[EBX + -0x1]                ; 004a63c7
        ;   Label: LAB_004a63c7
    MOV dword ptr [EDX],EAX             ; 004a63ca
    CMP dword ptr [EDX],0x0             ; 004a63cc
    JL 0x004a63d3                       ; 004a63cf
        ;   XREF to: 004a63d3 (CONDITIONAL_JUMP)  ; LAB_004a63d3
    POP EBX                             ; 004a63d1
    RET                                 ; 004a63d2
    MOV dword ptr [EDX],0x0             ; 004a63d3
        ;   Label: LAB_004a63d3
    POP EBX                             ; 004a63d9
    RET                                 ; 004a63da


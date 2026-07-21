; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_2d_c_project3DPointClipped_FUN_00401df0(int param_1,int param_2,int param_3)
;
;
; Called Functions:
;   engine_2d.c_project3DPointToScreen_FUN_00401da0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00401df0
        ;   Label: engine_2d.c_project3DPointClipped_FUN_00401df0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00401df1
    MOV ECX,dword ptr [ESP + 0xc]       ; 00401df5
    MOV EAX,dword ptr [ESP + 0x10]      ; 00401df9
    TEST EAX,EAX                        ; 00401dfd
    JLE 0x00401e15                      ; 00401dff
        ;   XREF to: 00401e15 (CONDITIONAL_JUMP)  ; LAB_00401e15
    CMP EBX,EAX                         ; 00401e01
    JG 0x00401e15                       ; 00401e03
        ;   XREF to: 00401e15 (CONDITIONAL_JUMP)  ; LAB_00401e15
    MOV EDX,EAX                         ; 00401e05
    NEG EDX                             ; 00401e07
    CMP EBX,EDX                         ; 00401e09
    JL 0x00401e15                       ; 00401e0b
        ;   XREF to: 00401e15 (CONDITIONAL_JUMP)  ; LAB_00401e15
    CMP ECX,EAX                         ; 00401e0d
    JG 0x00401e15                       ; 00401e0f
        ;   XREF to: 00401e15 (CONDITIONAL_JUMP)  ; LAB_00401e15
    CMP ECX,EDX                         ; 00401e11
    JGE 0x00401e17                      ; 00401e13
        ;   XREF to: 00401e17 (CONDITIONAL_JUMP)  ; LAB_00401e17
    POP EBX                             ; 00401e15
        ;   Label: LAB_00401e15
    RET                                 ; 00401e16
    PUSH EAX                            ; 00401e17
        ;   Label: LAB_00401e17
    PUSH ECX                            ; 00401e18
    PUSH EBX                            ; 00401e19
    CALL engine_2d.c_project3DPointToScreen_FUN_00401da0 ; 00401e1a
        ;   XREF to: 00401da0 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_project3DPointToScreen_FUN_00401da0()
    ADD ESP,0xc                         ; 00401e1f
    POP EBX                             ; 00401e22
    RET                                 ; 00401e23


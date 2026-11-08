; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00545bd0(int param_1)
;
;
; Referenced Globals:
;   undefined1* switchdataD_00545bc0 = 00545bdf
;
; Called Functions:
;   FUN_004fc070
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00545bd0
        ;   Label: FUN_00545bd0
    MOV EDX,dword ptr [EAX + 0x70]      ; 00545bd4
    CMP EDX,0x2                         ; 00545bd7
    JNZ 0x00545bee                      ; 00545bda
        ;   XREF to: 00545bee (CONDITIONAL_JUMP)  ; LAB_00545bee
    MOV EAX,EDX                         ; 00545bdc
    RET                                 ; 00545bde
    MOV EAX,0x1                         ; 00545bdf
        ;   Label: caseD_d
    RET                                 ; 00545be4
    MOV EAX,0x2                         ; 00545be5
        ;   Label: caseD_f
    RET                                 ; 00545bea
    XOR EAX,EAX                         ; 00545beb
        ;   Label: default
    RET                                 ; 00545bed
    ADD EAX,0x158                       ; 00545bee
        ;   Label: LAB_00545bee
    PUSH EAX                            ; 00545bf3
    CALL FUN_004fc070                   ; 00545bf4
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc070()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00545bf9
    SUB EAX,0xd                         ; 00545bfc
    ADD ESP,0x4                         ; 00545bff
    CMP EAX,0x3                         ; 00545c02
    JA 0x00545beb                       ; 00545c05
        ;   XREF to: 00545beb (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x545bc0]  ; 00545c07 | caseD_e | caseD_10 | switchdataD_00545bc0
        ;   Label: switchD


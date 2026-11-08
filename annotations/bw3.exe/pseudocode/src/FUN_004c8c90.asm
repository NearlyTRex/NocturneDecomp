; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c8c90(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00489fc0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c8c90
        ;   Label: FUN_004c8c90
    CMP dword ptr [EAX + 0xd074],0x0    ; 004c8c94
    JNZ 0x004c8ca6                      ; 004c8c9b
        ;   XREF to: 004c8ca6 (CONDITIONAL_JUMP)  ; LAB_004c8ca6
    CMP dword ptr [EAX + 0xd070],0x0    ; 004c8c9d
    JLE 0x004c8ca7                      ; 004c8ca4
        ;   XREF to: 004c8ca7 (CONDITIONAL_JUMP)  ; LAB_004c8ca7
    RET                                 ; 004c8ca6
        ;   Label: LAB_004c8ca6
    PUSH EBX                            ; 004c8ca7
        ;   Label: LAB_004c8ca7
    MOV EBX,dword ptr [ESP + 0xc]       ; 004c8ca8
    PUSH EBX                            ; 004c8cac
    PUSH EAX                            ; 004c8cad
    CALL FUN_00489fc0                   ; 004c8cae
        ;   XREF to: 00489fc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00489fc0()
    ADD ESP,0x8                         ; 004c8cb3
    POP EBX                             ; 004c8cb6
    RET                                 ; 004c8cb7


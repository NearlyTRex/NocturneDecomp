; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00434c90(int param_1,int *param_2,undefined4 param_3)
;
;
; Called Functions:
;   FUN_004338f0
;   FUN_00434b10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00434c90
        ;   Label: FUN_00434c90
    PUSH ESI                            ; 00434c91
    PUSH EDI                            ; 00434c92
    MOV EBX,dword ptr [ESP + 0x14]      ; 00434c93
    MOV ESI,dword ptr [ESP + 0x10]      ; 00434c97
    MOV EDI,dword ptr [ESP + 0x18]      ; 00434c9b
    ADD ESI,0x4                         ; 00434c9f
    PUSH EBX                            ; 00434ca2
        ;   Label: LAB_00434ca2
    MOV EAX,dword ptr [EBX]             ; 00434ca3
    CALL dword ptr [EAX + 0x4]          ; 00434ca5
    ADD ESP,0x4                         ; 00434ca8
    TEST EAX,EAX                        ; 00434cab
    JGE 0x00434cb8                      ; 00434cad
        ;   XREF to: 00434cb8 (CONDITIONAL_JUMP)  ; LAB_00434cb8
    MOV EAX,0x1                         ; 00434caf
    POP EDI                             ; 00434cb4
    POP ESI                             ; 00434cb5
    POP EBX                             ; 00434cb6
    RET                                 ; 00434cb7
    PUSH EAX                            ; 00434cb8
        ;   Label: LAB_00434cb8
    CALL FUN_00434b10                   ; 00434cb9
        ;   XREF to: 00434b10 (UNCONDITIONAL_CALL)  ; undefined FUN_00434b10()
    ADD ESP,0x4                         ; 00434cbe
    TEST EAX,EAX                        ; 00434cc1
    JL 0x00434ca2                       ; 00434cc3
        ;   XREF to: 00434ca2 (CONDITIONAL_JUMP)  ; LAB_00434ca2
    PUSH EDI                            ; 00434cc5
    PUSH EAX                            ; 00434cc6
    PUSH 0x6                            ; 00434cc7
    PUSH ESI                            ; 00434cc9
    CALL FUN_004338f0                   ; 00434cca
        ;   XREF to: 004338f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004338f0()
    ADD ESP,0x10                        ; 00434ccf
    JMP 0x00434ca2                      ; 00434cd2
        ;   XREF to: 00434ca2 (UNCONDITIONAL_JUMP)  ; LAB_00434ca2


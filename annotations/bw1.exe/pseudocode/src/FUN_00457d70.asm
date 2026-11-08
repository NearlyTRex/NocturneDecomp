; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00457d70(int *param_1)
;
;
; XREF[1]:
;   FUN_00457ba0 at 00457ba6
;
; Called Functions:
;   FUN_005c0336
;   FUN_005c09f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00457d70
        ;   Label: FUN_00457d70
    PUSH ESI                            ; 00457d71
    PUSH EBP                            ; 00457d72
    MOV EBX,dword ptr [ESP + 0x10]      ; 00457d73
    MOV EDX,dword ptr [EBX + 0x24]      ; 00457d77
    TEST EDX,EDX                        ; 00457d7a
    JNZ 0x00457dcc                      ; 00457d7c
        ;   XREF to: 00457dcc (CONDITIONAL_JUMP)  ; LAB_00457dcc
    MOV ESI,dword ptr [EBX + 0x2c]      ; 00457d7e
        ;   Label: LAB_00457d7e
    TEST ESI,ESI                        ; 00457d81
    JZ 0x00457d95                       ; 00457d83
        ;   XREF to: 00457d95 (CONDITIONAL_JUMP)  ; LAB_00457d95
    PUSH ESI                            ; 00457d85
    CALL FUN_005c0336                   ; 00457d86
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 00457d8b
    MOV dword ptr [EBX + 0x2c],0x0      ; 00457d8e
    MOV EBP,dword ptr [EBX + 0x30]      ; 00457d95
        ;   Label: LAB_00457d95
    TEST EBP,EBP                        ; 00457d98
    JZ 0x00457dac                       ; 00457d9a
        ;   XREF to: 00457dac (CONDITIONAL_JUMP)  ; LAB_00457dac
    PUSH EBP                            ; 00457d9c
    CALL FUN_005c09f0                   ; 00457d9d
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c09f0()
    ADD ESP,0x4                         ; 00457da2
    MOV dword ptr [EBX + 0x30],0x0      ; 00457da5
    MOV EDX,dword ptr [EBX]             ; 00457dac
        ;   Label: LAB_00457dac
    TEST EDX,EDX                        ; 00457dae
    JZ 0x00457dc1                       ; 00457db0
        ;   XREF to: 00457dc1 (CONDITIONAL_JUMP)  ; LAB_00457dc1
    PUSH EDX                            ; 00457db2
    CALL FUN_005c09f0                   ; 00457db3
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c09f0()
    ADD ESP,0x4                         ; 00457db8
    MOV dword ptr [EBX],0x0             ; 00457dbb
    MOV ESI,dword ptr [EBX + 0x4]       ; 00457dc1
        ;   Label: LAB_00457dc1
    TEST ESI,ESI                        ; 00457dc4
    JNZ 0x00457dde                      ; 00457dc6
        ;   XREF to: 00457dde (CONDITIONAL_JUMP)  ; LAB_00457dde
    POP EBP                             ; 00457dc8
    POP ESI                             ; 00457dc9
    POP EBX                             ; 00457dca
    RET                                 ; 00457dcb
    PUSH EDX                            ; 00457dcc
        ;   Label: LAB_00457dcc
    CALL FUN_005c0336                   ; 00457dcd
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 00457dd2
    MOV dword ptr [EBX + 0x24],0x0      ; 00457dd5
    JMP 0x00457d7e                      ; 00457ddc
        ;   XREF to: 00457d7e (UNCONDITIONAL_JUMP)  ; LAB_00457d7e
    PUSH ESI                            ; 00457dde
        ;   Label: LAB_00457dde
    CALL FUN_005c09f0                   ; 00457ddf
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c09f0()
    ADD ESP,0x4                         ; 00457de4
    MOV dword ptr [EBX + 0x4],0x0       ; 00457de7
    POP EBP                             ; 00457dee
    POP ESI                             ; 00457def
    POP EBX                             ; 00457df0
    RET                                 ; 00457df1


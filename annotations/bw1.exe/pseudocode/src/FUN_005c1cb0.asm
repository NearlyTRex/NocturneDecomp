; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c1cb0(int param_1,int param_2)
;
;
; XREF[6]:
;   FUN_00457bc0 at 00457bca
;   FUN_004799e0 at 00479a18
;   FUN_005ca924 at 005ca954
;   FUN_005cac3c at 005cac4e
;   FUN_005ccd88 at 005ccde7
;   FUN_005cce60 at 005cce75
;
; Called Functions:
;   FUN_005bfb70
;   FUN_005c08d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c1cb0
        ;   Label: FUN_005c1cb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005c1cb1
    IMUL EBX,dword ptr [ESP + 0xc]      ; 005c1cb5
    PUSH EBX                            ; 005c1cba
    CALL FUN_005c08d0                   ; 005c1cbb
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c08d0()
    ADD ESP,0x4                         ; 005c1cc0
    TEST EAX,EAX                        ; 005c1cc3
    JZ 0x005c1cd3                       ; 005c1cc5
        ;   XREF to: 005c1cd3 (CONDITIONAL_JUMP)  ; LAB_005c1cd3
    PUSH EBX                            ; 005c1cc7
    PUSH 0x0                            ; 005c1cc8
    PUSH EAX                            ; 005c1cca
    CALL FUN_005bfb70                   ; 005c1ccb
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    ADD ESP,0xc                         ; 005c1cd0
    POP EBX                             ; 005c1cd3
        ;   Label: LAB_005c1cd3
    RET                                 ; 005c1cd4


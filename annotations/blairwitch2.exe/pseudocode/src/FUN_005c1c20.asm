; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c1c20(undefined4 param_1,undefined4 param_2)
;
;
; XREF[8]:
;   FUN_005bad88 at 005bad92
;   FUN_005badd7 at 005badfe
;   FUN_005bcc3f at 005bcc46
;   FUN_005c1c50 at 005c1ca0
;   FUN_005c21f0 at 005c21f7
;   FUN_005c2624 at 005c2669
;   FUN_005c4a50 at 005c4a7b
;   FUN_005c4a88 at 005c4ad4
;
; Called Functions:
;   FUN_005c1be0
;   FUN_005c2120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c1c20
        ;   Label: FUN_005c1c20
    MOV AX,DS                           ; 005c1c21
    AND EAX,0xffff                      ; 005c1c23
    PUSH EAX                            ; 005c1c28
    MOV EDX,dword ptr [ESP + 0xc]       ; 005c1c29
    PUSH EDX                            ; 005c1c2d
    CALL FUN_005c2120                   ; 005c1c2e
        ;   XREF to: 005c2120 (UNCONDITIONAL_CALL)  ; undefined FUN_005c2120()
    ADD ESP,0x8                         ; 005c1c33
    TEST EAX,EAX                        ; 005c1c36
    JNZ 0x005c1c4c                      ; 005c1c38
        ;   XREF to: 005c1c4c (CONDITIONAL_JUMP)  ; LAB_005c1c4c
    MOV EBX,dword ptr [ESP + 0xc]       ; 005c1c3a
    PUSH EBX                            ; 005c1c3e
    MOV ECX,dword ptr [ESP + 0xc]       ; 005c1c3f
    PUSH ECX                            ; 005c1c43
    CALL FUN_005c1be0                   ; 005c1c44
        ;   XREF to: 005c1be0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1be0()
    ADD ESP,0x8                         ; 005c1c49
    POP EBX                             ; 005c1c4c
        ;   Label: LAB_005c1c4c
    RET                                 ; 005c1c4d


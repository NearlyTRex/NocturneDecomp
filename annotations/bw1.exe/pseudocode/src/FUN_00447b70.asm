; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00447b70(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fe040
;
; Called Functions:
;   FUN_00408730
;   FUN_00447d30
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00447b70
        ;   Label: FUN_00447b70
    MOV EBX,dword ptr [ESP + 0x8]       ; 00447b71
    TEST byte ptr [ESP + 0xc],0x4       ; 00447b75
    JNZ 0x00447bad                      ; 00447b7a
        ;   XREF to: 00447bad (CONDITIONAL_JUMP)  ; LAB_00447bad
    PUSH 0x0                            ; 00447b7c
    ADD EBX,0x310                       ; 00447b7e
    PUSH EBX                            ; 00447b84
    CALL FUN_00447d30                   ; 00447b85
        ;   XREF to: 00447d30 (UNCONDITIONAL_CALL)  ; undefined FUN_00447d30()
    ADD ESP,0x8                         ; 00447b8a
    PUSH 0x1                            ; 00447b8d
    LEA EBX,[EAX + 0xfffffcf0]          ; 00447b8f
    PUSH EBX                            ; 00447b95
    CALL FUN_00408730                   ; 00447b96
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 00447b9b
    MOV DL,byte ptr [ESP + 0xc]         ; 00447b9e
    MOV EBX,EAX                         ; 00447ba2
    TEST DL,0x2                         ; 00447ba4
    JNZ 0x00447bc8                      ; 00447ba7
        ;   XREF to: 00447bc8 (CONDITIONAL_JUMP)  ; LAB_00447bc8
    MOV EAX,EBX                         ; 00447ba9
    POP EBX                             ; 00447bab
    RET                                 ; 00447bac
    PUSH 0x5fe040                       ; 00447bad | DAT_005fe040
        ;   Label: LAB_00447bad
    PUSH EBX                            ; 00447bb2
    CALL FUN_005c030f                   ; 00447bb3
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 00447bb8
    PUSH EAX                            ; 00447bbb
    CALL FUN_005c0336                   ; 00447bbc
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 00447bc1
    MOV EAX,EBX                         ; 00447bc4
    POP EBX                             ; 00447bc6
    RET                                 ; 00447bc7
    PUSH EAX                            ; 00447bc8
        ;   Label: LAB_00447bc8
    CALL FUN_005c0344                   ; 00447bc9
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 00447bce
    MOV EAX,EBX                         ; 00447bd1
    POP EBX                             ; 00447bd3
    RET                                 ; 00447bd4


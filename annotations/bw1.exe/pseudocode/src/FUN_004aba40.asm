; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004aba40(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005ffef0
;
; Called Functions:
;   FUN_00408730
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aba40
        ;   Label: FUN_004aba40
    MOV EBX,dword ptr [ESP + 0x8]       ; 004aba41
    TEST byte ptr [ESP + 0xc],0x4       ; 004aba45
    JNZ 0x004aba66                      ; 004aba4a
        ;   XREF to: 004aba66 (CONDITIONAL_JUMP)  ; LAB_004aba66
    PUSH 0x1                            ; 004aba4c
    PUSH EBX                            ; 004aba4e
    CALL FUN_00408730                   ; 004aba4f
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 004aba54
    MOV DL,byte ptr [ESP + 0xc]         ; 004aba57
    MOV EBX,EAX                         ; 004aba5b
    TEST DL,0x2                         ; 004aba5d
    JNZ 0x004aba81                      ; 004aba60
        ;   XREF to: 004aba81 (CONDITIONAL_JUMP)  ; LAB_004aba81
    MOV EAX,EBX                         ; 004aba62
    POP EBX                             ; 004aba64
    RET                                 ; 004aba65
    PUSH 0x5ffef0                       ; 004aba66 | DAT_005ffef0
        ;   Label: LAB_004aba66
    PUSH EBX                            ; 004aba6b
    CALL FUN_005c030f                   ; 004aba6c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 004aba71
    PUSH EAX                            ; 004aba74
    CALL FUN_005c0336                   ; 004aba75
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 004aba7a
    MOV EAX,EBX                         ; 004aba7d
    POP EBX                             ; 004aba7f
    RET                                 ; 004aba80
    PUSH EAX                            ; 004aba81
        ;   Label: LAB_004aba81
    CALL FUN_005c0344                   ; 004aba82
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 004aba87
    MOV EAX,EBX                         ; 004aba8a
    POP EBX                             ; 004aba8c
    RET                                 ; 004aba8d


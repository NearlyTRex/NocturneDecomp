; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00447be0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fe060
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

    PUSH EBX                            ; 00447be0
        ;   Label: FUN_00447be0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00447be1
    TEST byte ptr [ESP + 0xc],0x4       ; 00447be5
    JNZ 0x00447c1d                      ; 00447bea
        ;   XREF to: 00447c1d (CONDITIONAL_JUMP)  ; LAB_00447c1d
    PUSH 0x0                            ; 00447bec
    ADD EBX,0x310                       ; 00447bee
    PUSH EBX                            ; 00447bf4
    CALL FUN_00447d30                   ; 00447bf5
        ;   XREF to: 00447d30 (UNCONDITIONAL_CALL)  ; undefined FUN_00447d30()
    ADD ESP,0x8                         ; 00447bfa
    PUSH 0x1                            ; 00447bfd
    LEA EBX,[EAX + 0xfffffcf0]          ; 00447bff
    PUSH EBX                            ; 00447c05
    CALL FUN_00408730                   ; 00447c06
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 00447c0b
    MOV DL,byte ptr [ESP + 0xc]         ; 00447c0e
    MOV EBX,EAX                         ; 00447c12
    TEST DL,0x2                         ; 00447c14
    JNZ 0x00447c38                      ; 00447c17
        ;   XREF to: 00447c38 (CONDITIONAL_JUMP)  ; LAB_00447c38
    MOV EAX,EBX                         ; 00447c19
    POP EBX                             ; 00447c1b
    RET                                 ; 00447c1c
    PUSH 0x5fe060                       ; 00447c1d | DAT_005fe060
        ;   Label: LAB_00447c1d
    PUSH EBX                            ; 00447c22
    CALL FUN_005c030f                   ; 00447c23
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 00447c28
    PUSH EAX                            ; 00447c2b
    CALL FUN_005c0336                   ; 00447c2c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 00447c31
    MOV EAX,EBX                         ; 00447c34
    POP EBX                             ; 00447c36
    RET                                 ; 00447c37
    PUSH EAX                            ; 00447c38
        ;   Label: LAB_00447c38
    CALL FUN_005c0344                   ; 00447c39
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 00447c3e
    MOV EAX,EBX                         ; 00447c41
    POP EBX                             ; 00447c43
    RET                                 ; 00447c44


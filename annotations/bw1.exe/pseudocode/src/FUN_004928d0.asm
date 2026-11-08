; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004928d0(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005ff7c0
;
; Called Functions:
;   FUN_005ad5d0
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004928d0
        ;   Label: FUN_004928d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004928d1
    TEST byte ptr [ESP + 0xc],0x4       ; 004928d5
    JNZ 0x004928f6                      ; 004928da
        ;   XREF to: 004928f6 (CONDITIONAL_JUMP)  ; LAB_004928f6
    PUSH 0x1                            ; 004928dc
    PUSH EBX                            ; 004928de
    CALL FUN_005ad5d0                   ; 004928df
        ;   XREF to: 005ad5d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005ad5d0()
    ADD ESP,0x8                         ; 004928e4
    MOV DL,byte ptr [ESP + 0xc]         ; 004928e7
    MOV EBX,EAX                         ; 004928eb
    TEST DL,0x2                         ; 004928ed
    JNZ 0x00492911                      ; 004928f0
        ;   XREF to: 00492911 (CONDITIONAL_JUMP)  ; LAB_00492911
    MOV EAX,EBX                         ; 004928f2
    POP EBX                             ; 004928f4
    RET                                 ; 004928f5
    PUSH 0x5ff7c0                       ; 004928f6 | DAT_005ff7c0
        ;   Label: LAB_004928f6
    PUSH EBX                            ; 004928fb
    CALL FUN_005c030f                   ; 004928fc
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 00492901
    PUSH EAX                            ; 00492904
    CALL FUN_005c0336                   ; 00492905
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 0049290a
    MOV EAX,EBX                         ; 0049290d
    POP EBX                             ; 0049290f
    RET                                 ; 00492910
    PUSH EAX                            ; 00492911
        ;   Label: LAB_00492911
    CALL FUN_005c0344                   ; 00492912
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 00492917
    MOV EAX,EBX                         ; 0049291a
    POP EBX                             ; 0049291c
    RET                                 ; 0049291d


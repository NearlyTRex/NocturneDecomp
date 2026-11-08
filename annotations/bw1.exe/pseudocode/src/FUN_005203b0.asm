; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005203b0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined1* PTR_FUN_00603f04 = 00520430
;   undefined4 DAT_00604070
;
; Called Functions:
;   FUN_004ea980
;   FUN_00522fc0
;   FUN_005673f0
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005203b0
        ;   Label: FUN_005203b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005203b1
    TEST byte ptr [ESP + 0xc],0x4       ; 005203b5
    JNZ 0x00520407                      ; 005203ba
        ;   XREF to: 00520407 (CONDITIONAL_JUMP)  ; LAB_00520407
    PUSH 0x0                            ; 005203bc
    ADD EBX,0x22424                     ; 005203be
    PUSH EBX                            ; 005203c4
    MOV dword ptr [EBX + 0xfffddd30],0x603f04 ; 005203c5 | PTR_FUN_00603f04
    CALL FUN_00522fc0                   ; 005203cf
        ;   XREF to: 00522fc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00522fc0()
    ADD ESP,0x8                         ; 005203d4
    PUSH 0x0                            ; 005203d7
    SUB EAX,0x2478                      ; 005203d9
    PUSH EAX                            ; 005203de
    CALL FUN_005673f0                   ; 005203df
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005673f0()
    ADD ESP,0x8                         ; 005203e4
    PUSH 0x1                            ; 005203e7
    LEA EBX,[EAX + 0xfffe0054]          ; 005203e9
    PUSH EBX                            ; 005203ef
    CALL FUN_004ea980                   ; 005203f0
        ;   XREF to: 004ea980 (UNCONDITIONAL_CALL)  ; undefined FUN_004ea980()
    ADD ESP,0x8                         ; 005203f5
    MOV DL,byte ptr [ESP + 0xc]         ; 005203f8
    MOV EBX,EAX                         ; 005203fc
    TEST DL,0x2                         ; 005203fe
    JNZ 0x00520422                      ; 00520401
        ;   XREF to: 00520422 (CONDITIONAL_JUMP)  ; LAB_00520422
    MOV EAX,EBX                         ; 00520403
    POP EBX                             ; 00520405
    RET                                 ; 00520406
    PUSH 0x604070                       ; 00520407 | DAT_00604070
        ;   Label: LAB_00520407
    PUSH EBX                            ; 0052040c
    CALL FUN_005c030f                   ; 0052040d
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 00520412
    PUSH EAX                            ; 00520415
    CALL FUN_005c0336                   ; 00520416
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 0052041b
    MOV EAX,EBX                         ; 0052041e
    POP EBX                             ; 00520420
    RET                                 ; 00520421
    PUSH EAX                            ; 00520422
        ;   Label: LAB_00520422
    CALL FUN_005c0344                   ; 00520423
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 00520428
    MOV EAX,EBX                         ; 0052042b
    POP EBX                             ; 0052042d
    RET                                 ; 0052042e


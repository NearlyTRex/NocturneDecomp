; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004d0f90(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f8524
;   undefined4 DAT_005f8670
;
; Called Functions:
;   FUN_00408930
;   FUN_0040f2b0
;   FUN_00511d10
;   FUN_00544d50
;   FUN_0059df70
;   FUN_005b1480
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d0f90
        ;   Label: FUN_004d0f90
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d0f91
    TEST byte ptr [ESP + 0xc],0x4       ; 004d0f95
    JNZ 0x004d101b                      ; 004d0f9a
        ;   XREF to: 004d101b (CONDITIONAL_JUMP)  ; LAB_004d101b
    PUSH 0x0                            ; 004d0fa0
    ADD EBX,0x10a60                     ; 004d0fa2
    PUSH EBX                            ; 004d0fa8
    MOV dword ptr [EBX + 0xfffef850],0x5f8524 ; 004d0fa9 | DAT_005f8524
    CALL FUN_00511d10                   ; 004d0fb3
        ;   XREF to: 00511d10 (UNCONDITIONAL_CALL)  ; undefined FUN_00511d10()
    ADD ESP,0x8                         ; 004d0fb8
    PUSH 0x0                            ; 004d0fbb
    SUB EAX,0xd040                      ; 004d0fbd
    PUSH EAX                            ; 004d0fc2
    CALL FUN_0040f2b0                   ; 004d0fc3
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040f2b0()
    ADD ESP,0x8                         ; 004d0fc8
    PUSH 0x0                            ; 004d0fcb
    SUB EAX,0x9c8                       ; 004d0fcd
    PUSH EAX                            ; 004d0fd2
    CALL FUN_0059df70                   ; 004d0fd3
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined FUN_0059df70()
    ADD ESP,0x8                         ; 004d0fd8
    PUSH 0x0                            ; 004d0fdb
    SUB EAX,0x34c                       ; 004d0fdd
    PUSH EAX                            ; 004d0fe2
    CALL FUN_005b1480                   ; 004d0fe3
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1480()
    ADD ESP,0x8                         ; 004d0fe8
    PUSH 0x0                            ; 004d0feb
    SUB EAX,0x2a58                      ; 004d0fed
    PUSH EAX                            ; 004d0ff2
    CALL FUN_00544d50                   ; 004d0ff3
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00544d50()
    ADD ESP,0x8                         ; 004d0ff8
    PUSH 0x1                            ; 004d0ffb
    LEA EBX,[EAX + 0xfffffd4c]          ; 004d0ffd
    PUSH EBX                            ; 004d1003
    CALL FUN_00408930                   ; 004d1004
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 004d1009
    MOV DL,byte ptr [ESP + 0xc]         ; 004d100c
    MOV EBX,EAX                         ; 004d1010
    TEST DL,0x2                         ; 004d1012
    JNZ 0x004d1036                      ; 004d1015
        ;   XREF to: 004d1036 (CONDITIONAL_JUMP)  ; LAB_004d1036
    MOV EAX,EBX                         ; 004d1017
    POP EBX                             ; 004d1019
    RET                                 ; 004d101a
    PUSH 0x5f8670                       ; 004d101b | DAT_005f8670
        ;   Label: LAB_004d101b
    PUSH EBX                            ; 004d1020
    CALL FUN_005b7fa7                   ; 004d1021
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 004d1026
    PUSH EAX                            ; 004d1029
    CALL FUN_005b7fce                   ; 004d102a
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 004d102f
    MOV EAX,EBX                         ; 004d1032
    POP EBX                             ; 004d1034
    RET                                 ; 004d1035
    PUSH EAX                            ; 004d1036
        ;   Label: LAB_004d1036
    CALL FUN_005b7fdc                   ; 004d1037
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 004d103c
    MOV EAX,EBX                         ; 004d103f
    POP EBX                             ; 004d1041
    RET                                 ; 004d1042


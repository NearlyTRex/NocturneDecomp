; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_00411bb0(undefined4 *param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined1* PTR_FUN_005dbe84 = 00411bb0
;   undefined4 DAT_005dbf40
;
; Called Functions:
;   FUN_0040d300
;   FUN_00411980
;   FUN_004144c0
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00411bb0
        ;   Label: FUN_00411bb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00411bb1
    TEST byte ptr [ESP + 0xc],0x4       ; 00411bb5
    JNZ 0x00411bfb                      ; 00411bba
        ;   XREF to: 00411bfb (CONDITIONAL_JUMP)  ; LAB_00411bfb
    PUSH 0x0                            ; 00411bbc
    MOV dword ptr [EBX],0x5dbe84        ; 00411bbe | PTR_FUN_005dbe84
    ADD EBX,0x54                        ; 00411bc4
    PUSH EBX                            ; 00411bc7
    CALL FUN_004144c0                   ; 00411bc8
        ;   XREF to: 004144c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004144c0()
    ADD ESP,0x8                         ; 00411bcd
    PUSH 0x0                            ; 00411bd0
    SUB EAX,0x50                        ; 00411bd2
    PUSH EAX                            ; 00411bd5
    CALL FUN_0040d300                   ; 00411bd6
        ;   XREF to: 0040d300 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d300()
    ADD ESP,0x8                         ; 00411bdb
    PUSH 0x1                            ; 00411bde
    LEA EBX,[EAX + -0x4]                ; 00411be0
    PUSH EBX                            ; 00411be3
    CALL FUN_00411980                   ; 00411be4
        ;   XREF to: 00411980 (UNCONDITIONAL_CALL)  ; undefined FUN_00411980()
    ADD ESP,0x8                         ; 00411be9
    MOV DL,byte ptr [ESP + 0xc]         ; 00411bec
    MOV EBX,EAX                         ; 00411bf0
    TEST DL,0x2                         ; 00411bf2
    JNZ 0x00411c16                      ; 00411bf5
        ;   XREF to: 00411c16 (CONDITIONAL_JUMP)  ; LAB_00411c16
    MOV EAX,EBX                         ; 00411bf7
    POP EBX                             ; 00411bf9
    RET                                 ; 00411bfa
    PUSH 0x5dbf40                       ; 00411bfb | DAT_005dbf40
        ;   Label: LAB_00411bfb
    PUSH EBX                            ; 00411c00
    CALL FUN_005a308f                   ; 00411c01
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 00411c06
    PUSH EAX                            ; 00411c09
    CALL FUN_005a30b6                   ; 00411c0a
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 00411c0f
    MOV EAX,EBX                         ; 00411c12
    POP EBX                             ; 00411c14
    RET                                 ; 00411c15
    PUSH EAX                            ; 00411c16
        ;   Label: LAB_00411c16
    CALL FUN_005a30c4                   ; 00411c17
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 00411c1c
    MOV EAX,EBX                         ; 00411c1f
    POP EBX                             ; 00411c21
    RET                                 ; 00411c22


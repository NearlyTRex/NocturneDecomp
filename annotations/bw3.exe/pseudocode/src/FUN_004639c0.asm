; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004639c0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005deb70
;
; Called Functions:
;   FUN_00408770
;   FUN_00410370
;   FUN_0043f900
;   FUN_0054bf80
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004639c0
        ;   Label: FUN_004639c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004639c1
    TEST byte ptr [ESP + 0xc],0x4       ; 004639c5
    JNZ 0x00463a1d                      ; 004639ca
        ;   XREF to: 00463a1d (CONDITIONAL_JUMP)  ; LAB_00463a1d
    PUSH 0x0                            ; 004639cc
    ADD EBX,0x385c                      ; 004639ce
    PUSH EBX                            ; 004639d4
    CALL FUN_00410370                   ; 004639d5
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined FUN_00410370()
    ADD ESP,0x8                         ; 004639da
    PUSH 0x0                            ; 004639dd
    SUB EAX,0x954                       ; 004639df
    PUSH EAX                            ; 004639e4
    CALL FUN_0043f900                   ; 004639e5
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f900()
    ADD ESP,0x8                         ; 004639ea
    PUSH 0x0                            ; 004639ed
    SUB EAX,0x2db0                      ; 004639ef
    PUSH EAX                            ; 004639f4
    CALL FUN_0054bf80                   ; 004639f5
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0054bf80()
    ADD ESP,0x8                         ; 004639fa
    PUSH 0x1                            ; 004639fd
    LEA EBX,[EAX + 0xfffffea8]          ; 004639ff
    PUSH EBX                            ; 00463a05
    CALL FUN_00408770                   ; 00463a06
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 00463a0b
    MOV DL,byte ptr [ESP + 0xc]         ; 00463a0e
    MOV EBX,EAX                         ; 00463a12
    TEST DL,0x2                         ; 00463a14
    JNZ 0x00463a38                      ; 00463a17
        ;   XREF to: 00463a38 (CONDITIONAL_JUMP)  ; LAB_00463a38
    MOV EAX,EBX                         ; 00463a19
    POP EBX                             ; 00463a1b
    RET                                 ; 00463a1c
    PUSH 0x5deb70                       ; 00463a1d | DAT_005deb70
        ;   Label: LAB_00463a1d
    PUSH EBX                            ; 00463a22
    CALL FUN_005a308f                   ; 00463a23
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 00463a28
    PUSH EAX                            ; 00463a2b
    CALL FUN_005a30b6                   ; 00463a2c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 00463a31
    MOV EAX,EBX                         ; 00463a34
    POP EBX                             ; 00463a36
    RET                                 ; 00463a37
    PUSH EAX                            ; 00463a38
        ;   Label: LAB_00463a38
    CALL FUN_005a30c4                   ; 00463a39
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 00463a3e
    MOV EAX,EBX                         ; 00463a41
    POP EBX                             ; 00463a43
    RET                                 ; 00463a44


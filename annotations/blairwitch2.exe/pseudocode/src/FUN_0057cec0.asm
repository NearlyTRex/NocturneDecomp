; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_0057cec0(undefined4 *param_1,byte param_2)
;
;
; XREF[14]:
;   FUN_00401010 at 004010d1
;   FUN_00401590 at 004015e2
;   FUN_00402940 at 00402a7f
;   FUN_0042c520 at 0042c5c2
;   FUN_0042c780 at 0042c8b1
;   FUN_004340f0 at 00434193
;   FUN_004a7d00 at 004a7f60
;   FUN_004bb9b0 at 004bbdbc
;   FUN_004bbf70 at 004bc364
;   FUN_0054bac0 at 0054bc8d
;   ... and 4 more
;
; Referenced Globals:
;   undefined4 DAT_005f2120
;   undefined1* PTR_FUN_005fd3e4 = 0057cec0
;
; Called Functions:
;   FUN_0057b9d0
;   FUN_0057d180
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057cec0
        ;   Label: FUN_0057cec0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0057cec1
    TEST byte ptr [ESP + 0xc],0x4       ; 0057cec5
    JNZ 0x0057cef5                      ; 0057ceca
        ;   XREF to: 0057cef5 (CONDITIONAL_JUMP)  ; LAB_0057cef5
    PUSH EBX                            ; 0057cecc
    MOV dword ptr [EBX],0x5fd3e4        ; 0057cecd | PTR_FUN_005fd3e4
    CALL FUN_0057d180                   ; 0057ced3
        ;   XREF to: 0057d180 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d180()
    ADD ESP,0x4                         ; 0057ced8
    PUSH 0x1                            ; 0057cedb
    PUSH EBX                            ; 0057cedd
    CALL FUN_0057b9d0                   ; 0057cede
        ;   XREF to: 0057b9d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057b9d0()
    ADD ESP,0x8                         ; 0057cee3
    MOV DL,byte ptr [ESP + 0xc]         ; 0057cee6
    MOV EBX,EAX                         ; 0057ceea
    TEST DL,0x2                         ; 0057ceec
    JNZ 0x0057cf10                      ; 0057ceef
        ;   XREF to: 0057cf10 (CONDITIONAL_JUMP)  ; LAB_0057cf10
    MOV EAX,EBX                         ; 0057cef1
    POP EBX                             ; 0057cef3
    RET                                 ; 0057cef4
    PUSH 0x5f2120                       ; 0057cef5 | DAT_005f2120
        ;   Label: LAB_0057cef5
    PUSH EBX                            ; 0057cefa
    CALL FUN_005b7fa7                   ; 0057cefb
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 0057cf00
    PUSH EAX                            ; 0057cf03
    CALL FUN_005b7fce                   ; 0057cf04
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 0057cf09
    MOV EAX,EBX                         ; 0057cf0c
    POP EBX                             ; 0057cf0e
    RET                                 ; 0057cf0f
    PUSH EAX                            ; 0057cf10
        ;   Label: LAB_0057cf10
    CALL FUN_005b7fdc                   ; 0057cf11
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 0057cf16
    MOV EAX,EBX                         ; 0057cf19
    POP EBX                             ; 0057cf1b
    RET                                 ; 0057cf1c


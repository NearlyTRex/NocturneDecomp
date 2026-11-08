; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0057aed0(int param_1,byte param_2)
;
;
; XREF[20]:
;   FUN_0040f940 at 0040f94f
;   FUN_00411890 at 0041189f
;   FUN_00425420 at 00425446
;   FUN_0045c110 at 0045c11f
;   FUN_0047b470 at 0047b47f
;   FUN_00487930 at 0048793f
;   FUN_0048b730 at 0048b73f
;   FUN_004a58c0 at 004a58e6
;   FUN_004a76a0 at 004a76af
;   FUN_004af630 at 004af63f
;   ... and 10 more
;
; Referenced Globals:
;   void* PTR_FUN_005e6244 = 0057af40
;   undefined4 DAT_005e6340
;
; Called Functions:
;   FUN_00408770
;   FUN_0041adf0
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057aed0
        ;   Label: FUN_0057aed0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0057aed1
    TEST byte ptr [ESP + 0xc],0x4       ; 0057aed5
    JNZ 0x0057af17                      ; 0057aeda
        ;   XREF to: 0057af17 (CONDITIONAL_JUMP)  ; LAB_0057af17
    PUSH 0x0                            ; 0057aedc
    ADD EBX,0x308                       ; 0057aede
    PUSH EBX                            ; 0057aee4
    MOV dword ptr [EBX + 0xfffffe4c],0x5e6244 ; 0057aee5 | PTR_FUN_005e6244
    CALL FUN_0041adf0                   ; 0057aeef
        ;   XREF to: 0041adf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041adf0()
    ADD ESP,0x8                         ; 0057aef4
    PUSH 0x1                            ; 0057aef7
    LEA EBX,[EAX + 0xfffffcf8]          ; 0057aef9
    PUSH EBX                            ; 0057aeff
    CALL FUN_00408770                   ; 0057af00
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 0057af05
    MOV DL,byte ptr [ESP + 0xc]         ; 0057af08
    MOV EBX,EAX                         ; 0057af0c
    TEST DL,0x2                         ; 0057af0e
    JNZ 0x0057af32                      ; 0057af11
        ;   XREF to: 0057af32 (CONDITIONAL_JUMP)  ; LAB_0057af32
    MOV EAX,EBX                         ; 0057af13
    POP EBX                             ; 0057af15
    RET                                 ; 0057af16
    PUSH 0x5e6340                       ; 0057af17 | DAT_005e6340
        ;   Label: LAB_0057af17
    PUSH EBX                            ; 0057af1c
    CALL FUN_005a308f                   ; 0057af1d
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 0057af22
    PUSH EAX                            ; 0057af25
    CALL FUN_005a30b6                   ; 0057af26
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 0057af2b
    MOV EAX,EBX                         ; 0057af2e
    POP EBX                             ; 0057af30
    RET                                 ; 0057af31
    PUSH EAX                            ; 0057af32
        ;   Label: LAB_0057af32
    CALL FUN_005a30c4                   ; 0057af33
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 0057af38
    MOV EAX,EBX                         ; 0057af3b
    POP EBX                             ; 0057af3d
    RET                                 ; 0057af3e


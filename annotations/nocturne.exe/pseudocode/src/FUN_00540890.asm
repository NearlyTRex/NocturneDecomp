; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00540890(undefined4 param_1)
;
;
; Referenced Globals:
;   string s_strangerCannotDie_00595fe2
;   undefined4 DAT_005b7650
;
; Called Functions:
;   FUN_00428710
;   FUN_0047dc30
;
; *****************************************************************************

section .text

    PUSH 0x595fe2                       ; 00540890 | = "strangerCannotDie"
        ;   Label: FUN_00540890
    MOV EDX,dword ptr [0x005b7650]      ; 00540895 | DAT_005b7650
    PUSH EDX                            ; 0054089b
    CALL FUN_0047dc30                   ; 0054089c
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; undefined FUN_0047dc30()
    ADD ESP,0x8                         ; 005408a1
    TEST EAX,EAX                        ; 005408a4
    JZ 0x005408ab                       ; 005408a6
        ;   XREF to: 005408ab (CONDITIONAL_JUMP)  ; LAB_005408ab
    XOR EAX,EAX                         ; 005408a8
    RET                                 ; 005408aa
    MOV ECX,dword ptr [ESP + 0x4]       ; 005408ab
        ;   Label: LAB_005408ab
    PUSH ECX                            ; 005408af
    CALL FUN_00428710                   ; 005408b0
        ;   XREF to: 00428710 (UNCONDITIONAL_CALL)  ; undefined FUN_00428710()
    ADD ESP,0x4                         ; 005408b5
    RET                                 ; 005408b8


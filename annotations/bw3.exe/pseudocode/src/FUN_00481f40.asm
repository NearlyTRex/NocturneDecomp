; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00481f40(int param_1,byte param_2)
;
;
; XREF[4]:
;   FUN_0047d8c0 at 0047d95f
;   FUN_004832b0 at 00483304
;   FUN_004a9930 at 004a993c
;   FUN_00528d20 at 00528d34
;
; Referenced Globals:
;   undefined1* PTR_FUN_005df024 = 00481f40
;   undefined4 DAT_005df0a0
;
; Called Functions:
;   FUN_00482010
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481f40
        ;   Label: FUN_00481f40
    MOV EBX,dword ptr [ESP + 0x8]       ; 00481f41
    TEST byte ptr [ESP + 0xc],0x4       ; 00481f45
    JNZ 0x00481f67                      ; 00481f4a
        ;   XREF to: 00481f67 (CONDITIONAL_JUMP)  ; LAB_00481f67
    PUSH EBX                            ; 00481f4c
    MOV dword ptr [EBX + 0xc],0x5df024  ; 00481f4d | PTR_FUN_005df024
    CALL FUN_00482010                   ; 00481f54
        ;   XREF to: 00482010 (UNCONDITIONAL_CALL)  ; undefined FUN_00482010()
    ADD ESP,0x4                         ; 00481f59
    TEST byte ptr [ESP + 0xc],0x2       ; 00481f5c
    JNZ 0x00481f82                      ; 00481f61
        ;   XREF to: 00481f82 (CONDITIONAL_JUMP)  ; LAB_00481f82
    MOV EAX,EBX                         ; 00481f63
    POP EBX                             ; 00481f65
    RET                                 ; 00481f66
    PUSH 0x5df0a0                       ; 00481f67 | DAT_005df0a0
        ;   Label: LAB_00481f67
    PUSH EBX                            ; 00481f6c
    CALL FUN_005a308f                   ; 00481f6d
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 00481f72
    PUSH EAX                            ; 00481f75
    CALL FUN_005a30b6                   ; 00481f76
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 00481f7b
    MOV EAX,EBX                         ; 00481f7e
    POP EBX                             ; 00481f80
    RET                                 ; 00481f81
    PUSH EBX                            ; 00481f82
        ;   Label: LAB_00481f82
    CALL FUN_005a30c4                   ; 00481f83
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 00481f88
    MOV EAX,EBX                         ; 00481f8b
    POP EBX                             ; 00481f8d
    RET                                 ; 00481f8e


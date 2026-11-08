; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00465e80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[10]:
;   FUN_00465eb0 at 00465f00
;   FUN_00465f80 at 00465fd3
;   FUN_00466040 at 0046612f
;   FUN_0047db70 at 0047dc24
;   FUN_00482820 at 004828be
;   FUN_00482a70 at 00482b54
;   FUN_00482c70 at 00482d54
;   FUN_00483020 at 00483080
;   FUN_004af920 at 004afa8d
;   FUN_00551620 at 005516b7
;
; Called Functions:
;   FUN_005a521c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00465e80
        ;   Label: FUN_00465e80
    PUSH ESI                            ; 00465e81
    PUSH EDI                            ; 00465e82
    MOV EDX,dword ptr [ESP + 0x20]      ; 00465e83
    PUSH EDX                            ; 00465e87
    MOV ECX,dword ptr [ESP + 0x20]      ; 00465e88
    PUSH ECX                            ; 00465e8c
    MOV EBX,dword ptr [ESP + 0x20]      ; 00465e8d
    PUSH EBX                            ; 00465e91
    MOV ESI,dword ptr [ESP + 0x20]      ; 00465e92
    PUSH ESI                            ; 00465e96
    MOV EDI,dword ptr [ESP + 0x20]      ; 00465e97
    PUSH EDI                            ; 00465e9b
    CALL FUN_005a521c                   ; 00465e9c
        ;   XREF to: 005a521c (UNCONDITIONAL_CALL)  ; undefined FUN_005a521c()
    ADD ESP,0x14                        ; 00465ea1
    POP EDI                             ; 00465ea4
    POP ESI                             ; 00465ea5
    POP EBX                             ; 00465ea6
    RET                                 ; 00465ea7


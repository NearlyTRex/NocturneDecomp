; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00465e50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[23]:
;   FUN_00465eb0 at 00465ee2
;   FUN_00465f80 at 00465fa6
;   FUN_00466040 at 00466078
;   FUN_00482820 at 0048295c
;   FUN_00482a70 at 00482afc
;   FUN_00482c70 at 00482cfc
;   FUN_00483020 at 00483056
;   FUN_00491f40 at 00492f48
;   FUN_004a7d70 at 004a7e40
;   FUN_004a8680 at 004a86c1
;   ... and 13 more
;
; Called Functions:
;   FUN_005a5128
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00465e50
        ;   Label: FUN_00465e50
    PUSH ESI                            ; 00465e51
    PUSH EDI                            ; 00465e52
    MOV EDX,dword ptr [ESP + 0x20]      ; 00465e53
    PUSH EDX                            ; 00465e57
    MOV ECX,dword ptr [ESP + 0x20]      ; 00465e58
    PUSH ECX                            ; 00465e5c
    MOV EBX,dword ptr [ESP + 0x20]      ; 00465e5d
    PUSH EBX                            ; 00465e61
    MOV ESI,dword ptr [ESP + 0x20]      ; 00465e62
    PUSH ESI                            ; 00465e66
    MOV EDI,dword ptr [ESP + 0x20]      ; 00465e67
    PUSH EDI                            ; 00465e6b
    CALL FUN_005a5128                   ; 00465e6c
        ;   XREF to: 005a5128 (UNCONDITIONAL_CALL)  ; undefined FUN_005a5128()
    ADD ESP,0x14                        ; 00465e71
    POP EDI                             ; 00465e74
    POP ESI                             ; 00465e75
    POP EBX                             ; 00465e76
    RET                                 ; 00465e77


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a3e50(undefined4 param_1,undefined4 param_2)
;
;
; XREF[30]:
;   FUN_00414910 at 00414946
;   FUN_00440c50 at 00440c83
;   FUN_004771c0 at 00477206
;   FUN_00480db0 at 00480dfc
;   FUN_00480e30 at 00480ebe
;   FUN_004821a0 at 00482216
;   FUN_004825f0 at 0048264e
;   FUN_00484bd0 at 00484c2b
;   FUN_00484d00 at 00484d5b
;   FUN_004a9830 at 004a984e
;   ... and 20 more
;
; Called Functions:
;   FUN_005a3e68
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3e50
        ;   Label: FUN_005a3e50
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a3e51
    PUSH EDX                            ; 005a3e55
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a3e56
    PUSH EBX                            ; 005a3e5a
    CALL FUN_005a3e68                   ; 005a3e5b
        ;   XREF to: 005a3e68 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3e68()
    ADD ESP,0x8                         ; 005a3e60
    POP EBX                             ; 005a3e63
    RET                                 ; 005a3e64


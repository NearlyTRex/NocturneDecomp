; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a5584(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[2]:
;   FUN_004735c0 at 004735f6
;   FUN_0047d230 at 0047d2c9
;
; Called Functions:
;   FUN_005a5544
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a5584
        ;   Label: FUN_005a5584
    MOV EDX,dword ptr [ESP + 0x10]      ; 005a5585
    PUSH EDX                            ; 005a5589
    MOV ECX,dword ptr [ESP + 0x10]      ; 005a558a
    PUSH ECX                            ; 005a558e
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a558f
    PUSH EBX                            ; 005a5593
    CALL FUN_005a5544                   ; 005a5594
        ;   XREF to: 005a5544 (UNCONDITIONAL_CALL)  ; undefined FUN_005a5544()
    ADD ESP,0xc                         ; 005a5599
    POP EBX                             ; 005a559c
    RET                                 ; 005a559d


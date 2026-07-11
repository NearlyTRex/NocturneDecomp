; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00471600(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[3]:
;   FUN_00471360 at 0047138e
;   FUN_00471430 at 00471469
;   FUN_004a0550 at 004a1e04
;
; Called Functions:
;   FUN_0046f7e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00471600
        ;   Label: FUN_00471600
    PUSH ESI                            ; 00471601
    PUSH 0x0                            ; 00471602
    MOV EDX,dword ptr [ESP + 0x20]      ; 00471604
    PUSH EDX                            ; 00471608
    MOV ECX,dword ptr [ESP + 0x20]      ; 00471609
    PUSH ECX                            ; 0047160d
    MOV EBX,dword ptr [ESP + 0x20]      ; 0047160e
    PUSH EBX                            ; 00471612
    MOV ESI,dword ptr [ESP + 0x20]      ; 00471613
    PUSH ESI                            ; 00471617
    CALL FUN_0046f7e0                   ; 00471618
        ;   XREF to: 0046f7e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046f7e0()
    ADD ESP,0x14                        ; 0047161d
    POP ESI                             ; 00471620
    POP EBX                             ; 00471621
    RET                                 ; 00471622


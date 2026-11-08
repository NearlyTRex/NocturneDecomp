; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00466880(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_0043e620 at 0043e634
;   FUN_00521c00 at 00521c17
;
; Called Functions:
;   FUN_00467160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00466880
        ;   Label: FUN_00466880
    MOV EBX,dword ptr [ESP + 0x8]       ; 00466881
    PUSH EBX                            ; 00466885
    CALL FUN_00467160                   ; 00466886
        ;   XREF to: 00467160 (UNCONDITIONAL_CALL)  ; undefined FUN_00467160()
    ADD ESP,0x4                         ; 0046688b
    MOV EAX,EBX                         ; 0046688e
    POP EBX                             ; 00466890
    RET                                 ; 00466891


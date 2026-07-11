; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00490af0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[4]:
;   FUN_0045d760 at 0045d82b
;   FUN_00490be0 at 00490c0f
;   FUN_00490ce0 at 00490d15
;   FUN_00490de0 at 00490e1f
;
; Called Functions:
;   FUN_00490980
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00490af0
        ;   Label: FUN_00490af0
    PUSH ESI                            ; 00490af1
    PUSH EDI                            ; 00490af2
    PUSH EBP                            ; 00490af3
    MOV EDX,dword ptr [ESP + 0x24]      ; 00490af4
    PUSH EDX                            ; 00490af8
    MOV ECX,dword ptr [ESP + 0x24]      ; 00490af9
    PUSH ECX                            ; 00490afd
    MOV EBX,dword ptr [ESP + 0x24]      ; 00490afe
    PUSH EBX                            ; 00490b02
    MOV ESI,dword ptr [ESP + 0x24]      ; 00490b03
    PUSH ESI                            ; 00490b07
    MOV EDI,dword ptr [ESP + 0x38]      ; 00490b08
    PUSH EDI                            ; 00490b0c
    MOV EBP,dword ptr [ESP + 0x28]      ; 00490b0d
    PUSH EBP                            ; 00490b11
    CALL FUN_00490980                   ; 00490b12
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined FUN_00490980()
    ADD ESP,0x18                        ; 00490b17
    POP EBP                             ; 00490b1a
    POP EDI                             ; 00490b1b
    POP ESI                             ; 00490b1c
    POP EBX                             ; 00490b1d
    RET                                 ; 00490b1e


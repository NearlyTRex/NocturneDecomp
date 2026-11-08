; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b0cb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[7]:
;   FUN_00469b40 at 00469c0b
;   FUN_004b0d30 at 004b0d82
;   FUN_004b0da0 at 004b0dcf
;   FUN_004b0ea0 at 004b0ed5
;   FUN_004b0fa0 at 004b0fdf
;   FUN_004b10b0 at 004b10f4
;   FUN_004c02a0 at 004c0509
;
; Called Functions:
;   FUN_004b0a20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0cb0
        ;   Label: FUN_004b0cb0
    PUSH ESI                            ; 004b0cb1
    PUSH EDI                            ; 004b0cb2
    PUSH EBP                            ; 004b0cb3
    MOV EDX,dword ptr [ESP + 0x24]      ; 004b0cb4
    PUSH EDX                            ; 004b0cb8
    MOV ECX,dword ptr [ESP + 0x24]      ; 004b0cb9
    PUSH ECX                            ; 004b0cbd
    MOV EBX,dword ptr [ESP + 0x24]      ; 004b0cbe
    PUSH EBX                            ; 004b0cc2
    MOV ESI,dword ptr [ESP + 0x24]      ; 004b0cc3
    PUSH ESI                            ; 004b0cc7
    MOV EDI,dword ptr [ESP + 0x38]      ; 004b0cc8
    PUSH EDI                            ; 004b0ccc
    MOV EBP,dword ptr [ESP + 0x28]      ; 004b0ccd
    PUSH EBP                            ; 004b0cd1
    CALL FUN_004b0a20                   ; 004b0cd2
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined FUN_004b0a20()
    ADD ESP,0x18                        ; 004b0cd7
    POP EBP                             ; 004b0cda
    POP EDI                             ; 004b0cdb
    POP ESI                             ; 004b0cdc
    POP EBX                             ; 004b0cdd
    RET                                 ; 004b0cde


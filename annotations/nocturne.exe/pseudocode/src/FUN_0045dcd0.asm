; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045dcd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; Called Functions:
;   FUN_0045dca0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045dcd0
        ;   Label: FUN_0045dcd0
    PUSH ESI                            ; 0045dcd1
    MOV EDX,dword ptr [ESP + 0x14]      ; 0045dcd2
    PUSH EDX                            ; 0045dcd6
    MOV ECX,dword ptr [ESP + 0x14]      ; 0045dcd7
    PUSH ECX                            ; 0045dcdb
    MOV EBX,dword ptr [ESP + 0x20]      ; 0045dcdc
    PUSH EBX                            ; 0045dce0
    MOV ESI,dword ptr [ESP + 0x18]      ; 0045dce1
    PUSH ESI                            ; 0045dce5
    CALL FUN_0045dca0                   ; 0045dce6
        ;   XREF to: 0045dca0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045dca0()
    ADD ESP,0x10                        ; 0045dceb
    POP ESI                             ; 0045dcee
    POP EBX                             ; 0045dcef
    RET                                 ; 0045dcf0


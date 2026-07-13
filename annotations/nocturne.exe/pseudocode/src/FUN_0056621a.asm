; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056621a(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; Called Functions:
;   FUN_005661c2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056621a
        ;   Label: FUN_0056621a
    MOV EDX,dword ptr [ESP + 0x10]      ; 0056621b
    PUSH EDX                            ; 0056621f
    MOV ECX,dword ptr [ESP + 0x10]      ; 00566220
    PUSH ECX                            ; 00566224
    MOV EBX,dword ptr [ESP + 0x10]      ; 00566225
    PUSH EBX                            ; 00566229
    CALL FUN_005661c2                   ; 0056622a
        ;   XREF to: 005661c2 (UNCONDITIONAL_CALL)  ; undefined FUN_005661c2()
    ADD ESP,0xc                         ; 0056622f
    POP EBX                             ; 00566232
    RET                                 ; 00566233


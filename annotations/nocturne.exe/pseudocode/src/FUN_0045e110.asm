; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045e110(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; Called Functions:
;   FUN_0045e0f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045e110
        ;   Label: FUN_0045e110
    MOV EDX,dword ptr [ESP + 0xc]       ; 0045e111
    PUSH EDX                            ; 0045e115
    MOV ECX,dword ptr [ESP + 0x14]      ; 0045e116
    PUSH ECX                            ; 0045e11a
    MOV EBX,dword ptr [ESP + 0x10]      ; 0045e11b
    PUSH EBX                            ; 0045e11f
    CALL FUN_0045e0f0                   ; 0045e120
        ;   XREF to: 0045e0f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045e0f0()
    ADD ESP,0xc                         ; 0045e125
    POP EBX                             ; 0045e128
    RET                                 ; 0045e129


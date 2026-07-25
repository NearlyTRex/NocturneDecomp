; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005738ac(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_00572b70 at 00572bd8
;
; Called Functions:
;   FUN_00573720
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005738ac
        ;   Label: FUN_005738ac
    PUSH 0x1                            ; 005738ad
    MOV EDX,dword ptr [ESP + 0x14]      ; 005738af
    PUSH EDX                            ; 005738b3
    MOV EBX,dword ptr [ESP + 0x14]      ; 005738b4
    PUSH EBX                            ; 005738b8
    MOV ECX,dword ptr [ESP + 0x14]      ; 005738b9
    PUSH ECX                            ; 005738bd
    CALL FUN_00573720                   ; 005738be
        ;   XREF to: 00573720 (UNCONDITIONAL_CALL)  ; undefined FUN_00573720()
    ADD ESP,0x10                        ; 005738c3
    POP EBX                             ; 005738c6
    RET                                 ; 005738c7


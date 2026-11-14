; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c6170(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c6000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c6170
        ;   Label: crt_unknown.c_FUN_005c6170
    PUSH 0x0                            ; 005c6171
    MOV EDX,dword ptr [ESP + 0x14]      ; 005c6173
    PUSH EDX                            ; 005c6177
    MOV EBX,dword ptr [ESP + 0x14]      ; 005c6178
    PUSH EBX                            ; 005c617c
    MOV ECX,dword ptr [ESP + 0x14]      ; 005c617d
    PUSH ECX                            ; 005c6181
    CALL crt_unknown.c_FUN_005c6000     ; 005c6182
        ;   XREF to: 005c6000 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c6000()
    ADD ESP,0x10                        ; 005c6187
    POP EBX                             ; 005c618a
    RET                                 ; 005c618b


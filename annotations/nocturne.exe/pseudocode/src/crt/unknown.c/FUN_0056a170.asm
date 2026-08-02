; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056a170(void)
;
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_0056f0f0_005c1f88 = 0056f0f0
;   void* PTR_crt_unknown.c_FUN_0056f0f0_005c1f8c = 0056f0f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056a170
        ;   Label: crt_unknown.c_FUN_0056a170
    MOV EDX,0x56f573                    ; 0056a171
    MOV EBX,0x56a189                    ; 0056a176
    MOV dword ptr [0x005c1f88],EDX      ; 0056a17b | PTR_crt_unknown.c_FUN_0056f0f0_005c1f88
    MOV dword ptr [0x005c1f8c],EBX      ; 0056a181 | PTR_crt_unknown.c_FUN_0056f0f0_005c1f8c
    POP EBX                             ; 0056a187
    RET                                 ; 0056a188


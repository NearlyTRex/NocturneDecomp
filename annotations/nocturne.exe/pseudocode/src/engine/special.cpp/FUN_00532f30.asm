; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_special_cpp_FUN_00532f30(void)
;
;
; Called Functions:
;   engine_special.cpp_FUN_00532f50
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00532f30
        ;   Label: engine_special.cpp_FUN_00532f30
    MOV EAX,dword ptr [ESP + 0x4]       ; 00532f34
    PUSH EDX                            ; 00532f38
    ADD EAX,0x1dc8                      ; 00532f39
    PUSH EAX                            ; 00532f3e
    CALL engine_special.cpp_FUN_00532f50 ; 00532f3f
        ;   XREF to: 00532f50 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00532f50(char * param_1, undefined4 param_2)
    ADD ESP,0x8                         ; 00532f44
    RET                                 ; 00532f47


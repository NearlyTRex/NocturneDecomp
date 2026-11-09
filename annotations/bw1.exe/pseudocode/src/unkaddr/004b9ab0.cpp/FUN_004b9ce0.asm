; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkaddr_004b9ab0_cpp_FUN_004b9ce0(char *param_1)
;
;
; Called Functions:
;   crt_string.c_strstr_FUN_005c2dc0
;   unkaddr_004b9ab0.cpp_FUN_004b9c50
;
; *****************************************************************************

section .text

    PUSH 0x5df822                       ; 004b9ce0
        ;   Label: unkaddr_004b9ab0.cpp_FUN_004b9ce0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b9ce5
    PUSH EDX                            ; 004b9ce9
    CALL crt_string.c_strstr_FUN_005c2dc0 ; 004b9cea
        ;   XREF to: 005c2dc0 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strstr_FUN_005c2dc0(char * haystack_str, char * needle_str)
    ADD ESP,0x8                         ; 004b9cef
    TEST EAX,EAX                        ; 004b9cf2
    JZ 0x004b9cf9                       ; 004b9cf4
        ;   XREF to: 004b9cf9 (CONDITIONAL_JUMP)  ; LAB_004b9cf9
    MOV byte ptr [EAX],0x0              ; 004b9cf6
    MOV ECX,dword ptr [ESP + 0x4]       ; 004b9cf9
        ;   Label: LAB_004b9cf9
    PUSH ECX                            ; 004b9cfd
    CALL unkaddr_004b9ab0.cpp_FUN_004b9c50 ; 004b9cfe
        ;   XREF to: 004b9c50 (UNCONDITIONAL_CALL)  ; undefined unkaddr_004b9ab0.cpp_FUN_004b9c50()
    ADD ESP,0x4                         ; 004b9d03
    RET                                 ; 004b9d06


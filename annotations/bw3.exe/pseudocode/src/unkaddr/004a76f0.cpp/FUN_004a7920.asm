; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkaddr_004a76f0_cpp_FUN_004a7920(char *param_1)
;
;
; Called Functions:
;   crt_string.c_strstr_FUN_005a4010
;   unkaddr_004a76f0.cpp_FUN_004a7890
;
; *****************************************************************************

section .text

    PUSH 0x5c0d0f                       ; 004a7920
        ;   Label: unkaddr_004a76f0.cpp_FUN_004a7920
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a7925
    PUSH EDX                            ; 004a7929
    CALL crt_string.c_strstr_FUN_005a4010 ; 004a792a
        ;   XREF to: 005a4010 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strstr_FUN_005a4010(char * haystack_str, char * needle_str)
    ADD ESP,0x8                         ; 004a792f
    TEST EAX,EAX                        ; 004a7932
    JZ 0x004a7939                       ; 004a7934
        ;   XREF to: 004a7939 (CONDITIONAL_JUMP)  ; LAB_004a7939
    MOV byte ptr [EAX],0x0              ; 004a7936
    MOV ECX,dword ptr [ESP + 0x4]       ; 004a7939
        ;   Label: LAB_004a7939
    PUSH ECX                            ; 004a793d
    CALL unkaddr_004a76f0.cpp_FUN_004a7890 ; 004a793e
        ;   XREF to: 004a7890 (UNCONDITIONAL_CALL)  ; undefined unkaddr_004a76f0.cpp_FUN_004a7890()
    ADD ESP,0x4                         ; 004a7943
    RET                                 ; 004a7946


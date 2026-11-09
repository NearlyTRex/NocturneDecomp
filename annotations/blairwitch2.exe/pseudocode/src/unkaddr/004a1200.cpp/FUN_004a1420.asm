; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkaddr_004a1200_cpp_FUN_004a1420(char *param_1)
;
;
; Called Functions:
;   crt_string.c_strstr_FUN_005ba9e0
;   unkaddr_004a1200.cpp_FUN_004a1390
;
; *****************************************************************************

section .text

    PUSH 0x5d59e0                       ; 004a1420
        ;   Label: unkaddr_004a1200.cpp_FUN_004a1420
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a1425
    PUSH EDX                            ; 004a1429
    CALL crt_string.c_strstr_FUN_005ba9e0 ; 004a142a
        ;   XREF to: 005ba9e0 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strstr_FUN_005ba9e0(char * haystack_str, char * needle_str)
    ADD ESP,0x8                         ; 004a142f
    TEST EAX,EAX                        ; 004a1432
    JZ 0x004a1439                       ; 004a1434
        ;   XREF to: 004a1439 (CONDITIONAL_JUMP)  ; LAB_004a1439
    MOV byte ptr [EAX],0x0              ; 004a1436
    MOV ECX,dword ptr [ESP + 0x4]       ; 004a1439
        ;   Label: LAB_004a1439
    PUSH ECX                            ; 004a143d
    CALL unkaddr_004a1200.cpp_FUN_004a1390 ; 004a143e
        ;   XREF to: 004a1390 (UNCONDITIONAL_CALL)  ; undefined unkaddr_004a1200.cpp_FUN_004a1390()
    ADD ESP,0x4                         ; 004a1443
    RET                                 ; 004a1446


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_pod_cpp_FUN_00519ee0(undefined4 *param_1,undefined4 *param_2)
;
;
; XREF[1]:
;   engine_pod.cpp_FUN_00519f00 at 0051a2c7
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005b8130
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00519ee0
        ;   Label: engine_pod.cpp_FUN_00519ee0
    MOV EDX,dword ptr [EAX]             ; 00519ee4
    MOV EAX,dword ptr [ESP + 0x4]       ; 00519ee6
    PUSH EDX                            ; 00519eea
    MOV ECX,dword ptr [EAX]             ; 00519eeb
    PUSH ECX                            ; 00519eed
    CALL crt_string.c__stricmp_FUN_005b8130 ; 00519eee
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00519ef3
    RET                                 ; 00519ef6


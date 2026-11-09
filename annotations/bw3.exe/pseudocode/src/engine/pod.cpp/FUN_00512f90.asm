; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_pod_cpp_FUN_00512f90(undefined4 *param_1,undefined4 *param_2)
;
;
; XREF[1]:
;   engine_pod.cpp_FUN_00512fb0 at 0051342d
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005a3260
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00512f90
        ;   Label: engine_pod.cpp_FUN_00512f90
    MOV EDX,dword ptr [EAX]             ; 00512f94
    MOV EAX,dword ptr [ESP + 0x4]       ; 00512f96
    PUSH EDX                            ; 00512f9a
    MOV ECX,dword ptr [EAX]             ; 00512f9b
    PUSH ECX                            ; 00512f9d
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00512f9e
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00512fa3
    RET                                 ; 00512fa6


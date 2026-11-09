; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_pod_cpp_FUN_0053b230(undefined4 *param_1,undefined4 *param_2)
;
;
; XREF[1]:
;   engine_pod.cpp_FUN_0053b250 at 0053b6cd
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005c04e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0053b230
        ;   Label: engine_pod.cpp_FUN_0053b230
    MOV EDX,dword ptr [EAX]             ; 0053b234
    MOV EAX,dword ptr [ESP + 0x4]       ; 0053b236
    PUSH EDX                            ; 0053b23a
    MOV ECX,dword ptr [EAX]             ; 0053b23b
    PUSH ECX                            ; 0053b23d
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0053b23e
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0053b243
    RET                                 ; 0053b246


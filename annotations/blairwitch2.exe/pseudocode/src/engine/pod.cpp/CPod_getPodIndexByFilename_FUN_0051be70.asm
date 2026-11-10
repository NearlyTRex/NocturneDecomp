; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_pod_cpp_CPod_getPodIndexByFilename_FUN_0051be70(CPod *this_ptr,char *target_filename)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   target_filename
;
; XREF[1]:
;   engine_pod.cpp_CPod_resolveDependenciesAndSort_FUN_0051ba20 at 0051bbe6
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005b8130
;   engine_dosio.cpp_splitPath_FUN_00461070
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051be70
        ;   Label: engine_pod.cpp_CPod_getPodIndexByFilename_FUN_0051be70
    PUSH ESI                            ; 0051be71
    PUSH EDI                            ; 0051be72
    PUSH EBP                            ; 0051be73
    SUB ESP,0x200                       ; 0051be74
    MOV EDI,dword ptr [ESP + 0x214]     ; 0051be7a
    PUSH 0x0                            ; 0051be81
    LEA EAX,[ESP + 0x104]               ; 0051be83
    PUSH EAX                            ; 0051be8a
    PUSH 0x0                            ; 0051be8b
    PUSH 0x0                            ; 0051be8d
    MOV EDX,dword ptr [ESP + 0x228]     ; 0051be8f
    PUSH EDX                            ; 0051be96
    XOR EBX,EBX                         ; 0051be97
    CALL engine_dosio.cpp_splitPath_FUN_00461070 ; 0051be99
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00461070(char * full_path, char * drive, char * directory, char * filename, ...)
    MOV ECX,dword ptr [EDI]             ; 0051be9e
    ADD ESP,0x14                        ; 0051bea0
    TEST ECX,ECX                        ; 0051bea3
    JLE 0x0051bee4                      ; 0051bea5
        ;   XREF to: 0051bee4 (CONDITIONAL_JUMP)  ; LAB_0051bee4
    MOV ESI,EDI                         ; 0051bea7
    PUSH 0x0                            ; 0051bea9
        ;   Label: LAB_0051bea9
    LEA EAX,[ESP + 0x4]                 ; 0051beab
    PUSH EAX                            ; 0051beaf
    PUSH 0x0                            ; 0051beb0
    MOV EAX,dword ptr [ESI + 0x4]       ; 0051beb2
    PUSH 0x0                            ; 0051beb5
    ADD EAX,0x4                         ; 0051beb7
    PUSH EAX                            ; 0051beba
    CALL engine_dosio.cpp_splitPath_FUN_00461070 ; 0051bebb
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00461070(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0051bec0
    MOV EAX,ESP                         ; 0051bec3
    PUSH EAX                            ; 0051bec5
    LEA EAX,[ESP + 0x104]               ; 0051bec6
    PUSH EAX                            ; 0051becd
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0051bece
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0051bed3
    TEST EAX,EAX                        ; 0051bed6
    JZ 0x0051bef4                       ; 0051bed8
        ;   XREF to: 0051bef4 (CONDITIONAL_JUMP)  ; LAB_0051bef4
    INC EBX                             ; 0051beda
    MOV EBP,dword ptr [EDI]             ; 0051bedb
    ADD ESI,0x4                         ; 0051bedd
    CMP EBX,EBP                         ; 0051bee0
    JL 0x0051bea9                       ; 0051bee2
        ;   XREF to: 0051bea9 (CONDITIONAL_JUMP)  ; LAB_0051bea9
    MOV EAX,0xffffffff                  ; 0051bee4
        ;   Label: LAB_0051bee4
    ADD ESP,0x200                       ; 0051bee9
    POP EBP                             ; 0051beef
    POP EDI                             ; 0051bef0
    POP ESI                             ; 0051bef1
    POP EBX                             ; 0051bef2
    RET                                 ; 0051bef3
    MOV EAX,EBX                         ; 0051bef4
        ;   Label: LAB_0051bef4
    ADD ESP,0x200                       ; 0051bef6
    POP EBP                             ; 0051befc
    POP EDI                             ; 0051befd
    POP ESI                             ; 0051befe
    POP EBX                             ; 0051beff
    RET                                 ; 0051bf00


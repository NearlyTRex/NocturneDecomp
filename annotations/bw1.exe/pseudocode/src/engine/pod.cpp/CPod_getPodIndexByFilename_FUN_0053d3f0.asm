; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_pod_cpp_CPod_getPodIndexByFilename_FUN_0053d3f0(CPod *this_ptr,char *target_filename)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   target_filename
;
; XREF[1]:
;   engine_pod.cpp_CPod_resolveDependenciesAndSort_FUN_0053cfa0 at 0053d166
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005c04e0
;   engine_dosio.cpp_splitPath_FUN_00479580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053d3f0
        ;   Label: engine_pod.cpp_CPod_getPodIndexByFilename_FUN_0053d3f0
    PUSH ESI                            ; 0053d3f1
    PUSH EDI                            ; 0053d3f2
    PUSH EBP                            ; 0053d3f3
    SUB ESP,0x200                       ; 0053d3f4
    MOV EDI,dword ptr [ESP + 0x214]     ; 0053d3fa
    PUSH 0x0                            ; 0053d401
    LEA EAX,[ESP + 0x104]               ; 0053d403
    PUSH EAX                            ; 0053d40a
    PUSH 0x0                            ; 0053d40b
    PUSH 0x0                            ; 0053d40d
    MOV EDX,dword ptr [ESP + 0x228]     ; 0053d40f
    PUSH EDX                            ; 0053d416
    XOR EBX,EBX                         ; 0053d417
    CALL engine_dosio.cpp_splitPath_FUN_00479580 ; 0053d419
        ;   XREF to: 00479580 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00479580(char * full_path, char * drive, char * directory, char * filename, ...)
    MOV ECX,dword ptr [EDI]             ; 0053d41e
    ADD ESP,0x14                        ; 0053d420
    TEST ECX,ECX                        ; 0053d423
    JLE 0x0053d464                      ; 0053d425
        ;   XREF to: 0053d464 (CONDITIONAL_JUMP)  ; LAB_0053d464
    MOV ESI,EDI                         ; 0053d427
    PUSH 0x0                            ; 0053d429
        ;   Label: LAB_0053d429
    LEA EAX,[ESP + 0x4]                 ; 0053d42b
    PUSH EAX                            ; 0053d42f
    PUSH 0x0                            ; 0053d430
    MOV EAX,dword ptr [ESI + 0x4]       ; 0053d432
    PUSH 0x0                            ; 0053d435
    ADD EAX,0x4                         ; 0053d437
    PUSH EAX                            ; 0053d43a
    CALL engine_dosio.cpp_splitPath_FUN_00479580 ; 0053d43b
        ;   XREF to: 00479580 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00479580(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0053d440
    MOV EAX,ESP                         ; 0053d443
    PUSH EAX                            ; 0053d445
    LEA EAX,[ESP + 0x104]               ; 0053d446
    PUSH EAX                            ; 0053d44d
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0053d44e
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0053d453
    TEST EAX,EAX                        ; 0053d456
    JZ 0x0053d474                       ; 0053d458
        ;   XREF to: 0053d474 (CONDITIONAL_JUMP)  ; LAB_0053d474
    INC EBX                             ; 0053d45a
    MOV EBP,dword ptr [EDI]             ; 0053d45b
    ADD ESI,0x4                         ; 0053d45d
    CMP EBX,EBP                         ; 0053d460
    JL 0x0053d429                       ; 0053d462
        ;   XREF to: 0053d429 (CONDITIONAL_JUMP)  ; LAB_0053d429
    MOV EAX,0xffffffff                  ; 0053d464
        ;   Label: LAB_0053d464
    ADD ESP,0x200                       ; 0053d469
    POP EBP                             ; 0053d46f
    POP EDI                             ; 0053d470
    POP ESI                             ; 0053d471
    POP EBX                             ; 0053d472
    RET                                 ; 0053d473
    MOV EAX,EBX                         ; 0053d474
        ;   Label: LAB_0053d474
    ADD ESP,0x200                       ; 0053d476
    POP EBP                             ; 0053d47c
    POP EDI                             ; 0053d47d
    POP ESI                             ; 0053d47e
    POP EBX                             ; 0053d47f
    RET                                 ; 0053d480


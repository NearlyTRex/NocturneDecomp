; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_pod_cpp_CPod_getPodIndexByFilename_FUN_00515150(CPod *this_ptr,char *target_filename)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   target_filename
;
; XREF[1]:
;   engine_pod.cpp_CPod_resolveDependenciesAndSort_FUN_00514d00 at 00514ec6
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005a3260
;   engine_dosio.cpp_splitPath_FUN_00465e50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00515150
        ;   Label: engine_pod.cpp_CPod_getPodIndexByFilename_FUN_00515150
    PUSH ESI                            ; 00515151
    PUSH EDI                            ; 00515152
    PUSH EBP                            ; 00515153
    SUB ESP,0x200                       ; 00515154
    MOV EDI,dword ptr [ESP + 0x214]     ; 0051515a
    PUSH 0x0                            ; 00515161
    LEA EAX,[ESP + 0x104]               ; 00515163
    PUSH EAX                            ; 0051516a
    PUSH 0x0                            ; 0051516b
    PUSH 0x0                            ; 0051516d
    MOV EDX,dword ptr [ESP + 0x228]     ; 0051516f
    PUSH EDX                            ; 00515176
    XOR EBX,EBX                         ; 00515177
    CALL engine_dosio.cpp_splitPath_FUN_00465e50 ; 00515179
        ;   XREF to: 00465e50 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00465e50(char * full_path, char * drive, char * directory, char * filename, ...)
    MOV ECX,dword ptr [EDI]             ; 0051517e
    ADD ESP,0x14                        ; 00515180
    TEST ECX,ECX                        ; 00515183
    JLE 0x005151c4                      ; 00515185
        ;   XREF to: 005151c4 (CONDITIONAL_JUMP)  ; LAB_005151c4
    MOV ESI,EDI                         ; 00515187
    PUSH 0x0                            ; 00515189
        ;   Label: LAB_00515189
    LEA EAX,[ESP + 0x4]                 ; 0051518b
    PUSH EAX                            ; 0051518f
    PUSH 0x0                            ; 00515190
    MOV EAX,dword ptr [ESI + 0x4]       ; 00515192
    PUSH 0x0                            ; 00515195
    ADD EAX,0x4                         ; 00515197
    PUSH EAX                            ; 0051519a
    CALL engine_dosio.cpp_splitPath_FUN_00465e50 ; 0051519b
        ;   XREF to: 00465e50 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00465e50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 005151a0
    MOV EAX,ESP                         ; 005151a3
    PUSH EAX                            ; 005151a5
    LEA EAX,[ESP + 0x104]               ; 005151a6
    PUSH EAX                            ; 005151ad
    CALL crt_string.c__stricmp_FUN_005a3260 ; 005151ae
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 005151b3
    TEST EAX,EAX                        ; 005151b6
    JZ 0x005151d4                       ; 005151b8
        ;   XREF to: 005151d4 (CONDITIONAL_JUMP)  ; LAB_005151d4
    INC EBX                             ; 005151ba
    MOV EBP,dword ptr [EDI]             ; 005151bb
    ADD ESI,0x4                         ; 005151bd
    CMP EBX,EBP                         ; 005151c0
    JL 0x00515189                       ; 005151c2
        ;   XREF to: 00515189 (CONDITIONAL_JUMP)  ; LAB_00515189
    MOV EAX,0xffffffff                  ; 005151c4
        ;   Label: LAB_005151c4
    ADD ESP,0x200                       ; 005151c9
    POP EBP                             ; 005151cf
    POP EDI                             ; 005151d0
    POP ESI                             ; 005151d1
    POP EBX                             ; 005151d2
    RET                                 ; 005151d3
    MOV EAX,EBX                         ; 005151d4
        ;   Label: LAB_005151d4
    ADD ESP,0x200                       ; 005151d6
    POP EBP                             ; 005151dc
    POP EDI                             ; 005151dd
    POP ESI                             ; 005151de
    POP EBX                             ; 005151df
    RET                                 ; 005151e0


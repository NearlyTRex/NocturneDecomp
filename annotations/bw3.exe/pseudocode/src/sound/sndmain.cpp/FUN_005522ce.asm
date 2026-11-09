; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_sndmain_cpp_FUN_005522ce(char *param_1)
;
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005a3260
;   engine_dosio.cpp_FUN_00465e50
;   engine_dosio.cpp_getFileSize_FUN_004657f0
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 005522ce
        ;   Label: sound_sndmain.cpp_FUN_005522ce
    SUB ESP,0x100                       ; 005522d0
    MOV EDX,dword ptr [ESP + 0x104]     ; 005522d6
    PUSH EDX                            ; 005522dd
    PUSH 0x5d29c7                       ; 005522de
    CALL engine_dosio.cpp_getFileSize_FUN_004657f0 ; 005522e3
        ;   XREF to: 004657f0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_004657f0(char * directory, char * filename)
    ADD ESP,0x8                         ; 005522e8
    CMP EAX,0x200000                    ; 005522eb
    JLE 0x005522fe                      ; 005522f0
        ;   XREF to: 005522fe (CONDITIONAL_JUMP)  ; LAB_005522fe
    MOV EAX,0x1                         ; 005522f2
        ;   Label: LAB_005522f2
    ADD ESP,0x100                       ; 005522f7
    RET                                 ; 005522fd
    MOV EAX,ESP                         ; 005522fe
        ;   Label: LAB_005522fe
    PUSH EAX                            ; 00552300
    PUSH 0x0                            ; 00552301
    PUSH 0x0                            ; 00552303
    PUSH 0x0                            ; 00552305
    MOV ECX,dword ptr [ESP + 0x114]     ; 00552307
    PUSH ECX                            ; 0055230e
    CALL engine_dosio.cpp_FUN_00465e50  ; 0055230f
        ;   XREF to: 00465e50 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_00465e50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00552314
    PUSH 0x5d29cd                       ; 00552317
    LEA EAX,[ESP + 0x4]                 ; 0055231c
    PUSH EAX                            ; 00552320
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00552321
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00552326
    TEST EAX,EAX                        ; 00552329
    JZ 0x005522f2                       ; 0055232b
        ;   XREF to: 005522f2 (CONDITIONAL_JUMP)  ; LAB_005522f2
    PUSH 0x5d29d1                       ; 0055232d
    LEA EAX,[ESP + 0x4]                 ; 00552332
    PUSH EAX                            ; 00552336
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00552337
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0055233c
    TEST EAX,EAX                        ; 0055233f
    JZ 0x005522f2                       ; 00552341
        ;   XREF to: 005522f2 (CONDITIONAL_JUMP)  ; LAB_005522f2
    XOR EAX,EAX                         ; 00552343
    ADD ESP,0x100                       ; 00552345
    RET                                 ; 0055234b


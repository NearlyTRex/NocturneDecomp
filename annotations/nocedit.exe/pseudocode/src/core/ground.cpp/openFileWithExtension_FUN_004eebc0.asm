; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl _FILE * __cdecl core_ground_cpp_openFileWithExtension_FUN_004eebc0 (char *base_filename,char *file_extension,char *open_mode)
;
; Parameters:
; char *           Stack[0x4]:4   base_filename
; char *           Stack[0x8]:4   file_extension
; char *           Stack[0xc]:4   open_mode
; Local Variables:
; undefined1       Stack[-0x60]:1  local_60
; undefined1       Stack[-0x5f]:1  local_5f
;
; Referenced Globals:
;   TerminatedCString s_core_ground_cpp_0062e571
;   TerminatedCString s_eopen_ext_not_found_0062e584
;   TerminatedCString s_core_ground_cpp_0062e59b
;   TerminatedCString s_eopen_Cannot_open_file_0062e5ae
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_dosio.c_getFile_FUN_00481a50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eebc0
        ;   Label: core_ground.cpp_openFileWithExtension_FUN_004eebc0
    PUSH ESI                            ; 004eebc1
    PUSH EDI                            ; 004eebc2
    PUSH EBP                            ; 004eebc3
    SUB ESP,0x50                        ; 004eebc4
    MOV ESI,dword ptr [ESP + 0x68]      ; 004eebc7
    MOV EDI,ESP                         ; 004eebcb
    MOV DL,0x2e                         ; 004eebcd
    PUSH EDI                            ; 004eebcf
    MOV AL,byte ptr [ESI]               ; 004eebd0
        ;   Label: LAB_004eebd0
    MOV byte ptr [EDI],AL               ; 004eebd2
    CMP AL,0x0                          ; 004eebd4
    JZ 0x004eebe8                       ; 004eebd6
        ;   XREF to: 004eebe8 (CONDITIONAL_JUMP)  ; LAB_004eebe8
    MOV AL,byte ptr [ESI + 0x1]         ; 004eebd8
    ADD ESI,0x2                         ; 004eebdb
    MOV byte ptr [EDI + 0x1],AL         ; 004eebde
    ADD EDI,0x2                         ; 004eebe1
    CMP AL,0x0                          ; 004eebe4
    JNZ 0x004eebd0                      ; 004eebe6
        ;   XREF to: 004eebd0 (CONDITIONAL_JUMP)  ; LAB_004eebd0
    POP EDI                             ; 004eebe8
        ;   Label: LAB_004eebe8
    MOV ESI,ESP                         ; 004eebe9
    MOV AL,byte ptr [ESI]               ; 004eebeb
        ;   Label: LAB_004eebeb
    CMP AL,DL                           ; 004eebed
    JZ 0x004eec03                       ; 004eebef
        ;   XREF to: 004eec03 (CONDITIONAL_JUMP)  ; LAB_004eec03
    CMP AL,0x0                          ; 004eebf1
    JZ 0x004eec01                       ; 004eebf3
        ;   XREF to: 004eec01 (CONDITIONAL_JUMP)  ; LAB_004eec01
    INC ESI                             ; 004eebf5
    MOV AL,byte ptr [ESI]               ; 004eebf6
    CMP AL,DL                           ; 004eebf8
    JZ 0x004eec03                       ; 004eebfa
        ;   XREF to: 004eec03 (CONDITIONAL_JUMP)  ; LAB_004eec03
    INC ESI                             ; 004eebfc
    CMP AL,0x0                          ; 004eebfd
    JNZ 0x004eebeb                      ; 004eebff
        ;   XREF to: 004eebeb (CONDITIONAL_JUMP)  ; LAB_004eebeb
    SUB ESI,ESI                         ; 004eec01
        ;   Label: LAB_004eec01
    MOV EDI,ESI                         ; 004eec03
        ;   Label: LAB_004eec03
    TEST ESI,ESI                        ; 004eec05
    JNZ 0x004eec2c                      ; 004eec07
        ;   XREF to: 004eec2c (CONDITIONAL_JUMP)  ; LAB_004eec2c
    MOV EDX,0x62e571                    ; 004eec09 | = "..\\core\\ground.cpp"
    MOV ECX,0x40                        ; 004eec0e
    PUSH 0x62e584                       ; 004eec13 | = "eopen - ext not found!"
    MOV dword ptr [0x02f0ca48],EDX      ; 004eec18 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 004eec1e | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004eec24
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004eec29
    MOV ESI,dword ptr [ESP + 0x6c]      ; 004eec2c
        ;   Label: LAB_004eec2c
    INC EDI                             ; 004eec30
    MOV EBX,dword ptr [ESP + 0x70]      ; 004eec31
    PUSH EDI                            ; 004eec35
    MOV AL,byte ptr [ESI]               ; 004eec36
        ;   Label: LAB_004eec36
    MOV byte ptr [EDI],AL               ; 004eec38
    CMP AL,0x0                          ; 004eec3a
    JZ 0x004eec4e                       ; 004eec3c
        ;   XREF to: 004eec4e (CONDITIONAL_JUMP)  ; LAB_004eec4e
    MOV AL,byte ptr [ESI + 0x1]         ; 004eec3e
    ADD ESI,0x2                         ; 004eec41
    MOV byte ptr [EDI + 0x1],AL         ; 004eec44
    ADD EDI,0x2                         ; 004eec47
    CMP AL,0x0                          ; 004eec4a
    JNZ 0x004eec36                      ; 004eec4c
        ;   XREF to: 004eec36 (CONDITIONAL_JUMP)  ; LAB_004eec36
    POP EDI                             ; 004eec4e
        ;   Label: LAB_004eec4e
    PUSH EBX                            ; 004eec4f
    LEA EAX,[ESP + 0x4]                 ; 004eec50
    PUSH EAX                            ; 004eec54
    MOV ESI,dword ptr [ESP + 0x6c]      ; 004eec55
    PUSH ESI                            ; 004eec59
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 004eec5a
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004eec5f
    MOV ESI,EAX                         ; 004eec62
    TEST EAX,EAX                        ; 004eec64
    JZ 0x004eec72                       ; 004eec66
        ;   XREF to: 004eec72 (CONDITIONAL_JUMP)  ; LAB_004eec72
    MOV EAX,ESI                         ; 004eec68
    ADD ESP,0x50                        ; 004eec6a
    POP EBP                             ; 004eec6d
    POP EDI                             ; 004eec6e
    POP ESI                             ; 004eec6f
    POP EBX                             ; 004eec70
    RET                                 ; 004eec71
    MOV EDI,0x62e59b                    ; 004eec72 | = "..\\core\\ground.cpp"
        ;   Label: LAB_004eec72
    MOV EBP,0x44                        ; 004eec77
    PUSH 0x62e5ae                       ; 004eec7c | = "eopen - Cannot open file"
    MOV dword ptr [0x02f0ca48],EDI      ; 004eec81 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 004eec87 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004eec8d
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004eec92
    MOV EAX,ESI                         ; 004eec95
    ADD ESP,0x50                        ; 004eec97
    POP EBP                             ; 004eec9a
    POP EDI                             ; 004eec9b
    POP ESI                             ; 004eec9c
    POP EBX                             ; 004eec9d
    RET                                 ; 004eec9e


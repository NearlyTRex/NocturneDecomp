; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_ini_cpp_CIni_getProfileString_FUN_004bd0a0(CIni *this_ptr,char *section,char *key,char *default_value,char *output_buffer,int buffer_size,char *filename)
;
; Parameters:
; CIni *           Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   section
; char *           Stack[0xc]:4   key
; char *           Stack[0x10]:4   default_value
; char *           Stack[0x14]:4   output_buffer
; int              Stack[0x18]:4   buffer_size
; char *           Stack[0x1c]:4   filename
; Local Variables:
; undefined        Stack[-0x210]:1  local_210
; undefined1       Stack[-0x20f]:1  local_20f
; undefined1       Stack[-0x20d]:1  local_20d
; undefined        Stack[-0x110]:1  local_110
;
; XREF[2]:
;   engine_ini.cpp_getProfileInteger_FUN_004bd790 at 004bd7e5
;   engine_ini.cpp_getProfileString_FUN_004bd750 at 004bd777
;
; Referenced Globals:
;   TerminatedCString s_rt_005864e5
;   TerminatedCString s_engine_ini_cpp_005864e8
;   TerminatedCString s_cIni_getProfileString_Un_005864fa
;   TerminatedCString s_s_00586527
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fgets_FUN_00564b20
;   crt_stdio.c_fopen_FUN_0056568c
;   crt_stdio.c_sprintf_FUN_00563c90
;   crt_string.c__strcmp_FUN_005649c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bd0a0
        ;   Label: engine_ini.cpp_CIni_getProfileString_FUN_004bd0a0
    PUSH ESI                            ; 004bd0a1
    PUSH EDI                            ; 004bd0a2
    PUSH EBP                            ; 004bd0a3
    SUB ESP,0x200                       ; 004bd0a4
    PUSH 0x5864e5                       ; 004bd0aa | = "rt"
    MOV EDX,dword ptr [ESP + 0x230]     ; 004bd0af
    PUSH EDX                            ; 004bd0b6
    XOR EDI,EDI                         ; 004bd0b7
    CALL crt_stdio.c_fopen_FUN_0056568c ; 004bd0b9
        ;   XREF to: 0056568c (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_fopen_FUN_0056568c(char * filename, char * mode)
    ADD ESP,0x8                         ; 004bd0be
    MOV EBX,EAX                         ; 004bd0c1
    TEST EAX,EAX                        ; 004bd0c3
    JZ 0x004bd164                       ; 004bd0c5
        ;   XREF to: 004bd164 (CONDITIONAL_JUMP)  ; LAB_004bd164
    MOV EAX,dword ptr [ESP + 0x218]     ; 004bd0cb
        ;   Label: LAB_004bd0cb
    PUSH EAX                            ; 004bd0d2
    PUSH 0x586527                       ; 004bd0d3 | = "[%s]\n"
    LEA EAX,[ESP + 0x108]               ; 004bd0d8
    PUSH EAX                            ; 004bd0df
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004bd0e0
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 004bd0e5
    TEST EDI,EDI                        ; 004bd0e8
        ;   Label: LAB_004bd0e8
    JNZ 0x004bd0f6                      ; 004bd0ea
        ;   XREF to: 004bd0f6 (CONDITIONAL_JUMP)  ; LAB_004bd0f6
    TEST byte ptr [EBX + 0xc],0x10      ; 004bd0ec
    JZ 0x004bd18c                       ; 004bd0f0
        ;   XREF to: 004bd18c (CONDITIONAL_JUMP)  ; LAB_004bd18c
    TEST EDI,EDI                        ; 004bd0f6
        ;   Label: LAB_004bd0f6
    JZ 0x004bd11f                       ; 004bd0f8
        ;   XREF to: 004bd11f (CONDITIONAL_JUMP)  ; LAB_004bd11f
    MOV DL,byte ptr [EBX + 0xc]         ; 004bd0fa
        ;   Label: LAB_004bd0fa
    XOR EDI,EDI                         ; 004bd0fd
    TEST DL,0x10                        ; 004bd0ff
    JNZ 0x004bd11f                      ; 004bd102
        ;   XREF to: 004bd11f (CONDITIONAL_JUMP)  ; LAB_004bd11f
        ;   Label: LAB_004bd102
    PUSH EBX                            ; 004bd104
    PUSH 0xff                           ; 004bd105
    LEA EAX,[ESP + 0x8]                 ; 004bd10a
    PUSH EAX                            ; 004bd10e
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 004bd10f
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004bd114
    TEST EAX,EAX                        ; 004bd117
    JNZ 0x004bd1d2                      ; 004bd119
        ;   XREF to: 004bd1d2 (CONDITIONAL_JUMP)  ; LAB_004bd1d2
    PUSH EBX                            ; 004bd11f
        ;   Label: LAB_004bd11f
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004bd120
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 004bd125
    TEST EDI,EDI                        ; 004bd128
    JZ 0x004bd21a                       ; 004bd12a
        ;   XREF to: 004bd21a (CONDITIONAL_JUMP)  ; LAB_004bd21a
    INC EBP                             ; 004bd130
    MOV EDI,EBP                         ; 004bd131
    SUB ECX,ECX                         ; 004bd133
    DEC ECX                             ; 004bd135
    XOR EAX,EAX                         ; 004bd136
    SCASB.REPNE ES:EDI                  ; 004bd138
    NOT ECX                             ; 004bd13a
    DEC ECX                             ; 004bd13c
    LEA EAX,[ECX + -0x1]                ; 004bd13d
    LEA ECX,[EAX + EBP*0x1]             ; 004bd140
    MOV ESI,dword ptr [ESP + 0x228]     ; 004bd143
    MOV byte ptr [ECX],0x0              ; 004bd14a
    CMP EAX,ESI                         ; 004bd14d
    JL 0x004bd274                       ; 004bd14f
        ;   XREF to: 004bd274 (CONDITIONAL_JUMP)  ; LAB_004bd274
    XOR EDI,EDI                         ; 004bd155
        ;   Label: LAB_004bd155
    MOV EAX,EDI                         ; 004bd157
    ADD ESP,0x200                       ; 004bd159
    POP EBP                             ; 004bd15f
    POP EDI                             ; 004bd160
    POP ESI                             ; 004bd161
    POP EBX                             ; 004bd162
    RET                                 ; 004bd163
    MOV ECX,0x5864e8                    ; 004bd164 | = "..\\engine\\ini.cpp"
        ;   Label: LAB_004bd164
    MOV ESI,0x57                        ; 004bd169
    PUSH 0x5864fa                       ; 004bd16e | = "cIni::getProfileString: Unable to ope..."
    MOV dword ptr [0x01cc4800],ECX      ; 004bd173 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004bd179 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004bd17f
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004bd184
    JMP 0x004bd0cb                      ; 004bd187
        ;   XREF to: 004bd0cb (UNCONDITIONAL_JUMP)  ; LAB_004bd0cb
    PUSH EBX                            ; 004bd18c
        ;   Label: LAB_004bd18c
    PUSH 0xff                           ; 004bd18d
    LEA EAX,[ESP + 0x8]                 ; 004bd192
    PUSH EAX                            ; 004bd196
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 004bd197
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004bd19c
    TEST EAX,EAX                        ; 004bd19f
    JZ 0x004bd0f6                       ; 004bd1a1
        ;   XREF to: 004bd0f6 (CONDITIONAL_JUMP)  ; LAB_004bd0f6
    LEA EAX,[ESP + 0x100]               ; 004bd1a7
    PUSH EAX                            ; 004bd1ae
    LEA EAX,[ESP + 0x4]                 ; 004bd1af
    PUSH EAX                            ; 004bd1b3
    CALL crt_string.c__strcmp_FUN_005649c0 ; 004bd1b4
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005649c0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004bd1b9
    TEST EAX,EAX                        ; 004bd1bc
    JZ 0x004bd0fa                       ; 004bd1be
        ;   XREF to: 004bd0fa (CONDITIONAL_JUMP)  ; LAB_004bd0fa
    JMP 0x004bd0e8                      ; 004bd1c4
        ;   XREF to: 004bd0e8 (UNCONDITIONAL_JUMP)  ; LAB_004bd0e8
    TEST byte ptr [EBX + 0xc],0x10      ; 004bd1c9
        ;   Label: LAB_004bd1c9
    JMP 0x004bd102                      ; 004bd1cd
        ;   XREF to: 004bd102 (UNCONDITIONAL_JUMP)  ; LAB_004bd102
    MOV DL,0x3d                         ; 004bd1d2
        ;   Label: LAB_004bd1d2
    MOV ESI,ESP                         ; 004bd1d4
    MOV AL,byte ptr [ESI]               ; 004bd1d6
        ;   Label: LAB_004bd1d6
    CMP AL,DL                           ; 004bd1d8
    JZ 0x004bd1ee                       ; 004bd1da
        ;   XREF to: 004bd1ee (CONDITIONAL_JUMP)  ; LAB_004bd1ee
    CMP AL,0x0                          ; 004bd1dc
    JZ 0x004bd1ec                       ; 004bd1de
        ;   XREF to: 004bd1ec (CONDITIONAL_JUMP)  ; LAB_004bd1ec
    INC ESI                             ; 004bd1e0
    MOV AL,byte ptr [ESI]               ; 004bd1e1
    CMP AL,DL                           ; 004bd1e3
    JZ 0x004bd1ee                       ; 004bd1e5
        ;   XREF to: 004bd1ee (CONDITIONAL_JUMP)  ; LAB_004bd1ee
    INC ESI                             ; 004bd1e7
    CMP AL,0x0                          ; 004bd1e8
    JNZ 0x004bd1d6                      ; 004bd1ea
        ;   XREF to: 004bd1d6 (CONDITIONAL_JUMP)  ; LAB_004bd1d6
    SUB ESI,ESI                         ; 004bd1ec
        ;   Label: LAB_004bd1ec
    MOV EBP,ESI                         ; 004bd1ee
        ;   Label: LAB_004bd1ee
    TEST ESI,ESI                        ; 004bd1f0
    JZ 0x004bd1f7                       ; 004bd1f2
        ;   XREF to: 004bd1f7 (CONDITIONAL_JUMP)  ; LAB_004bd1f7
    MOV byte ptr [ESI],0x0              ; 004bd1f4
    MOV EDX,dword ptr [ESP + 0x21c]     ; 004bd1f7
        ;   Label: LAB_004bd1f7
    PUSH EDX                            ; 004bd1fe
    LEA EAX,[ESP + 0x4]                 ; 004bd1ff
    PUSH EAX                            ; 004bd203
    CALL crt_string.c__strcmp_FUN_005649c0 ; 004bd204
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005649c0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004bd209
    TEST EAX,EAX                        ; 004bd20c
    JNZ 0x004bd1c9                      ; 004bd20e
        ;   XREF to: 004bd1c9 (CONDITIONAL_JUMP)  ; LAB_004bd1c9
    MOV EDI,0x1                         ; 004bd210
    JMP 0x004bd11f                      ; 004bd215
        ;   XREF to: 004bd11f (UNCONDITIONAL_JUMP)  ; LAB_004bd11f
    MOV EDI,dword ptr [ESP + 0x220]     ; 004bd21a
        ;   Label: LAB_004bd21a
    MOV EBX,dword ptr [ESP + 0x228]     ; 004bd221
    SUB ECX,ECX                         ; 004bd228
    DEC ECX                             ; 004bd22a
    XOR EAX,EAX                         ; 004bd22b
    SCASB.REPNE ES:EDI                  ; 004bd22d
    NOT ECX                             ; 004bd22f
    DEC ECX                             ; 004bd231
    CMP ECX,EBX                         ; 004bd232
    JGE 0x004bd155                      ; 004bd234
        ;   XREF to: 004bd155 (CONDITIONAL_JUMP)  ; LAB_004bd155
    MOV ESI,dword ptr [ESP + 0x220]     ; 004bd23a
    MOV EDI,dword ptr [ESP + 0x224]     ; 004bd241
    PUSH EDI                            ; 004bd248
    MOV AL,byte ptr [ESI]               ; 004bd249
        ;   Label: LAB_004bd249
    MOV byte ptr [EDI],AL               ; 004bd24b
    CMP AL,0x0                          ; 004bd24d
    JZ 0x004bd261                       ; 004bd24f
        ;   XREF to: 004bd261 (CONDITIONAL_JUMP)  ; LAB_004bd261
    MOV AL,byte ptr [ESI + 0x1]         ; 004bd251
    ADD ESI,0x2                         ; 004bd254
    MOV byte ptr [EDI + 0x1],AL         ; 004bd257
    ADD EDI,0x2                         ; 004bd25a
    CMP AL,0x0                          ; 004bd25d
    JNZ 0x004bd249                      ; 004bd25f
        ;   XREF to: 004bd249 (CONDITIONAL_JUMP)  ; LAB_004bd249
    POP EDI                             ; 004bd261
        ;   Label: LAB_004bd261
    MOV EDI,0x1                         ; 004bd262
    MOV EAX,EDI                         ; 004bd267
    ADD ESP,0x200                       ; 004bd269
    POP EBP                             ; 004bd26f
    POP EDI                             ; 004bd270
    POP ESI                             ; 004bd271
    POP EBX                             ; 004bd272
    RET                                 ; 004bd273
    MOV EDI,dword ptr [ESP + 0x224]     ; 004bd274
        ;   Label: LAB_004bd274
    MOV ESI,EBP                         ; 004bd27b
    PUSH EDI                            ; 004bd27d
    MOV AL,byte ptr [ESI]               ; 004bd27e
        ;   Label: LAB_004bd27e
    MOV byte ptr [EDI],AL               ; 004bd280
    CMP AL,0x0                          ; 004bd282
    JZ 0x004bd296                       ; 004bd284
        ;   XREF to: 004bd296 (CONDITIONAL_JUMP)  ; LAB_004bd296
    MOV AL,byte ptr [ESI + 0x1]         ; 004bd286
    ADD ESI,0x2                         ; 004bd289
    MOV byte ptr [EDI + 0x1],AL         ; 004bd28c
    ADD EDI,0x2                         ; 004bd28f
    CMP AL,0x0                          ; 004bd292
    JNZ 0x004bd27e                      ; 004bd294
        ;   XREF to: 004bd27e (CONDITIONAL_JUMP)  ; LAB_004bd27e
    POP EDI                             ; 004bd296
        ;   Label: LAB_004bd296
    MOV EDI,0x1                         ; 004bd297
    MOV EAX,EDI                         ; 004bd29c
    ADD ESP,0x200                       ; 004bd29e
    POP EBP                             ; 004bd2a4
    POP EDI                             ; 004bd2a5
    POP ESI                             ; 004bd2a6
    POP EBX                             ; 004bd2a7
    RET                                 ; 004bd2a8


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_2d_c_FUN_00403070(char *param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_rb_0057718c
;   TerminatedCString s_fog_0057718f
;   TerminatedCString s_rb_00577193
;   TerminatedCString s_fog_00577196
;   TerminatedCString s_engine_2d_c_0057719a
;   TerminatedCString s_Unable_to_read_fog_table_005771a9
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fread_FUN_005636d0
;   engine_2d.c_FUN_00402e90
;   engine_2d.c_FUN_00403130
;   engine_dosio.cpp_getFile_FUN_00456a60
;   engine_special.cpp_setFogColorFromPalette_FUN_00532a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403070
        ;   Label: engine_2d.c_FUN_00403070
    PUSH EDI                            ; 00403071
    MOV EDI,dword ptr [ESP + 0xc]       ; 00403072
    MOV EBX,dword ptr [ESP + 0x10]      ; 00403076
    PUSH ESI                            ; 0040307a
    PUSH 0x57718c                       ; 0040307b | = "rb"
    PUSH EDI                            ; 00403080
    PUSH 0x57718f                       ; 00403081 | = "fog"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 00403086
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0040308b
    MOV ESI,EAX                         ; 0040308e
    TEST EAX,EAX                        ; 00403090
    JZ 0x004030e5                       ; 00403092
        ;   XREF to: 004030e5 (CONDITIONAL_JUMP)  ; LAB_004030e5
    TEST ESI,ESI                        ; 00403094
        ;   Label: LAB_00403094
    JZ 0x0040310e                       ; 00403096
        ;   XREF to: 0040310e (CONDITIONAL_JUMP)  ; LAB_0040310e
    PUSH ESI                            ; 00403098
    PUSH 0x10                           ; 00403099
    PUSH 0x100                          ; 0040309b
    PUSH 0x1bd1ea0                      ; 004030a0
    CALL crt_stdio.c_fread_FUN_005636d0 ; 004030a5
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004030aa
    PUSH ESI                            ; 004030ad
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004030ae
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 004030b3
        ;   Label: LAB_004030b3
    XOR EAX,EAX                         ; 004030b6
    POP ESI                             ; 004030b8
    INC EAX                             ; 004030b9
        ;   Label: LAB_004030b9
    MOV byte ptr [EAX + 0x1bd2d9f],BL   ; 004030ba
    MOV DL,byte ptr [EAX + 0x1bd1e9f]   ; 004030c0
    MOV byte ptr [EAX + 0x1bd2e9f],BL   ; 004030c6
    MOV byte ptr [EAX + 0x1bd1d9f],DL   ; 004030cc
    CMP EAX,0x100                       ; 004030d2
    JL 0x004030b9                       ; 004030d7
        ;   XREF to: 004030b9 (CONDITIONAL_JUMP)  ; LAB_004030b9
    PUSH EBX                            ; 004030d9
    CALL engine_special.cpp_setFogColorFromPalette_FUN_00532a80 ; 004030da
        ;   XREF to: 00532a80 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_setFogColorFromPalette_FUN_00532a80(int palette_index)
    ADD ESP,0x4                         ; 004030df
    POP EDI                             ; 004030e2
    POP EBX                             ; 004030e3
    RET                                 ; 004030e4
    PUSH EBX                            ; 004030e5
        ;   Label: LAB_004030e5
    CALL engine_2d.c_FUN_00402e90       ; 004030e6
        ;   XREF to: 00402e90 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_FUN_00402e90()
    ADD ESP,0x4                         ; 004030eb
    PUSH EDI                            ; 004030ee
    CALL engine_2d.c_FUN_00403130       ; 004030ef
        ;   XREF to: 00403130 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_FUN_00403130()
    ADD ESP,0x4                         ; 004030f4
    PUSH 0x577193                       ; 004030f7 | = "rb"
    PUSH EDI                            ; 004030fc
    PUSH 0x577196                       ; 004030fd | = "fog"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 00403102
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00403107
    MOV ESI,EAX                         ; 0040310a
    JMP 0x00403094                      ; 0040310c
        ;   XREF to: 00403094 (UNCONDITIONAL_JUMP)  ; LAB_00403094
    MOV EDX,0x57719a                    ; 0040310e | = "..\\engine\\2d.c"
        ;   Label: LAB_0040310e
    MOV ECX,0x69c                       ; 00403113
    PUSH 0x5771a9                       ; 00403118 | = "Unable to read fog table."
    MOV dword ptr [0x01cc4800],EDX      ; 0040311d | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 00403123 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00403129
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    JMP 0x004030b3                      ; 0040312e
        ;   XREF to: 004030b3 (UNCONDITIONAL_JUMP)  ; LAB_004030b3


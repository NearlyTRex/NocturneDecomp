; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_model_c_loadModelFile_FUN_004f7f20(char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; Local Variables:
; undefined        Stack[-0x5c]:1  local_5c
;
; XREF[2]:
;   engine_keyframe.c_loadAndInterpolateKeyframes_FUN_004dee60 at 004defb2
;   engine_model.c_FUN_004f8170 at 004f8584
;
; Referenced Globals:
;   TerminatedCString s_models_005c8f53
;   TerminatedCString s_Unable_to_get_file_size_005c8f5a
;   TerminatedCString s_engine_model_c_005c8f76
;   undefined4 DAT_005c8f88
;   TerminatedCString s_models_005c8f8b
;   TerminatedCString s_Unable_to_open_model_s_005c8f92
;   TerminatedCString s_engine_model_c_005c8fab
;   TerminatedCString s_Out_of_model_memory_s_005c8fbd
;   TerminatedCString s_engine_model_c_005c8fd5
;   TerminatedCString s_Model_file_read_error_s_005c8fe7
;   TerminatedCString s_engine_model_c_005c9001
;   TerminatedCString s_Invalid_model_s_005c9013
;   TerminatedCString s_engine_model_c_005c9025
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_ctype.c_toupper_FUN_005a4120
;   crt_memory.c_malloc_FUN_005a3650
;   crt_stdio.c_fclose_FUN_005a3a90
;   crt_stdio.c_fread_FUN_005a3890
;   crt_unknown.c_sprintf_FUN_005a28c0
;   engine_boss.c_modelStructNotSupported2_FUN_0041ac60
;   engine_dosio.cpp_FUN_004659c0
;   engine_dosio.cpp_getFileSize_FUN_004657f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f7f20
        ;   Label: engine_model.c_loadModelFile_FUN_004f7f20
    PUSH ESI                            ; 004f7f21
    PUSH EBP                            ; 004f7f22
    SUB ESP,0x50                        ; 004f7f23
    MOV EBX,dword ptr [ESP + 0x60]      ; 004f7f26
    MOV DL,0x2e                         ; 004f7f2a
    MOV ESI,EBX                         ; 004f7f2c
    MOV AL,byte ptr [ESI]               ; 004f7f2e
        ;   Label: LAB_004f7f2e
    CMP AL,DL                           ; 004f7f30
    JZ 0x004f7f46                       ; 004f7f32
        ;   XREF to: 004f7f46 (CONDITIONAL_JUMP)  ; LAB_004f7f46
    CMP AL,0x0                          ; 004f7f34
    JZ 0x004f7f44                       ; 004f7f36
        ;   XREF to: 004f7f44 (CONDITIONAL_JUMP)  ; LAB_004f7f44
    INC ESI                             ; 004f7f38
    MOV AL,byte ptr [ESI]               ; 004f7f39
    CMP AL,DL                           ; 004f7f3b
    JZ 0x004f7f46                       ; 004f7f3d
        ;   XREF to: 004f7f46 (CONDITIONAL_JUMP)  ; LAB_004f7f46
    INC ESI                             ; 004f7f3f
    CMP AL,0x0                          ; 004f7f40
    JNZ 0x004f7f2e                      ; 004f7f42
        ;   XREF to: 004f7f2e (CONDITIONAL_JUMP)  ; LAB_004f7f2e
    SUB ESI,ESI                         ; 004f7f44
        ;   Label: LAB_004f7f44
    TEST ESI,ESI                        ; 004f7f46
        ;   Label: LAB_004f7f46
    JNZ 0x004f80c5                      ; 004f7f48
        ;   XREF to: 004f80c5 (CONDITIONAL_JUMP)  ; LAB_004f80c5
    PUSH EBX                            ; 004f7f4e
        ;   Label: LAB_004f7f4e
    PUSH 0x5c8f53                       ; 004f7f4f | = "models"
    CALL engine_dosio.cpp_getFileSize_FUN_004657f0 ; 004f7f54
        ;   XREF to: 004657f0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_004657f0(char * directory, char * filename)
    ADD ESP,0x8                         ; 004f7f59
    MOV ESI,EAX                         ; 004f7f5c
    TEST EAX,EAX                        ; 004f7f5e
    JNZ 0x004f7f96                      ; 004f7f60
        ;   XREF to: 004f7f96 (CONDITIONAL_JUMP)  ; LAB_004f7f96
    PUSH EBX                            ; 004f7f62
    PUSH 0x5c8f5a                       ; 004f7f63 | = "Unable to get file size: %s"
    LEA EAX,[ESP + 0x8]                 ; 004f7f68
    PUSH EAX                            ; 004f7f6c
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004f7f6d
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    MOV EDX,0x5c8f76                    ; 004f7f72 | = "..\\engine\\model.c"
    ADD ESP,0xc                         ; 004f7f77
    MOV EAX,ESP                         ; 004f7f7a
    MOV ECX,0xf0                        ; 004f7f7c
    PUSH EAX                            ; 004f7f81
    MOV dword ptr [0x01d71de0],EDX      ; 004f7f82 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004f7f88 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004f7f8e
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004f7f93
    PUSH EDI                            ; 004f7f96
        ;   Label: LAB_004f7f96
    PUSH 0x5c8f88                       ; 004f7f97 | DAT_005c8f88
    PUSH EBX                            ; 004f7f9c
    PUSH 0x5c8f8b                       ; 004f7f9d | = "models"
    CALL engine_dosio.cpp_FUN_004659c0  ; 004f7fa2
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_004659c0(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004f7fa7
    MOV EBP,EAX                         ; 004f7faa
    TEST EAX,EAX                        ; 004f7fac
    JNZ 0x004f7fe5                      ; 004f7fae
        ;   XREF to: 004f7fe5 (CONDITIONAL_JUMP)  ; LAB_004f7fe5
    PUSH EBX                            ; 004f7fb0
    PUSH 0x5c8f92                       ; 004f7fb1 | = "Unable to open model: %s"
    LEA EAX,[ESP + 0xc]                 ; 004f7fb6
    PUSH EAX                            ; 004f7fba
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004f7fbb
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    MOV EAX,0xf5                        ; 004f7fc0
    ADD ESP,0xc                         ; 004f7fc5
    MOV [0x01d71de4],EAX                ; 004f7fc8 | DAT_01d71de4
    LEA EAX,[ESP + 0x4]                 ; 004f7fcd
    MOV EDI,0x5c8fab                    ; 004f7fd1 | = "..\\engine\\model.c"
    PUSH EAX                            ; 004f7fd6
    MOV dword ptr [0x01d71de0],EDI      ; 004f7fd7 | DAT_01d71de0
    CALL core_main.c_FUN_004e4330       ; 004f7fdd
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004f7fe2
    PUSH ESI                            ; 004f7fe5
        ;   Label: LAB_004f7fe5
    CALL crt_memory.c_malloc_FUN_005a3650 ; 004f7fe6
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 004f7feb
    MOV EDI,EAX                         ; 004f7fee
    TEST EAX,EAX                        ; 004f7ff0
    JNZ 0x004f802a                      ; 004f7ff2
        ;   XREF to: 004f802a (CONDITIONAL_JUMP)  ; LAB_004f802a
    PUSH EBX                            ; 004f7ff4
    PUSH 0x5c8fbd                       ; 004f7ff5 | = "Out of model memory: %s"
    LEA EAX,[ESP + 0xc]                 ; 004f7ffa
    PUSH EAX                            ; 004f7ffe
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004f7fff
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    MOV EDX,0x5c8fd5                    ; 004f8004 | = "..\\engine\\model.c"
    ADD ESP,0xc                         ; 004f8009
    LEA EAX,[ESP + 0x4]                 ; 004f800c
    MOV ECX,0x100                       ; 004f8010
    PUSH EAX                            ; 004f8015
    MOV dword ptr [0x01d71de0],EDX      ; 004f8016 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004f801c | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004f8022
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004f8027
    PUSH EBP                            ; 004f802a
        ;   Label: LAB_004f802a
    PUSH ESI                            ; 004f802b
    PUSH 0x1                            ; 004f802c
    PUSH EDI                            ; 004f802e
    CALL crt_stdio.c_fread_FUN_005a3890 ; 004f802f
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005a3890(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004f8034
    CMP EAX,ESI                         ; 004f8037
    JZ 0x004f8070                       ; 004f8039
        ;   XREF to: 004f8070 (CONDITIONAL_JUMP)  ; LAB_004f8070
    PUSH EBX                            ; 004f803b
    PUSH 0x5c8fe7                       ; 004f803c | = "Model file read error: %s"
    LEA EAX,[ESP + 0xc]                 ; 004f8041
    PUSH EAX                            ; 004f8045
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004f8046
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    MOV EAX,0x107                       ; 004f804b
    ADD ESP,0xc                         ; 004f8050
    MOV [0x01d71de4],EAX                ; 004f8053 | DAT_01d71de4
    LEA EAX,[ESP + 0x4]                 ; 004f8058
    MOV ESI,0x5c9001                    ; 004f805c | = "..\\engine\\model.c"
    PUSH EAX                            ; 004f8061
    MOV dword ptr [0x01d71de0],ESI      ; 004f8062 | DAT_01d71de0
    CALL core_main.c_FUN_004e4330       ; 004f8068
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004f806d
    PUSH EBP                            ; 004f8070
        ;   Label: LAB_004f8070
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 004f8071
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    MOV EAX,dword ptr [EDI]             ; 004f8076
    ADD ESP,0x4                         ; 004f8078
    CMP EAX,0x14                        ; 004f807b
    JZ 0x004f80bb                       ; 004f807e
        ;   XREF to: 004f80bb (CONDITIONAL_JUMP)  ; LAB_004f80bb
    CMP EAX,0x20                        ; 004f8080
    JZ 0x004f80bb                       ; 004f8083
        ;   XREF to: 004f80bb (CONDITIONAL_JUMP)  ; LAB_004f80bb
    PUSH EBX                            ; 004f8085
    PUSH 0x5c9013                       ; 004f8086 | = "Invalid model: %s"
    LEA EAX,[ESP + 0xc]                 ; 004f808b
    PUSH EAX                            ; 004f808f
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004f8090
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    MOV EDX,0x5c9025                    ; 004f8095 | = "..\\engine\\model.c"
    ADD ESP,0xc                         ; 004f809a
    LEA EAX,[ESP + 0x4]                 ; 004f809d
    MOV ECX,0x10e                       ; 004f80a1
    PUSH EAX                            ; 004f80a6
    MOV dword ptr [0x01d71de0],EDX      ; 004f80a7 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004f80ad | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004f80b3
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004f80b8
    MOV EAX,EDI                         ; 004f80bb
        ;   Label: LAB_004f80bb
    POP EDI                             ; 004f80bd
    ADD ESP,0x50                        ; 004f80be
    POP EBP                             ; 004f80c1
    POP ESI                             ; 004f80c2
    POP EBX                             ; 004f80c3
    RET                                 ; 004f80c4
    XOR EAX,EAX                         ; 004f80c5
        ;   Label: LAB_004f80c5
    MOV AL,byte ptr [ESI + 0x1]         ; 004f80c7
    PUSH EAX                            ; 004f80ca
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004f80cb
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004f80d0
    CMP EAX,0x54                        ; 004f80d3
    JNZ 0x004f7f4e                      ; 004f80d6
        ;   XREF to: 004f7f4e (CONDITIONAL_JUMP)  ; LAB_004f7f4e
    PUSH EBX                            ; 004f80dc
    CALL engine_boss.c_modelStructNotSupported2_FUN_0041ac60 ; 004f80dd
        ;   XREF to: 0041ac60 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_boss.c_modelStructNotSupported2_FUN_0041ac60(char * filename)
    ADD ESP,0x4                         ; 004f80e2
    ADD ESP,0x50                        ; 004f80e5
    POP EBP                             ; 004f80e8
    POP ESI                             ; 004f80e9
    POP EBX                             ; 004f80ea
    RET                                 ; 004f80eb


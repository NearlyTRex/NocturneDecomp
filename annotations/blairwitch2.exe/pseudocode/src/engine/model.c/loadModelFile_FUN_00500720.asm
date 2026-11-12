; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_model_c_loadModelFile_FUN_00500720(char *param_1)
;
; Local Variables:
; undefined        Stack[-0x5c]:1  local_5c
;
; XREF[2]:
;   engine_keyframe.c_loadAndInterpolateKeyframes_FUN_004df770 at 004df8c2
;   engine_model.c_FUN_00500970 at 00500d84
;
; Referenced Globals:
;   TerminatedCString s_models_005def60
;   TerminatedCString s_Unable_to_get_file_size_005def67
;   TerminatedCString s_engine_model_c_005def83
;   undefined4 DAT_005def95
;   TerminatedCString s_models_005def98
;   TerminatedCString s_Unable_to_open_model_s_005def9f
;   TerminatedCString s_engine_model_c_005defb8
;   TerminatedCString s_Out_of_model_memory_s_005defca
;   TerminatedCString s_engine_model_c_005defe2
;   TerminatedCString s_Model_file_read_error_s_005deff4
;   TerminatedCString s_engine_model_c_005df00e
;   TerminatedCString s_Invalid_model_s_005df020
;   TerminatedCString s_engine_model_c_005df032
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_ctype.c_toupper_FUN_005b8e40
;   crt_memory.c_malloc_FUN_005b8580
;   crt_stdio.c_fclose_FUN_005b89c0
;   crt_stdio.c_fread_FUN_005b87c0
;   crt_unknown.c_sprintf_FUN_005b7790
;   engine_boss.c_modelStructNotSupported2_FUN_0041a4b0
;   engine_dosio.cpp_FUN_00460c70
;   engine_dosio.cpp_getFileSize_FUN_00460aa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00500720
        ;   Label: engine_model.c_loadModelFile_FUN_00500720
    PUSH ESI                            ; 00500721
    PUSH EBP                            ; 00500722
    SUB ESP,0x50                        ; 00500723
    MOV EBX,dword ptr [ESP + 0x60]      ; 00500726
    MOV DL,0x2e                         ; 0050072a
    MOV ESI,EBX                         ; 0050072c
    MOV AL,byte ptr [ESI]               ; 0050072e
        ;   Label: LAB_0050072e
    CMP AL,DL                           ; 00500730
    JZ 0x00500746                       ; 00500732
        ;   XREF to: 00500746 (CONDITIONAL_JUMP)  ; LAB_00500746
    CMP AL,0x0                          ; 00500734
    JZ 0x00500744                       ; 00500736
        ;   XREF to: 00500744 (CONDITIONAL_JUMP)  ; LAB_00500744
    INC ESI                             ; 00500738
    MOV AL,byte ptr [ESI]               ; 00500739
    CMP AL,DL                           ; 0050073b
    JZ 0x00500746                       ; 0050073d
        ;   XREF to: 00500746 (CONDITIONAL_JUMP)  ; LAB_00500746
    INC ESI                             ; 0050073f
    CMP AL,0x0                          ; 00500740
    JNZ 0x0050072e                      ; 00500742
        ;   XREF to: 0050072e (CONDITIONAL_JUMP)  ; LAB_0050072e
    SUB ESI,ESI                         ; 00500744
        ;   Label: LAB_00500744
    TEST ESI,ESI                        ; 00500746
        ;   Label: LAB_00500746
    JNZ 0x005008c5                      ; 00500748
        ;   XREF to: 005008c5 (CONDITIONAL_JUMP)  ; LAB_005008c5
    PUSH EBX                            ; 0050074e
        ;   Label: LAB_0050074e
    PUSH 0x5def60                       ; 0050074f | = "models"
    CALL engine_dosio.cpp_getFileSize_FUN_00460aa0 ; 00500754
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_00460aa0(char * directory, char * filename)
    ADD ESP,0x8                         ; 00500759
    MOV ESI,EAX                         ; 0050075c
    TEST EAX,EAX                        ; 0050075e
    JNZ 0x00500796                      ; 00500760
        ;   XREF to: 00500796 (CONDITIONAL_JUMP)  ; LAB_00500796
    PUSH EBX                            ; 00500762
    PUSH 0x5def67                       ; 00500763 | = "Unable to get file size: %s"
    LEA EAX,[ESP + 0x8]                 ; 00500768
    PUSH EAX                            ; 0050076c
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0050076d
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    MOV EDX,0x5def83                    ; 00500772 | = "..\\engine\\model.c"
    ADD ESP,0xc                         ; 00500777
    MOV EAX,ESP                         ; 0050077a
    MOV ECX,0xf0                        ; 0050077c
    PUSH EAX                            ; 00500781
    MOV dword ptr [0x01d046a0],EDX      ; 00500782 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00500788 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0050078e
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00500793
    PUSH EDI                            ; 00500796
        ;   Label: LAB_00500796
    PUSH 0x5def95                       ; 00500797 | DAT_005def95
    PUSH EBX                            ; 0050079c
    PUSH 0x5def98                       ; 0050079d | = "models"
    CALL engine_dosio.cpp_FUN_00460c70  ; 005007a2
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00460c70(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 005007a7
    MOV EBP,EAX                         ; 005007aa
    TEST EAX,EAX                        ; 005007ac
    JNZ 0x005007e5                      ; 005007ae
        ;   XREF to: 005007e5 (CONDITIONAL_JUMP)  ; LAB_005007e5
    PUSH EBX                            ; 005007b0
    PUSH 0x5def9f                       ; 005007b1 | = "Unable to open model: %s"
    LEA EAX,[ESP + 0xc]                 ; 005007b6
    PUSH EAX                            ; 005007ba
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 005007bb
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    MOV EAX,0xf5                        ; 005007c0
    ADD ESP,0xc                         ; 005007c5
    MOV [0x01d046a4],EAX                ; 005007c8 | DAT_01d046a4
    LEA EAX,[ESP + 0x4]                 ; 005007cd
    MOV EDI,0x5defb8                    ; 005007d1 | = "..\\engine\\model.c"
    PUSH EAX                            ; 005007d6
    MOV dword ptr [0x01d046a0],EDI      ; 005007d7 | DAT_01d046a0
    CALL core_main.c_FUN_004e4500       ; 005007dd
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005007e2
    PUSH ESI                            ; 005007e5
        ;   Label: LAB_005007e5
    CALL crt_memory.c_malloc_FUN_005b8580 ; 005007e6
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 005007eb
    MOV EDI,EAX                         ; 005007ee
    TEST EAX,EAX                        ; 005007f0
    JNZ 0x0050082a                      ; 005007f2
        ;   XREF to: 0050082a (CONDITIONAL_JUMP)  ; LAB_0050082a
    PUSH EBX                            ; 005007f4
    PUSH 0x5defca                       ; 005007f5 | = "Out of model memory: %s"
    LEA EAX,[ESP + 0xc]                 ; 005007fa
    PUSH EAX                            ; 005007fe
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 005007ff
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    MOV EDX,0x5defe2                    ; 00500804 | = "..\\engine\\model.c"
    ADD ESP,0xc                         ; 00500809
    LEA EAX,[ESP + 0x4]                 ; 0050080c
    MOV ECX,0x100                       ; 00500810
    PUSH EAX                            ; 00500815
    MOV dword ptr [0x01d046a0],EDX      ; 00500816 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0050081c | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00500822
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00500827
    PUSH EBP                            ; 0050082a
        ;   Label: LAB_0050082a
    PUSH ESI                            ; 0050082b
    PUSH 0x1                            ; 0050082c
    PUSH EDI                            ; 0050082e
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 0050082f
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005b87c0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 00500834
    CMP EAX,ESI                         ; 00500837
    JZ 0x00500870                       ; 00500839
        ;   XREF to: 00500870 (CONDITIONAL_JUMP)  ; LAB_00500870
    PUSH EBX                            ; 0050083b
    PUSH 0x5deff4                       ; 0050083c | = "Model file read error: %s"
    LEA EAX,[ESP + 0xc]                 ; 00500841
    PUSH EAX                            ; 00500845
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00500846
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    MOV EAX,0x107                       ; 0050084b
    ADD ESP,0xc                         ; 00500850
    MOV [0x01d046a4],EAX                ; 00500853 | DAT_01d046a4
    LEA EAX,[ESP + 0x4]                 ; 00500858
    MOV ESI,0x5df00e                    ; 0050085c | = "..\\engine\\model.c"
    PUSH EAX                            ; 00500861
    MOV dword ptr [0x01d046a0],ESI      ; 00500862 | DAT_01d046a0
    CALL core_main.c_FUN_004e4500       ; 00500868
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0050086d
    PUSH EBP                            ; 00500870
        ;   Label: LAB_00500870
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 00500871
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    MOV EAX,dword ptr [EDI]             ; 00500876
    ADD ESP,0x4                         ; 00500878
    CMP EAX,0x14                        ; 0050087b
    JZ 0x005008bb                       ; 0050087e
        ;   XREF to: 005008bb (CONDITIONAL_JUMP)  ; LAB_005008bb
    CMP EAX,0x20                        ; 00500880
    JZ 0x005008bb                       ; 00500883
        ;   XREF to: 005008bb (CONDITIONAL_JUMP)  ; LAB_005008bb
    PUSH EBX                            ; 00500885
    PUSH 0x5df020                       ; 00500886 | = "Invalid model: %s"
    LEA EAX,[ESP + 0xc]                 ; 0050088b
    PUSH EAX                            ; 0050088f
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00500890
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    MOV EDX,0x5df032                    ; 00500895 | = "..\\engine\\model.c"
    ADD ESP,0xc                         ; 0050089a
    LEA EAX,[ESP + 0x4]                 ; 0050089d
    MOV ECX,0x10e                       ; 005008a1
    PUSH EAX                            ; 005008a6
    MOV dword ptr [0x01d046a0],EDX      ; 005008a7 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 005008ad | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005008b3
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005008b8
    MOV EAX,EDI                         ; 005008bb
        ;   Label: LAB_005008bb
    POP EDI                             ; 005008bd
    ADD ESP,0x50                        ; 005008be
    POP EBP                             ; 005008c1
    POP ESI                             ; 005008c2
    POP EBX                             ; 005008c3
    RET                                 ; 005008c4
    XOR EAX,EAX                         ; 005008c5
        ;   Label: LAB_005008c5
    MOV AL,byte ptr [ESI + 0x1]         ; 005008c7
    PUSH EAX                            ; 005008ca
    CALL crt_ctype.c_toupper_FUN_005b8e40 ; 005008cb
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005b8e40(int c)
    ADD ESP,0x4                         ; 005008d0
    CMP EAX,0x54                        ; 005008d3
    JNZ 0x0050074e                      ; 005008d6
        ;   XREF to: 0050074e (CONDITIONAL_JUMP)  ; LAB_0050074e
    PUSH EBX                            ; 005008dc
    CALL engine_boss.c_modelStructNotSupported2_FUN_0041a4b0 ; 005008dd
        ;   XREF to: 0041a4b0 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_boss.c_modelStructNotSupported2_FUN_0041a4b0(char * filename)
    ADD ESP,0x4                         ; 005008e2
    ADD ESP,0x50                        ; 005008e5
    POP EBP                             ; 005008e8
    POP ESI                             ; 005008e9
    POP EBX                             ; 005008ea
    RET                                 ; 005008eb


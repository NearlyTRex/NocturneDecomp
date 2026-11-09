; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * __cdecl engine_model_c_loadModelFile_FUN_0051f6d0(char *param_1)
;
; Local Variables:
; undefined        Stack[-0x5c]:1  local_5c
;
; XREF[2]:
;   engine_keyframe.c_loadAndInterpolateKeyframes_FUN_004fcb40 at 004fcc92
;   engine_model.c_FUN_0051f920 at 0051fd34
;
; Referenced Globals:
;   TerminatedCString s_models_005e9fad
;   TerminatedCString s_Unable_to_get_file_size_005e9fb4
;   TerminatedCString s_engine_model_c_005e9fd0
;   undefined4 DAT_005e9fe2
;   TerminatedCString s_models_005e9fe5
;   TerminatedCString s_Unable_to_open_model_s_005e9fec
;   TerminatedCString s_engine_model_c_005ea005
;   TerminatedCString s_Out_of_model_memory_s_005ea017
;   TerminatedCString s_engine_model_c_005ea02f
;   TerminatedCString s_Model_file_read_error_s_005ea041
;   TerminatedCString s_engine_model_c_005ea05b
;   TerminatedCString s_Invalid_model_s_005ea06d
;   TerminatedCString s_engine_model_c_005ea07f
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_ctype.c_toupper_FUN_005c12b0
;   crt_stdio.c_fclose_FUN_005c0d10
;   crt_stdio.c_fread_FUN_005c0b10
;   crt_unknown.c_FUN_005bfb40
;   crt_unknown.c_FUN_005c08d0
;   engine_boss.c_modelStructNotSupported2_FUN_0041d920
;   engine_dosio.cpp_FUN_00479180
;   engine_dosio.cpp_getFileSize_FUN_00478fb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051f6d0
        ;   Label: engine_model.c_loadModelFile_FUN_0051f6d0
    PUSH ESI                            ; 0051f6d1
    PUSH EBP                            ; 0051f6d2
    SUB ESP,0x50                        ; 0051f6d3
    MOV EBX,dword ptr [ESP + 0x60]      ; 0051f6d6
    MOV DL,0x2e                         ; 0051f6da
    MOV ESI,EBX                         ; 0051f6dc
    MOV AL,byte ptr [ESI]               ; 0051f6de
        ;   Label: LAB_0051f6de
    CMP AL,DL                           ; 0051f6e0
    JZ 0x0051f6f6                       ; 0051f6e2
        ;   XREF to: 0051f6f6 (CONDITIONAL_JUMP)  ; LAB_0051f6f6
    CMP AL,0x0                          ; 0051f6e4
    JZ 0x0051f6f4                       ; 0051f6e6
        ;   XREF to: 0051f6f4 (CONDITIONAL_JUMP)  ; LAB_0051f6f4
    INC ESI                             ; 0051f6e8
    MOV AL,byte ptr [ESI]               ; 0051f6e9
    CMP AL,DL                           ; 0051f6eb
    JZ 0x0051f6f6                       ; 0051f6ed
        ;   XREF to: 0051f6f6 (CONDITIONAL_JUMP)  ; LAB_0051f6f6
    INC ESI                             ; 0051f6ef
    CMP AL,0x0                          ; 0051f6f0
    JNZ 0x0051f6de                      ; 0051f6f2
        ;   XREF to: 0051f6de (CONDITIONAL_JUMP)  ; LAB_0051f6de
    SUB ESI,ESI                         ; 0051f6f4
        ;   Label: LAB_0051f6f4
    TEST ESI,ESI                        ; 0051f6f6
        ;   Label: LAB_0051f6f6
    JNZ 0x0051f875                      ; 0051f6f8
        ;   XREF to: 0051f875 (CONDITIONAL_JUMP)  ; LAB_0051f875
    PUSH EBX                            ; 0051f6fe
        ;   Label: LAB_0051f6fe
    PUSH 0x5e9fad                       ; 0051f6ff | = "models"
    CALL engine_dosio.cpp_getFileSize_FUN_00478fb0 ; 0051f704
        ;   XREF to: 00478fb0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_00478fb0(char * directory, char * filename)
    ADD ESP,0x8                         ; 0051f709
    MOV ESI,EAX                         ; 0051f70c
    TEST EAX,EAX                        ; 0051f70e
    JNZ 0x0051f746                      ; 0051f710
        ;   XREF to: 0051f746 (CONDITIONAL_JUMP)  ; LAB_0051f746
    PUSH EBX                            ; 0051f712
    PUSH 0x5e9fb4                       ; 0051f713 | = "Unable to get file size: %s"
    LEA EAX,[ESP + 0x8]                 ; 0051f718
    PUSH EAX                            ; 0051f71c
    CALL crt_unknown.c_FUN_005bfb40     ; 0051f71d
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    MOV EDX,0x5e9fd0                    ; 0051f722 | = "..\\engine\\model.c"
    ADD ESP,0xc                         ; 0051f727
    MOV EAX,ESP                         ; 0051f72a
    MOV ECX,0xf0                        ; 0051f72c
    PUSH EAX                            ; 0051f731
    MOV dword ptr [0x01d1d400],EDX      ; 0051f732 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0051f738 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0051f73e
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0051f743
    PUSH EDI                            ; 0051f746
        ;   Label: LAB_0051f746
    PUSH 0x5e9fe2                       ; 0051f747 | DAT_005e9fe2
    PUSH EBX                            ; 0051f74c
    PUSH 0x5e9fe5                       ; 0051f74d | = "models"
    CALL engine_dosio.cpp_FUN_00479180  ; 0051f752
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00479180(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0051f757
    MOV EBP,EAX                         ; 0051f75a
    TEST EAX,EAX                        ; 0051f75c
    JNZ 0x0051f795                      ; 0051f75e
        ;   XREF to: 0051f795 (CONDITIONAL_JUMP)  ; LAB_0051f795
    PUSH EBX                            ; 0051f760
    PUSH 0x5e9fec                       ; 0051f761 | = "Unable to open model: %s"
    LEA EAX,[ESP + 0xc]                 ; 0051f766
    PUSH EAX                            ; 0051f76a
    CALL crt_unknown.c_FUN_005bfb40     ; 0051f76b
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    MOV EAX,0xf5                        ; 0051f770
    ADD ESP,0xc                         ; 0051f775
    MOV [0x01d1d404],EAX                ; 0051f778 | DAT_01d1d404
    LEA EAX,[ESP + 0x4]                 ; 0051f77d
    MOV EDI,0x5ea005                    ; 0051f781 | = "..\\engine\\model.c"
    PUSH EAX                            ; 0051f786
    MOV dword ptr [0x01d1d400],EDI      ; 0051f787 | DAT_01d1d400
    CALL core_main.c_FUN_005030e0       ; 0051f78d
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0051f792
    PUSH ESI                            ; 0051f795
        ;   Label: LAB_0051f795
    CALL crt_unknown.c_FUN_005c08d0     ; 0051f796
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 0051f79b
    MOV EDI,EAX                         ; 0051f79e
    TEST EAX,EAX                        ; 0051f7a0
    JNZ 0x0051f7da                      ; 0051f7a2
        ;   XREF to: 0051f7da (CONDITIONAL_JUMP)  ; LAB_0051f7da
    PUSH EBX                            ; 0051f7a4
    PUSH 0x5ea017                       ; 0051f7a5 | = "Out of model memory: %s"
    LEA EAX,[ESP + 0xc]                 ; 0051f7aa
    PUSH EAX                            ; 0051f7ae
    CALL crt_unknown.c_FUN_005bfb40     ; 0051f7af
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    MOV EDX,0x5ea02f                    ; 0051f7b4 | = "..\\engine\\model.c"
    ADD ESP,0xc                         ; 0051f7b9
    LEA EAX,[ESP + 0x4]                 ; 0051f7bc
    MOV ECX,0x100                       ; 0051f7c0
    PUSH EAX                            ; 0051f7c5
    MOV dword ptr [0x01d1d400],EDX      ; 0051f7c6 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0051f7cc | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0051f7d2
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0051f7d7
    PUSH EBP                            ; 0051f7da
        ;   Label: LAB_0051f7da
    PUSH ESI                            ; 0051f7db
    PUSH 0x1                            ; 0051f7dc
    PUSH EDI                            ; 0051f7de
    CALL crt_stdio.c_fread_FUN_005c0b10 ; 0051f7df
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005c0b10()
    ADD ESP,0x10                        ; 0051f7e4
    CMP EAX,ESI                         ; 0051f7e7
    JZ 0x0051f820                       ; 0051f7e9
        ;   XREF to: 0051f820 (CONDITIONAL_JUMP)  ; LAB_0051f820
    PUSH EBX                            ; 0051f7eb
    PUSH 0x5ea041                       ; 0051f7ec | = "Model file read error: %s"
    LEA EAX,[ESP + 0xc]                 ; 0051f7f1
    PUSH EAX                            ; 0051f7f5
    CALL crt_unknown.c_FUN_005bfb40     ; 0051f7f6
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    MOV EAX,0x107                       ; 0051f7fb
    ADD ESP,0xc                         ; 0051f800
    MOV [0x01d1d404],EAX                ; 0051f803 | DAT_01d1d404
    LEA EAX,[ESP + 0x4]                 ; 0051f808
    MOV ESI,0x5ea05b                    ; 0051f80c | = "..\\engine\\model.c"
    PUSH EAX                            ; 0051f811
    MOV dword ptr [0x01d1d400],ESI      ; 0051f812 | DAT_01d1d400
    CALL core_main.c_FUN_005030e0       ; 0051f818
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0051f81d
    PUSH EBP                            ; 0051f820
        ;   Label: LAB_0051f820
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 0051f821
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    MOV EAX,dword ptr [EDI]             ; 0051f826
    ADD ESP,0x4                         ; 0051f828
    CMP EAX,0x14                        ; 0051f82b
    JZ 0x0051f86b                       ; 0051f82e
        ;   XREF to: 0051f86b (CONDITIONAL_JUMP)  ; LAB_0051f86b
    CMP EAX,0x20                        ; 0051f830
    JZ 0x0051f86b                       ; 0051f833
        ;   XREF to: 0051f86b (CONDITIONAL_JUMP)  ; LAB_0051f86b
    PUSH EBX                            ; 0051f835
    PUSH 0x5ea06d                       ; 0051f836 | = "Invalid model: %s"
    LEA EAX,[ESP + 0xc]                 ; 0051f83b
    PUSH EAX                            ; 0051f83f
    CALL crt_unknown.c_FUN_005bfb40     ; 0051f840
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    MOV EDX,0x5ea07f                    ; 0051f845 | = "..\\engine\\model.c"
    ADD ESP,0xc                         ; 0051f84a
    LEA EAX,[ESP + 0x4]                 ; 0051f84d
    MOV ECX,0x10e                       ; 0051f851
    PUSH EAX                            ; 0051f856
    MOV dword ptr [0x01d1d400],EDX      ; 0051f857 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0051f85d | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0051f863
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0051f868
    MOV EAX,EDI                         ; 0051f86b
        ;   Label: LAB_0051f86b
    POP EDI                             ; 0051f86d
    ADD ESP,0x50                        ; 0051f86e
    POP EBP                             ; 0051f871
    POP ESI                             ; 0051f872
    POP EBX                             ; 0051f873
    RET                                 ; 0051f874
    XOR EAX,EAX                         ; 0051f875
        ;   Label: LAB_0051f875
    MOV AL,byte ptr [ESI + 0x1]         ; 0051f877
    PUSH EAX                            ; 0051f87a
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 0051f87b
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 0051f880
    CMP EAX,0x54                        ; 0051f883
    JNZ 0x0051f6fe                      ; 0051f886
        ;   XREF to: 0051f6fe (CONDITIONAL_JUMP)  ; LAB_0051f6fe
    PUSH EBX                            ; 0051f88c
    CALL engine_boss.c_modelStructNotSupported2_FUN_0041d920 ; 0051f88d
        ;   XREF to: 0041d920 (UNCONDITIONAL_CALL)  ; undefined engine_boss.c_modelStructNotSupported2_FUN_0041d920()
    ADD ESP,0x4                         ; 0051f892
    ADD ESP,0x50                        ; 0051f895
    POP EBP                             ; 0051f898
    POP ESI                             ; 0051f899
    POP EBX                             ; 0051f89a
    RET                                 ; 0051f89b


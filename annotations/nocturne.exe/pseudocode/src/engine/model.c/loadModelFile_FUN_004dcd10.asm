; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl engine_model_c_loadModelFile_FUN_004dcd10(char *param_1)
;
; Local Variables:
; undefined        Stack[-0x5c]:1  local_5c
;
; XREF[2]:
;   engine_keyframe.c_loadAndInterpolateKeyframes_FUN_004c3aa0 at 004c3bf2
;   engine_model.c_FUN_004dcf60 at 004dd374
;
; Referenced Globals:
;   TerminatedCString s_models_0058a4f4
;   TerminatedCString s_Unable_to_get_file_size_0058a4fb
;   TerminatedCString s_engine_model_c_0058a517
;   TerminatedCString s_rb_0058a529
;   TerminatedCString s_models_0058a52c
;   TerminatedCString s_Unable_to_open_model_s_0058a533
;   TerminatedCString s_engine_model_c_0058a54c
;   TerminatedCString s_Out_of_model_memory_s_0058a55e
;   TerminatedCString s_engine_model_c_0058a576
;   TerminatedCString s_Model_file_read_error_s_0058a588
;   TerminatedCString s_engine_model_c_0058a5a2
;   TerminatedCString s_Invalid_model_s_0058a5b4
;   TerminatedCString s_engine_model_c_0058a5c6
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_ctype.c_toupper_FUN_00565e20
;   crt_memory.c_malloc_FUN_005635b0
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fread_FUN_005636d0
;   crt_stdio.c_sprintf_FUN_00563c90
;   engine_boss.c_modelStructNotSupported2_FUN_0041a540
;   engine_dosio.cpp_getFile_FUN_00456a60
;   engine_dosio.cpp_getFileSize_FUN_004568c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dcd10
        ;   Label: engine_model.c_loadModelFile_FUN_004dcd10
    PUSH ESI                            ; 004dcd11
    PUSH EBP                            ; 004dcd12
    SUB ESP,0x50                        ; 004dcd13
    MOV EBX,dword ptr [ESP + 0x60]      ; 004dcd16
    MOV DL,0x2e                         ; 004dcd1a
    MOV ESI,EBX                         ; 004dcd1c
    MOV AL,byte ptr [ESI]               ; 004dcd1e
        ;   Label: LAB_004dcd1e
    CMP AL,DL                           ; 004dcd20
    JZ 0x004dcd36                       ; 004dcd22
        ;   XREF to: 004dcd36 (CONDITIONAL_JUMP)  ; LAB_004dcd36
    CMP AL,0x0                          ; 004dcd24
    JZ 0x004dcd34                       ; 004dcd26
        ;   XREF to: 004dcd34 (CONDITIONAL_JUMP)  ; LAB_004dcd34
    INC ESI                             ; 004dcd28
    MOV AL,byte ptr [ESI]               ; 004dcd29
    CMP AL,DL                           ; 004dcd2b
    JZ 0x004dcd36                       ; 004dcd2d
        ;   XREF to: 004dcd36 (CONDITIONAL_JUMP)  ; LAB_004dcd36
    INC ESI                             ; 004dcd2f
    CMP AL,0x0                          ; 004dcd30
    JNZ 0x004dcd1e                      ; 004dcd32
        ;   XREF to: 004dcd1e (CONDITIONAL_JUMP)  ; LAB_004dcd1e
    SUB ESI,ESI                         ; 004dcd34
        ;   Label: LAB_004dcd34
    TEST ESI,ESI                        ; 004dcd36
        ;   Label: LAB_004dcd36
    JNZ 0x004dceb7                      ; 004dcd38
        ;   XREF to: 004dceb7 (CONDITIONAL_JUMP)  ; LAB_004dceb7
    PUSH EDI                            ; 004dcd3e
        ;   Label: LAB_004dcd3e
    PUSH EBX                            ; 004dcd3f
    PUSH 0x58a4f4                       ; 004dcd40 | = "models"
    CALL engine_dosio.cpp_getFileSize_FUN_004568c0 ; 004dcd45
        ;   XREF to: 004568c0 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getFileSize_FUN_004568c0()
    ADD ESP,0x8                         ; 004dcd4a
    MOV EDI,EAX                         ; 004dcd4d
    TEST EAX,EAX                        ; 004dcd4f
    JNZ 0x004dcd89                      ; 004dcd51
        ;   XREF to: 004dcd89 (CONDITIONAL_JUMP)  ; LAB_004dcd89
    PUSH EBX                            ; 004dcd53
    PUSH 0x58a4fb                       ; 004dcd54 | = "Unable to get file size: %s"
    LEA EAX,[ESP + 0xc]                 ; 004dcd59
    PUSH EAX                            ; 004dcd5d
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004dcd5e
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    MOV EDX,0x58a517                    ; 004dcd63 | = "..\\engine\\model.c"
    ADD ESP,0xc                         ; 004dcd68
    LEA EAX,[ESP + 0x4]                 ; 004dcd6b
    MOV ECX,0xf0                        ; 004dcd6f
    PUSH EAX                            ; 004dcd74
    MOV dword ptr [0x01cc4800],EDX      ; 004dcd75 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004dcd7b | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004dcd81
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004dcd86
    PUSH 0x58a529                       ; 004dcd89 | = "rb"
        ;   Label: LAB_004dcd89
    PUSH EBX                            ; 004dcd8e
    PUSH 0x58a52c                       ; 004dcd8f | = "models"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 004dcd94
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getFile_FUN_00456a60()
    ADD ESP,0xc                         ; 004dcd99
    MOV EBP,EAX                         ; 004dcd9c
    TEST EAX,EAX                        ; 004dcd9e
    JNZ 0x004dcdd7                      ; 004dcda0
        ;   XREF to: 004dcdd7 (CONDITIONAL_JUMP)  ; LAB_004dcdd7
    PUSH EBX                            ; 004dcda2
    PUSH 0x58a533                       ; 004dcda3 | = "Unable to open model: %s"
    LEA EAX,[ESP + 0xc]                 ; 004dcda8
    PUSH EAX                            ; 004dcdac
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004dcdad
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    MOV EAX,0xf5                        ; 004dcdb2
    ADD ESP,0xc                         ; 004dcdb7
    MOV [0x01cc4804],EAX                ; 004dcdba | INT_01cc4804
    LEA EAX,[ESP + 0x4]                 ; 004dcdbf
    MOV ESI,0x58a54c                    ; 004dcdc3 | = "..\\engine\\model.c"
    PUSH EAX                            ; 004dcdc8
    MOV dword ptr [0x01cc4800],ESI      ; 004dcdc9 | PTR_01cc4800
    CALL core_main.c_FUN_004c8440       ; 004dcdcf
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004dcdd4
    PUSH EDI                            ; 004dcdd7
        ;   Label: LAB_004dcdd7
    CALL crt_memory.c_malloc_FUN_005635b0 ; 004dcdd8
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_malloc_FUN_005635b0()
    ADD ESP,0x4                         ; 004dcddd
    MOV ESI,EAX                         ; 004dcde0
    TEST EAX,EAX                        ; 004dcde2
    JNZ 0x004dce1c                      ; 004dcde4
        ;   XREF to: 004dce1c (CONDITIONAL_JUMP)  ; LAB_004dce1c
    PUSH EBX                            ; 004dcde6
    PUSH 0x58a55e                       ; 004dcde7 | = "Out of model memory: %s"
    LEA EAX,[ESP + 0xc]                 ; 004dcdec
    PUSH EAX                            ; 004dcdf0
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004dcdf1
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    MOV EDX,0x58a576                    ; 004dcdf6 | = "..\\engine\\model.c"
    ADD ESP,0xc                         ; 004dcdfb
    LEA EAX,[ESP + 0x4]                 ; 004dcdfe
    MOV ECX,0x100                       ; 004dce02
    PUSH EAX                            ; 004dce07
    MOV dword ptr [0x01cc4800],EDX      ; 004dce08 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004dce0e | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004dce14
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004dce19
    PUSH EBP                            ; 004dce1c
        ;   Label: LAB_004dce1c
    PUSH EDI                            ; 004dce1d
    PUSH 0x1                            ; 004dce1e
    PUSH ESI                            ; 004dce20
    CALL crt_stdio.c_fread_FUN_005636d0 ; 004dce21
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005636d0()
    ADD ESP,0x10                        ; 004dce26
    CMP EAX,EDI                         ; 004dce29
    JZ 0x004dce62                       ; 004dce2b
        ;   XREF to: 004dce62 (CONDITIONAL_JUMP)  ; LAB_004dce62
    PUSH EBX                            ; 004dce2d
    PUSH 0x58a588                       ; 004dce2e | = "Model file read error: %s"
    LEA EAX,[ESP + 0xc]                 ; 004dce33
    PUSH EAX                            ; 004dce37
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004dce38
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    MOV EAX,0x107                       ; 004dce3d
    ADD ESP,0xc                         ; 004dce42
    MOV [0x01cc4804],EAX                ; 004dce45 | INT_01cc4804
    LEA EAX,[ESP + 0x4]                 ; 004dce4a
    MOV EDI,0x58a5a2                    ; 004dce4e | = "..\\engine\\model.c"
    PUSH EAX                            ; 004dce53
    MOV dword ptr [0x01cc4800],EDI      ; 004dce54 | PTR_01cc4800
    CALL core_main.c_FUN_004c8440       ; 004dce5a
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004dce5f
    PUSH EBP                            ; 004dce62
        ;   Label: LAB_004dce62
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004dce63
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_00563380()
    MOV AH,byte ptr [ESI]               ; 004dce68
    ADD ESP,0x4                         ; 004dce6a
    CMP AH,0x14                         ; 004dce6d
    JZ 0x004dcead                       ; 004dce70
        ;   XREF to: 004dcead (CONDITIONAL_JUMP)  ; LAB_004dcead
    CMP AH,0x20                         ; 004dce72
    JZ 0x004dcead                       ; 004dce75
        ;   XREF to: 004dcead (CONDITIONAL_JUMP)  ; LAB_004dcead
    PUSH EBX                            ; 004dce77
    PUSH 0x58a5b4                       ; 004dce78 | = "Invalid model: %s"
    LEA EAX,[ESP + 0xc]                 ; 004dce7d
    PUSH EAX                            ; 004dce81
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004dce82
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    MOV EDX,0x58a5c6                    ; 004dce87 | = "..\\engine\\model.c"
    ADD ESP,0xc                         ; 004dce8c
    LEA EAX,[ESP + 0x4]                 ; 004dce8f
    MOV ECX,0x10d                       ; 004dce93
    PUSH EAX                            ; 004dce98
    MOV dword ptr [0x01cc4800],EDX      ; 004dce99 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004dce9f | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004dcea5
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004dceaa
    MOV EAX,ESI                         ; 004dcead
        ;   Label: LAB_004dcead
    POP EDI                             ; 004dceaf
    ADD ESP,0x50                        ; 004dceb0
    POP EBP                             ; 004dceb3
    POP ESI                             ; 004dceb4
    POP EBX                             ; 004dceb5
    RET                                 ; 004dceb6
    XOR EAX,EAX                         ; 004dceb7
        ;   Label: LAB_004dceb7
    MOV AL,byte ptr [ESI + 0x1]         ; 004dceb9
    PUSH EAX                            ; 004dcebc
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004dcebd
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; undefined crt_ctype.c_toupper_FUN_00565e20()
    ADD ESP,0x4                         ; 004dcec2
    CMP EAX,0x54                        ; 004dcec5
    JNZ 0x004dcd3e                      ; 004dcec8
        ;   XREF to: 004dcd3e (CONDITIONAL_JUMP)  ; LAB_004dcd3e
    PUSH EBX                            ; 004dcece
    CALL engine_boss.c_modelStructNotSupported2_FUN_0041a540 ; 004dcecf
        ;   XREF to: 0041a540 (UNCONDITIONAL_CALL)  ; undefined engine_boss.c_modelStructNotSupported2_FUN_0041a540()
    ADD ESP,0x4                         ; 004dced4
    ADD ESP,0x50                        ; 004dced7
    POP EBP                             ; 004dceda
    POP ESI                             ; 004dcedb
    POP EBX                             ; 004dcedc
    RET                                 ; 004dcedd


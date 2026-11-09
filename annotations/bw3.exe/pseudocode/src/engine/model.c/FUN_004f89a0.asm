; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_model_c_FUN_004f89a0(char *filename,int model_size)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; int              Stack[0x8]:4   model_size
; Local Variables:
; undefined        Stack[-0x60]:1  local_60
;
; XREF[1]:
;   engine_keyframe.c_loadAndInterpolateKeyframes_FUN_004dee60 at 004deeb8
;
; Referenced Globals:
;   undefined4 DAT_005c90c0
;   TerminatedCString s_models_005c90c3
;   TerminatedCString s_Unable_to_open_model_s_005c90ca
;   TerminatedCString s_engine_model_c_005c90e3
;   TerminatedCString s_Out_of_partial_model_mem_005c90f5
;   TerminatedCString s_engine_model_c_005c9113
;   TerminatedCString s_engine_model_c_005c9125
;   TerminatedCString s_Model_read_hose_005c9137
;   TerminatedCString s_engine_model_c_005c9147
;   TerminatedCString s_Bad_model_005c9159
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_stdio.c_fclose_FUN_005a3a90
;   crt_stdio.c_fread_FUN_005a3890
;   crt_unknown.c_FUN_005a28c0
;   crt_unknown.c_FUN_005a3650
;   engine_dosio.cpp_FUN_004659c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f89a0
        ;   Label: engine_model.c_FUN_004f89a0
    PUSH ESI                            ; 004f89a1
    PUSH EDI                            ; 004f89a2
    PUSH EBP                            ; 004f89a3
    SUB ESP,0x50                        ; 004f89a4
    MOV EBP,dword ptr [ESP + 0x64]      ; 004f89a7
    MOV EDI,dword ptr [ESP + 0x68]      ; 004f89ab
    PUSH 0x5c90c0                       ; 004f89af | DAT_005c90c0
    PUSH EBP                            ; 004f89b4
    PUSH 0x5c90c3                       ; 004f89b5 | = "models"
    CALL engine_dosio.cpp_FUN_004659c0  ; 004f89ba
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_004659c0(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004f89bf
    MOV ESI,EAX                         ; 004f89c2
    TEST EAX,EAX                        ; 004f89c4
    JZ 0x004f8a6d                       ; 004f89c6
        ;   XREF to: 004f8a6d (CONDITIONAL_JUMP)  ; LAB_004f8a6d
    LEA EAX,[EDI + 0x4]                 ; 004f89cc
        ;   Label: LAB_004f89cc
    PUSH EAX                            ; 004f89cf
    CALL crt_unknown.c_FUN_005a3650     ; 004f89d0
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 004f89d5
    MOV EBX,EAX                         ; 004f89d8
    TEST EAX,EAX                        ; 004f89da
    JNZ 0x004f8a11                      ; 004f89dc
        ;   XREF to: 004f8a11 (CONDITIONAL_JUMP)  ; LAB_004f8a11
    PUSH EBP                            ; 004f89de
    PUSH 0x5c90f5                       ; 004f89df | = "Out of partial model mem : %s"
    LEA EAX,[ESP + 0x8]                 ; 004f89e4
    PUSH EAX                            ; 004f89e8
    CALL crt_unknown.c_FUN_005a28c0     ; 004f89e9
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    MOV EAX,0x2ef                       ; 004f89ee
    ADD ESP,0xc                         ; 004f89f3
    MOV [0x01d71de4],EAX                ; 004f89f6 | DAT_01d71de4
    MOV EAX,ESP                         ; 004f89fb
    MOV EBP,0x5c9113                    ; 004f89fd | = "..\\engine\\model.c"
    PUSH EAX                            ; 004f8a02
    MOV dword ptr [0x01d71de0],EBP      ; 004f8a03 | DAT_01d71de0
    CALL core_main.c_FUN_004e4330       ; 004f8a09
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004f8a0e
    PUSH ESI                            ; 004f8a11
        ;   Label: LAB_004f8a11
    PUSH EDI                            ; 004f8a12
    PUSH 0x1                            ; 004f8a13
    PUSH EBX                            ; 004f8a15
    CALL crt_stdio.c_fread_FUN_005a3890 ; 004f8a16
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005a3890()
    ADD ESP,0x10                        ; 004f8a1b
    CMP EAX,EDI                         ; 004f8a1e
    JZ 0x004f8a45                       ; 004f8a20
        ;   XREF to: 004f8a45 (CONDITIONAL_JUMP)  ; LAB_004f8a45
    MOV EDX,0x5c9125                    ; 004f8a22 | = "..\\engine\\model.c"
    MOV ECX,0x2f4                       ; 004f8a27
    PUSH 0x5c9137                       ; 004f8a2c | = "Model read hose"
    MOV dword ptr [0x01d71de0],EDX      ; 004f8a31 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004f8a37 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004f8a3d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004f8a42
    PUSH ESI                            ; 004f8a45
        ;   Label: LAB_004f8a45
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 004f8a46
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    XOR EAX,EAX                         ; 004f8a4b
    MOV AL,byte ptr [EBX]               ; 004f8a4d
    ADD ESP,0x4                         ; 004f8a4f
    CMP EAX,0x14                        ; 004f8a52
    JZ 0x004f8a5c                       ; 004f8a55
        ;   XREF to: 004f8a5c (CONDITIONAL_JUMP)  ; LAB_004f8a5c
    CMP EAX,0x20                        ; 004f8a57
    JNZ 0x004f8aa6                      ; 004f8a5a
        ;   XREF to: 004f8aa6 (CONDITIONAL_JUMP)  ; LAB_004f8aa6
    MOV EAX,EBX                         ; 004f8a5c
        ;   Label: LAB_004f8a5c
    MOV dword ptr [EDI + EBX*0x1],0x0   ; 004f8a5e
    ADD ESP,0x50                        ; 004f8a65
    POP EBP                             ; 004f8a68
    POP EDI                             ; 004f8a69
    POP ESI                             ; 004f8a6a
    POP EBX                             ; 004f8a6b
    RET                                 ; 004f8a6c
    PUSH EBP                            ; 004f8a6d
        ;   Label: LAB_004f8a6d
    PUSH 0x5c90ca                       ; 004f8a6e | = "Unable to open model: %s"
    LEA EAX,[ESP + 0x8]                 ; 004f8a73
    PUSH EAX                            ; 004f8a77
    CALL crt_unknown.c_FUN_005a28c0     ; 004f8a78
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    MOV EDX,0x5c90e3                    ; 004f8a7d | = "..\\engine\\model.c"
    ADD ESP,0xc                         ; 004f8a82
    MOV EAX,ESP                         ; 004f8a85
    MOV ECX,0x2e4                       ; 004f8a87
    PUSH EAX                            ; 004f8a8c
    MOV dword ptr [0x01d71de0],EDX      ; 004f8a8d | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004f8a93 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004f8a99
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004f8a9e
    JMP 0x004f89cc                      ; 004f8aa1
        ;   XREF to: 004f89cc (UNCONDITIONAL_JUMP)  ; LAB_004f89cc
    MOV ESI,0x5c9147                    ; 004f8aa6 | = "..\\engine\\model.c"
        ;   Label: LAB_004f8aa6
    MOV EBP,0x2f8                       ; 004f8aab
    PUSH 0x5c9159                       ; 004f8ab0 | = "Bad model!"
    MOV dword ptr [0x01d71de0],ESI      ; 004f8ab5 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 004f8abb | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004f8ac1
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004f8ac6
    MOV EAX,EBX                         ; 004f8ac9
    MOV dword ptr [EDI + EBX*0x1],0x0   ; 004f8acb
    ADD ESP,0x50                        ; 004f8ad2
    POP EBP                             ; 004f8ad5
    POP EDI                             ; 004f8ad6
    POP ESI                             ; 004f8ad7
    POP EBX                             ; 004f8ad8
    RET                                 ; 004f8ad9


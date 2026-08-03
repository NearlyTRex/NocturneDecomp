; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_keyframe_c_loadAndInterpolateKeyframes_FUN_004c3aa0(SMRGLKeyframeModel *keyframe_model)
;
; Parameters:
; SMRGLKeyframeModel * Stack[0x4]:4   keyframe_model
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   engine_keyframe.c_interpolateCubicKeyframes_FUN_004c3c90 at 004c4029
;   engine_model.c_initializeMRGLModel_FUN_004dd760 at 004dd76b
;
; Referenced Globals:
;   TerminatedCString s_engine_keyframe_c_005875dc
;   TerminatedCString s_Bad_key_frame_005875f1
;   TerminatedCString s_engine_keyframe_c_005875ff
;   TerminatedCString s_Key_frame_vertex_mismatc_00587614
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   engine_model.c_getMRGLSize_FUN_004dd520
;   engine_model.c_loadModelChunk_FUN_004dd790
;   engine_model.c_loadModelFile_FUN_004dcd10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c3aa0
        ;   Label: engine_keyframe.c_loadAndInterpolateKeyframes_FUN_004c3aa0
    PUSH ESI                            ; 004c3aa1
    PUSH EDI                            ; 004c3aa2
    PUSH EBP                            ; 004c3aa3
    SUB ESP,0x8                         ; 004c3aa4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004c3aa7
    CMP dword ptr [EAX + 0x14],0x0      ; 004c3aab
    JZ 0x004c3bee                       ; 004c3aaf
        ;   XREF to: 004c3bee (CONDITIONAL_JUMP)  ; LAB_004c3bee
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004c3ab5
        ;   Label: LAB_004c3ab5
    MOV ECX,dword ptr [EAX + 0x14]      ; 004c3ab9
    PUSH ECX                            ; 004c3abc
    CALL engine_model.c_getMRGLSize_FUN_004dd520 ; 004c3abd
        ;   XREF to: 004dd520 (UNCONDITIONAL_CALL)  ; int engine_model.c_getMRGLSize_FUN_004dd520(SMRGLHeaderExtended * header)
    ADD ESP,0x4                         ; 004c3ac2
    MOV EBP,EAX                         ; 004c3ac5
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004c3ac7
    MOV EAX,dword ptr [EAX + 0x14]      ; 004c3acb
    ADD EAX,EBP                         ; 004c3ace
    PUSH EAX                            ; 004c3ad0
    CALL engine_model.c_getMRGLSize_FUN_004dd520 ; 004c3ad1
        ;   XREF to: 004dd520 (UNCONDITIONAL_CALL)  ; int engine_model.c_getMRGLSize_FUN_004dd520(SMRGLHeaderExtended * header)
    ADD ESP,0x4                         ; 004c3ad6
    ADD EBP,EAX                         ; 004c3ad9
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004c3adb
    MOV EBX,dword ptr [EAX + 0x8]       ; 004c3adf
    XOR ESI,ESI                         ; 004c3ae2
    TEST EBX,EBX                        ; 004c3ae4
    JLE 0x004c3b18                      ; 004c3ae6
        ;   XREF to: 004c3b18 (CONDITIONAL_JUMP)  ; LAB_004c3b18
    LEA EDI,[EAX + 0x18]                ; 004c3ae8
    MOV EBX,EAX                         ; 004c3aeb
    CMP dword ptr [EBX + 0x118],0x0     ; 004c3aed
        ;   Label: LAB_004c3aed
    JNZ 0x004c3b06                      ; 004c3af4
        ;   XREF to: 004c3b06 (CONDITIONAL_JUMP)  ; LAB_004c3b06
    PUSH EBP                            ; 004c3af6
    PUSH EDI                            ; 004c3af7
    CALL engine_model.c_loadModelChunk_FUN_004dd790 ; 004c3af8
        ;   XREF to: 004dd790 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_model.c_loadModelChunk_FUN_004dd790(char * filename, int model_size)
    ADD ESP,0x8                         ; 004c3afd
    MOV dword ptr [EBX + 0x118],EAX     ; 004c3b00
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004c3b06
        ;   Label: LAB_004c3b06
    ADD EBX,0x4                         ; 004c3b0a
    INC ESI                             ; 004c3b0d
    MOV EDX,dword ptr [EAX + 0x8]       ; 004c3b0e
    ADD EDI,0x10                        ; 004c3b11
    CMP ESI,EDX                         ; 004c3b14
    JL 0x004c3aed                       ; 004c3b16
        ;   XREF to: 004c3aed (CONDITIONAL_JUMP)  ; LAB_004c3aed
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004c3b18
        ;   Label: LAB_004c3b18
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004c3b1c
    XOR EBX,EBX                         ; 004c3b20
    MOV EBP,dword ptr [EBP + 0x14]      ; 004c3b22
    MOV ECX,dword ptr [EAX + 0x8]       ; 004c3b25
    ADD EBP,0x8                         ; 004c3b28
    TEST ECX,ECX                        ; 004c3b2b
    JLE 0x004c3b9f                      ; 004c3b2d
        ;   XREF to: 004c3b9f (CONDITIONAL_JUMP)  ; LAB_004c3b9f
    MOV ESI,EAX                         ; 004c3b2f
    MOV EDI,dword ptr [ESI + 0x118]     ; 004c3b31
        ;   Label: LAB_004c3b31
    MOV EAX,dword ptr [EDI + 0x8]       ; 004c3b37
    ADD EDI,0x8                         ; 004c3b3a
    CMP EAX,0x2                         ; 004c3b3d
    JZ 0x004c3b65                       ; 004c3b40
        ;   XREF to: 004c3b65 (CONDITIONAL_JUMP)  ; LAB_004c3b65
    MOV EDX,0x5875dc                    ; 004c3b42 | = "..\\engine\\keyframe.c"
    MOV ECX,0xfd                        ; 004c3b47
    PUSH 0x5875f1                       ; 004c3b4c | = "Bad key frame"
    MOV dword ptr [0x01cc4800],EDX      ; 004c3b51 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004c3b57 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004c3b5d
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004c3b62
    MOV EDX,dword ptr [EDI + 0x8]       ; 004c3b65
        ;   Label: LAB_004c3b65
    CMP EDX,dword ptr [EBP + 0x8]       ; 004c3b68
    JZ 0x004c3b90                       ; 004c3b6b
        ;   XREF to: 004c3b90 (CONDITIONAL_JUMP)  ; LAB_004c3b90
    MOV ECX,0x5875ff                    ; 004c3b6d | = "..\\engine\\keyframe.c"
    MOV EDI,0xfe                        ; 004c3b72
    PUSH 0x587614                       ; 004c3b77 | = "Key frame vertex mismatch"
    MOV dword ptr [0x01cc4800],ECX      ; 004c3b7c | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 004c3b82 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004c3b88
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004c3b8d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004c3b90
        ;   Label: LAB_004c3b90
    INC EBX                             ; 004c3b94
    MOV EDX,dword ptr [EAX + 0x8]       ; 004c3b95
    ADD ESI,0x4                         ; 004c3b98
    CMP EBX,EDX                         ; 004c3b9b
    JL 0x004c3b31                       ; 004c3b9d
        ;   XREF to: 004c3b31 (CONDITIONAL_JUMP)  ; LAB_004c3b31
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004c3b9f
        ;   Label: LAB_004c3b9f
    MOV EAX,dword ptr [EAX + 0x14]      ; 004c3ba3
    MOV dword ptr [ESP],EAX             ; 004c3ba6
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004c3ba9
    XOR ECX,ECX                         ; 004c3bad
    MOV EBX,dword ptr [EAX + 0x8]       ; 004c3baf
    MOV dword ptr [ESP + 0x4],ECX       ; 004c3bb2
    TEST EBX,EBX                        ; 004c3bb6
    JLE 0x004c3be6                      ; 004c3bb8
        ;   XREF to: 004c3be6 (CONDITIONAL_JUMP)  ; LAB_004c3be6
    MOV EBP,EAX                         ; 004c3bba
    MOV EAX,dword ptr [ESP]             ; 004c3bbc
        ;   Label: LAB_004c3bbc
    MOV EBX,dword ptr [EBP + 0x118]     ; 004c3bbf
    MOV EAX,dword ptr [EAX + 0x4]       ; 004c3bc5
    MOV ESI,dword ptr [EBX + 0x4]       ; 004c3bc8
    CMP EAX,ESI                         ; 004c3bcb
    JNZ 0x004c3c06                      ; 004c3bcd
        ;   XREF to: 004c3c06 (CONDITIONAL_JUMP)  ; LAB_004c3c06
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c3bcf
        ;   Label: LAB_004c3bcf
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004c3bd3
    ADD EBP,0x4                         ; 004c3bd7
    INC EAX                             ; 004c3bda
    MOV ECX,dword ptr [EDX + 0x8]       ; 004c3bdb
    MOV dword ptr [ESP + 0x4],EAX       ; 004c3bde
    CMP EAX,ECX                         ; 004c3be2
    JL 0x004c3bbc                       ; 004c3be4
        ;   XREF to: 004c3bbc (CONDITIONAL_JUMP)  ; LAB_004c3bbc
    ADD ESP,0x8                         ; 004c3be6
        ;   Label: LAB_004c3be6
    POP EBP                             ; 004c3be9
    POP EDI                             ; 004c3bea
    POP ESI                             ; 004c3beb
    POP EBX                             ; 004c3bec
    RET                                 ; 004c3bed
    ADD EAX,0x18                        ; 004c3bee
        ;   Label: LAB_004c3bee
    PUSH EAX                            ; 004c3bf1
    CALL engine_model.c_loadModelFile_FUN_004dcd10 ; 004c3bf2
        ;   XREF to: 004dcd10 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_model.c_loadModelFile_FUN_004dcd10(char * filename)
    ADD ESP,0x4                         ; 004c3bf7
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004c3bfa
    MOV dword ptr [EDX + 0x14],EAX      ; 004c3bfe
    JMP 0x004c3ab5                      ; 004c3c01
        ;   XREF to: 004c3ab5 (UNCONDITIONAL_JUMP)  ; LAB_004c3ab5
    MOV EAX,dword ptr [ESP]             ; 004c3c06
        ;   Label: LAB_004c3c06
    MOV EBX,ESI                         ; 004c3c09
    MOV EAX,dword ptr [EAX + 0x4]       ; 004c3c0b
    CDQ                                 ; 004c3c0e
    MOV ECX,EDX                         ; 004c3c0f
    XOR EAX,EDX                         ; 004c3c11
    XOR EDX,EDX                         ; 004c3c13
    DIV EBX                             ; 004c3c15
    CMP EAX,0x7fff                      ; 004c3c17
    JC 0x004c3c23                       ; 004c3c1c
        ;   XREF to: 004c3c23 (CONDITIONAL_JUMP)  ; LAB_004c3c23
    MOV EAX,0x7fff                      ; 004c3c1e
    PUSH EAX                            ; 004c3c23
        ;   Label: LAB_004c3c23
    XOR EAX,EAX                         ; 004c3c24
    DIV EBX                             ; 004c3c26
    POP EDX                             ; 004c3c28
    SHRD EAX,EDX,0x10                   ; 004c3c29
    XOR EAX,ECX                         ; 004c3c2d
    XOR ESI,ESI                         ; 004c3c2f
    MOV EDI,dword ptr [EBP + 0x118]     ; 004c3c31
    MOV EBX,EAX                         ; 004c3c37
    MOV ECX,dword ptr [EBP + 0x118]     ; 004c3c39
    MOV EAX,dword ptr [EDI + 0x10]      ; 004c3c3f
    ADD EDI,0x8                         ; 004c3c42
    ADD ECX,0x14                        ; 004c3c45
    TEST EAX,EAX                        ; 004c3c48
    JLE 0x004c3bcf                      ; 004c3c4a
        ;   XREF to: 004c3bcf (CONDITIONAL_JUMP)  ; LAB_004c3bcf
    MOV EAX,EBX                         ; 004c3c4c
        ;   Label: LAB_004c3c4c
    MOV EDX,dword ptr [ECX]             ; 004c3c4e
    IMUL EDX                            ; 004c3c50
    SHRD EAX,EDX,0x10                   ; 004c3c52
    MOV EDX,dword ptr [ECX + 0x4]       ; 004c3c56
    MOV dword ptr [ECX],EAX             ; 004c3c59
    MOV EAX,EBX                         ; 004c3c5b
    IMUL EDX                            ; 004c3c5d
    SHRD EAX,EDX,0x10                   ; 004c3c5f
    MOV EDX,dword ptr [ECX + 0x8]       ; 004c3c63
    MOV dword ptr [ECX + 0x4],EAX       ; 004c3c66
    MOV EAX,EBX                         ; 004c3c69
    IMUL EDX                            ; 004c3c6b
    SHRD EAX,EDX,0x10                   ; 004c3c6d
    MOV dword ptr [ECX + 0x8],EAX       ; 004c3c71
    INC ESI                             ; 004c3c74
    MOV EDX,dword ptr [EDI + 0x8]       ; 004c3c75
    ADD ECX,0xc                         ; 004c3c78
    CMP ESI,EDX                         ; 004c3c7b
    JGE 0x004c3bcf                      ; 004c3c7d
        ;   XREF to: 004c3bcf (CONDITIONAL_JUMP)  ; LAB_004c3bcf
    JMP 0x004c3c4c                      ; 004c3c83
        ;   XREF to: 004c3c4c (UNCONDITIONAL_JUMP)  ; LAB_004c3c4c


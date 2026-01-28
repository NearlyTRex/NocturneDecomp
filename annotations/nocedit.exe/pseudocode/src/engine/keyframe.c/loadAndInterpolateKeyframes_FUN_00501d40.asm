; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_keyframe_c_loadAndInterpolateKeyframes_FUN_00501d40(SMRGLKeyframeModel *keyframe_model)
;
; Parameters:
; SMRGLKeyframeModel * Stack[0x4]:4   keyframe_model
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   engine_keyframe.c_interpolateCubicKeyframes_FUN_00501f30 at 005022c9
;   engine_model.c_initializeMRGLModel_FUN_00528940 at 0052894b
;
; Referenced Globals:
;   TerminatedCString s_engine_keyframe_c_00630ca8
;   TerminatedCString s_Bad_key_frame_00630cbd
;   TerminatedCString s_engine_keyframe_c_00630ccb
;   TerminatedCString s_Key_frame_vertex_mismatc_00630ce0
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_model.c_getMRGLSize_FUN_00528700
;   engine_model.c_loadModelChunk_FUN_00528970
;   engine_model.c_loadModelFile_FUN_00527ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00501d40
        ;   Label: engine_keyframe.c_loadAndInterpolateKeyframes_FUN_00501d40
    PUSH ESI                            ; 00501d41
    PUSH EDI                            ; 00501d42
    PUSH EBP                            ; 00501d43
    SUB ESP,0x8                         ; 00501d44
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00501d47
    CMP dword ptr [EAX + 0x14],0x0      ; 00501d4b
    JZ 0x00501e8e                       ; 00501d4f
        ;   XREF to: 00501e8e (CONDITIONAL_JUMP)  ; LAB_00501e8e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00501d55
        ;   Label: LAB_00501d55
    MOV ECX,dword ptr [EAX + 0x14]      ; 00501d59
    PUSH ECX                            ; 00501d5c
    CALL engine_model.c_getMRGLSize_FUN_00528700 ; 00501d5d
        ;   XREF to: 00528700 (UNCONDITIONAL_CALL)  ; int engine_model.c_getMRGLSize_FUN_00528700(SMRGLHeaderExtended * header)
    ADD ESP,0x4                         ; 00501d62
    MOV EBP,EAX                         ; 00501d65
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00501d67
    MOV EAX,dword ptr [EAX + 0x14]      ; 00501d6b
    ADD EAX,EBP                         ; 00501d6e
    PUSH EAX                            ; 00501d70
    CALL engine_model.c_getMRGLSize_FUN_00528700 ; 00501d71
        ;   XREF to: 00528700 (UNCONDITIONAL_CALL)  ; int engine_model.c_getMRGLSize_FUN_00528700(SMRGLHeaderExtended * header)
    ADD ESP,0x4                         ; 00501d76
    ADD EBP,EAX                         ; 00501d79
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00501d7b
    MOV EBX,dword ptr [EAX + 0x8]       ; 00501d7f
    XOR ESI,ESI                         ; 00501d82
    TEST EBX,EBX                        ; 00501d84
    JLE 0x00501db8                      ; 00501d86
        ;   XREF to: 00501db8 (CONDITIONAL_JUMP)  ; LAB_00501db8
    LEA EDI,[EAX + 0x18]                ; 00501d88
    MOV EBX,EAX                         ; 00501d8b
    CMP dword ptr [EBX + 0x118],0x0     ; 00501d8d
        ;   Label: LAB_00501d8d
    JNZ 0x00501da6                      ; 00501d94
        ;   XREF to: 00501da6 (CONDITIONAL_JUMP)  ; LAB_00501da6
    PUSH EBP                            ; 00501d96
    PUSH EDI                            ; 00501d97
    CALL engine_model.c_loadModelChunk_FUN_00528970 ; 00501d98
        ;   XREF to: 00528970 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_model.c_loadModelChunk_FUN_00528970(char * filename, int model_size)
    ADD ESP,0x8                         ; 00501d9d
    MOV dword ptr [EBX + 0x118],EAX     ; 00501da0
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00501da6
        ;   Label: LAB_00501da6
    ADD EBX,0x4                         ; 00501daa
    INC ESI                             ; 00501dad
    MOV EDX,dword ptr [EAX + 0x8]       ; 00501dae
    ADD EDI,0x10                        ; 00501db1
    CMP ESI,EDX                         ; 00501db4
    JL 0x00501d8d                       ; 00501db6
        ;   XREF to: 00501d8d (CONDITIONAL_JUMP)  ; LAB_00501d8d
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00501db8
        ;   Label: LAB_00501db8
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00501dbc
    XOR EBX,EBX                         ; 00501dc0
    MOV EBP,dword ptr [EBP + 0x14]      ; 00501dc2
    MOV ECX,dword ptr [EAX + 0x8]       ; 00501dc5
    ADD EBP,0x8                         ; 00501dc8
    TEST ECX,ECX                        ; 00501dcb
    JLE 0x00501e3f                      ; 00501dcd
        ;   XREF to: 00501e3f (CONDITIONAL_JUMP)  ; LAB_00501e3f
    MOV ESI,EAX                         ; 00501dcf
    MOV EDI,dword ptr [ESI + 0x118]     ; 00501dd1
        ;   Label: LAB_00501dd1
    MOV EAX,dword ptr [EDI + 0x8]       ; 00501dd7
    ADD EDI,0x8                         ; 00501dda
    CMP EAX,0x2                         ; 00501ddd
    JZ 0x00501e05                       ; 00501de0
        ;   XREF to: 00501e05 (CONDITIONAL_JUMP)  ; LAB_00501e05
    MOV EDX,0x630ca8                    ; 00501de2 | = "..\\engine\\keyframe.c"
    MOV ECX,0xfd                        ; 00501de7
    PUSH 0x630cbd                       ; 00501dec | = "Bad key frame"
    MOV dword ptr [0x02f0ca48],EDX      ; 00501df1 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00501df7 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00501dfd
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00501e02
    MOV EDX,dword ptr [EDI + 0x8]       ; 00501e05
        ;   Label: LAB_00501e05
    CMP EDX,dword ptr [EBP + 0x8]       ; 00501e08
    JZ 0x00501e30                       ; 00501e0b
        ;   XREF to: 00501e30 (CONDITIONAL_JUMP)  ; LAB_00501e30
    MOV ECX,0x630ccb                    ; 00501e0d | = "..\\engine\\keyframe.c"
    MOV EDI,0xfe                        ; 00501e12
    PUSH 0x630ce0                       ; 00501e17 | = "Key frame vertex mismatch"
    MOV dword ptr [0x02f0ca48],ECX      ; 00501e1c | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 00501e22 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00501e28
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00501e2d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00501e30
        ;   Label: LAB_00501e30
    INC EBX                             ; 00501e34
    MOV EDX,dword ptr [EAX + 0x8]       ; 00501e35
    ADD ESI,0x4                         ; 00501e38
    CMP EBX,EDX                         ; 00501e3b
    JL 0x00501dd1                       ; 00501e3d
        ;   XREF to: 00501dd1 (CONDITIONAL_JUMP)  ; LAB_00501dd1
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00501e3f
        ;   Label: LAB_00501e3f
    MOV EAX,dword ptr [EAX + 0x14]      ; 00501e43
    MOV dword ptr [ESP],EAX             ; 00501e46
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00501e49
    XOR ECX,ECX                         ; 00501e4d
    MOV EBX,dword ptr [EAX + 0x8]       ; 00501e4f
    MOV dword ptr [ESP + 0x4],ECX       ; 00501e52
    TEST EBX,EBX                        ; 00501e56
    JLE 0x00501e86                      ; 00501e58
        ;   XREF to: 00501e86 (CONDITIONAL_JUMP)  ; LAB_00501e86
    MOV EBP,EAX                         ; 00501e5a
    MOV EAX,dword ptr [ESP]             ; 00501e5c
        ;   Label: LAB_00501e5c
    MOV EBX,dword ptr [EBP + 0x118]     ; 00501e5f
    MOV EAX,dword ptr [EAX + 0x4]       ; 00501e65
    MOV ESI,dword ptr [EBX + 0x4]       ; 00501e68
    CMP EAX,ESI                         ; 00501e6b
    JNZ 0x00501ea6                      ; 00501e6d
        ;   XREF to: 00501ea6 (CONDITIONAL_JUMP)  ; LAB_00501ea6
    MOV EAX,dword ptr [ESP + 0x4]       ; 00501e6f
        ;   Label: LAB_00501e6f
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00501e73
    ADD EBP,0x4                         ; 00501e77
    INC EAX                             ; 00501e7a
    MOV ECX,dword ptr [EDX + 0x8]       ; 00501e7b
    MOV dword ptr [ESP + 0x4],EAX       ; 00501e7e
    CMP EAX,ECX                         ; 00501e82
    JL 0x00501e5c                       ; 00501e84
        ;   XREF to: 00501e5c (CONDITIONAL_JUMP)  ; LAB_00501e5c
    ADD ESP,0x8                         ; 00501e86
        ;   Label: LAB_00501e86
    POP EBP                             ; 00501e89
    POP EDI                             ; 00501e8a
    POP ESI                             ; 00501e8b
    POP EBX                             ; 00501e8c
    RET                                 ; 00501e8d
    ADD EAX,0x18                        ; 00501e8e
        ;   Label: LAB_00501e8e
    PUSH EAX                            ; 00501e91
    CALL engine_model.c_loadModelFile_FUN_00527ec0 ; 00501e92
        ;   XREF to: 00527ec0 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_model.c_loadModelFile_FUN_00527ec0(char * filename)
    ADD ESP,0x4                         ; 00501e97
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00501e9a
    MOV dword ptr [EDX + 0x14],EAX      ; 00501e9e
    JMP 0x00501d55                      ; 00501ea1
        ;   XREF to: 00501d55 (UNCONDITIONAL_JUMP)  ; LAB_00501d55
    MOV EAX,dword ptr [ESP]             ; 00501ea6
        ;   Label: LAB_00501ea6
    MOV EBX,ESI                         ; 00501ea9
    MOV EAX,dword ptr [EAX + 0x4]       ; 00501eab
    CDQ                                 ; 00501eae
    MOV ECX,EDX                         ; 00501eaf
    XOR EAX,EDX                         ; 00501eb1
    XOR EDX,EDX                         ; 00501eb3
    DIV EBX                             ; 00501eb5
    CMP EAX,0x7fff                      ; 00501eb7
    JC 0x00501ec3                       ; 00501ebc
        ;   XREF to: 00501ec3 (CONDITIONAL_JUMP)  ; LAB_00501ec3
    MOV EAX,0x7fff                      ; 00501ebe
    PUSH EAX                            ; 00501ec3
        ;   Label: LAB_00501ec3
    XOR EAX,EAX                         ; 00501ec4
    DIV EBX                             ; 00501ec6
    POP EDX                             ; 00501ec8
    SHRD EAX,EDX,0x10                   ; 00501ec9
    XOR EAX,ECX                         ; 00501ecd
    XOR ESI,ESI                         ; 00501ecf
    MOV EDI,dword ptr [EBP + 0x118]     ; 00501ed1
    MOV EBX,EAX                         ; 00501ed7
    MOV ECX,dword ptr [EBP + 0x118]     ; 00501ed9
    MOV EAX,dword ptr [EDI + 0x10]      ; 00501edf
    ADD EDI,0x8                         ; 00501ee2
    ADD ECX,0x14                        ; 00501ee5
    TEST EAX,EAX                        ; 00501ee8
    JLE 0x00501e6f                      ; 00501eea
        ;   XREF to: 00501e6f (CONDITIONAL_JUMP)  ; LAB_00501e6f
    MOV EAX,EBX                         ; 00501eec
        ;   Label: LAB_00501eec
    MOV EDX,dword ptr [ECX]             ; 00501eee
    IMUL EDX                            ; 00501ef0
    SHRD EAX,EDX,0x10                   ; 00501ef2
    MOV EDX,dword ptr [ECX + 0x4]       ; 00501ef6
    MOV dword ptr [ECX],EAX             ; 00501ef9
    MOV EAX,EBX                         ; 00501efb
    IMUL EDX                            ; 00501efd
    SHRD EAX,EDX,0x10                   ; 00501eff
    MOV EDX,dword ptr [ECX + 0x8]       ; 00501f03
    MOV dword ptr [ECX + 0x4],EAX       ; 00501f06
    MOV EAX,EBX                         ; 00501f09
    IMUL EDX                            ; 00501f0b
    SHRD EAX,EDX,0x10                   ; 00501f0d
    MOV dword ptr [ECX + 0x8],EAX       ; 00501f11
    INC ESI                             ; 00501f14
    MOV EDX,dword ptr [EDI + 0x8]       ; 00501f15
    ADD ECX,0xc                         ; 00501f18
    CMP ESI,EDX                         ; 00501f1b
    JGE 0x00501e6f                      ; 00501f1d
        ;   XREF to: 00501e6f (CONDITIONAL_JUMP)  ; LAB_00501e6f
    JMP 0x00501eec                      ; 00501f23
        ;   XREF to: 00501eec (UNCONDITIONAL_JUMP)  ; LAB_00501eec


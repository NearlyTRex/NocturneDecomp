; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CMP3Decoder_openFile_FUN_004e7df0(char *param_1,char *param_2)
;
;
; XREF[4]:
;   sound_sndmain.cpp_FUN_005229f0 at 00522afe
;   sound_sndmain.cpp_getSampleInfo_FUN_005279e0 at 00527b8b
;   sound_sndmain.cpp_getSfxSample_FUN_00522480 at 0052280e
;   sound_sndmain.cpp_startSfx_FUN_005265a0 at 005269f5
;
; Referenced Globals:
;   TerminatedCString s_sound_0058b938
;   TerminatedCString s_sound_mp3_cpp_0058b93e
;   TerminatedCString s_Can_t_open_s_0058b94f
;   TerminatedCString s_rb_0058b95d
;   TerminatedCString s_sound_0058b960
;   TerminatedCString s_sound_mp3_cpp_0058b966
;   TerminatedCString s_Can_t_open_s_0058b977
;   TerminatedCString s_sound_mp3_cpp_0058b985
;   TerminatedCString s_Error_preparing_to_decod_0058b996
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   engine_dosio.cpp_getFile_FUN_00456a60
;   engine_dosio.cpp_getFileSize_FUN_004568c0
;   sound_mp3.cpp_FUN_004e7ed0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e7df0
        ;   Label: sound_mp3.cpp_CMP3Decoder_openFile_FUN_004e7df0
    PUSH ESI                            ; 004e7df1
    PUSH EDI                            ; 004e7df2
    PUSH EBP                            ; 004e7df3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004e7df4
    MOV ESI,dword ptr [ESP + 0x18]      ; 004e7df8
    PUSH ESI                            ; 004e7dfc
    PUSH 0x58b938                       ; 004e7dfd | = "sound"
    CALL engine_dosio.cpp_getFileSize_FUN_004568c0 ; 004e7e02
        ;   XREF to: 004568c0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_004568c0(char * directory, char * filename)
    ADD ESP,0x8                         ; 004e7e07
    MOV EBP,EAX                         ; 004e7e0a
    TEST EAX,EAX                        ; 004e7e0c
    JLE 0x004e7e7a                      ; 004e7e0e
        ;   XREF to: 004e7e7a (CONDITIONAL_JUMP)  ; LAB_004e7e7a
    PUSH 0x58b95d                       ; 004e7e10 | = "rb"
        ;   Label: LAB_004e7e10
    PUSH ESI                            ; 004e7e15
    PUSH 0x58b960                       ; 004e7e16 | = "sound"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 004e7e1b
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004e7e20
    MOV EBX,EAX                         ; 004e7e23
    TEST EAX,EAX                        ; 004e7e25
    JNZ 0x004e7e4c                      ; 004e7e27
        ;   XREF to: 004e7e4c (CONDITIONAL_JUMP)  ; LAB_004e7e4c
    PUSH ESI                            ; 004e7e29
    MOV EAX,0x58b966                    ; 004e7e2a | = "..\\sound\\mp3.cpp"
    MOV EDX,0xe0f                       ; 004e7e2f
    PUSH 0x58b977                       ; 004e7e34 | = "Can't open %s"
    MOV [0x01cc4800],EAX                ; 004e7e39 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 004e7e3e | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004e7e44
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 004e7e49
    PUSH EBP                            ; 004e7e4c
        ;   Label: LAB_004e7e4c
    PUSH EBX                            ; 004e7e4d
    PUSH EDI                            ; 004e7e4e
    CALL sound_mp3.cpp_FUN_004e7ed0     ; 004e7e4f
        ;   XREF to: 004e7ed0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_FUN_004e7ed0()
    ADD ESP,0xc                         ; 004e7e54
    TEST EAX,EAX                        ; 004e7e57
    JZ 0x004e7ea3                       ; 004e7e59
        ;   XREF to: 004e7ea3 (CONDITIONAL_JUMP)  ; LAB_004e7ea3
    PUSH EDI                            ; 004e7e5b
        ;   Label: LAB_004e7e5b
    MOV AL,byte ptr [ESI]               ; 004e7e5c
        ;   Label: LAB_004e7e5c
    MOV byte ptr [EDI],AL               ; 004e7e5e
    CMP AL,0x0                          ; 004e7e60
    JZ 0x004e7e74                       ; 004e7e62
        ;   XREF to: 004e7e74 (CONDITIONAL_JUMP)  ; LAB_004e7e74
    MOV AL,byte ptr [ESI + 0x1]         ; 004e7e64
    ADD ESI,0x2                         ; 004e7e67
    MOV byte ptr [EDI + 0x1],AL         ; 004e7e6a
    ADD EDI,0x2                         ; 004e7e6d
    CMP AL,0x0                          ; 004e7e70
    JNZ 0x004e7e5c                      ; 004e7e72
        ;   XREF to: 004e7e5c (CONDITIONAL_JUMP)  ; LAB_004e7e5c
    POP EDI                             ; 004e7e74
        ;   Label: LAB_004e7e74
    POP EBP                             ; 004e7e75
    POP EDI                             ; 004e7e76
    POP ESI                             ; 004e7e77
    POP EBX                             ; 004e7e78
    RET                                 ; 004e7e79
    PUSH ESI                            ; 004e7e7a
        ;   Label: LAB_004e7e7a
    MOV EDX,0x58b93e                    ; 004e7e7b | = "..\\sound\\mp3.cpp"
    MOV ECX,0xe0a                       ; 004e7e80
    PUSH 0x58b94f                       ; 004e7e85 | = "Can't open %s"
    MOV dword ptr [0x01cc4800],EDX      ; 004e7e8a | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004e7e90 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004e7e96
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 004e7e9b
    JMP 0x004e7e10                      ; 004e7e9e
        ;   XREF to: 004e7e10 (UNCONDITIONAL_JUMP)  ; LAB_004e7e10
    PUSH ESI                            ; 004e7ea3
        ;   Label: LAB_004e7ea3
    MOV ECX,0x58b985                    ; 004e7ea4 | = "..\\sound\\mp3.cpp"
    MOV EBX,0xe14                       ; 004e7ea9
    PUSH 0x58b996                       ; 004e7eae | = "Error preparing to decode %s"
    MOV dword ptr [0x01cc4800],ECX      ; 004e7eb3 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 004e7eb9 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004e7ebf
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 004e7ec4
    JMP 0x004e7e5b                      ; 004e7ec7
        ;   XREF to: 004e7e5b (UNCONDITIONAL_JUMP)  ; LAB_004e7e5b


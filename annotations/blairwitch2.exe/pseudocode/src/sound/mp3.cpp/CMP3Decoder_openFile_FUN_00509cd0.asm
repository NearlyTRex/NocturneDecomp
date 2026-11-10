; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CMP3Decoder_openFile_FUN_00509cd0(CMP3Decoder *this_ptr,char *filename)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; XREF[3]:
;   sound_sndmain.cpp_FUN_0054c1c0 at 0054c5ec
;   sound_sndmain.cpp_FUN_0054c7f0 at 0054c912
;   sound_sndmain.cpp_FUN_005519e0 at 00551bcf
;
; Referenced Globals:
;   undefined4 s_sound_005e02b2+1
;   TerminatedCString s_sound_mp3_cpp_005e02b9
;   TerminatedCString s_Can_t_open_s_005e02ca
;   undefined4 DAT_005e02d8
;   TerminatedCString s_sound_005e02db
;   TerminatedCString s_sound_mp3_cpp_005e02e1
;   TerminatedCString s_Can_t_open_s_005e02f2
;   TerminatedCString s_sound_mp3_cpp_005e0300
;   TerminatedCString s_Error_preparing_to_decod_005e0311
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   engine_dosio.cpp_FUN_00460c70
;   engine_dosio.cpp_getFileSize_FUN_00460aa0
;   sound_mp3.cpp_FUN_00509db0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00509cd0
        ;   Label: sound_mp3.cpp_CMP3Decoder_openFile_FUN_00509cd0
    PUSH ESI                            ; 00509cd1
    PUSH EDI                            ; 00509cd2
    PUSH EBP                            ; 00509cd3
    MOV EDI,dword ptr [ESP + 0x14]      ; 00509cd4
    MOV ESI,dword ptr [ESP + 0x18]      ; 00509cd8
    PUSH ESI                            ; 00509cdc
    PUSH 0x5e02b3                       ; 00509cdd | s_sound_005e02b2+1
    CALL engine_dosio.cpp_getFileSize_FUN_00460aa0 ; 00509ce2
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_00460aa0(char * directory, char * filename)
    ADD ESP,0x8                         ; 00509ce7
    MOV EBP,EAX                         ; 00509cea
    TEST EAX,EAX                        ; 00509cec
    JLE 0x00509d5a                      ; 00509cee
        ;   XREF to: 00509d5a (CONDITIONAL_JUMP)  ; LAB_00509d5a
    PUSH 0x5e02d8                       ; 00509cf0 | DAT_005e02d8
        ;   Label: LAB_00509cf0
    PUSH ESI                            ; 00509cf5
    PUSH 0x5e02db                       ; 00509cf6 | = "sound"
    CALL engine_dosio.cpp_FUN_00460c70  ; 00509cfb
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00460c70(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00509d00
    MOV EBX,EAX                         ; 00509d03
    TEST EAX,EAX                        ; 00509d05
    JNZ 0x00509d2c                      ; 00509d07
        ;   XREF to: 00509d2c (CONDITIONAL_JUMP)  ; LAB_00509d2c
    PUSH ESI                            ; 00509d09
    MOV EAX,0x5e02e1                    ; 00509d0a | = "..\\sound\\mp3.cpp"
    MOV EDX,0xea8                       ; 00509d0f
    PUSH 0x5e02f2                       ; 00509d14 | = "Can't open %s"
    MOV [0x01d046a0],EAX                ; 00509d19 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 00509d1e | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00509d24
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 00509d29
    PUSH EBP                            ; 00509d2c
        ;   Label: LAB_00509d2c
    PUSH EBX                            ; 00509d2d
    PUSH EDI                            ; 00509d2e
    CALL sound_mp3.cpp_FUN_00509db0     ; 00509d2f
        ;   XREF to: 00509db0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_FUN_00509db0()
    ADD ESP,0xc                         ; 00509d34
    TEST EAX,EAX                        ; 00509d37
    JZ 0x00509d83                       ; 00509d39
        ;   XREF to: 00509d83 (CONDITIONAL_JUMP)  ; LAB_00509d83
    PUSH EDI                            ; 00509d3b
        ;   Label: LAB_00509d3b
    MOV AL,byte ptr [ESI]               ; 00509d3c
        ;   Label: LAB_00509d3c
    MOV byte ptr [EDI],AL               ; 00509d3e
    CMP AL,0x0                          ; 00509d40
    JZ 0x00509d54                       ; 00509d42
        ;   XREF to: 00509d54 (CONDITIONAL_JUMP)  ; LAB_00509d54
    MOV AL,byte ptr [ESI + 0x1]         ; 00509d44
    ADD ESI,0x2                         ; 00509d47
    MOV byte ptr [EDI + 0x1],AL         ; 00509d4a
    ADD EDI,0x2                         ; 00509d4d
    CMP AL,0x0                          ; 00509d50
    JNZ 0x00509d3c                      ; 00509d52
        ;   XREF to: 00509d3c (CONDITIONAL_JUMP)  ; LAB_00509d3c
    POP EDI                             ; 00509d54
        ;   Label: LAB_00509d54
    POP EBP                             ; 00509d55
    POP EDI                             ; 00509d56
    POP ESI                             ; 00509d57
    POP EBX                             ; 00509d58
    RET                                 ; 00509d59
    PUSH ESI                            ; 00509d5a
        ;   Label: LAB_00509d5a
    MOV EDX,0x5e02b9                    ; 00509d5b | = "..\\sound\\mp3.cpp"
    MOV ECX,0xea3                       ; 00509d60
    PUSH 0x5e02ca                       ; 00509d65 | = "Can't open %s"
    MOV dword ptr [0x01d046a0],EDX      ; 00509d6a | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00509d70 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00509d76
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 00509d7b
    JMP 0x00509cf0                      ; 00509d7e
        ;   XREF to: 00509cf0 (UNCONDITIONAL_JUMP)  ; LAB_00509cf0
    PUSH ESI                            ; 00509d83
        ;   Label: LAB_00509d83
    MOV ECX,0x5e0300                    ; 00509d84 | = "..\\sound\\mp3.cpp"
    MOV EBX,0xead                       ; 00509d89
    PUSH 0x5e0311                       ; 00509d8e | = "Error preparing to decode %s"
    MOV dword ptr [0x01d046a0],ECX      ; 00509d93 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 00509d99 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00509d9f
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 00509da4
    JMP 0x00509d3b                      ; 00509da7
        ;   XREF to: 00509d3b (UNCONDITIONAL_JUMP)  ; LAB_00509d3b


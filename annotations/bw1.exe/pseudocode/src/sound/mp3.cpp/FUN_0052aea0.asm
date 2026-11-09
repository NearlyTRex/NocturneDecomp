; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_FUN_0052aea0(CMP3Decoder *this_ptr,char *filename)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; XREF[3]:
;   sound_sndmain.cpp_FUN_0056e830 at 0056ec5c
;   sound_sndmain.cpp_FUN_00574410 at 00574601
;   sound_sndmain.cpp_startSfx_FUN_00572d20 at 005731c9
;
; Referenced Globals:
;   undefined4 s_sound_005eb50d+1
;   TerminatedCString s_sound_mp3_cpp_005eb514
;   TerminatedCString s_Can_t_open_s_005eb525
;   undefined4 DAT_005eb533
;   TerminatedCString s_sound_005eb536
;   TerminatedCString s_sound_mp3_cpp_005eb53c
;   TerminatedCString s_Can_t_open_s_005eb54d
;   TerminatedCString s_sound_mp3_cpp_005eb55b
;   TerminatedCString s_Error_preparing_to_decod_005eb56c
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   engine_dosio.cpp_FUN_00479180
;   engine_dosio.cpp_getFileSize_FUN_00478fb0
;   sound_mp3.cpp_FUN_0052af80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052aea0
        ;   Label: sound_mp3.cpp_FUN_0052aea0
    PUSH ESI                            ; 0052aea1
    PUSH EDI                            ; 0052aea2
    PUSH EBP                            ; 0052aea3
    MOV EDI,dword ptr [ESP + 0x14]      ; 0052aea4
    MOV ESI,dword ptr [ESP + 0x18]      ; 0052aea8
    PUSH ESI                            ; 0052aeac
    PUSH 0x5eb50e                       ; 0052aead | s_sound_005eb50d+1
    CALL engine_dosio.cpp_getFileSize_FUN_00478fb0 ; 0052aeb2
        ;   XREF to: 00478fb0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_00478fb0(char * directory, char * filename)
    ADD ESP,0x8                         ; 0052aeb7
    MOV EBP,EAX                         ; 0052aeba
    TEST EAX,EAX                        ; 0052aebc
    JLE 0x0052af2a                      ; 0052aebe
        ;   XREF to: 0052af2a (CONDITIONAL_JUMP)  ; LAB_0052af2a
    PUSH 0x5eb533                       ; 0052aec0 | DAT_005eb533
        ;   Label: LAB_0052aec0
    PUSH ESI                            ; 0052aec5
    PUSH 0x5eb536                       ; 0052aec6 | = "sound"
    CALL engine_dosio.cpp_FUN_00479180  ; 0052aecb
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00479180(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0052aed0
    MOV EBX,EAX                         ; 0052aed3
    TEST EAX,EAX                        ; 0052aed5
    JNZ 0x0052aefc                      ; 0052aed7
        ;   XREF to: 0052aefc (CONDITIONAL_JUMP)  ; LAB_0052aefc
    PUSH ESI                            ; 0052aed9
    MOV EAX,0x5eb53c                    ; 0052aeda | = "..\\sound\\mp3.cpp"
    MOV EDX,0xea8                       ; 0052aedf
    PUSH 0x5eb54d                       ; 0052aee4 | = "Can't open %s"
    MOV [0x01d1d400],EAX                ; 0052aee9 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 0052aeee | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0052aef4
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 0052aef9
    PUSH EBP                            ; 0052aefc
        ;   Label: LAB_0052aefc
    PUSH EBX                            ; 0052aefd
    PUSH EDI                            ; 0052aefe
    CALL sound_mp3.cpp_FUN_0052af80     ; 0052aeff
        ;   XREF to: 0052af80 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_FUN_0052af80()
    ADD ESP,0xc                         ; 0052af04
    TEST EAX,EAX                        ; 0052af07
    JZ 0x0052af53                       ; 0052af09
        ;   XREF to: 0052af53 (CONDITIONAL_JUMP)  ; LAB_0052af53
    PUSH EDI                            ; 0052af0b
        ;   Label: LAB_0052af0b
    MOV AL,byte ptr [ESI]               ; 0052af0c
        ;   Label: LAB_0052af0c
    MOV byte ptr [EDI],AL               ; 0052af0e
    CMP AL,0x0                          ; 0052af10
    JZ 0x0052af24                       ; 0052af12
        ;   XREF to: 0052af24 (CONDITIONAL_JUMP)  ; LAB_0052af24
    MOV AL,byte ptr [ESI + 0x1]         ; 0052af14
    ADD ESI,0x2                         ; 0052af17
    MOV byte ptr [EDI + 0x1],AL         ; 0052af1a
    ADD EDI,0x2                         ; 0052af1d
    CMP AL,0x0                          ; 0052af20
    JNZ 0x0052af0c                      ; 0052af22
        ;   XREF to: 0052af0c (CONDITIONAL_JUMP)  ; LAB_0052af0c
    POP EDI                             ; 0052af24
        ;   Label: LAB_0052af24
    POP EBP                             ; 0052af25
    POP EDI                             ; 0052af26
    POP ESI                             ; 0052af27
    POP EBX                             ; 0052af28
    RET                                 ; 0052af29
    PUSH ESI                            ; 0052af2a
        ;   Label: LAB_0052af2a
    MOV EDX,0x5eb514                    ; 0052af2b | = "..\\sound\\mp3.cpp"
    MOV ECX,0xea3                       ; 0052af30
    PUSH 0x5eb525                       ; 0052af35 | = "Can't open %s"
    MOV dword ptr [0x01d1d400],EDX      ; 0052af3a | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0052af40 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0052af46
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 0052af4b
    JMP 0x0052aec0                      ; 0052af4e
        ;   XREF to: 0052aec0 (UNCONDITIONAL_JUMP)  ; LAB_0052aec0
    PUSH ESI                            ; 0052af53
        ;   Label: LAB_0052af53
    MOV ECX,0x5eb55b                    ; 0052af54 | = "..\\sound\\mp3.cpp"
    MOV EBX,0xead                       ; 0052af59
    PUSH 0x5eb56c                       ; 0052af5e | = "Error preparing to decode %s"
    MOV dword ptr [0x01d1d400],ECX      ; 0052af63 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 0052af69 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0052af6f
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 0052af74
    JMP 0x0052af0b                      ; 0052af77
        ;   XREF to: 0052af0b (UNCONDITIONAL_JUMP)  ; LAB_0052af0b


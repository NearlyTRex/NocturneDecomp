; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_mp3.cpp_CMP3Decoder_openFile_FUN_00534550(CMP3Decoder * this_ptr, char * filename)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; XREF[5]:
;   sound_mp3.cpp_testMP3DecoderBenchmark_FUN_00534210 at 00534298
;   sound_sndmain.cpp_getSampleInfo_FUN_005aa3f0 at 005aa5b3
;   sound_sndmain.cpp_getSfxSample_FUN_005a4c80 at 005a5022
;   sound_sndmain.cpp_loadStreamingSoundFile_FUN_005a5200 at 005a5318
;   sound_sndmain.cpp_startSfx_FUN_005a8e90 at 005a92ea
;
; Referenced Globals:
;   TerminatedCString s_sound_0063b22a
;   TerminatedCString s_sound_mp3_cpp_0063b230
;   TerminatedCString s_Can_t_open_s_0063b241
;   TerminatedCString s_rb_0063b24f
;   TerminatedCString s_sound_0063b252
;   TerminatedCString s_sound_mp3_cpp_0063b258
;   TerminatedCString s_Can_t_open_s_0063b269
;   TerminatedCString s_sound_mp3_cpp_0063b277
;   TerminatedCString s_Error_preparing_to_decod_0063b288
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_dosio.c_getFile_FUN_00481a50
;   engine_dosio.c_getFileSize_FUN_00481880
;   sound_mp3.cpp_CMP3Decoder_parseHeader_FUN_00534630
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00534550
        ;   Label: sound_mp3.cpp_CMP3Decoder_openFile_FUN_00534550
    PUSH ESI                            ; 00534551
    PUSH EDI                            ; 00534552
    PUSH EBP                            ; 00534553
    MOV EDI,dword ptr [ESP + 0x14]      ; 00534554
    MOV ESI,dword ptr [ESP + 0x18]      ; 00534558
    PUSH ESI                            ; 0053455c
    PUSH 0x63b22a                       ; 0053455d | = "sound" | s_sound_0063b22a = sound
    CALL engine_dosio.c_getFileSize_FUN_00481880 ; 00534562 | int engine_dosio.c_getFileSize_FUN_00481880(char * directory, char * filename)
        ;   XREF to: 00481880 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00534567
    MOV EBP,EAX                         ; 0053456a
    TEST EAX,EAX                        ; 0053456c
    JLE 0x005345da                      ; 0053456e | LAB_005345da
        ;   XREF to: 005345da (CONDITIONAL_JUMP)
    PUSH 0x63b24f                       ; 00534570 | = "rb" | s_rb_0063b24f = rb
        ;   Label: LAB_00534570
    PUSH ESI                            ; 00534575
    PUSH 0x63b252                       ; 00534576 | = "sound" | s_sound_0063b252 = sound
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0053457b | FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00534580
    MOV EBX,EAX                         ; 00534583
    TEST EAX,EAX                        ; 00534585
    JNZ 0x005345ac                      ; 00534587 | LAB_005345ac
        ;   XREF to: 005345ac (CONDITIONAL_JUMP)
    PUSH ESI                            ; 00534589
    MOV EAX,0x63b258                    ; 0053458a | = "..\\sound\\mp3.cpp" | s_sound_mp3_cpp_0063b258 = ..\sound\mp3.cpp
    MOV EDX,0xe19                       ; 0053458f
    PUSH 0x63b269                       ; 00534594 | = "Can't open %s" | s_Can_t_open_s_0063b269 = Can't open %s
    MOV [0x02f0ca48],EAX                ; 00534599 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 0053459e | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005345a4 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005345a9
    PUSH EBP                            ; 005345ac
        ;   Label: LAB_005345ac
    PUSH EBX                            ; 005345ad
    PUSH EDI                            ; 005345ae
    CALL sound_mp3.cpp_CMP3Decoder_parseHeader_FUN_00534630 ; 005345af | int sound_mp3.cpp_CMP3Decoder_parseHeader_FUN_00534630(CMP3Decoder * this_ptr, FILE * file_handle, int file_size)
        ;   XREF to: 00534630 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005345b4
    TEST EAX,EAX                        ; 005345b7
    JZ 0x00534603                       ; 005345b9 | LAB_00534603
        ;   XREF to: 00534603 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 005345bb
        ;   Label: LAB_005345bb
    MOV AL,byte ptr [ESI]               ; 005345bc
        ;   Label: LAB_005345bc
    MOV byte ptr [EDI],AL               ; 005345be
    CMP AL,0x0                          ; 005345c0
    JZ 0x005345d4                       ; 005345c2 | LAB_005345d4
        ;   XREF to: 005345d4 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 005345c4
    ADD ESI,0x2                         ; 005345c7
    MOV byte ptr [EDI + 0x1],AL         ; 005345ca
    ADD EDI,0x2                         ; 005345cd
    CMP AL,0x0                          ; 005345d0
    JNZ 0x005345bc                      ; 005345d2 | LAB_005345bc
        ;   XREF to: 005345bc (CONDITIONAL_JUMP)
    POP EDI                             ; 005345d4
        ;   Label: LAB_005345d4
    POP EBP                             ; 005345d5
    POP EDI                             ; 005345d6
    POP ESI                             ; 005345d7
    POP EBX                             ; 005345d8
    RET                                 ; 005345d9
    PUSH ESI                            ; 005345da
        ;   Label: LAB_005345da
    MOV EDX,0x63b230                    ; 005345db | = "..\\sound\\mp3.cpp" | s_sound_mp3_cpp_0063b230 = ..\sound\mp3.cpp
    MOV ECX,0xe14                       ; 005345e0
    PUSH 0x63b241                       ; 005345e5 | = "Can't open %s" | s_Can_t_open_s_0063b241 = Can't open %s
    MOV dword ptr [0x02f0ca48],EDX      ; 005345ea | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 005345f0 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005345f6 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005345fb
    JMP 0x00534570                      ; 005345fe | LAB_00534570
        ;   XREF to: 00534570 (UNCONDITIONAL_JUMP)
    PUSH ESI                            ; 00534603
        ;   Label: LAB_00534603
    MOV ECX,0x63b277                    ; 00534604 | = "..\\sound\\mp3.cpp" | s_sound_mp3_cpp_0063b277 = ..\sound\mp3.cpp
    MOV EBX,0xe1e                       ; 00534609
    PUSH 0x63b288                       ; 0053460e | = "Error preparing to decode %s" | s_Error_preparing_to_decod_0063b288 = Error preparing to decode %s
    MOV dword ptr [0x02f0ca48],ECX      ; 00534613 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 00534619 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0053461f | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00534624
    JMP 0x005345bb                      ; 00534627 | LAB_005345bb
        ;   XREF to: 005345bb (UNCONDITIONAL_JUMP)


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CMP3Decoder_openFile_FUN_005027b0(CMP3Decoder *this_ptr,char *filename)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; XREF[3]:
;   sound_sndmain.cpp_getSampleInfo_FUN_00557570 at 00557761
;   sound_sndmain.cpp_getSfxSample_FUN_00551d20 at 0055214c
;   sound_sndmain.cpp_loadStreamingSoundFile_FUN_00552350 at 00552472
;
; Referenced Globals:
;   undefined4 s_sound_005ca31e+1
;   TerminatedCString s_sound_mp3_cpp_005ca325
;   TerminatedCString s_Can_t_open_s_005ca336
;   undefined4 DAT_005ca344
;   TerminatedCString s_sound_005ca347
;   TerminatedCString s_sound_mp3_cpp_005ca34d
;   TerminatedCString s_Can_t_open_s_005ca35e
;   TerminatedCString s_sound_mp3_cpp_005ca36c
;   TerminatedCString s_Error_preparing_to_decod_005ca37d
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   engine_dosio.cpp_FUN_004659c0
;   engine_dosio.cpp_getFileSize_FUN_004657f0
;   sound_mp3.cpp_FUN_00502890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005027b0
        ;   Label: sound_mp3.cpp_CMP3Decoder_openFile_FUN_005027b0
    PUSH ESI                            ; 005027b1
    PUSH EDI                            ; 005027b2
    PUSH EBP                            ; 005027b3
    MOV EDI,dword ptr [ESP + 0x14]      ; 005027b4
    MOV ESI,dword ptr [ESP + 0x18]      ; 005027b8
    PUSH ESI                            ; 005027bc
    PUSH 0x5ca31f                       ; 005027bd | s_sound_005ca31e+1
    CALL engine_dosio.cpp_getFileSize_FUN_004657f0 ; 005027c2
        ;   XREF to: 004657f0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_004657f0(char * directory, char * filename)
    ADD ESP,0x8                         ; 005027c7
    MOV EBP,EAX                         ; 005027ca
    TEST EAX,EAX                        ; 005027cc
    JLE 0x0050283a                      ; 005027ce
        ;   XREF to: 0050283a (CONDITIONAL_JUMP)  ; LAB_0050283a
    PUSH 0x5ca344                       ; 005027d0 | DAT_005ca344
        ;   Label: LAB_005027d0
    PUSH ESI                            ; 005027d5
    PUSH 0x5ca347                       ; 005027d6 | = "sound"
    CALL engine_dosio.cpp_FUN_004659c0  ; 005027db
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_004659c0(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 005027e0
    MOV EBX,EAX                         ; 005027e3
    TEST EAX,EAX                        ; 005027e5
    JNZ 0x0050280c                      ; 005027e7
        ;   XREF to: 0050280c (CONDITIONAL_JUMP)  ; LAB_0050280c
    PUSH ESI                            ; 005027e9
    MOV EAX,0x5ca34d                    ; 005027ea | = "..\\sound\\mp3.cpp"
    MOV EDX,0xea8                       ; 005027ef
    PUSH 0x5ca35e                       ; 005027f4 | = "Can't open %s"
    MOV [0x01d71de0],EAX                ; 005027f9 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 005027fe | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00502804
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 00502809
    PUSH EBP                            ; 0050280c
        ;   Label: LAB_0050280c
    PUSH EBX                            ; 0050280d
    PUSH EDI                            ; 0050280e
    CALL sound_mp3.cpp_FUN_00502890     ; 0050280f
        ;   XREF to: 00502890 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_FUN_00502890()
    ADD ESP,0xc                         ; 00502814
    TEST EAX,EAX                        ; 00502817
    JZ 0x00502863                       ; 00502819
        ;   XREF to: 00502863 (CONDITIONAL_JUMP)  ; LAB_00502863
    PUSH EDI                            ; 0050281b
        ;   Label: LAB_0050281b
    MOV AL,byte ptr [ESI]               ; 0050281c
        ;   Label: LAB_0050281c
    MOV byte ptr [EDI],AL               ; 0050281e
    CMP AL,0x0                          ; 00502820
    JZ 0x00502834                       ; 00502822
        ;   XREF to: 00502834 (CONDITIONAL_JUMP)  ; LAB_00502834
    MOV AL,byte ptr [ESI + 0x1]         ; 00502824
    ADD ESI,0x2                         ; 00502827
    MOV byte ptr [EDI + 0x1],AL         ; 0050282a
    ADD EDI,0x2                         ; 0050282d
    CMP AL,0x0                          ; 00502830
    JNZ 0x0050281c                      ; 00502832
        ;   XREF to: 0050281c (CONDITIONAL_JUMP)  ; LAB_0050281c
    POP EDI                             ; 00502834
        ;   Label: LAB_00502834
    POP EBP                             ; 00502835
    POP EDI                             ; 00502836
    POP ESI                             ; 00502837
    POP EBX                             ; 00502838
    RET                                 ; 00502839
    PUSH ESI                            ; 0050283a
        ;   Label: LAB_0050283a
    MOV EDX,0x5ca325                    ; 0050283b | = "..\\sound\\mp3.cpp"
    MOV ECX,0xea3                       ; 00502840
    PUSH 0x5ca336                       ; 00502845 | = "Can't open %s"
    MOV dword ptr [0x01d71de0],EDX      ; 0050284a | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00502850 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00502856
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 0050285b
    JMP 0x005027d0                      ; 0050285e
        ;   XREF to: 005027d0 (UNCONDITIONAL_JUMP)  ; LAB_005027d0
    PUSH ESI                            ; 00502863
        ;   Label: LAB_00502863
    MOV ECX,0x5ca36c                    ; 00502864 | = "..\\sound\\mp3.cpp"
    MOV EBX,0xead                       ; 00502869
    PUSH 0x5ca37d                       ; 0050286e | = "Error preparing to decode %s"
    MOV dword ptr [0x01d71de0],ECX      ; 00502873 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 00502879 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0050287f
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 00502884
    JMP 0x0050281b                      ; 00502887
        ;   XREF to: 0050281b (UNCONDITIONAL_JUMP)  ; LAB_0050281b


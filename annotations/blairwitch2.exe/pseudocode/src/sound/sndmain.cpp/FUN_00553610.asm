; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_FUN_00553610(float latency)
;
; Parameters:
; float            Stack[0x4]:4   latency
;
; XREF[1]:
;   sound_sndmain.cpp_FUN_00553680 at 005537e3
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005e926e
;   TerminatedCString s_setMaxSwSoundLatency_can_005e9283
;   undefined4 DAT_005e92be
;   undefined4 DAT_005e92c6
;   undefined4 DAT_0061bcc4
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   sound_sndmain.cpp_FUN_00552b20
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_FUN_00552b20 ; 00553610
        ;   XREF to: 00552b20 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00552b20()
        ;   Label: sound_sndmain.cpp_FUN_00553610
    TEST EAX,EAX                        ; 00553615
    JNZ 0x00553649                      ; 00553617
        ;   XREF to: 00553649 (CONDITIONAL_JUMP)  ; LAB_00553649
    FLD float ptr [ESP + 0x4]           ; 00553619
        ;   Label: LAB_00553619
    FCOMP double ptr [0x005e92be]       ; 0055361d | DAT_005e92be
    FNSTSW AX                           ; 00553623
    SAHF                                ; 00553625
    JNC 0x00553630                      ; 00553626
        ;   XREF to: 00553630 (CONDITIONAL_JUMP)  ; LAB_00553630
    MOV dword ptr [ESP + 0x4],0x3d4ccccd ; 00553628
    FLD float ptr [ESP + 0x4]           ; 00553630
        ;   Label: LAB_00553630
    FCOMP double ptr [0x005e92c6]       ; 00553634 | DAT_005e92c6
    FNSTSW AX                           ; 0055363a
    SAHF                                ; 0055363c
    JA 0x0055366e                       ; 0055363d
        ;   XREF to: 0055366e (CONDITIONAL_JUMP)  ; LAB_0055366e
    MOV EAX,dword ptr [ESP + 0x4]       ; 0055363f
    MOV [0x0061bcc4],EAX                ; 00553643 | DAT_0061bcc4
    RET                                 ; 00553648
    MOV EDX,0x5e926e                    ; 00553649 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00553649
    MOV ECX,0x1877                      ; 0055364e
    PUSH 0x5e9283                       ; 00553653 | = "setMaxSwSoundLatency - can't do this ..."
    MOV dword ptr [0x01d046a0],EDX      ; 00553658 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0055365e | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00553664
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00553669
    JMP 0x00553619                      ; 0055366c
        ;   XREF to: 00553619 (UNCONDITIONAL_JUMP)  ; LAB_00553619
    MOV dword ptr [ESP + 0x4],0x40000000 ; 0055366e
        ;   Label: LAB_0055366e
    MOV EAX,dword ptr [ESP + 0x4]       ; 00553676
    MOV [0x0061bcc4],EAX                ; 0055367a | DAT_0061bcc4
    RET                                 ; 0055367f


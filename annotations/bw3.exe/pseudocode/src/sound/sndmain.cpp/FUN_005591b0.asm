; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_FUN_005591b0(float latency)
;
; Parameters:
; float            Stack[0x4]:4   latency
;
; XREF[1]:
;   sound_sndmain.cpp_FUN_00559220 at 00559383
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005d3d62
;   TerminatedCString s_setMaxSwSoundLatency_can_005d3d77
;   undefined4 DAT_005d3db2
;   undefined4 DAT_005d3dba
;   undefined4 DAT_00604250
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   sound_sndmain.cpp_FUN_005586c0
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_FUN_005586c0 ; 005591b0
        ;   XREF to: 005586c0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005586c0()
        ;   Label: sound_sndmain.cpp_FUN_005591b0
    TEST EAX,EAX                        ; 005591b5
    JNZ 0x005591e9                      ; 005591b7
        ;   XREF to: 005591e9 (CONDITIONAL_JUMP)  ; LAB_005591e9
    FLD float ptr [ESP + 0x4]           ; 005591b9
        ;   Label: LAB_005591b9
    FCOMP double ptr [0x005d3db2]       ; 005591bd | DAT_005d3db2
    FNSTSW AX                           ; 005591c3
    SAHF                                ; 005591c5
    JNC 0x005591d0                      ; 005591c6
        ;   XREF to: 005591d0 (CONDITIONAL_JUMP)  ; LAB_005591d0
    MOV dword ptr [ESP + 0x4],0x3d4ccccd ; 005591c8
    FLD float ptr [ESP + 0x4]           ; 005591d0
        ;   Label: LAB_005591d0
    FCOMP double ptr [0x005d3dba]       ; 005591d4 | DAT_005d3dba
    FNSTSW AX                           ; 005591da
    SAHF                                ; 005591dc
    JA 0x0055920e                       ; 005591dd
        ;   XREF to: 0055920e (CONDITIONAL_JUMP)  ; LAB_0055920e
    MOV EAX,dword ptr [ESP + 0x4]       ; 005591df
    MOV [0x00604250],EAX                ; 005591e3 | DAT_00604250
    RET                                 ; 005591e8
    MOV EDX,0x5d3d62                    ; 005591e9 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005591e9
    MOV ECX,0x1881                      ; 005591ee
    PUSH 0x5d3d77                       ; 005591f3 | = "setMaxSwSoundLatency - can't do this ..."
    MOV dword ptr [0x01d71de0],EDX      ; 005591f8 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 005591fe | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00559204
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00559209
    JMP 0x005591b9                      ; 0055920c
        ;   XREF to: 005591b9 (UNCONDITIONAL_JUMP)  ; LAB_005591b9
    MOV dword ptr [ESP + 0x4],0x40000000 ; 0055920e
        ;   Label: LAB_0055920e
    MOV EAX,dword ptr [ESP + 0x4]       ; 00559216
    MOV [0x00604250],EAX                ; 0055921a | DAT_00604250
    RET                                 ; 0055921f


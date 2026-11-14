; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_pollRecordingDevice_FUN_005530f0(short *output_buffer,int num_samples)
;
; Parameters:
; short *          Stack[0x4]:4   output_buffer
; int              Stack[0x8]:4   num_samples
;
; Referenced Globals:
;   undefined4 DAT_02649868
;
; Called Functions:
;   sound_sndmain.cpp_isRecordingStarted_FUN_00552f60
;   sound_sndmain.cpp_lockSound_FUN_005532f0
;   sound_sndmain.cpp_unlockSound_FUN_00551440
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_lockSound_FUN_005532f0 ; 005530f0
        ;   XREF to: 005532f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_005532f0()
        ;   Label: sound_sndmain.cpp_pollRecordingDevice_FUN_005530f0
    CALL sound_sndmain.cpp_isRecordingStarted_FUN_00552f60 ; 005530f5
        ;   XREF to: 00552f60 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isRecordingStarted_FUN_00552f60()
    TEST EAX,EAX                        ; 005530fa
    JZ 0x00553108                       ; 005530fc
        ;   XREF to: 00553108 (CONDITIONAL_JUMP)  ; LAB_00553108
    MOV EDX,dword ptr [0x02649868]      ; 005530fe | DAT_02649868
    TEST EDX,EDX                        ; 00553104
    JNZ 0x00553113                      ; 00553106
        ;   XREF to: 00553113 (CONDITIONAL_JUMP)  ; LAB_00553113
    CALL sound_sndmain.cpp_unlockSound_FUN_00551440 ; 00553108
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00551440()
        ;   Label: LAB_00553108
    MOV EAX,0xffffffff                  ; 0055310d
    RET                                 ; 00553112
    PUSH ESI                            ; 00553113
        ;   Label: LAB_00553113
    PUSH EBX                            ; 00553114
    MOV ECX,dword ptr [ESP + 0x10]      ; 00553115
    PUSH ECX                            ; 00553119
    MOV ESI,dword ptr [ESP + 0x10]      ; 0055311a
    PUSH ESI                            ; 0055311e
    MOV EBX,dword ptr [EDX]             ; 0055311f
    PUSH EDX                            ; 00553121
    CALL dword ptr [EBX + 0x10]         ; 00553122
    ADD ESP,0xc                         ; 00553125
    MOV EBX,EAX                         ; 00553128
    CALL sound_sndmain.cpp_unlockSound_FUN_00551440 ; 0055312a
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00551440()
    MOV EAX,EBX                         ; 0055312f
    POP EBX                             ; 00553131
    POP ESI                             ; 00553132
    RET                                 ; 00553133


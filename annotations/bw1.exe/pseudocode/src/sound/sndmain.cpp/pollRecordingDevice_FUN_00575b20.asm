; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_pollRecordingDevice_FUN_00575b20(short *output_buffer,int num_samples)
;
; Parameters:
; short *          Stack[0x4]:4   output_buffer
; int              Stack[0x8]:4   num_samples
;
; Referenced Globals:
;   undefined4 DAT_02c81038
;
; Called Functions:
;   sound_sndmain.cpp_isRecordingStarted_FUN_00575990
;   sound_sndmain.cpp_lockSound_FUN_00575d20
;   sound_sndmain.cpp_unlockSound_FUN_00573e70
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_lockSound_FUN_00575d20 ; 00575b20
        ;   XREF to: 00575d20 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00575d20()
        ;   Label: sound_sndmain.cpp_pollRecordingDevice_FUN_00575b20
    CALL sound_sndmain.cpp_isRecordingStarted_FUN_00575990 ; 00575b25
        ;   XREF to: 00575990 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isRecordingStarted_FUN_00575990()
    TEST EAX,EAX                        ; 00575b2a
    JZ 0x00575b38                       ; 00575b2c
        ;   XREF to: 00575b38 (CONDITIONAL_JUMP)  ; LAB_00575b38
    MOV EDX,dword ptr [0x02c81038]      ; 00575b2e | DAT_02c81038
    TEST EDX,EDX                        ; 00575b34
    JNZ 0x00575b43                      ; 00575b36
        ;   XREF to: 00575b43 (CONDITIONAL_JUMP)  ; LAB_00575b43
    CALL sound_sndmain.cpp_unlockSound_FUN_00573e70 ; 00575b38
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00573e70()
        ;   Label: LAB_00575b38
    MOV EAX,0xffffffff                  ; 00575b3d
    RET                                 ; 00575b42
    PUSH ESI                            ; 00575b43
        ;   Label: LAB_00575b43
    PUSH EBX                            ; 00575b44
    MOV ECX,dword ptr [ESP + 0x10]      ; 00575b45
    PUSH ECX                            ; 00575b49
    MOV ESI,dword ptr [ESP + 0x10]      ; 00575b4a
    PUSH ESI                            ; 00575b4e
    MOV EBX,dword ptr [EDX]             ; 00575b4f
    PUSH EDX                            ; 00575b51
    CALL dword ptr [EBX + 0x10]         ; 00575b52
    ADD ESP,0xc                         ; 00575b55
    MOV EBX,EAX                         ; 00575b58
    CALL sound_sndmain.cpp_unlockSound_FUN_00573e70 ; 00575b5a
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00573e70()
    MOV EAX,EBX                         ; 00575b5f
    POP EBX                             ; 00575b61
    POP ESI                             ; 00575b62
    RET                                 ; 00575b63


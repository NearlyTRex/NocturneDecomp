; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSfxSlot * __cdecl sound_sndmain_cpp_FUN_00552f10(uint sfx_handle,int check_hardware_playback)
;
; Parameters:
; uint             Stack[0x4]:4   sfx_handle
; int              Stack[0x8]:4   check_hardware_playback
;
; XREF[10]:
;   sound_sndmain.cpp_FUN_00556700 at 00556711
;   sound_sndmain.cpp_FUN_00556780 at 00556787
;   sound_sndmain.cpp_FUN_00556930 at 00556937
;   sound_sndmain.cpp_FUN_00556a30 at 00556a37
;   sound_sndmain.cpp_FUN_00556ab0 at 00556ab7
;   sound_sndmain.cpp_FUN_00556ae0 at 00556ae7
;   sound_sndmain.cpp_FUN_00556b40 at 00556b7a
;   sound_sndmain.cpp_FUN_00556c10 at 00556c1a
;   sound_sndmain.cpp_getSfxPlaybackPosition_FUN_005567c0 at 005567d2
;   sound_sndmain.cpp_killSfx_FUN_00556be0 at 00556be7
;
; Referenced Globals:
;   undefined4 DAT_02ce7280
;   undefined4 DAT_02cf3280
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_00555270
;   sound_sndmain.cpp_FUN_00556fd0
;   sound_sndmain.cpp_FUN_00558e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00552f10
        ;   Label: sound_sndmain.cpp_FUN_00552f10
    PUSH ESI                            ; 00552f11
    MOV ESI,dword ptr [ESP + 0xc]       ; 00552f12
    MOV EBX,ESI                         ; 00552f16
    SHR ESI,0x6                         ; 00552f18
    AND EBX,0x3f                        ; 00552f1b
    CMP ESI,0x1                         ; 00552f1e
    JL 0x00552f5d                       ; 00552f21
        ;   XREF to: 00552f5d (CONDITIONAL_JUMP)  ; LAB_00552f5d
    CMP ESI,0xffffff                    ; 00552f23
    JGE 0x00552f5d                      ; 00552f29
        ;   XREF to: 00552f5d (CONDITIONAL_JUMP)  ; LAB_00552f5d
    TEST EBX,EBX                        ; 00552f2b
    JL 0x00552f5d                       ; 00552f2d
        ;   XREF to: 00552f5d (CONDITIONAL_JUMP)  ; LAB_00552f5d
    CMP EBX,0x40                        ; 00552f2f
    JGE 0x00552f5d                      ; 00552f32
        ;   XREF to: 00552f5d (CONDITIONAL_JUMP)  ; LAB_00552f5d
    LEA EAX,[EBX*0x8 + 0x0]             ; 00552f34
    ADD EAX,EBX                         ; 00552f3b
    SHL EAX,0x3                         ; 00552f3d
    SUB EAX,EBX                         ; 00552f40
    MOV EBX,0x2ce721c                   ; 00552f42
    SHL EAX,0x2                         ; 00552f47
    ADD EBX,EAX                         ; 00552f4a
    CMP ESI,dword ptr [EBX + 0x64]      ; 00552f4c | DAT_02ce7280
    JNZ 0x00552f5d                      ; 00552f4f
        ;   XREF to: 00552f5d (CONDITIONAL_JUMP)  ; LAB_00552f5d
    CMP dword ptr [ESP + 0x10],0x0      ; 00552f51
    JNZ 0x00552f62                      ; 00552f56
        ;   XREF to: 00552f62 (CONDITIONAL_JUMP)  ; LAB_00552f62
    MOV EAX,EBX                         ; 00552f58
        ;   Label: LAB_00552f58
    POP ESI                             ; 00552f5a
    POP EBX                             ; 00552f5b
    RET                                 ; 00552f5c
    XOR EAX,EAX                         ; 00552f5d
        ;   Label: LAB_00552f5d
    POP ESI                             ; 00552f5f
    POP EBX                             ; 00552f60
    RET                                 ; 00552f61
    CALL sound_sndmain.cpp_FUN_00558e90 ; 00552f62
        ;   XREF to: 00558e90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00558e90()
        ;   Label: LAB_00552f62
    CMP ESI,dword ptr [EBX + 0x64]      ; 00552f67 | DAT_02ce7280
    JNZ 0x00552f90                      ; 00552f6a
        ;   XREF to: 00552f90 (CONDITIONAL_JUMP)  ; LAB_00552f90
    CMP dword ptr [EBX + 0x68],0x0      ; 00552f6c
    JZ 0x00552f90                       ; 00552f70
        ;   XREF to: 00552f90 (CONDITIONAL_JUMP)  ; LAB_00552f90
    CMP dword ptr [EBX + 0x60],0x0      ; 00552f72
    JZ 0x00552f58                       ; 00552f76
        ;   XREF to: 00552f58 (CONDITIONAL_JUMP)  ; LAB_00552f58
    MOV EDX,dword ptr [0x02cf3280]      ; 00552f78 | DAT_02cf3280
    TEST EDX,EDX                        ; 00552f7e
    JZ 0x00552f9a                       ; 00552f80
        ;   XREF to: 00552f9a (CONDITIONAL_JUMP)  ; LAB_00552f9a
    TEST byte ptr [EBX + 0x11b],0x40    ; 00552f82
    JZ 0x00552fad                       ; 00552f89
        ;   XREF to: 00552fad (CONDITIONAL_JUMP)  ; LAB_00552fad
    MOV EAX,EBX                         ; 00552f8b
    POP ESI                             ; 00552f8d
    POP EBX                             ; 00552f8e
    RET                                 ; 00552f8f
    CALL sound_sndmain.cpp_FUN_00556fd0 ; 00552f90
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00556fd0()
        ;   Label: LAB_00552f90
    XOR EAX,EAX                         ; 00552f95
    POP ESI                             ; 00552f97
    POP EBX                             ; 00552f98
    RET                                 ; 00552f99
    PUSH EBX                            ; 00552f9a
        ;   Label: LAB_00552f9a
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_00555270 ; 00552f9b
        ;   XREF to: 00555270 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_kill_FUN_00555270(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 00552fa0
    CALL sound_sndmain.cpp_FUN_00556fd0 ; 00552fa3
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00556fd0()
    XOR EAX,EAX                         ; 00552fa8
    POP ESI                             ; 00552faa
    POP EBX                             ; 00552fab
    RET                                 ; 00552fac
    PUSH EBX                            ; 00552fad
        ;   Label: LAB_00552fad
    MOV ESI,dword ptr [EDX]             ; 00552fae
    PUSH EDX                            ; 00552fb0
    CALL dword ptr [ESI + 0x54]         ; 00552fb1
    ADD ESP,0x8                         ; 00552fb4
    TEST EAX,EAX                        ; 00552fb7
    JNZ 0x00552f58                      ; 00552fb9
        ;   XREF to: 00552f58 (CONDITIONAL_JUMP)  ; LAB_00552f58
    PUSH EBX                            ; 00552fbb
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_00555270 ; 00552fbc
        ;   XREF to: 00555270 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_kill_FUN_00555270(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 00552fc1
    CALL sound_sndmain.cpp_FUN_00556fd0 ; 00552fc4
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00556fd0()
    XOR EAX,EAX                         ; 00552fc9
    POP ESI                             ; 00552fcb
    POP EBX                             ; 00552fcc
    RET                                 ; 00552fcd


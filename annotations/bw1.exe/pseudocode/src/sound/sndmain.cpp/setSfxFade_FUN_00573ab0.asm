; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_setSfxFade_FUN_00573ab0(uint sfx_handle,float target_volume,float fade_duration,int stop_after_fade)
;
; Parameters:
; uint             Stack[0x4]:4   sfx_handle
; float            Stack[0x8]:4   target_volume
; float            Stack[0xc]:4   fade_duration
; int              Stack[0x10]:4   stop_after_fade
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[3]:
;   core_doc.cpp_FUN_00469550 at 0046bd93
;   core_event.cpp_FUN_004a1d00 at 004a3a44
;   core_stranger.cpp_CStranger_processFrame_FUN_00585b00 at 005881b3
;
; Called Functions:
;   sound_sndmain.cpp_FUN_0056fa10
;   sound_sndmain.cpp_FUN_00573e70
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00573ab0
        ;   Label: sound_sndmain.cpp_setSfxFade_FUN_00573ab0
    PUSH 0x1                            ; 00573ab3
    MOV EDX,dword ptr [ESP + 0xc]       ; 00573ab5
    PUSH EDX                            ; 00573ab9
    CALL sound_sndmain.cpp_FUN_0056fa10 ; 00573aba
        ;   XREF to: 0056fa10 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_FUN_0056fa10(uint sfx_handle, int check_hardware_playback)
    ADD ESP,0x8                         ; 00573abf
    TEST EAX,EAX                        ; 00573ac2
    JNZ 0x00573aca                      ; 00573ac4
        ;   XREF to: 00573aca (CONDITIONAL_JUMP)  ; LAB_00573aca
    ADD ESP,0x4                         ; 00573ac6
    RET                                 ; 00573ac9
    MOV EDX,dword ptr [ESP + 0xc]       ; 00573aca
        ;   Label: LAB_00573aca
    MOV dword ptr [EAX + 0xfc],EDX      ; 00573ace
    MOV EDX,dword ptr [ESP + 0x10]      ; 00573ad4
    MOV dword ptr [EAX + 0x100],EDX     ; 00573ad8
    MOV EDX,dword ptr [ESP + 0x14]      ; 00573ade
    MOV dword ptr [ESP],EDX             ; 00573ae2
    FILD dword ptr [ESP]                ; 00573ae5
    FSTP float ptr [EAX + 0x104]        ; 00573ae8
    CALL sound_sndmain.cpp_FUN_00573e70 ; 00573aee
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00573e70()
    MOV EAX,0x1                         ; 00573af3
    ADD ESP,0x4                         ; 00573af8
    RET                                 ; 00573afb


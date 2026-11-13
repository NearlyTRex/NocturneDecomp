; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_getSfxSampleInfo_FUN_00550bf0(uint sfx_handle,CSfxSample *output_buffer)
;
; Parameters:
; uint             Stack[0x4]:4   sfx_handle
; CSfxSample *     Stack[0x8]:4   output_buffer
;
; XREF[3]:
;   core_event.cpp_CEventList_updateSfxEntries_FUN_00491a90 at 00491b6e
;   core_game.cpp_FUN_004b5190 at 004b5a86
;   core_tommygun.cpp_CTommyGun_process_FUN_00576130 at 005762a8
;
; Called Functions:
;   sound_sndmain.cpp_getSfxSlotFromHandle_FUN_0054d3a0
;   sound_sndmain.cpp_unlockSound_FUN_00551440
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00550bf0
        ;   Label: sound_sndmain.cpp_getSfxSampleInfo_FUN_00550bf0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00550bf2
    PUSH EDX                            ; 00550bf6
    CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_0054d3a0 ; 00550bf7
        ;   XREF to: 0054d3a0 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_getSfxSlotFromHandle_FUN_0054d3a0(uint sfx_handle, int check_hardware_playback)
    ADD ESP,0x8                         ; 00550bfc
    TEST EAX,EAX                        ; 00550bff
    JNZ 0x00550c04                      ; 00550c01
        ;   XREF to: 00550c04 (CONDITIONAL_JUMP)  ; LAB_00550c04
    RET                                 ; 00550c03
    PUSH EDI                            ; 00550c04
        ;   Label: LAB_00550c04
    PUSH ESI                            ; 00550c05
    MOV ECX,0x54                        ; 00550c06
    MOV EDI,dword ptr [ESP + 0x10]      ; 00550c0b
    MOV ESI,dword ptr [EAX + 0x68]      ; 00550c0f
    MOVSD.REP ES:EDI,ESI                ; 00550c12
    CALL sound_sndmain.cpp_unlockSound_FUN_00551440 ; 00550c14
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00551440()
    MOV EAX,0x1                         ; 00550c19
    POP ESI                             ; 00550c1e
    POP EDI                             ; 00550c1f
    RET                                 ; 00550c20


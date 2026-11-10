; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_getSfxSampleInfo_FUN_00573620(uint sfx_handle,CSfxSample *output_buffer)
;
; Parameters:
; uint             Stack[0x4]:4   sfx_handle
; CSfxSample *     Stack[0x8]:4   output_buffer
;
; XREF[3]:
;   core_event.cpp_CEventList_updateSfxEntries_FUN_004aa400 at 004aa4de
;   core_game.cpp_FUN_004ce580 at 004cee52
;   core_tommygun.cpp_CTommyGun_process_FUN_00598d50 at 00598ec8
;
; Called Functions:
;   sound_sndmain.cpp_FUN_0056fa10
;   sound_sndmain.cpp_FUN_00573e70
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00573620
        ;   Label: sound_sndmain.cpp_getSfxSampleInfo_FUN_00573620
    MOV EDX,dword ptr [ESP + 0x8]       ; 00573622
    PUSH EDX                            ; 00573626
    CALL sound_sndmain.cpp_FUN_0056fa10 ; 00573627
        ;   XREF to: 0056fa10 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_FUN_0056fa10(uint sfx_handle, int check_hardware_playback)
    ADD ESP,0x8                         ; 0057362c
    TEST EAX,EAX                        ; 0057362f
    JNZ 0x00573634                      ; 00573631
        ;   XREF to: 00573634 (CONDITIONAL_JUMP)  ; LAB_00573634
    RET                                 ; 00573633
    PUSH EDI                            ; 00573634
        ;   Label: LAB_00573634
    PUSH ESI                            ; 00573635
    MOV ECX,0x54                        ; 00573636
    MOV EDI,dword ptr [ESP + 0x10]      ; 0057363b
    MOV ESI,dword ptr [EAX + 0x68]      ; 0057363f
    MOVSD.REP ES:EDI,ESI                ; 00573642
    CALL sound_sndmain.cpp_FUN_00573e70 ; 00573644
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00573e70()
    MOV EAX,0x1                         ; 00573649
    POP ESI                             ; 0057364e
    POP EDI                             ; 0057364f
    RET                                 ; 00573650


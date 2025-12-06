; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int sound_sndmain.cpp_getSfxOptions_FUN_005a97e0(uint sfx_handle, CSfxOptions * output_options)
;
; Parameters:
; uint             Stack[0x4]:4   sfx_handle
; CSfxOptions *    Stack[0x8]:4   output_options
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100
;   sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00
;   sound_sndmain.cpp_unlockSound_FUN_005abdc0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005a97e0
        ;   Label: sound_sndmain.cpp_getSfxOptions_FUN_005a97e0
    PUSH 0x1                            ; 005a97e1
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a97e3
    PUSH EDX                            ; 005a97e7
    CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00 ; 005a97e8 | CSfxSlot * sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00(uint sfx_handle, int check_hardware_playback)
        ;   XREF to: 005a5d00 (UNCONDITIONAL_CALL)
    MOV ESI,EAX                         ; 005a97ed
    ADD ESP,0x8                         ; 005a97ef
    TEST EAX,EAX                        ; 005a97f2
    JNZ 0x005a97f8                      ; 005a97f4 | LAB_005a97f8
        ;   XREF to: 005a97f8 (CONDITIONAL_JUMP)
    POP ESI                             ; 005a97f6
    RET                                 ; 005a97f7
    PUSH EDI                            ; 005a97f8
        ;   Label: LAB_005a97f8
    PUSH 0x0                            ; 005a97f9
    PUSH EAX                            ; 005a97fb
    CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100 ; 005a97fc | int sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100(CSfxSlot * this_ptr, float delta_time)
        ;   XREF to: 005a7100 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005a9801
    MOV ECX,0x1c                        ; 005a9804
    MOV EDI,dword ptr [ESP + 0x10]      ; 005a9809
    MOVSD.REP ES:EDI,ESI                ; 005a980d
    CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0 ; 005a980f | void sound_sndmain.cpp_unlockSound_FUN_005abdc0()
        ;   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
    MOV EAX,0x1                         ; 005a9814
    POP EDI                             ; 005a9819
    POP ESI                             ; 005a981a
    RET                                 ; 005a981b


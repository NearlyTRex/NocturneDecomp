; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_getSfxOptions_FUN_00526dd0(uint sfx_handle,CSfxOptions *output_options)
;
; Parameters:
; uint             Stack[0x4]:4   sfx_handle
; CSfxOptions *    Stack[0x8]:4   output_options
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_00524830
;   sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0
;   sound_sndmain.cpp_unlockSound_FUN_00528890
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00526dd0
        ;   Label: sound_sndmain.cpp_getSfxOptions_FUN_00526dd0
    PUSH 0x1                            ; 00526dd1
    MOV EDX,dword ptr [ESP + 0xc]       ; 00526dd3
    PUSH EDX                            ; 00526dd7
    CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0 ; 00526dd8
        ;   XREF to: 005234b0 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0(uint sfx_handle, int check_hardware_playback)
    MOV ESI,EAX                         ; 00526ddd
    ADD ESP,0x8                         ; 00526ddf
    TEST EAX,EAX                        ; 00526de2
    JNZ 0x00526de8                      ; 00526de4
        ;   XREF to: 00526de8 (CONDITIONAL_JUMP)  ; LAB_00526de8
    POP ESI                             ; 00526de6
    RET                                 ; 00526de7
    PUSH EDI                            ; 00526de8
        ;   Label: LAB_00526de8
    PUSH 0x0                            ; 00526de9
    PUSH EAX                            ; 00526deb
    CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_00524830 ; 00526dec
        ;   XREF to: 00524830 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSlot_compute_FUN_00524830(CSfxSlot * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00526df1
    MOV ECX,0x1b                        ; 00526df4
    MOV EDI,dword ptr [ESP + 0x10]      ; 00526df9
    MOVSD.REP ES:EDI,ESI                ; 00526dfd
    CALL sound_sndmain.cpp_unlockSound_FUN_00528890 ; 00526dff
        ;   XREF to: 00528890 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00528890()
    MOV EAX,0x1                         ; 00526e04
    POP EDI                             ; 00526e09
    POP ESI                             ; 00526e0a
    RET                                 ; 00526e0b


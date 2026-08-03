; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_sndmain_cpp_FUN_00527060(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02dc8318
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_00524830
;   sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0
;   sound_sndmain.cpp_unlockSound_FUN_00528890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00527060
        ;   Label: sound_sndmain.cpp_FUN_00527060
    PUSH 0x1                            ; 00527061
    MOV EDX,dword ptr [ESP + 0xc]       ; 00527063
    PUSH EDX                            ; 00527067
    CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0 ; 00527068
        ;   XREF to: 005234b0 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0(uint sfx_handle, int check_hardware_playback)
    MOV EBX,EAX                         ; 0052706d
    ADD ESP,0x8                         ; 0052706f
    TEST EAX,EAX                        ; 00527072
    JNZ 0x00527078                      ; 00527074
        ;   XREF to: 00527078 (CONDITIONAL_JUMP)  ; LAB_00527078
    POP EBX                             ; 00527076
    RET                                 ; 00527077
    PUSH EDI                            ; 00527078
        ;   Label: LAB_00527078
    PUSH ESI                            ; 00527079
    PUSH 0x0                            ; 0052707a
    MOV dword ptr [EAX + 0x40],0x2      ; 0052707c
    PUSH EBX                            ; 00527083
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00527084
    MOV ESI,0x1                         ; 00527088
    MOV dword ptr [EBX + 0x3c],EAX      ; 0052708d
    CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_00524830 ; 00527090
        ;   XREF to: 00524830 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSlot_compute_FUN_00524830(CSfxSlot * this_ptr, float delta_time)
    MOV ECX,dword ptr [EBX + 0x6c]      ; 00527095
    ADD ESP,0x8                         ; 00527098
    TEST ECX,ECX                        ; 0052709b
    JZ 0x005270b7                       ; 0052709d
        ;   XREF to: 005270b7 (CONDITIONAL_JUMP)  ; LAB_005270b7
    MOV EDI,dword ptr [0x02dc8318]      ; 0052709f | DAT_02dc8318
    TEST EDI,EDI                        ; 005270a5
    JZ 0x005270b7                       ; 005270a7
        ;   XREF to: 005270b7 (CONDITIONAL_JUMP)  ; LAB_005270b7
    PUSH 0x4                            ; 005270a9
    PUSH EBX                            ; 005270ab
    MOV ESI,dword ptr [EDI]             ; 005270ac
    PUSH EDI                            ; 005270ae
    CALL dword ptr [ESI + 0x40]         ; 005270af
    ADD ESP,0xc                         ; 005270b2
    MOV ESI,EAX                         ; 005270b5
    CALL sound_sndmain.cpp_unlockSound_FUN_00528890 ; 005270b7
        ;   XREF to: 00528890 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00528890()
        ;   Label: LAB_005270b7
    MOV EAX,ESI                         ; 005270bc
    POP ESI                             ; 005270be
    POP EDI                             ; 005270bf
    POP EBX                             ; 005270c0
    RET                                 ; 005270c1


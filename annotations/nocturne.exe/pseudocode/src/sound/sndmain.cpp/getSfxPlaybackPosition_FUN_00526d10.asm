; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl sound_sndmain_cpp_getSfxPlaybackPosition_FUN_00526d10(uint sfx_handle,uint output_format)
;
; Parameters:
; uint             Stack[0x4]:4   sfx_handle
; uint             Stack[0x8]:4   output_format
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[3]:
;   core_event.cpp_CEventList_updateSfxEntries_FUN_00480d60 at 00480da3
;   core_tommygun.cpp_FUN_005464a0 at 005465af
;   core_turret.cpp_CTurret_process_FUN_005497f0 at 00549c7b
;
; Referenced Globals:
;   undefined4 DAT_02dc8318
;
; Called Functions:
;   sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_00525c70
;   sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_005257e0
;   sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0
;   sound_sndmain.cpp_unlockSound_FUN_00528890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00526d10
        ;   Label: sound_sndmain.cpp_getSfxPlaybackPosition_FUN_00526d10
    PUSH ESI                            ; 00526d11
    PUSH EDI                            ; 00526d12
    PUSH EBP                            ; 00526d13
    MOV EBP,ESP                         ; 00526d14
    SUB ESP,0x18                        ; 00526d16
    AND ESP,0xfffffff8                  ; 00526d19
    PUSH 0x1                            ; 00526d1c
    MOV EDX,dword ptr [EBP + 0x14]      ; 00526d1e
    PUSH EDX                            ; 00526d21
    CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0 ; 00526d22
        ;   XREF to: 005234b0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0()
    ADD ESP,0x8                         ; 00526d27
    MOV EBX,EAX                         ; 00526d2a
    TEST EAX,EAX                        ; 00526d2c
    JZ 0x00526d9a                       ; 00526d2e
        ;   XREF to: 00526d9a (CONDITIONAL_JUMP)  ; LAB_00526d9a
    CMP dword ptr [EAX + 0x6c],0x0      ; 00526d30
    JZ 0x00526d4c                       ; 00526d34
        ;   XREF to: 00526d4c (CONDITIONAL_JUMP)  ; LAB_00526d4c
    CMP dword ptr [0x02dc8318],0x0      ; 00526d36 | DAT_02dc8318
    JZ 0x00526d4c                       ; 00526d3d
        ;   XREF to: 00526d4c (CONDITIONAL_JUMP)  ; LAB_00526d4c
    PUSH EAX                            ; 00526d3f
    CALL sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_005257e0 ; 00526d40
        ;   XREF to: 005257e0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_005257e0(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 00526d45
    TEST EAX,EAX                        ; 00526d48
    JZ 0x00526da8                       ; 00526d4a
        ;   XREF to: 00526da8 (CONDITIONAL_JUMP)  ; LAB_00526da8
    MOV EDX,dword ptr [EBP + 0x18]      ; 00526d4c
        ;   Label: LAB_00526d4c
    PUSH EDX                            ; 00526d4f
    MOV ECX,dword ptr [EBX + 0x68]      ; 00526d50
    PUSH ECX                            ; 00526d53
    MOV ESI,dword ptr [EBX + 0x64]      ; 00526d54
    PUSH ESI                            ; 00526d57
    MOV EDI,dword ptr [EBX + 0x60]      ; 00526d58
    PUSH EDI                            ; 00526d5b
    MOV EAX,dword ptr [EBX + 0x74]      ; 00526d5c
    PUSH EAX                            ; 00526d5f
    CALL sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_00525c70 ; 00526d60
        ;   XREF to: 00525c70 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_00525c70(CSampleInfo * this_ptr, double position, uint input_type, uint output_type)
    MOV dword ptr [ESP + 0x24],EAX      ; 00526d65
    MOV dword ptr [ESP + 0x28],EDX      ; 00526d69
    FLD double ptr [ESP + 0x24]         ; 00526d6d
    ADD ESP,0x14                        ; 00526d71
    FSTP double ptr [ESP + 0x8]         ; 00526d74
    CALL sound_sndmain.cpp_unlockSound_FUN_00528890 ; 00526d78
        ;   XREF to: 00528890 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00528890()
    MOV EAX,dword ptr [ESP + 0x8]       ; 00526d7d
    MOV dword ptr [ESP],EAX             ; 00526d81
    MOV EAX,dword ptr [ESP + 0xc]       ; 00526d84
    MOV dword ptr [ESP + 0x4],EAX       ; 00526d88
    MOV EAX,dword ptr [ESP]             ; 00526d8c
        ;   Label: LAB_00526d8c
    MOV EDX,dword ptr [ESP + 0x4]       ; 00526d8f
    MOV ESP,EBP                         ; 00526d93
    POP EBP                             ; 00526d95
    POP EDI                             ; 00526d96
    POP ESI                             ; 00526d97
    POP EBX                             ; 00526d98
    RET                                 ; 00526d99
    MOV ECX,0xbff00000                  ; 00526d9a
        ;   Label: LAB_00526d9a
    MOV dword ptr [ESP],EAX             ; 00526d9f
    MOV dword ptr [ESP + 0x4],ECX       ; 00526da2
    JMP 0x00526d8c                      ; 00526da6
        ;   XREF to: 00526d8c (UNCONDITIONAL_JUMP)  ; LAB_00526d8c
    CALL sound_sndmain.cpp_unlockSound_FUN_00528890 ; 00526da8
        ;   XREF to: 00528890 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00528890()
        ;   Label: LAB_00526da8
    XOR EDI,EDI                         ; 00526dad
    MOV EAX,0xbff00000                  ; 00526daf
    MOV dword ptr [ESP],EDI             ; 00526db4
    MOV dword ptr [ESP + 0x4],EAX       ; 00526db7
    MOV EAX,dword ptr [ESP]             ; 00526dbb
    MOV EDX,dword ptr [ESP + 0x4]       ; 00526dbe
    MOV ESP,EBP                         ; 00526dc2
    POP EBP                             ; 00526dc4
    POP EDI                             ; 00526dc5
    POP ESI                             ; 00526dc6
    POP EBX                             ; 00526dc7
    RET                                 ; 00526dc8


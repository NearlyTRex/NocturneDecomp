; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_pollAllSfxSlots_FUN_00529810(void)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_snddx.cpp_CDirectSoundDevice_poll_FUN_0052a970 at 0052a994
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_00593b25
;   TerminatedCString s_SfxSlot_kill_must_be_loc_00593b3a
;   double DOUBLE_00593b5e = 8.47710503472222E-7
;   double DOUBLE_00593b66 = 0.25
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_02dbd494
;   undefined4 DAT_02dc84bc
;   undefined4 DAT_02dc84c0
;
; Called Functions:
;   FUN_004c8440
;   sound_sndmain.cpp_calculateVirtualSpeakerPositions_FUN_00522d10
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_00524830
;   sound_sndmain.cpp_CSfxSlot_pollHwHandle_FUN_005256f0
;   sound_sndmain.cpp_hasHardware3DSound_FUN_005284f0
;   wincore_winrun.cpp_getTime_FUN_00558a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00529810
        ;   Label: sound_sndmain.cpp_pollAllSfxSlots_FUN_00529810
    PUSH ESI                            ; 00529811
    PUSH EBP                            ; 00529812
    MOV EBP,ESP                         ; 00529813
    SUB ESP,0x8                         ; 00529815
    AND ESP,0xfffffff8                  ; 00529818
    CMP dword ptr [0x02dc84bc],0x0      ; 0052981b | DAT_02dc84bc
    JLE 0x0052987b                      ; 00529822
        ;   XREF to: 0052987b (CONDITIONAL_JUMP)  ; LAB_0052987b
    CALL sound_sndmain.cpp_calculateVirtualSpeakerPositions_FUN_00522d10 ; 00529824
        ;   XREF to: 00522d10 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_calculateVirtualSpeakerPositions_FUN_00522d10()
        ;   Label: LAB_00529824
    MOV EBX,dword ptr [0x02dc84c0]      ; 00529829 | DAT_02dc84c0
    XOR ESI,ESI                         ; 0052982f
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 00529831
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_00558a30()
    MOV dword ptr [ESP],ESI             ; 00529836
    MOV [0x02dc84c0],EAX                ; 00529839 | DAT_02dc84c0
    CALL sound_sndmain.cpp_hasHardware3DSound_FUN_005284f0 ; 0052983e
        ;   XREF to: 005284f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_hasHardware3DSound_FUN_005284f0()
    TEST EAX,EAX                        ; 00529843
    JNZ 0x005298a0                      ; 00529845
        ;   XREF to: 005298a0 (CONDITIONAL_JUMP)  ; LAB_005298a0
    MOV EBX,0x2dbd374                   ; 00529847
        ;   Label: LAB_00529847
    LEA ESI,[EBX + 0x4800]              ; 0052984c
    PUSH dword ptr [ESP]                ; 00529852
        ;   Label: LAB_00529852
    PUSH EBX                            ; 00529855 | DAT_02dbd494
    CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_00524830 ; 00529856
        ;   XREF to: 00524830 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSlot_compute_FUN_00524830()
    ADD ESP,0x8                         ; 0052985b
    TEST EAX,EAX                        ; 0052985e
    JZ 0x0052986b                       ; 00529860
        ;   XREF to: 0052986b (CONDITIONAL_JUMP)  ; LAB_0052986b
    PUSH EBX                            ; 00529862
    CALL sound_sndmain.cpp_CSfxSlot_pollHwHandle_FUN_005256f0 ; 00529863
        ;   XREF to: 005256f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSlot_pollHwHandle_FUN_005256f0()
    ADD ESP,0x4                         ; 00529868
    ADD EBX,0x120                       ; 0052986b
        ;   Label: LAB_0052986b
    CMP EBX,ESI                         ; 00529871
    JNZ 0x00529852                      ; 00529873
        ;   XREF to: 00529852 (CONDITIONAL_JUMP)  ; LAB_00529852
    MOV ESP,EBP                         ; 00529875
    POP EBP                             ; 00529877
    POP ESI                             ; 00529878
    POP EBX                             ; 00529879
    RET                                 ; 0052987a
    MOV ECX,0x593b25                    ; 0052987b | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_0052987b
    MOV EBX,0x148c                      ; 00529880
    PUSH 0x593b3a                       ; 00529885 | = "SfxSlot::kill - must be locked!"
    MOV dword ptr [0x01cc4800],ECX      ; 0052988a | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 00529890 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00529896
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0052989b
    JMP 0x00529824                      ; 0052989e
        ;   XREF to: 00529824 (UNCONDITIONAL_JUMP)  ; LAB_00529824
    MOV EAX,[0x02dc84c0]                ; 005298a0 | DAT_02dc84c0
        ;   Label: LAB_005298a0
    SUB EAX,EBX                         ; 005298a5
    MOV dword ptr [ESP + 0x4],EAX       ; 005298a7
    FILD dword ptr [ESP + 0x4]          ; 005298ab
    FMUL double ptr [0x00593b5e]        ; 005298af | DOUBLE_00593b5e
    FST float ptr [ESP]                 ; 005298b5
    FLDZ                                ; 005298b8
    FCOMPP                              ; 005298ba
    FNSTSW AX                           ; 005298bc
    SAHF                                ; 005298be
    JBE 0x005298c4                      ; 005298bf
        ;   XREF to: 005298c4 (CONDITIONAL_JUMP)  ; LAB_005298c4
    MOV dword ptr [ESP],ESI             ; 005298c1
    FLD float ptr [ESP]                 ; 005298c4
        ;   Label: LAB_005298c4
    FCOMP double ptr [0x00593b66]       ; 005298c7 | DOUBLE_00593b66
    FNSTSW AX                           ; 005298cd
    SAHF                                ; 005298cf
    JBE 0x00529847                      ; 005298d0
        ;   XREF to: 00529847 (CONDITIONAL_JUMP)  ; LAB_00529847
    MOV dword ptr [ESP],0x3e800000      ; 005298d6
    JMP 0x00529847                      ; 005298dd
        ;   XREF to: 00529847 (UNCONDITIONAL_JUMP)  ; LAB_00529847


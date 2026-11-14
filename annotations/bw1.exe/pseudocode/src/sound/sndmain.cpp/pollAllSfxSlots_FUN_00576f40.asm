; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_pollAllSfxSlots_FUN_00576f40(void)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_snddx.cpp_FUN_005784b0 at 005784d5
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005f45db
;   TerminatedCString s_SfxSlot_pollSfx_must_be_005f45f0
;   undefined4 DAT_005f4614
;   undefined4 DAT_005f4618
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_02c74708
;   undefined4 DAT_02c7fc8c
;   undefined4 DAT_02c807ec
;   undefined4 DAT_02c807f0
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   sound_sndmain.cpp_calculateVirtualSpeakerPositions_FUN_0056f1e0
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_00570f30
;   sound_sndmain.cpp_CSfxSlot_pollHwHandle_FUN_00571f10
;   sound_sndmain.cpp_hasHardware3DSound_FUN_00575560
;   wincore_winrun.cpp_getTime_FUN_005b2420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00576f40
        ;   Label: sound_sndmain.cpp_pollAllSfxSlots_FUN_00576f40
    PUSH ESI                            ; 00576f41
    PUSH EDI                            ; 00576f42
    PUSH EBP                            ; 00576f43
    SUB ESP,0x8                         ; 00576f44
    CMP dword ptr [0x02c807ec],0x0      ; 00576f47 | DAT_02c807ec
    JLE 0x00576fc6                      ; 00576f4e
        ;   XREF to: 00576fc6 (CONDITIONAL_JUMP)  ; LAB_00576fc6
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 00576f54
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005b2420()
        ;   Label: LAB_00576f54
    MOV EDI,dword ptr [0x02c807f0]      ; 00576f59 | DAT_02c807f0
    MOV EBX,EAX                         ; 00576f5f
    SUB EBX,EDI                         ; 00576f61
    MOV ESI,EAX                         ; 00576f63
    TEST EBX,EBX                        ; 00576f65
    JL 0x00576f71                       ; 00576f67
        ;   XREF to: 00576f71 (CONDITIONAL_JUMP)  ; LAB_00576f71
    CMP EBX,0x1cccc                     ; 00576f69
    JL 0x00576fbe                       ; 00576f6f
        ;   XREF to: 00576fbe (CONDITIONAL_JUMP)  ; LAB_00576fbe
    MOV EBP,dword ptr [0x02c7fc8c]      ; 00576f71 | DAT_02c7fc8c
        ;   Label: LAB_00576f71
    MOV dword ptr [0x02c807f0],ESI      ; 00576f77 | DAT_02c807f0
    TEST EBP,EBP                        ; 00576f7d
    JZ 0x00576fee                       ; 00576f7f
        ;   XREF to: 00576fee (CONDITIONAL_JUMP)  ; LAB_00576fee
    XOR EAX,EAX                         ; 00576f81
        ;   Label: LAB_00576f81
    MOV dword ptr [ESP],EAX             ; 00576f83
    CALL sound_sndmain.cpp_hasHardware3DSound_FUN_00575560 ; 00576f86
        ;   XREF to: 00575560 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_hasHardware3DSound_FUN_00575560()
    CMP EAX,0x1                         ; 00576f8b
    JGE 0x00576ff5                      ; 00576f8e
        ;   XREF to: 00576ff5 (CONDITIONAL_JUMP)  ; LAB_00576ff5
    MOV EBX,0x2c745ec                   ; 00576f90
        ;   Label: LAB_00576f90
    LEA ESI,[EBX + 0x4700]              ; 00576f95
    PUSH dword ptr [ESP]                ; 00576f9b
        ;   Label: LAB_00576f9b
    PUSH EBX                            ; 00576f9e | DAT_02c74708
    CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_00570f30 ; 00576f9f
        ;   XREF to: 00570f30 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSlot_compute_FUN_00570f30(CSfxSlot * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00576fa4
    TEST EAX,EAX                        ; 00576fa7
    JZ 0x00576fb4                       ; 00576fa9
        ;   XREF to: 00576fb4 (CONDITIONAL_JUMP)  ; LAB_00576fb4
    PUSH EBX                            ; 00576fab
    CALL sound_sndmain.cpp_CSfxSlot_pollHwHandle_FUN_00571f10 ; 00576fac
        ;   XREF to: 00571f10 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_pollHwHandle_FUN_00571f10(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 00576fb1
    ADD EBX,0x11c                       ; 00576fb4
        ;   Label: LAB_00576fb4
    CMP EBX,ESI                         ; 00576fba
    JNZ 0x00576f9b                      ; 00576fbc
        ;   XREF to: 00576f9b (CONDITIONAL_JUMP)  ; LAB_00576f9b
    ADD ESP,0x8                         ; 00576fbe
        ;   Label: LAB_00576fbe
    POP EBP                             ; 00576fc1
    POP EDI                             ; 00576fc2
    POP ESI                             ; 00576fc3
    POP EBX                             ; 00576fc4
    RET                                 ; 00576fc5
    MOV ECX,0x5f45db                    ; 00576fc6 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00576fc6
    MOV EBX,0x19e3                      ; 00576fcb
    PUSH 0x5f45f0                       ; 00576fd0 | = "SfxSlot::pollSfx - must be locked!"
    MOV dword ptr [0x01d1d400],ECX      ; 00576fd5 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 00576fdb | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00576fe1
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00576fe6
    JMP 0x00576f54                      ; 00576fe9
        ;   XREF to: 00576f54 (UNCONDITIONAL_JUMP)  ; LAB_00576f54
    CALL sound_sndmain.cpp_calculateVirtualSpeakerPositions_FUN_0056f1e0 ; 00576fee
        ;   XREF to: 0056f1e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_calculateVirtualSpeakerPositions_FUN_0056f1e0()
        ;   Label: LAB_00576fee
    JMP 0x00576f81                      ; 00576ff3
        ;   XREF to: 00576f81 (UNCONDITIONAL_JUMP)  ; LAB_00576f81
    MOV dword ptr [ESP + 0x4],EBX       ; 00576ff5
        ;   Label: LAB_00576ff5
    FILD dword ptr [ESP + 0x4]          ; 00576ff9
    FMUL float ptr [0x005f4614]         ; 00576ffd | DAT_005f4614
    FLDZ                                ; 00577003
    FXCH                                ; 00577005
    FSTP float ptr [ESP]                ; 00577007
    FCOMP float ptr [ESP]               ; 0057700a
    FNSTSW AX                           ; 0057700d
    SAHF                                ; 0057700f
    JBE 0x0057701c                      ; 00577010
        ;   XREF to: 0057701c (CONDITIONAL_JUMP)  ; LAB_0057701c
    XOR ECX,ECX                         ; 00577012
    MOV dword ptr [ESP],ECX             ; 00577014
    JMP 0x00576f90                      ; 00577017
        ;   XREF to: 00576f90 (UNCONDITIONAL_JUMP)  ; LAB_00576f90
    FLD float ptr [ESP]                 ; 0057701c
        ;   Label: LAB_0057701c
    FCOMP float ptr [0x005f4618]        ; 0057701f | DAT_005f4618
    FNSTSW AX                           ; 00577025
    SAHF                                ; 00577027
    JBE 0x00576f90                      ; 00577028
        ;   XREF to: 00576f90 (CONDITIONAL_JUMP)  ; LAB_00576f90
    MOV dword ptr [ESP],0x3e800000      ; 0057702e
    JMP 0x00576f90                      ; 00577035
        ;   XREF to: 00576f90 (UNCONDITIONAL_JUMP)  ; LAB_00576f90


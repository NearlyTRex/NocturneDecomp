; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_event_cpp_CEventList_FUN_004b0f00(CEventList *this_ptr)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_sound.cpp_CSound_init_FUN_005b2dd0 at 005b2f40
;
; Called Functions:
;   core_event.cpp_CEventList_FUN_004b0db0
;   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
;   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
;   sound_sndmain.cpp_setNextSfxFlagBits_FUN_005a8b90
;   sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005a8be0
;   sound_sndmain.cpp_startSfx_FUN_005a8e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0f00
        ;   Label: core_event.cpp_CEventList_FUN_004b0f00
    PUSH EBP                            ; 004b0f01
    SUB ESP,0x4                         ; 004b0f02
    MOV EBP,dword ptr [ESP + 0x10]      ; 004b0f05
    MOV EDX,dword ptr [EBP + 0x3ac8]    ; 004b0f09
    XOR EBX,EBX                         ; 004b0f0f
    TEST EDX,EDX                        ; 004b0f11
    JLE 0x004b0f7b                      ; 004b0f13
        ;   XREF to: 004b0f7b (CONDITIONAL_JUMP)  ; LAB_004b0f7b
    PUSH EDI                            ; 004b0f15
    PUSH ESI                            ; 004b0f16
    LEA EAX,[EBP + 0x3acc]              ; 004b0f17
    LEA EDI,[EBP + 0x3ae4]              ; 004b0f1d
    MOV dword ptr [ESP + 0x8],EAX       ; 004b0f23
    IMUL ESI,EBX,0x120                  ; 004b0f27
        ;   Label: LAB_004b0f27
    ADD ESI,dword ptr [ESP + 0x8]       ; 004b0f2d
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30 ; 004b0f31
        ;   XREF to: 005a8c30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30()
    PUSH 0x1                            ; 004b0f36
    MOV EAX,dword ptr [ESI + 0x11c]     ; 004b0f38
    PUSH EAX                            ; 004b0f3e
    MOV EDX,dword ptr [ESI + 0x118]     ; 004b0f3f
    PUSH EDX                            ; 004b0f45
    CALL sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005a8be0 ; 004b0f46
        ;   XREF to: 005a8be0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005a8be0(double trigger_time, int trigger_id)
    ADD ESP,0xc                         ; 004b0f4b
    PUSH 0x1                            ; 004b0f4e
    CALL sound_sndmain.cpp_setNextSfxFlagBits_FUN_005a8b90 ; 004b0f50
        ;   XREF to: 005a8b90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxFlagBits_FUN_005a8b90(uint flag_mask)
    ADD ESP,0x4                         ; 004b0f55
    PUSH EDI                            ; 004b0f58
    CALL sound_sndmain.cpp_startSfx_FUN_005a8e90 ; 004b0f59
        ;   XREF to: 005a8e90 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_005a8e90(char * filename)
    ADD ESP,0x4                         ; 004b0f5e
    INC EBX                             ; 004b0f61
    MOV dword ptr [ESI],EAX             ; 004b0f62
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0 ; 004b0f64
        ;   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0()
    MOV ECX,dword ptr [EBP + 0x3ac8]    ; 004b0f69
    ADD EDI,0x120                       ; 004b0f6f
    CMP EBX,ECX                         ; 004b0f75
    JL 0x004b0f27                       ; 004b0f77
        ;   XREF to: 004b0f27 (CONDITIONAL_JUMP)  ; LAB_004b0f27
    POP ESI                             ; 004b0f79
    POP EDI                             ; 004b0f7a
    PUSH EBP                            ; 004b0f7b
        ;   Label: LAB_004b0f7b
    CALL core_event.cpp_CEventList_FUN_004b0db0 ; 004b0f7c
        ;   XREF to: 004b0db0 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_FUN_004b0db0(CEventList * this_ptr)
    ADD ESP,0x4                         ; 004b0f81
    ADD ESP,0x4                         ; 004b0f84
    POP EBP                             ; 004b0f87
    POP EBX                             ; 004b0f88
    RET                                 ; 004b0f89


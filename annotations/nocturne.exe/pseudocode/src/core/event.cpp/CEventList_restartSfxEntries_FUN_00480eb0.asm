; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_event_cpp_CEventList_restartSfxEntries_FUN_00480eb0(CEventList *this_ptr)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_sound.cpp_CSound_init_FUN_0052ddf0 at 0052df60
;
; Called Functions:
;   core_event.cpp_CEventList_updateSfxEntries_FUN_00480d60
;   sound_sndmain.cpp_popSfxOptions_FUN_005263c0
;   sound_sndmain.cpp_pushSfxOptions_FUN_00526340
;   sound_sndmain.cpp_setNextSfxFlagBits_FUN_00526270
;   sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005262d0
;   sound_sndmain.cpp_startSfx_FUN_005265a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480eb0
        ;   Label: core_event.cpp_CEventList_restartSfxEntries_FUN_00480eb0
    PUSH EBP                            ; 00480eb1
    SUB ESP,0x4                         ; 00480eb2
    MOV EBP,dword ptr [ESP + 0x10]      ; 00480eb5
    MOV EDX,dword ptr [EBP + 0x3ac8]    ; 00480eb9
    XOR EBX,EBX                         ; 00480ebf
    TEST EDX,EDX                        ; 00480ec1
    JLE 0x00480f2b                      ; 00480ec3
        ;   XREF to: 00480f2b (CONDITIONAL_JUMP)  ; LAB_00480f2b
    PUSH EDI                            ; 00480ec5
    PUSH ESI                            ; 00480ec6
    LEA EAX,[EBP + 0x3acc]              ; 00480ec7
    LEA EDI,[EBP + 0x3ae4]              ; 00480ecd
    MOV dword ptr [ESP + 0x8],EAX       ; 00480ed3
    IMUL ESI,EBX,0x120                  ; 00480ed7
        ;   Label: LAB_00480ed7
    ADD ESI,dword ptr [ESP + 0x8]       ; 00480edd
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00526340 ; 00480ee1
        ;   XREF to: 00526340 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00526340()
    PUSH 0x1                            ; 00480ee6
    MOV EAX,dword ptr [ESI + 0x11c]     ; 00480ee8
    PUSH EAX                            ; 00480eee
    MOV EDX,dword ptr [ESI + 0x118]     ; 00480eef
    PUSH EDX                            ; 00480ef5
    CALL sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005262d0 ; 00480ef6
        ;   XREF to: 005262d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005262d0(double trigger_time, int trigger_id)
    ADD ESP,0xc                         ; 00480efb
    PUSH 0x1                            ; 00480efe
    CALL sound_sndmain.cpp_setNextSfxFlagBits_FUN_00526270 ; 00480f00
        ;   XREF to: 00526270 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxFlagBits_FUN_00526270(uint flag_mask)
    ADD ESP,0x4                         ; 00480f05
    PUSH EDI                            ; 00480f08
    CALL sound_sndmain.cpp_startSfx_FUN_005265a0 ; 00480f09
        ;   XREF to: 005265a0 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_005265a0(char * filename)
    ADD ESP,0x4                         ; 00480f0e
    INC EBX                             ; 00480f11
    MOV dword ptr [ESI],EAX             ; 00480f12
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005263c0 ; 00480f14
        ;   XREF to: 005263c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005263c0()
    MOV ECX,dword ptr [EBP + 0x3ac8]    ; 00480f19
    ADD EDI,0x120                       ; 00480f1f
    CMP EBX,ECX                         ; 00480f25
    JL 0x00480ed7                       ; 00480f27
        ;   XREF to: 00480ed7 (CONDITIONAL_JUMP)  ; LAB_00480ed7
    POP ESI                             ; 00480f29
    POP EDI                             ; 00480f2a
    PUSH EBP                            ; 00480f2b
        ;   Label: LAB_00480f2b
    CALL core_event.cpp_CEventList_updateSfxEntries_FUN_00480d60 ; 00480f2c
        ;   XREF to: 00480d60 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_updateSfxEntries_FUN_00480d60(CEventList * this_ptr)
    ADD ESP,0x4                         ; 00480f31
    ADD ESP,0x4                         ; 00480f34
    POP EBP                             ; 00480f37
    POP EBX                             ; 00480f38
    RET                                 ; 00480f39


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_event_cpp_CEventList_restartSfxEntries_FUN_00491be0(CEventList *this_ptr)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_sound.cpp_FUN_0055a1d0 at 0055a33a
;
; Called Functions:
;   core_event.cpp_CEventList_updateSfxEntries_FUN_00491a90
;   sound_sndmain.cpp_popSfxOptions_FUN_005504d0
;   sound_sndmain.cpp_pushSfxOptions_FUN_00550450
;   sound_sndmain.cpp_setNextSfxFlagBits_FUN_005503a0
;   sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005503e0
;   sound_sndmain.cpp_startSfx_FUN_005506b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00491be0
        ;   Label: core_event.cpp_CEventList_restartSfxEntries_FUN_00491be0
    PUSH EBP                            ; 00491be1
    SUB ESP,0x4                         ; 00491be2
    MOV EBP,dword ptr [ESP + 0x10]      ; 00491be5
    MOV EDX,dword ptr [EBP + 0x3ac8]    ; 00491be9
    XOR EBX,EBX                         ; 00491bef
    TEST EDX,EDX                        ; 00491bf1
    JLE 0x00491c5b                      ; 00491bf3
        ;   XREF to: 00491c5b (CONDITIONAL_JUMP)  ; LAB_00491c5b
    PUSH EDI                            ; 00491bf5
    PUSH ESI                            ; 00491bf6
    LEA EAX,[EBP + 0x3acc]              ; 00491bf7
    LEA EDI,[EBP + 0x3ae4]              ; 00491bfd
    MOV dword ptr [ESP + 0x8],EAX       ; 00491c03
    IMUL ESI,EBX,0x120                  ; 00491c07
        ;   Label: LAB_00491c07
    ADD ESI,dword ptr [ESP + 0x8]       ; 00491c0d
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00550450 ; 00491c11
        ;   XREF to: 00550450 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00550450()
    PUSH 0x1                            ; 00491c16
    MOV EAX,dword ptr [ESI + 0x11c]     ; 00491c18
    PUSH EAX                            ; 00491c1e
    MOV EDX,dword ptr [ESI + 0x118]     ; 00491c1f
    PUSH EDX                            ; 00491c25
    CALL sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005503e0 ; 00491c26
        ;   XREF to: 005503e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005503e0(double trigger_time, int trigger_id)
    ADD ESP,0xc                         ; 00491c2b
    PUSH 0x1                            ; 00491c2e
    CALL sound_sndmain.cpp_setNextSfxFlagBits_FUN_005503a0 ; 00491c30
        ;   XREF to: 005503a0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxFlagBits_FUN_005503a0(uint flag_mask)
    ADD ESP,0x4                         ; 00491c35
    PUSH EDI                            ; 00491c38
    CALL sound_sndmain.cpp_startSfx_FUN_005506b0 ; 00491c39
        ;   XREF to: 005506b0 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_005506b0(char * filename)
    ADD ESP,0x4                         ; 00491c3e
    INC EBX                             ; 00491c41
    MOV dword ptr [ESI],EAX             ; 00491c42
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005504d0 ; 00491c44
        ;   XREF to: 005504d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005504d0()
    MOV ECX,dword ptr [EBP + 0x3ac8]    ; 00491c49
    ADD EDI,0x120                       ; 00491c4f
    CMP EBX,ECX                         ; 00491c55
    JL 0x00491c07                       ; 00491c57
        ;   XREF to: 00491c07 (CONDITIONAL_JUMP)  ; LAB_00491c07
    POP ESI                             ; 00491c59
    POP EDI                             ; 00491c5a
    PUSH EBP                            ; 00491c5b
        ;   Label: LAB_00491c5b
    CALL core_event.cpp_CEventList_updateSfxEntries_FUN_00491a90 ; 00491c5c
        ;   XREF to: 00491a90 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_updateSfxEntries_FUN_00491a90(CEventList * this_ptr)
    ADD ESP,0x4                         ; 00491c61
    ADD ESP,0x4                         ; 00491c64
    POP EBP                             ; 00491c67
    POP EBX                             ; 00491c68
    RET                                 ; 00491c69


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_event_cpp_CEventList_restartSfxEntries_FUN_004aa550(CEventList *this_ptr)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_sound.cpp_FUN_0057cc00 at 0057cd85
;
; Called Functions:
;   core_event.cpp_CEventList_updateSfxEntries_FUN_004aa400
;   sound_sndmain.cpp_FUN_00572a10
;   sound_sndmain.cpp_FUN_00572a50
;   sound_sndmain.cpp_FUN_00572ac0
;   sound_sndmain.cpp_FUN_00572b40
;   sound_sndmain.cpp_startSfx_FUN_00572d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aa550
        ;   Label: core_event.cpp_CEventList_restartSfxEntries_FUN_004aa550
    PUSH EBP                            ; 004aa551
    SUB ESP,0x4                         ; 004aa552
    MOV EBP,dword ptr [ESP + 0x10]      ; 004aa555
    MOV EDX,dword ptr [EBP + 0x3ac8]    ; 004aa559
    XOR EBX,EBX                         ; 004aa55f
    TEST EDX,EDX                        ; 004aa561
    JLE 0x004aa5cb                      ; 004aa563
        ;   XREF to: 004aa5cb (CONDITIONAL_JUMP)  ; LAB_004aa5cb
    PUSH EDI                            ; 004aa565
    PUSH ESI                            ; 004aa566
    LEA EAX,[EBP + 0x3acc]              ; 004aa567
    LEA EDI,[EBP + 0x3ae4]              ; 004aa56d
    MOV dword ptr [ESP + 0x8],EAX       ; 004aa573
    IMUL ESI,EBX,0x120                  ; 004aa577
        ;   Label: LAB_004aa577
    ADD ESI,dword ptr [ESP + 0x8]       ; 004aa57d
    CALL sound_sndmain.cpp_FUN_00572ac0 ; 004aa581
        ;   XREF to: 00572ac0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00572ac0()
    PUSH 0x1                            ; 004aa586
    MOV EAX,dword ptr [ESI + 0x11c]     ; 004aa588
    PUSH EAX                            ; 004aa58e
    MOV EDX,dword ptr [ESI + 0x118]     ; 004aa58f
    PUSH EDX                            ; 004aa595
    CALL sound_sndmain.cpp_FUN_00572a50 ; 004aa596
        ;   XREF to: 00572a50 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00572a50(double trigger_time, int trigger_id)
    ADD ESP,0xc                         ; 004aa59b
    PUSH 0x1                            ; 004aa59e
    CALL sound_sndmain.cpp_FUN_00572a10 ; 004aa5a0
        ;   XREF to: 00572a10 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00572a10(uint flag_mask)
    ADD ESP,0x4                         ; 004aa5a5
    PUSH EDI                            ; 004aa5a8
    CALL sound_sndmain.cpp_startSfx_FUN_00572d20 ; 004aa5a9
        ;   XREF to: 00572d20 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_00572d20(char * filename)
    ADD ESP,0x4                         ; 004aa5ae
    INC EBX                             ; 004aa5b1
    MOV dword ptr [ESI],EAX             ; 004aa5b2
    CALL sound_sndmain.cpp_FUN_00572b40 ; 004aa5b4
        ;   XREF to: 00572b40 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00572b40()
    MOV ECX,dword ptr [EBP + 0x3ac8]    ; 004aa5b9
    ADD EDI,0x120                       ; 004aa5bf
    CMP EBX,ECX                         ; 004aa5c5
    JL 0x004aa577                       ; 004aa5c7
        ;   XREF to: 004aa577 (CONDITIONAL_JUMP)  ; LAB_004aa577
    POP ESI                             ; 004aa5c9
    POP EDI                             ; 004aa5ca
    PUSH EBP                            ; 004aa5cb
        ;   Label: LAB_004aa5cb
    CALL core_event.cpp_CEventList_updateSfxEntries_FUN_004aa400 ; 004aa5cc
        ;   XREF to: 004aa400 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_updateSfxEntries_FUN_004aa400(CEventList * this_ptr)
    ADD ESP,0x4                         ; 004aa5d1
    ADD ESP,0x4                         ; 004aa5d4
    POP EBP                             ; 004aa5d7
    POP EBX                             ; 004aa5d8
    RET                                 ; 004aa5d9


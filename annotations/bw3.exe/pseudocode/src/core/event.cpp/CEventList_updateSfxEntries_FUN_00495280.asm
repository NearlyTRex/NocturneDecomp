; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_event_cpp_CEventList_updateSfxEntries_FUN_00495280(CEventList *this_ptr)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x170]:1  local_170
; undefined1       Stack[-0x16f]:1  local_16f
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   core_event.cpp_CEventList_getSfxHandle_FUN_00495110 at 00495116
;   core_event.cpp_CEventList_process_FUN_0048c020 at 0048c126
;   core_event.cpp_CEventList_render_FUN_00491bf0 at 00491e61
;   core_event.cpp_CEventList_restartSfxEntries_FUN_004953d0 at 0049544c
;   core_event.cpp_CEventList_setSfxHandle_FUN_00495150 at 0049515d
;   core_event.cpp_FUN_0048c2e0 at 0048eebf
;
; Called Functions:
;   crt_string.c_memmove_FUN_005a54c0
;   sound_sndmain.cpp_CSfxSample_init_FUN_00555840
;   sound_sndmain.cpp_getSfxPlaybackPosition_FUN_005567c0
;   sound_sndmain.cpp_getSfxSampleInfo_FUN_00556780
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00495280
        ;   Label: core_event.cpp_CEventList_updateSfxEntries_FUN_00495280
    PUSH ESI                            ; 00495281
    PUSH EDI                            ; 00495282
    PUSH EBP                            ; 00495283
    MOV EBP,ESP                         ; 00495284
    SUB ESP,0x160                       ; 00495286
    AND ESP,0xfffffff8                  ; 0049528c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049528f
    XOR EDX,EDX                         ; 00495292
    MOV ECX,dword ptr [EAX + 0x3ac8]    ; 00495294
    MOV dword ptr [ESP + 0x15c],EDX     ; 0049529a
    TEST ECX,ECX                        ; 004952a1
    JLE 0x00495346                      ; 004952a3
        ;   XREF to: 00495346 (CONDITIONAL_JUMP)  ; LAB_00495346
    ADD EAX,0x3acc                      ; 004952a9
    MOV EBX,EAX                         ; 004952ae
    ADD EAX,0x120                       ; 004952b0
    MOV dword ptr [ESP + 0x158],EAX     ; 004952b5
    PUSH 0x1                            ; 004952bc
        ;   Label: LAB_004952bc
    MOV EAX,dword ptr [EBX]             ; 004952be
    PUSH EAX                            ; 004952c0
    XOR ESI,ESI                         ; 004952c1
    CALL sound_sndmain.cpp_getSfxPlaybackPosition_FUN_005567c0 ; 004952c3
        ;   XREF to: 005567c0 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_getSfxPlaybackPosition_FUN_005567c0(uint sfx_handle, uint output_format)
    MOV dword ptr [ESP + 0x158],EAX     ; 004952c8
    MOV dword ptr [ESP + 0x15c],EDX     ; 004952cf
    FLDZ                                ; 004952d6
    MOV EAX,dword ptr [ESP + 0x158]     ; 004952d8
    MOV dword ptr [EBX + 0x118],EAX     ; 004952df
    MOV EAX,dword ptr [ESP + 0x15c]     ; 004952e5
    MOV dword ptr [EBX + 0x11c],EAX     ; 004952ec
    ADD ESP,0x8                         ; 004952f2
    FCOMP double ptr [EBX + 0x118]      ; 004952f5
    FNSTSW AX                           ; 004952fb
    SAHF                                ; 004952fd
    JBE 0x0049534d                      ; 004952fe
        ;   XREF to: 0049534d (CONDITIONAL_JUMP)  ; LAB_0049534d
    TEST ESI,ESI                        ; 00495300
        ;   Label: LAB_00495300
    JZ 0x0049538e                       ; 00495302
        ;   XREF to: 0049538e (CONDITIONAL_JUMP)  ; LAB_0049538e
    MOV EAX,dword ptr [ESP + 0x158]     ; 00495308
        ;   Label: LAB_00495308
    MOV EDX,dword ptr [ESP + 0x15c]     ; 0049530f
    ADD EBX,0x120                       ; 00495316
    ADD EAX,0x120                       ; 0049531c
    INC EDX                             ; 00495321
    MOV dword ptr [ESP + 0x158],EAX     ; 00495322
    MOV dword ptr [ESP + 0x15c],EDX     ; 00495329
    MOV ESI,dword ptr [EBP + 0x14]      ; 00495330
        ;   Label: LAB_00495330
    MOV EAX,dword ptr [ESP + 0x15c]     ; 00495333
    CMP EAX,dword ptr [ESI + 0x3ac8]    ; 0049533a
    JL 0x004952bc                       ; 00495340
        ;   XREF to: 004952bc (CONDITIONAL_JUMP)  ; LAB_004952bc
    MOV ESP,EBP                         ; 00495346
        ;   Label: LAB_00495346
    POP EBP                             ; 00495348
    POP EDI                             ; 00495349
    POP ESI                             ; 0049534a
    POP EBX                             ; 0049534b
    RET                                 ; 0049534c
    MOV EAX,ESP                         ; 0049534d
        ;   Label: LAB_0049534d
    PUSH EAX                            ; 0049534f
    CALL sound_sndmain.cpp_CSfxSample_init_FUN_00555840 ; 00495350
        ;   XREF to: 00555840 (UNCONDITIONAL_CALL)  ; CSfxSample * sound_sndmain.cpp_CSfxSample_init_FUN_00555840(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 00495355
    MOV EAX,ESP                         ; 00495358
    PUSH EAX                            ; 0049535a
    MOV EDX,dword ptr [EBX]             ; 0049535b
    PUSH EDX                            ; 0049535d
    CALL sound_sndmain.cpp_getSfxSampleInfo_FUN_00556780 ; 0049535e
        ;   XREF to: 00556780 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getSfxSampleInfo_FUN_00556780(uint sfx_handle, CSfxSample * output_buffer)
    ADD ESP,0x8                         ; 00495363
    TEST EAX,EAX                        ; 00495366
    JZ 0x00495300                       ; 00495368
        ;   XREF to: 00495300 (CONDITIONAL_JUMP)  ; LAB_00495300
    MOV ESI,ESP                         ; 0049536a
    LEA EDI,[EBX + 0x18]                ; 0049536c
    PUSH EDI                            ; 0049536f
    MOV AL,byte ptr [ESI]               ; 00495370
        ;   Label: LAB_00495370
    MOV byte ptr [EDI],AL               ; 00495372
    CMP AL,0x0                          ; 00495374
    JZ 0x00495388                       ; 00495376
        ;   XREF to: 00495388 (CONDITIONAL_JUMP)  ; LAB_00495388
    MOV AL,byte ptr [ESI + 0x1]         ; 00495378
    ADD ESI,0x2                         ; 0049537b
    MOV byte ptr [EDI + 0x1],AL         ; 0049537e
    ADD EDI,0x2                         ; 00495381
    CMP AL,0x0                          ; 00495384
    JNZ 0x00495370                      ; 00495386
        ;   XREF to: 00495370 (CONDITIONAL_JUMP)  ; LAB_00495370
    POP EDI                             ; 00495388
        ;   Label: LAB_00495388
    JMP 0x00495308                      ; 00495389
        ;   XREF to: 00495308 (UNCONDITIONAL_JUMP)  ; LAB_00495308
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049538e
        ;   Label: LAB_0049538e
    MOV ECX,dword ptr [EAX + 0x3ac8]    ; 00495391
    DEC ECX                             ; 00495397
    MOV ESI,dword ptr [ESP + 0x15c]     ; 00495398
    MOV dword ptr [EAX + 0x3ac8],ECX    ; 0049539f
    MOV EAX,ECX                         ; 004953a5
    SUB EAX,ESI                         ; 004953a7
    IMUL EAX,EAX,0x120                  ; 004953a9
    PUSH EAX                            ; 004953af
    MOV EDI,dword ptr [ESP + 0x15c]     ; 004953b0
    PUSH EDI                            ; 004953b7
    PUSH EBX                            ; 004953b8
    CALL crt_string.c_memmove_FUN_005a54c0 ; 004953b9
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004953be
    JMP 0x00495330                      ; 004953c1
        ;   XREF to: 00495330 (UNCONDITIONAL_JUMP)  ; LAB_00495330


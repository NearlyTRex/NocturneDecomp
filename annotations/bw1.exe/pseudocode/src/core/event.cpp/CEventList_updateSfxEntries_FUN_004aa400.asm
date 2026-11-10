; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_event_cpp_CEventList_updateSfxEntries_FUN_004aa400(CEventList *this_ptr)
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
;   core_event.cpp_CEventList_getSfxHandle_FUN_004aa290 at 004aa296
;   core_event.cpp_CEventList_process_FUN_004a1a40 at 004a1b46
;   core_event.cpp_CEventList_render_FUN_004a6d80 at 004a6ff1
;   core_event.cpp_CEventList_restartSfxEntries_FUN_004aa550 at 004aa5cc
;   core_event.cpp_CEventList_setSfxHandle_FUN_004aa2d0 at 004aa2dd
;   core_event.cpp_FUN_004a1d00 at 004a46eb
;
; Called Functions:
;   crt_string.c_memmove_FUN_005c25d0
;   sound_sndmain.cpp_CSfxSample_init_FUN_00572340
;   sound_sndmain.cpp_getSfxPlaybackPosition_FUN_00573660
;   sound_sndmain.cpp_getSfxSampleInfo_FUN_00573620
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aa400
        ;   Label: core_event.cpp_CEventList_updateSfxEntries_FUN_004aa400
    PUSH ESI                            ; 004aa401
    PUSH EDI                            ; 004aa402
    PUSH EBP                            ; 004aa403
    MOV EBP,ESP                         ; 004aa404
    SUB ESP,0x160                       ; 004aa406
    AND ESP,0xfffffff8                  ; 004aa40c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004aa40f
    XOR EDX,EDX                         ; 004aa412
    MOV ECX,dword ptr [EAX + 0x3ac8]    ; 004aa414
    MOV dword ptr [ESP + 0x15c],EDX     ; 004aa41a
    TEST ECX,ECX                        ; 004aa421
    JLE 0x004aa4c6                      ; 004aa423
        ;   XREF to: 004aa4c6 (CONDITIONAL_JUMP)  ; LAB_004aa4c6
    ADD EAX,0x3acc                      ; 004aa429
    MOV EBX,EAX                         ; 004aa42e
    ADD EAX,0x120                       ; 004aa430
    MOV dword ptr [ESP + 0x158],EAX     ; 004aa435
    PUSH 0x1                            ; 004aa43c
        ;   Label: LAB_004aa43c
    MOV EAX,dword ptr [EBX]             ; 004aa43e
    PUSH EAX                            ; 004aa440
    XOR ESI,ESI                         ; 004aa441
    CALL sound_sndmain.cpp_getSfxPlaybackPosition_FUN_00573660 ; 004aa443
        ;   XREF to: 00573660 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_getSfxPlaybackPosition_FUN_00573660(uint sfx_handle, uint output_format)
    MOV dword ptr [ESP + 0x158],EAX     ; 004aa448
    MOV dword ptr [ESP + 0x15c],EDX     ; 004aa44f
    FLDZ                                ; 004aa456
    MOV EAX,dword ptr [ESP + 0x158]     ; 004aa458
    MOV dword ptr [EBX + 0x118],EAX     ; 004aa45f
    MOV EAX,dword ptr [ESP + 0x15c]     ; 004aa465
    MOV dword ptr [EBX + 0x11c],EAX     ; 004aa46c
    ADD ESP,0x8                         ; 004aa472
    FCOMP double ptr [EBX + 0x118]      ; 004aa475
    FNSTSW AX                           ; 004aa47b
    SAHF                                ; 004aa47d
    JBE 0x004aa4cd                      ; 004aa47e
        ;   XREF to: 004aa4cd (CONDITIONAL_JUMP)  ; LAB_004aa4cd
    TEST ESI,ESI                        ; 004aa480
        ;   Label: LAB_004aa480
    JZ 0x004aa50e                       ; 004aa482
        ;   XREF to: 004aa50e (CONDITIONAL_JUMP)  ; LAB_004aa50e
    MOV EAX,dword ptr [ESP + 0x158]     ; 004aa488
        ;   Label: LAB_004aa488
    MOV EDX,dword ptr [ESP + 0x15c]     ; 004aa48f
    ADD EBX,0x120                       ; 004aa496
    ADD EAX,0x120                       ; 004aa49c
    INC EDX                             ; 004aa4a1
    MOV dword ptr [ESP + 0x158],EAX     ; 004aa4a2
    MOV dword ptr [ESP + 0x15c],EDX     ; 004aa4a9
    MOV ESI,dword ptr [EBP + 0x14]      ; 004aa4b0
        ;   Label: LAB_004aa4b0
    MOV EAX,dword ptr [ESP + 0x15c]     ; 004aa4b3
    CMP EAX,dword ptr [ESI + 0x3ac8]    ; 004aa4ba
    JL 0x004aa43c                       ; 004aa4c0
        ;   XREF to: 004aa43c (CONDITIONAL_JUMP)  ; LAB_004aa43c
    MOV ESP,EBP                         ; 004aa4c6
        ;   Label: LAB_004aa4c6
    POP EBP                             ; 004aa4c8
    POP EDI                             ; 004aa4c9
    POP ESI                             ; 004aa4ca
    POP EBX                             ; 004aa4cb
    RET                                 ; 004aa4cc
    MOV EAX,ESP                         ; 004aa4cd
        ;   Label: LAB_004aa4cd
    PUSH EAX                            ; 004aa4cf
    CALL sound_sndmain.cpp_CSfxSample_init_FUN_00572340 ; 004aa4d0
        ;   XREF to: 00572340 (UNCONDITIONAL_CALL)  ; CSfxSample * sound_sndmain.cpp_CSfxSample_init_FUN_00572340(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 004aa4d5
    MOV EAX,ESP                         ; 004aa4d8
    PUSH EAX                            ; 004aa4da
    MOV EDX,dword ptr [EBX]             ; 004aa4db
    PUSH EDX                            ; 004aa4dd
    CALL sound_sndmain.cpp_getSfxSampleInfo_FUN_00573620 ; 004aa4de
        ;   XREF to: 00573620 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getSfxSampleInfo_FUN_00573620(uint sfx_handle, CSfxSample * output_buffer)
    ADD ESP,0x8                         ; 004aa4e3
    TEST EAX,EAX                        ; 004aa4e6
    JZ 0x004aa480                       ; 004aa4e8
        ;   XREF to: 004aa480 (CONDITIONAL_JUMP)  ; LAB_004aa480
    MOV ESI,ESP                         ; 004aa4ea
    LEA EDI,[EBX + 0x18]                ; 004aa4ec
    PUSH EDI                            ; 004aa4ef
    MOV AL,byte ptr [ESI]               ; 004aa4f0
        ;   Label: LAB_004aa4f0
    MOV byte ptr [EDI],AL               ; 004aa4f2
    CMP AL,0x0                          ; 004aa4f4
    JZ 0x004aa508                       ; 004aa4f6
        ;   XREF to: 004aa508 (CONDITIONAL_JUMP)  ; LAB_004aa508
    MOV AL,byte ptr [ESI + 0x1]         ; 004aa4f8
    ADD ESI,0x2                         ; 004aa4fb
    MOV byte ptr [EDI + 0x1],AL         ; 004aa4fe
    ADD EDI,0x2                         ; 004aa501
    CMP AL,0x0                          ; 004aa504
    JNZ 0x004aa4f0                      ; 004aa506
        ;   XREF to: 004aa4f0 (CONDITIONAL_JUMP)  ; LAB_004aa4f0
    POP EDI                             ; 004aa508
        ;   Label: LAB_004aa508
    JMP 0x004aa488                      ; 004aa509
        ;   XREF to: 004aa488 (UNCONDITIONAL_JUMP)  ; LAB_004aa488
    MOV EAX,dword ptr [EBP + 0x14]      ; 004aa50e
        ;   Label: LAB_004aa50e
    MOV ECX,dword ptr [EAX + 0x3ac8]    ; 004aa511
    DEC ECX                             ; 004aa517
    MOV ESI,dword ptr [ESP + 0x15c]     ; 004aa518
    MOV dword ptr [EAX + 0x3ac8],ECX    ; 004aa51f
    MOV EAX,ECX                         ; 004aa525
    SUB EAX,ESI                         ; 004aa527
    IMUL EAX,EAX,0x120                  ; 004aa529
    PUSH EAX                            ; 004aa52f
    MOV EDI,dword ptr [ESP + 0x15c]     ; 004aa530
    PUSH EDI                            ; 004aa537
    PUSH EBX                            ; 004aa538
    CALL crt_string.c_memmove_FUN_005c25d0 ; 004aa539
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005c25d0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004aa53e
    JMP 0x004aa4b0                      ; 004aa541
        ;   XREF to: 004aa4b0 (UNCONDITIONAL_JUMP)  ; LAB_004aa4b0


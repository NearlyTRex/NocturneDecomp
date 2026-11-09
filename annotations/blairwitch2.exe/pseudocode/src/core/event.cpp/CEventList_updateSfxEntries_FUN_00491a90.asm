; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_event_cpp_CEventList_updateSfxEntries_FUN_00491a90(CEventList *this_ptr)
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
; XREF[5]:
;   core_event.cpp_CEventList_getSfxHandle_FUN_00491920 at 00491926
;   core_event.cpp_CEventList_render_FUN_0048e490 at 0048e701
;   core_event.cpp_CEventList_restartSfxEntries_FUN_00491be0 at 00491c5c
;   core_event.cpp_CEventList_setSfxHandle_FUN_00491960 at 0049196d
;   core_event.cpp_FUN_00489670 at 0048beab
;
; Called Functions:
;   crt_string.c_memmove_FUN_005ba1f0
;   sound_sndmain.cpp_CSfxSample_init_FUN_0054fcd0
;   sound_sndmain.cpp_FUN_00550bf0
;   sound_sndmain.cpp_getSfxPlaybackPosition_FUN_00550c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00491a90
        ;   Label: core_event.cpp_CEventList_updateSfxEntries_FUN_00491a90
    PUSH ESI                            ; 00491a91
    PUSH EDI                            ; 00491a92
    PUSH EBP                            ; 00491a93
    MOV EBP,ESP                         ; 00491a94
    SUB ESP,0x160                       ; 00491a96
    AND ESP,0xfffffff8                  ; 00491a9c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00491a9f
    XOR EDX,EDX                         ; 00491aa2
    MOV ECX,dword ptr [EAX + 0x3ac8]    ; 00491aa4
    MOV dword ptr [ESP + 0x15c],EDX     ; 00491aaa
    TEST ECX,ECX                        ; 00491ab1
    JLE 0x00491b56                      ; 00491ab3
        ;   XREF to: 00491b56 (CONDITIONAL_JUMP)  ; LAB_00491b56
    ADD EAX,0x3acc                      ; 00491ab9
    MOV EBX,EAX                         ; 00491abe
    ADD EAX,0x120                       ; 00491ac0
    MOV dword ptr [ESP + 0x158],EAX     ; 00491ac5
    PUSH 0x1                            ; 00491acc
        ;   Label: LAB_00491acc
    MOV EAX,dword ptr [EBX]             ; 00491ace
    PUSH EAX                            ; 00491ad0
    XOR ESI,ESI                         ; 00491ad1
    CALL sound_sndmain.cpp_getSfxPlaybackPosition_FUN_00550c30 ; 00491ad3
        ;   XREF to: 00550c30 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_getSfxPlaybackPosition_FUN_00550c30(uint sfx_handle, uint output_format)
    MOV dword ptr [ESP + 0x158],EAX     ; 00491ad8
    MOV dword ptr [ESP + 0x15c],EDX     ; 00491adf
    FLDZ                                ; 00491ae6
    MOV EAX,dword ptr [ESP + 0x158]     ; 00491ae8
    MOV dword ptr [EBX + 0x118],EAX     ; 00491aef
    MOV EAX,dword ptr [ESP + 0x15c]     ; 00491af5
    MOV dword ptr [EBX + 0x11c],EAX     ; 00491afc
    ADD ESP,0x8                         ; 00491b02
    FCOMP double ptr [EBX + 0x118]      ; 00491b05
    FNSTSW AX                           ; 00491b0b
    SAHF                                ; 00491b0d
    JBE 0x00491b5d                      ; 00491b0e
        ;   XREF to: 00491b5d (CONDITIONAL_JUMP)  ; LAB_00491b5d
    TEST ESI,ESI                        ; 00491b10
        ;   Label: LAB_00491b10
    JZ 0x00491b9e                       ; 00491b12
        ;   XREF to: 00491b9e (CONDITIONAL_JUMP)  ; LAB_00491b9e
    MOV EAX,dword ptr [ESP + 0x158]     ; 00491b18
        ;   Label: LAB_00491b18
    MOV EDX,dword ptr [ESP + 0x15c]     ; 00491b1f
    ADD EBX,0x120                       ; 00491b26
    ADD EAX,0x120                       ; 00491b2c
    INC EDX                             ; 00491b31
    MOV dword ptr [ESP + 0x158],EAX     ; 00491b32
    MOV dword ptr [ESP + 0x15c],EDX     ; 00491b39
    MOV ESI,dword ptr [EBP + 0x14]      ; 00491b40
        ;   Label: LAB_00491b40
    MOV EAX,dword ptr [ESP + 0x15c]     ; 00491b43
    CMP EAX,dword ptr [ESI + 0x3ac8]    ; 00491b4a
    JL 0x00491acc                       ; 00491b50
        ;   XREF to: 00491acc (CONDITIONAL_JUMP)  ; LAB_00491acc
    MOV ESP,EBP                         ; 00491b56
        ;   Label: LAB_00491b56
    POP EBP                             ; 00491b58
    POP EDI                             ; 00491b59
    POP ESI                             ; 00491b5a
    POP EBX                             ; 00491b5b
    RET                                 ; 00491b5c
    MOV EAX,ESP                         ; 00491b5d
        ;   Label: LAB_00491b5d
    PUSH EAX                            ; 00491b5f
    CALL sound_sndmain.cpp_CSfxSample_init_FUN_0054fcd0 ; 00491b60
        ;   XREF to: 0054fcd0 (UNCONDITIONAL_CALL)  ; CSfxSample * sound_sndmain.cpp_CSfxSample_init_FUN_0054fcd0(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 00491b65
    MOV EAX,ESP                         ; 00491b68
    PUSH EAX                            ; 00491b6a
    MOV EDX,dword ptr [EBX]             ; 00491b6b
    PUSH EDX                            ; 00491b6d
    CALL sound_sndmain.cpp_FUN_00550bf0 ; 00491b6e
        ;   XREF to: 00550bf0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550bf0(uint sfx_handle, CSfxSample * output_buffer)
    ADD ESP,0x8                         ; 00491b73
    TEST EAX,EAX                        ; 00491b76
    JZ 0x00491b10                       ; 00491b78
        ;   XREF to: 00491b10 (CONDITIONAL_JUMP)  ; LAB_00491b10
    MOV ESI,ESP                         ; 00491b7a
    LEA EDI,[EBX + 0x18]                ; 00491b7c
    PUSH EDI                            ; 00491b7f
    MOV AL,byte ptr [ESI]               ; 00491b80
        ;   Label: LAB_00491b80
    MOV byte ptr [EDI],AL               ; 00491b82
    CMP AL,0x0                          ; 00491b84
    JZ 0x00491b98                       ; 00491b86
        ;   XREF to: 00491b98 (CONDITIONAL_JUMP)  ; LAB_00491b98
    MOV AL,byte ptr [ESI + 0x1]         ; 00491b88
    ADD ESI,0x2                         ; 00491b8b
    MOV byte ptr [EDI + 0x1],AL         ; 00491b8e
    ADD EDI,0x2                         ; 00491b91
    CMP AL,0x0                          ; 00491b94
    JNZ 0x00491b80                      ; 00491b96
        ;   XREF to: 00491b80 (CONDITIONAL_JUMP)  ; LAB_00491b80
    POP EDI                             ; 00491b98
        ;   Label: LAB_00491b98
    JMP 0x00491b18                      ; 00491b99
        ;   XREF to: 00491b18 (UNCONDITIONAL_JUMP)  ; LAB_00491b18
    MOV EAX,dword ptr [EBP + 0x14]      ; 00491b9e
        ;   Label: LAB_00491b9e
    MOV ECX,dword ptr [EAX + 0x3ac8]    ; 00491ba1
    DEC ECX                             ; 00491ba7
    MOV ESI,dword ptr [ESP + 0x15c]     ; 00491ba8
    MOV dword ptr [EAX + 0x3ac8],ECX    ; 00491baf
    MOV EAX,ECX                         ; 00491bb5
    SUB EAX,ESI                         ; 00491bb7
    IMUL EAX,EAX,0x120                  ; 00491bb9
    PUSH EAX                            ; 00491bbf
    MOV EDI,dword ptr [ESP + 0x15c]     ; 00491bc0
    PUSH EDI                            ; 00491bc7
    PUSH EBX                            ; 00491bc8
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 00491bc9
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00491bce
    JMP 0x00491b40                      ; 00491bd1
        ;   XREF to: 00491b40 (UNCONDITIONAL_JUMP)  ; LAB_00491b40


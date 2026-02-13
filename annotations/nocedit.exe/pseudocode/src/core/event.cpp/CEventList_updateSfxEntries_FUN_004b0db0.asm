; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_event_cpp_CEventList_updateSfxEntries_FUN_004b0db0(CEventList *this_ptr)
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
;   core_event.cpp_CEventList_executeCommand_FUN_004aacc0 at 004ac223
;   core_event.cpp_CEventList_getSfxHandle_FUN_004b0c40 at 004b0c46
;   core_event.cpp_CEventList_render_FUN_004addf0 at 004ae061
;   core_event.cpp_CEventList_restartSfxEntries_FUN_004b0f00 at 004b0f7c
;   core_event.cpp_CEventList_setSfxHandle_FUN_004b0c80 at 004b0d2a
;
; Called Functions:
;   crt_string.c_memmove_FUN_005fe5e0
;   sound_sndmain.cpp_CSfxSample_init_FUN_005a8480
;   sound_sndmain.cpp_getSfxPlaybackPosition_FUN_005a9720
;   sound_sndmain.cpp_getSfxSampleInfo_FUN_005a96e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0db0
        ;   Label: core_event.cpp_CEventList_updateSfxEntries_FUN_004b0db0
    PUSH ESI                            ; 004b0db1
    PUSH EDI                            ; 004b0db2
    PUSH EBP                            ; 004b0db3
    MOV EBP,ESP                         ; 004b0db4
    SUB ESP,0x160                       ; 004b0db6
    AND ESP,0xfffffff8                  ; 004b0dbc
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b0dbf
    XOR EDX,EDX                         ; 004b0dc2
    MOV ECX,dword ptr [EAX + 0x3ac8]    ; 004b0dc4
    MOV dword ptr [ESP + 0x15c],EDX     ; 004b0dca
    TEST ECX,ECX                        ; 004b0dd1
    JLE 0x004b0e76                      ; 004b0dd3
        ;   XREF to: 004b0e76 (CONDITIONAL_JUMP)  ; LAB_004b0e76
    ADD EAX,0x3acc                      ; 004b0dd9
    MOV EBX,EAX                         ; 004b0dde
    ADD EAX,0x120                       ; 004b0de0
    MOV dword ptr [ESP + 0x158],EAX     ; 004b0de5
    PUSH 0x1                            ; 004b0dec
        ;   Label: LAB_004b0dec
    MOV EAX,dword ptr [EBX]             ; 004b0dee
    PUSH EAX                            ; 004b0df0
    XOR ESI,ESI                         ; 004b0df1
    CALL sound_sndmain.cpp_getSfxPlaybackPosition_FUN_005a9720 ; 004b0df3
        ;   XREF to: 005a9720 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_getSfxPlaybackPosition_FUN_005a9720(uint sfx_handle, uint output_format)
    MOV dword ptr [ESP + 0x158],EAX     ; 004b0df8
    MOV dword ptr [ESP + 0x15c],EDX     ; 004b0dff
    FLDZ                                ; 004b0e06
    MOV EAX,dword ptr [ESP + 0x158]     ; 004b0e08
    MOV dword ptr [EBX + 0x118],EAX     ; 004b0e0f
    MOV EAX,dword ptr [ESP + 0x15c]     ; 004b0e15
    MOV dword ptr [EBX + 0x11c],EAX     ; 004b0e1c
    ADD ESP,0x8                         ; 004b0e22
    FCOMP double ptr [EBX + 0x118]      ; 004b0e25
    FNSTSW AX                           ; 004b0e2b
    SAHF                                ; 004b0e2d
    JBE 0x004b0e7d                      ; 004b0e2e
        ;   XREF to: 004b0e7d (CONDITIONAL_JUMP)  ; LAB_004b0e7d
    TEST ESI,ESI                        ; 004b0e30
        ;   Label: LAB_004b0e30
    JZ 0x004b0ebe                       ; 004b0e32
        ;   XREF to: 004b0ebe (CONDITIONAL_JUMP)  ; LAB_004b0ebe
    MOV EAX,dword ptr [ESP + 0x158]     ; 004b0e38
        ;   Label: LAB_004b0e38
    MOV EDX,dword ptr [ESP + 0x15c]     ; 004b0e3f
    ADD EBX,0x120                       ; 004b0e46
    ADD EAX,0x120                       ; 004b0e4c
    INC EDX                             ; 004b0e51
    MOV dword ptr [ESP + 0x158],EAX     ; 004b0e52
    MOV dword ptr [ESP + 0x15c],EDX     ; 004b0e59
    MOV ESI,dword ptr [EBP + 0x14]      ; 004b0e60
        ;   Label: LAB_004b0e60
    MOV EAX,dword ptr [ESP + 0x15c]     ; 004b0e63
    CMP EAX,dword ptr [ESI + 0x3ac8]    ; 004b0e6a
    JL 0x004b0dec                       ; 004b0e70
        ;   XREF to: 004b0dec (CONDITIONAL_JUMP)  ; LAB_004b0dec
    MOV ESP,EBP                         ; 004b0e76
        ;   Label: LAB_004b0e76
    POP EBP                             ; 004b0e78
    POP EDI                             ; 004b0e79
    POP ESI                             ; 004b0e7a
    POP EBX                             ; 004b0e7b
    RET                                 ; 004b0e7c
    MOV EAX,ESP                         ; 004b0e7d
        ;   Label: LAB_004b0e7d
    PUSH EAX                            ; 004b0e7f
    CALL sound_sndmain.cpp_CSfxSample_init_FUN_005a8480 ; 004b0e80
        ;   XREF to: 005a8480 (UNCONDITIONAL_CALL)  ; CSfxSample * sound_sndmain.cpp_CSfxSample_init_FUN_005a8480(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 004b0e85
    MOV EAX,ESP                         ; 004b0e88
    PUSH EAX                            ; 004b0e8a
    MOV EDX,dword ptr [EBX]             ; 004b0e8b
    PUSH EDX                            ; 004b0e8d
    CALL sound_sndmain.cpp_getSfxSampleInfo_FUN_005a96e0 ; 004b0e8e
        ;   XREF to: 005a96e0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getSfxSampleInfo_FUN_005a96e0(uint sfx_handle, CSfxSample * output_buffer)
    ADD ESP,0x8                         ; 004b0e93
    TEST EAX,EAX                        ; 004b0e96
    JZ 0x004b0e30                       ; 004b0e98
        ;   XREF to: 004b0e30 (CONDITIONAL_JUMP)  ; LAB_004b0e30
    MOV ESI,ESP                         ; 004b0e9a
    LEA EDI,[EBX + 0x18]                ; 004b0e9c
    PUSH EDI                            ; 004b0e9f
    MOV AL,byte ptr [ESI]               ; 004b0ea0
        ;   Label: LAB_004b0ea0
    MOV byte ptr [EDI],AL               ; 004b0ea2
    CMP AL,0x0                          ; 004b0ea4
    JZ 0x004b0eb8                       ; 004b0ea6
        ;   XREF to: 004b0eb8 (CONDITIONAL_JUMP)  ; LAB_004b0eb8
    MOV AL,byte ptr [ESI + 0x1]         ; 004b0ea8
    ADD ESI,0x2                         ; 004b0eab
    MOV byte ptr [EDI + 0x1],AL         ; 004b0eae
    ADD EDI,0x2                         ; 004b0eb1
    CMP AL,0x0                          ; 004b0eb4
    JNZ 0x004b0ea0                      ; 004b0eb6
        ;   XREF to: 004b0ea0 (CONDITIONAL_JUMP)  ; LAB_004b0ea0
    POP EDI                             ; 004b0eb8
        ;   Label: LAB_004b0eb8
    JMP 0x004b0e38                      ; 004b0eb9
        ;   XREF to: 004b0e38 (UNCONDITIONAL_JUMP)  ; LAB_004b0e38
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b0ebe
        ;   Label: LAB_004b0ebe
    MOV ECX,dword ptr [EAX + 0x3ac8]    ; 004b0ec1
    DEC ECX                             ; 004b0ec7
    MOV ESI,dword ptr [ESP + 0x15c]     ; 004b0ec8
    MOV dword ptr [EAX + 0x3ac8],ECX    ; 004b0ecf
    MOV EAX,ECX                         ; 004b0ed5
    SUB EAX,ESI                         ; 004b0ed7
    IMUL EAX,EAX,0x120                  ; 004b0ed9
    PUSH EAX                            ; 004b0edf
    MOV EDI,dword ptr [ESP + 0x15c]     ; 004b0ee0
    PUSH EDI                            ; 004b0ee7
    PUSH EBX                            ; 004b0ee8
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004b0ee9
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004b0eee
    JMP 0x004b0e60                      ; 004b0ef1
        ;   XREF to: 004b0e60 (UNCONDITIONAL_JUMP)  ; LAB_004b0e60


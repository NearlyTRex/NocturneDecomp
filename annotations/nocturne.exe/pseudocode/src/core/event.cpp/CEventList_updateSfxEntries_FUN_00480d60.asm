; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_event_cpp_CEventList_updateSfxEntries_FUN_00480d60(CEventList *this_ptr)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x148]:1  local_148
; undefined1       Stack[-0x147]:1  local_147
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[5]:
;   core_event.cpp_CEventList_executeCommand_FUN_0047ac50 at 0047c17a
;   core_event.cpp_CEventList_getSfxHandle_FUN_00480bf0 at 00480bf6
;   core_event.cpp_CEventList_render_FUN_0047dd80 at 0047dff1
;   core_event.cpp_CEventList_restartSfxEntries_FUN_00480eb0 at 00480f2c
;   core_event.cpp_CEventList_setSfxHandle_FUN_00480c30 at 00480c3d
;
; Called Functions:
;   crt_string.c_memmove_FUN_00566170
;   sound_sndmain.cpp_CSfxSample_init_FUN_00525b70
;   sound_sndmain.cpp_getSfxPlaybackPosition_FUN_00526d10
;   sound_sndmain.cpp_getSfxSampleInfo_FUN_00526cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480d60
        ;   Label: core_event.cpp_CEventList_updateSfxEntries_FUN_00480d60
    PUSH ESI                            ; 00480d61
    PUSH EDI                            ; 00480d62
    PUSH EBP                            ; 00480d63
    MOV EBP,ESP                         ; 00480d64
    SUB ESP,0x138                       ; 00480d66
    AND ESP,0xfffffff8                  ; 00480d6c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00480d6f
    XOR EDX,EDX                         ; 00480d72
    MOV ECX,dword ptr [EAX + 0x3ac8]    ; 00480d74
    MOV dword ptr [ESP + 0x134],EDX     ; 00480d7a
    TEST ECX,ECX                        ; 00480d81
    JLE 0x00480e26                      ; 00480d83
        ;   XREF to: 00480e26 (CONDITIONAL_JUMP)  ; LAB_00480e26
    ADD EAX,0x3acc                      ; 00480d89
    MOV EBX,EAX                         ; 00480d8e
    ADD EAX,0x120                       ; 00480d90
    MOV dword ptr [ESP + 0x130],EAX     ; 00480d95
    PUSH 0x1                            ; 00480d9c
        ;   Label: LAB_00480d9c
    MOV EAX,dword ptr [EBX]             ; 00480d9e
    PUSH EAX                            ; 00480da0
    XOR ESI,ESI                         ; 00480da1
    CALL sound_sndmain.cpp_getSfxPlaybackPosition_FUN_00526d10 ; 00480da3
        ;   XREF to: 00526d10 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_getSfxPlaybackPosition_FUN_00526d10(uint sfx_handle, uint output_format)
    MOV dword ptr [ESP + 0x130],EAX     ; 00480da8
    MOV dword ptr [ESP + 0x134],EDX     ; 00480daf
    FLDZ                                ; 00480db6
    MOV EAX,dword ptr [ESP + 0x130]     ; 00480db8
    MOV dword ptr [EBX + 0x118],EAX     ; 00480dbf
    MOV EAX,dword ptr [ESP + 0x134]     ; 00480dc5
    MOV dword ptr [EBX + 0x11c],EAX     ; 00480dcc
    ADD ESP,0x8                         ; 00480dd2
    FCOMP double ptr [EBX + 0x118]      ; 00480dd5
    FNSTSW AX                           ; 00480ddb
    SAHF                                ; 00480ddd
    JBE 0x00480e2d                      ; 00480dde
        ;   XREF to: 00480e2d (CONDITIONAL_JUMP)  ; LAB_00480e2d
    TEST ESI,ESI                        ; 00480de0
        ;   Label: LAB_00480de0
    JZ 0x00480e6e                       ; 00480de2
        ;   XREF to: 00480e6e (CONDITIONAL_JUMP)  ; LAB_00480e6e
    MOV EAX,dword ptr [ESP + 0x130]     ; 00480de8
        ;   Label: LAB_00480de8
    MOV EDX,dword ptr [ESP + 0x134]     ; 00480def
    ADD EBX,0x120                       ; 00480df6
    ADD EAX,0x120                       ; 00480dfc
    INC EDX                             ; 00480e01
    MOV dword ptr [ESP + 0x130],EAX     ; 00480e02
    MOV dword ptr [ESP + 0x134],EDX     ; 00480e09
    MOV ESI,dword ptr [EBP + 0x14]      ; 00480e10
        ;   Label: LAB_00480e10
    MOV EAX,dword ptr [ESP + 0x134]     ; 00480e13
    CMP EAX,dword ptr [ESI + 0x3ac8]    ; 00480e1a
    JL 0x00480d9c                       ; 00480e20
        ;   XREF to: 00480d9c (CONDITIONAL_JUMP)  ; LAB_00480d9c
    MOV ESP,EBP                         ; 00480e26
        ;   Label: LAB_00480e26
    POP EBP                             ; 00480e28
    POP EDI                             ; 00480e29
    POP ESI                             ; 00480e2a
    POP EBX                             ; 00480e2b
    RET                                 ; 00480e2c
    MOV EAX,ESP                         ; 00480e2d
        ;   Label: LAB_00480e2d
    PUSH EAX                            ; 00480e2f
    CALL sound_sndmain.cpp_CSfxSample_init_FUN_00525b70 ; 00480e30
        ;   XREF to: 00525b70 (UNCONDITIONAL_CALL)  ; CSfxSample * sound_sndmain.cpp_CSfxSample_init_FUN_00525b70(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 00480e35
    MOV EAX,ESP                         ; 00480e38
    PUSH EAX                            ; 00480e3a
    MOV EDX,dword ptr [EBX]             ; 00480e3b
    PUSH EDX                            ; 00480e3d
    CALL sound_sndmain.cpp_getSfxSampleInfo_FUN_00526cd0 ; 00480e3e
        ;   XREF to: 00526cd0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getSfxSampleInfo_FUN_00526cd0(uint sfx_handle, CSfxSample * output_buffer)
    ADD ESP,0x8                         ; 00480e43
    TEST EAX,EAX                        ; 00480e46
    JZ 0x00480de0                       ; 00480e48
        ;   XREF to: 00480de0 (CONDITIONAL_JUMP)  ; LAB_00480de0
    MOV ESI,ESP                         ; 00480e4a
    LEA EDI,[EBX + 0x18]                ; 00480e4c
    PUSH EDI                            ; 00480e4f
    MOV AL,byte ptr [ESI]               ; 00480e50
        ;   Label: LAB_00480e50
    MOV byte ptr [EDI],AL               ; 00480e52
    CMP AL,0x0                          ; 00480e54
    JZ 0x00480e68                       ; 00480e56
        ;   XREF to: 00480e68 (CONDITIONAL_JUMP)  ; LAB_00480e68
    MOV AL,byte ptr [ESI + 0x1]         ; 00480e58
    ADD ESI,0x2                         ; 00480e5b
    MOV byte ptr [EDI + 0x1],AL         ; 00480e5e
    ADD EDI,0x2                         ; 00480e61
    CMP AL,0x0                          ; 00480e64
    JNZ 0x00480e50                      ; 00480e66
        ;   XREF to: 00480e50 (CONDITIONAL_JUMP)  ; LAB_00480e50
    POP EDI                             ; 00480e68
        ;   Label: LAB_00480e68
    JMP 0x00480de8                      ; 00480e69
        ;   XREF to: 00480de8 (UNCONDITIONAL_JUMP)  ; LAB_00480de8
    MOV EAX,dword ptr [EBP + 0x14]      ; 00480e6e
        ;   Label: LAB_00480e6e
    MOV ECX,dword ptr [EAX + 0x3ac8]    ; 00480e71
    DEC ECX                             ; 00480e77
    MOV ESI,dword ptr [ESP + 0x134]     ; 00480e78
    MOV dword ptr [EAX + 0x3ac8],ECX    ; 00480e7f
    MOV EAX,ECX                         ; 00480e85
    SUB EAX,ESI                         ; 00480e87
    IMUL EAX,EAX,0x120                  ; 00480e89
    PUSH EAX                            ; 00480e8f
    MOV EDI,dword ptr [ESP + 0x134]     ; 00480e90
    PUSH EDI                            ; 00480e97
    PUSH EBX                            ; 00480e98
    CALL crt_string.c_memmove_FUN_00566170 ; 00480e99
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_00566170(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00480e9e
    JMP 0x00480e10                      ; 00480ea1
        ;   XREF to: 00480e10 (UNCONDITIONAL_JUMP)  ; LAB_00480e10


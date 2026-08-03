; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_00525c70(CSampleInfo *this_ptr,double position,uint input_type,uint output_type)
;
; Parameters:
; CSampleInfo *    Stack[0x4]:4   this_ptr
; double           Stack[0x8]:8   position
; uint             Stack[0x10]:4   input_type
; uint             Stack[0x14]:4   output_type
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   sound_sndmain.cpp_CSfxSample_normalizePlaybackPos_FUN_00525de0 at 00525dfd
;   sound_sndmain.cpp_CSfxSlot_seek_FUN_00525a80 at 00525ac6
;   sound_sndmain.cpp_getSfxPlaybackPosition_FUN_00526d10 at 00526d60
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_00593267
;   TerminatedCString s_SampleInfo_cvtPlaybackPo_0059327c
;   TerminatedCString s_sound_sndmain_cpp_005932dc
;   TerminatedCString s_SampleInfo_cvtPlaybackPo_005932f1
;   TerminatedCString s_sound_sndmain_cpp_0059332c
;   TerminatedCString s_SampleInfo_cvtPlaybackPo_00593341
;   TerminatedCString s_sound_sndmain_cpp_005933a1
;   TerminatedCString s_SampleInfo_cvtPlaybackPo_005933b6
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00525c70
        ;   Label: sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_00525c70
    PUSH ESI                            ; 00525c71
    PUSH EDI                            ; 00525c72
    PUSH EBP                            ; 00525c73
    MOV EBP,ESP                         ; 00525c74
    SUB ESP,0x8                         ; 00525c76
    AND ESP,0xfffffff8                  ; 00525c79
    MOV EBX,dword ptr [EBP + 0x14]      ; 00525c7c
    MOV EAX,dword ptr [EBP + 0x20]      ; 00525c7f
    MOV ESI,dword ptr [EBP + 0x24]      ; 00525c82
    CMP EAX,ESI                         ; 00525c85
    JZ 0x00525cc9                       ; 00525c87
        ;   XREF to: 00525cc9 (CONDITIONAL_JUMP)  ; LAB_00525cc9
    CMP EAX,0x1                         ; 00525c89
    JNC 0x00525d3e                      ; 00525c8c
        ;   XREF to: 00525d3e (CONDITIONAL_JUMP)  ; LAB_00525d3e
    TEST EAX,EAX                        ; 00525c92
    JNZ 0x00525d45                      ; 00525c94
        ;   XREF to: 00525d45 (CONDITIONAL_JUMP)  ; LAB_00525d45
    CMP ESI,0x1                         ; 00525c9a
        ;   Label: LAB_00525c9a
    JNC 0x00525dcc                      ; 00525c9d
        ;   XREF to: 00525dcc (CONDITIONAL_JUMP)  ; LAB_00525dcc
    TEST ESI,ESI                        ; 00525ca3
    JZ 0x00525cc9                       ; 00525ca5
        ;   XREF to: 00525cc9 (CONDITIONAL_JUMP)  ; LAB_00525cc9
    MOV EAX,0x5933a1                    ; 00525ca7 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00525ca7
    MOV EDX,0xc4f                       ; 00525cac
    PUSH 0x5933b6                       ; 00525cb1 | = "SampleInfo::cvtPlaybackPos - Invalid ..."
    MOV [0x01cc4800],EAX                ; 00525cb6 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 00525cbb | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00525cc1
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00525cc6
    MOV EAX,dword ptr [EBP + 0x18]      ; 00525cc9
        ;   Label: LAB_00525cc9
    MOV dword ptr [ESP],EAX             ; 00525ccc
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00525ccf
    MOV dword ptr [ESP + 0x4],EAX       ; 00525cd2
    MOV EAX,dword ptr [ESP]             ; 00525cd6
    MOV EDX,dword ptr [ESP + 0x4]       ; 00525cd9
    MOV ESP,EBP                         ; 00525cdd
    POP EBP                             ; 00525cdf
    POP EDI                             ; 00525ce0
    POP ESI                             ; 00525ce1
    POP EBX                             ; 00525ce2
    RET                                 ; 00525ce3
    FILD dword ptr [EBX + 0x10c]        ; 00525ce4
        ;   Label: LAB_00525ce4
    FMUL double ptr [EBP + 0x18]        ; 00525cea
    FSTP double ptr [EBP + 0x18]        ; 00525ced
    JMP 0x00525c9a                      ; 00525cf0
        ;   XREF to: 00525c9a (UNCONDITIONAL_JUMP)  ; LAB_00525c9a
    CMP dword ptr [EBX + 0x110],0x0     ; 00525cf2
        ;   Label: LAB_00525cf2
    JLE 0x00525d09                      ; 00525cf9
        ;   XREF to: 00525d09 (CONDITIONAL_JUMP)  ; LAB_00525d09
    FILD dword ptr [EBX + 0x110]        ; 00525cfb
    FMUL double ptr [EBP + 0x18]        ; 00525d01
    FSTP double ptr [EBP + 0x18]        ; 00525d04
    JMP 0x00525c9a                      ; 00525d07
        ;   XREF to: 00525c9a (UNCONDITIONAL_JUMP)  ; LAB_00525c9a
    PUSH EBX                            ; 00525d09
        ;   Label: LAB_00525d09
    MOV ECX,0x593267                    ; 00525d0a | = "..\\sound\\sndmain.cpp"
    MOV EDI,0xc37                       ; 00525d0f
    PUSH 0x59327c                       ; 00525d14 | = "SampleInfo::cvtPlaybackPos - can't us..."
    MOV dword ptr [0x01cc4800],ECX      ; 00525d19 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 00525d1f | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00525d25
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 00525d2a
    FILD dword ptr [EBX + 0x110]        ; 00525d2d
    FMUL double ptr [EBP + 0x18]        ; 00525d33
    FSTP double ptr [EBP + 0x18]        ; 00525d36
    JMP 0x00525c9a                      ; 00525d39
        ;   XREF to: 00525c9a (UNCONDITIONAL_JUMP)  ; LAB_00525c9a
    JBE 0x00525ce4                      ; 00525d3e
        ;   XREF to: 00525ce4 (CONDITIONAL_JUMP)  ; LAB_00525ce4
        ;   Label: LAB_00525d3e
    CMP EAX,0x2                         ; 00525d40
    JZ 0x00525cf2                       ; 00525d43
        ;   XREF to: 00525cf2 (CONDITIONAL_JUMP)  ; LAB_00525cf2
    MOV EAX,0x5932dc                    ; 00525d45 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00525d45
    MOV EDX,0xc3c                       ; 00525d4a
    PUSH 0x5932f1                       ; 00525d4f | = "SampleInfo::cvtPlaybackPos - Invalid ..."
    MOV [0x01cc4800],EAX                ; 00525d54 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 00525d59 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00525d5f
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00525d64
    JMP 0x00525c9a                      ; 00525d67
        ;   XREF to: 00525c9a (UNCONDITIONAL_JUMP)  ; LAB_00525c9a
    FILD dword ptr [EBX + 0x10c]        ; 00525d6c
        ;   Label: LAB_00525d6c
    FDIVR double ptr [EBP + 0x18]       ; 00525d72
    FSTP double ptr [EBP + 0x18]        ; 00525d75
    JMP 0x00525cc9                      ; 00525d78
        ;   XREF to: 00525cc9 (UNCONDITIONAL_JUMP)  ; LAB_00525cc9
    CMP dword ptr [EBX + 0x110],0x0     ; 00525d7d
        ;   Label: LAB_00525d7d
    JLE 0x00525d97                      ; 00525d84
        ;   XREF to: 00525d97 (CONDITIONAL_JUMP)  ; LAB_00525d97
    FILD dword ptr [EBX + 0x110]        ; 00525d86
    FDIVR double ptr [EBP + 0x18]       ; 00525d8c
    FSTP double ptr [EBP + 0x18]        ; 00525d8f
    JMP 0x00525cc9                      ; 00525d92
        ;   XREF to: 00525cc9 (UNCONDITIONAL_JUMP)  ; LAB_00525cc9
    PUSH EBX                            ; 00525d97
        ;   Label: LAB_00525d97
    MOV ESI,0x59332c                    ; 00525d98 | = "..\\sound\\sndmain.cpp"
    MOV EDI,0xc4a                       ; 00525d9d
    PUSH 0x593341                       ; 00525da2 | = "SampleInfo::cvtPlaybackPos - can't us..."
    MOV dword ptr [0x01cc4800],ESI      ; 00525da7 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 00525dad | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00525db3
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 00525db8
    FILD dword ptr [EBX + 0x110]        ; 00525dbb
    FDIVR double ptr [EBP + 0x18]       ; 00525dc1
    FSTP double ptr [EBP + 0x18]        ; 00525dc4
    JMP 0x00525cc9                      ; 00525dc7
        ;   XREF to: 00525cc9 (UNCONDITIONAL_JUMP)  ; LAB_00525cc9
    JBE 0x00525d6c                      ; 00525dcc
        ;   XREF to: 00525d6c (CONDITIONAL_JUMP)  ; LAB_00525d6c
        ;   Label: LAB_00525dcc
    CMP ESI,0x2                         ; 00525dce
    JZ 0x00525d7d                       ; 00525dd1
        ;   XREF to: 00525d7d (CONDITIONAL_JUMP)  ; LAB_00525d7d
    JMP 0x00525ca7                      ; 00525dd3
        ;   XREF to: 00525ca7 (UNCONDITIONAL_JUMP)  ; LAB_00525ca7


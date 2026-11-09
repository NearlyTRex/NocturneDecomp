; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_00555930(CSampleInfo *this_ptr,double position,uint input_type,uint output_type)
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
;   sound_sndmain.cpp_CSfxSample_normalizePlaybackPos_FUN_00555aa0 at 00555abd
;   sound_sndmain.cpp_CSfxSlot_seek_FUN_00555750 at 00555796
;   sound_sndmain.cpp_getSfxPlaybackPosition_FUN_005567c0 at 00556810
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005d34f3
;   TerminatedCString s_SampleInfo_cvtPlaybackPo_005d3508
;   TerminatedCString s_sound_sndmain_cpp_005d3568
;   TerminatedCString s_SampleInfo_cvtPlaybackPo_005d357d
;   TerminatedCString s_sound_sndmain_cpp_005d35b8
;   TerminatedCString s_SampleInfo_cvtPlaybackPo_005d35cd
;   TerminatedCString s_sound_sndmain_cpp_005d362d
;   TerminatedCString s_SampleInfo_cvtPlaybackPo_005d3642
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00555930
        ;   Label: sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_00555930
    PUSH ESI                            ; 00555931
    PUSH EDI                            ; 00555932
    PUSH EBP                            ; 00555933
    MOV EBP,ESP                         ; 00555934
    SUB ESP,0x8                         ; 00555936
    AND ESP,0xfffffff8                  ; 00555939
    MOV EBX,dword ptr [EBP + 0x14]      ; 0055593c
    MOV EAX,dword ptr [EBP + 0x20]      ; 0055593f
    MOV ESI,dword ptr [EBP + 0x24]      ; 00555942
    CMP EAX,ESI                         ; 00555945
    JZ 0x00555989                       ; 00555947
        ;   XREF to: 00555989 (CONDITIONAL_JUMP)  ; LAB_00555989
    CMP EAX,0x1                         ; 00555949
    JNC 0x005559fe                      ; 0055594c
        ;   XREF to: 005559fe (CONDITIONAL_JUMP)  ; LAB_005559fe
    TEST EAX,EAX                        ; 00555952
    JNZ 0x00555a05                      ; 00555954
        ;   XREF to: 00555a05 (CONDITIONAL_JUMP)  ; LAB_00555a05
    CMP ESI,0x1                         ; 0055595a
        ;   Label: LAB_0055595a
    JNC 0x00555a8c                      ; 0055595d
        ;   XREF to: 00555a8c (CONDITIONAL_JUMP)  ; LAB_00555a8c
    TEST ESI,ESI                        ; 00555963
    JZ 0x00555989                       ; 00555965
        ;   XREF to: 00555989 (CONDITIONAL_JUMP)  ; LAB_00555989
    MOV EAX,0x5d362d                    ; 00555967 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00555967
    MOV EDX,0xdd6                       ; 0055596c
    PUSH 0x5d3642                       ; 00555971 | = "SampleInfo::cvtPlaybackPos - Invalid ..."
    MOV [0x01d71de0],EAX                ; 00555976 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 0055597b | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00555981
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00555986
    MOV EAX,dword ptr [EBP + 0x18]      ; 00555989
        ;   Label: LAB_00555989
    MOV dword ptr [ESP],EAX             ; 0055598c
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0055598f
    MOV dword ptr [ESP + 0x4],EAX       ; 00555992
    MOV EAX,dword ptr [ESP]             ; 00555996
    MOV EDX,dword ptr [ESP + 0x4]       ; 00555999
    MOV ESP,EBP                         ; 0055599d
    POP EBP                             ; 0055599f
    POP EDI                             ; 005559a0
    POP ESI                             ; 005559a1
    POP EBX                             ; 005559a2
    RET                                 ; 005559a3
    FILD dword ptr [EBX + 0x10c]        ; 005559a4
        ;   Label: LAB_005559a4
    FMUL double ptr [EBP + 0x18]        ; 005559aa
    FSTP double ptr [EBP + 0x18]        ; 005559ad
    JMP 0x0055595a                      ; 005559b0
        ;   XREF to: 0055595a (UNCONDITIONAL_JUMP)  ; LAB_0055595a
    CMP dword ptr [EBX + 0x110],0x0     ; 005559b2
        ;   Label: LAB_005559b2
    JLE 0x005559c9                      ; 005559b9
        ;   XREF to: 005559c9 (CONDITIONAL_JUMP)  ; LAB_005559c9
    FILD dword ptr [EBX + 0x110]        ; 005559bb
    FMUL double ptr [EBP + 0x18]        ; 005559c1
    FSTP double ptr [EBP + 0x18]        ; 005559c4
    JMP 0x0055595a                      ; 005559c7
        ;   XREF to: 0055595a (UNCONDITIONAL_JUMP)  ; LAB_0055595a
    PUSH EBX                            ; 005559c9
        ;   Label: LAB_005559c9
    MOV ECX,0x5d34f3                    ; 005559ca | = "..\\sound\\sndmain.cpp"
    MOV EDI,0xdbe                       ; 005559cf
    PUSH 0x5d3508                       ; 005559d4 | = "SampleInfo::cvtPlaybackPos - can't us..."
    MOV dword ptr [0x01d71de0],ECX      ; 005559d9 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 005559df | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 005559e5
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 005559ea
    FILD dword ptr [EBX + 0x110]        ; 005559ed
    FMUL double ptr [EBP + 0x18]        ; 005559f3
    FSTP double ptr [EBP + 0x18]        ; 005559f6
    JMP 0x0055595a                      ; 005559f9
        ;   XREF to: 0055595a (UNCONDITIONAL_JUMP)  ; LAB_0055595a
    JBE 0x005559a4                      ; 005559fe
        ;   XREF to: 005559a4 (CONDITIONAL_JUMP)  ; LAB_005559a4
        ;   Label: LAB_005559fe
    CMP EAX,0x2                         ; 00555a00
    JZ 0x005559b2                       ; 00555a03
        ;   XREF to: 005559b2 (CONDITIONAL_JUMP)  ; LAB_005559b2
    MOV EAX,0x5d3568                    ; 00555a05 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00555a05
    MOV EDX,0xdc3                       ; 00555a0a
    PUSH 0x5d357d                       ; 00555a0f | = "SampleInfo::cvtPlaybackPos - Invalid ..."
    MOV [0x01d71de0],EAX                ; 00555a14 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 00555a19 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00555a1f
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00555a24
    JMP 0x0055595a                      ; 00555a27
        ;   XREF to: 0055595a (UNCONDITIONAL_JUMP)  ; LAB_0055595a
    FILD dword ptr [EBX + 0x10c]        ; 00555a2c
        ;   Label: LAB_00555a2c
    FDIVR double ptr [EBP + 0x18]       ; 00555a32
    FSTP double ptr [EBP + 0x18]        ; 00555a35
    JMP 0x00555989                      ; 00555a38
        ;   XREF to: 00555989 (UNCONDITIONAL_JUMP)  ; LAB_00555989
    CMP dword ptr [EBX + 0x110],0x0     ; 00555a3d
        ;   Label: LAB_00555a3d
    JLE 0x00555a57                      ; 00555a44
        ;   XREF to: 00555a57 (CONDITIONAL_JUMP)  ; LAB_00555a57
    FILD dword ptr [EBX + 0x110]        ; 00555a46
    FDIVR double ptr [EBP + 0x18]       ; 00555a4c
    FSTP double ptr [EBP + 0x18]        ; 00555a4f
    JMP 0x00555989                      ; 00555a52
        ;   XREF to: 00555989 (UNCONDITIONAL_JUMP)  ; LAB_00555989
    PUSH EBX                            ; 00555a57
        ;   Label: LAB_00555a57
    MOV ESI,0x5d35b8                    ; 00555a58 | = "..\\sound\\sndmain.cpp"
    MOV EDI,0xdd1                       ; 00555a5d
    PUSH 0x5d35cd                       ; 00555a62 | = "SampleInfo::cvtPlaybackPos - can't us..."
    MOV dword ptr [0x01d71de0],ESI      ; 00555a67 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 00555a6d | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00555a73
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 00555a78
    FILD dword ptr [EBX + 0x110]        ; 00555a7b
    FDIVR double ptr [EBP + 0x18]       ; 00555a81
    FSTP double ptr [EBP + 0x18]        ; 00555a84
    JMP 0x00555989                      ; 00555a87
        ;   XREF to: 00555989 (UNCONDITIONAL_JUMP)  ; LAB_00555989
    JBE 0x00555a2c                      ; 00555a8c
        ;   XREF to: 00555a2c (CONDITIONAL_JUMP)  ; LAB_00555a2c
        ;   Label: LAB_00555a8c
    CMP ESI,0x2                         ; 00555a8e
    JZ 0x00555a3d                       ; 00555a91
        ;   XREF to: 00555a3d (CONDITIONAL_JUMP)  ; LAB_00555a3d
    JMP 0x00555967                      ; 00555a93
        ;   XREF to: 00555967 (UNCONDITIONAL_JUMP)  ; LAB_00555967


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_0054fdc0(CSampleInfo *this_ptr,double position,uint input_type,uint output_type)
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
;   sound_sndmain.cpp_CSfxSample_normalizePlaybackPos_FUN_0054ff30 at 0054ff4d
;   sound_sndmain.cpp_CSfxSlot_seek_FUN_0054fbe0 at 0054fc26
;   sound_sndmain.cpp_getSfxPlaybackPosition_FUN_00550c30 at 00550c80
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005e8a0f
;   TerminatedCString s_SampleInfo_cvtPlaybackPo_005e8a24
;   TerminatedCString s_sound_sndmain_cpp_005e8a84
;   TerminatedCString s_SampleInfo_cvtPlaybackPo_005e8a99
;   TerminatedCString s_sound_sndmain_cpp_005e8ad4
;   TerminatedCString s_SampleInfo_cvtPlaybackPo_005e8ae9
;   TerminatedCString s_sound_sndmain_cpp_005e8b49
;   TerminatedCString s_SampleInfo_cvtPlaybackPo_005e8b5e
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054fdc0
        ;   Label: sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_0054fdc0
    PUSH ESI                            ; 0054fdc1
    PUSH EDI                            ; 0054fdc2
    PUSH EBP                            ; 0054fdc3
    MOV EBP,ESP                         ; 0054fdc4
    SUB ESP,0x8                         ; 0054fdc6
    AND ESP,0xfffffff8                  ; 0054fdc9
    MOV EBX,dword ptr [EBP + 0x14]      ; 0054fdcc
    MOV EAX,dword ptr [EBP + 0x20]      ; 0054fdcf
    MOV ESI,dword ptr [EBP + 0x24]      ; 0054fdd2
    CMP EAX,ESI                         ; 0054fdd5
    JZ 0x0054fe19                       ; 0054fdd7
        ;   XREF to: 0054fe19 (CONDITIONAL_JUMP)  ; LAB_0054fe19
    CMP EAX,0x1                         ; 0054fdd9
    JNC 0x0054fe8e                      ; 0054fddc
        ;   XREF to: 0054fe8e (CONDITIONAL_JUMP)  ; LAB_0054fe8e
    TEST EAX,EAX                        ; 0054fde2
    JNZ 0x0054fe95                      ; 0054fde4
        ;   XREF to: 0054fe95 (CONDITIONAL_JUMP)  ; LAB_0054fe95
    CMP ESI,0x1                         ; 0054fdea
        ;   Label: LAB_0054fdea
    JNC 0x0054ff1c                      ; 0054fded
        ;   XREF to: 0054ff1c (CONDITIONAL_JUMP)  ; LAB_0054ff1c
    TEST ESI,ESI                        ; 0054fdf3
    JZ 0x0054fe19                       ; 0054fdf5
        ;   XREF to: 0054fe19 (CONDITIONAL_JUMP)  ; LAB_0054fe19
    MOV EAX,0x5e8b49                    ; 0054fdf7 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_0054fdf7
    MOV EDX,0xdd4                       ; 0054fdfc
    PUSH 0x5e8b5e                       ; 0054fe01 | = "SampleInfo::cvtPlaybackPos - Invalid ..."
    MOV [0x01d046a0],EAX                ; 0054fe06 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 0054fe0b | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0054fe11
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0054fe16
    MOV EAX,dword ptr [EBP + 0x18]      ; 0054fe19
        ;   Label: LAB_0054fe19
    MOV dword ptr [ESP],EAX             ; 0054fe1c
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0054fe1f
    MOV dword ptr [ESP + 0x4],EAX       ; 0054fe22
    MOV EAX,dword ptr [ESP]             ; 0054fe26
    MOV EDX,dword ptr [ESP + 0x4]       ; 0054fe29
    MOV ESP,EBP                         ; 0054fe2d
    POP EBP                             ; 0054fe2f
    POP EDI                             ; 0054fe30
    POP ESI                             ; 0054fe31
    POP EBX                             ; 0054fe32
    RET                                 ; 0054fe33
    FILD dword ptr [EBX + 0x10c]        ; 0054fe34
        ;   Label: LAB_0054fe34
    FMUL double ptr [EBP + 0x18]        ; 0054fe3a
    FSTP double ptr [EBP + 0x18]        ; 0054fe3d
    JMP 0x0054fdea                      ; 0054fe40
        ;   XREF to: 0054fdea (UNCONDITIONAL_JUMP)  ; LAB_0054fdea
    CMP dword ptr [EBX + 0x110],0x0     ; 0054fe42
        ;   Label: LAB_0054fe42
    JLE 0x0054fe59                      ; 0054fe49
        ;   XREF to: 0054fe59 (CONDITIONAL_JUMP)  ; LAB_0054fe59
    FILD dword ptr [EBX + 0x110]        ; 0054fe4b
    FMUL double ptr [EBP + 0x18]        ; 0054fe51
    FSTP double ptr [EBP + 0x18]        ; 0054fe54
    JMP 0x0054fdea                      ; 0054fe57
        ;   XREF to: 0054fdea (UNCONDITIONAL_JUMP)  ; LAB_0054fdea
    PUSH EBX                            ; 0054fe59
        ;   Label: LAB_0054fe59
    MOV ECX,0x5e8a0f                    ; 0054fe5a | = "..\\sound\\sndmain.cpp"
    MOV EDI,0xdbc                       ; 0054fe5f
    PUSH 0x5e8a24                       ; 0054fe64 | = "SampleInfo::cvtPlaybackPos - can't us..."
    MOV dword ptr [0x01d046a0],ECX      ; 0054fe69 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 0054fe6f | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0054fe75
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 0054fe7a
    FILD dword ptr [EBX + 0x110]        ; 0054fe7d
    FMUL double ptr [EBP + 0x18]        ; 0054fe83
    FSTP double ptr [EBP + 0x18]        ; 0054fe86
    JMP 0x0054fdea                      ; 0054fe89
        ;   XREF to: 0054fdea (UNCONDITIONAL_JUMP)  ; LAB_0054fdea
    JBE 0x0054fe34                      ; 0054fe8e
        ;   XREF to: 0054fe34 (CONDITIONAL_JUMP)  ; LAB_0054fe34
        ;   Label: LAB_0054fe8e
    CMP EAX,0x2                         ; 0054fe90
    JZ 0x0054fe42                       ; 0054fe93
        ;   XREF to: 0054fe42 (CONDITIONAL_JUMP)  ; LAB_0054fe42
    MOV EAX,0x5e8a84                    ; 0054fe95 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_0054fe95
    MOV EDX,0xdc1                       ; 0054fe9a
    PUSH 0x5e8a99                       ; 0054fe9f | = "SampleInfo::cvtPlaybackPos - Invalid ..."
    MOV [0x01d046a0],EAX                ; 0054fea4 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 0054fea9 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0054feaf
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0054feb4
    JMP 0x0054fdea                      ; 0054feb7
        ;   XREF to: 0054fdea (UNCONDITIONAL_JUMP)  ; LAB_0054fdea
    FILD dword ptr [EBX + 0x10c]        ; 0054febc
        ;   Label: LAB_0054febc
    FDIVR double ptr [EBP + 0x18]       ; 0054fec2
    FSTP double ptr [EBP + 0x18]        ; 0054fec5
    JMP 0x0054fe19                      ; 0054fec8
        ;   XREF to: 0054fe19 (UNCONDITIONAL_JUMP)  ; LAB_0054fe19
    CMP dword ptr [EBX + 0x110],0x0     ; 0054fecd
        ;   Label: LAB_0054fecd
    JLE 0x0054fee7                      ; 0054fed4
        ;   XREF to: 0054fee7 (CONDITIONAL_JUMP)  ; LAB_0054fee7
    FILD dword ptr [EBX + 0x110]        ; 0054fed6
    FDIVR double ptr [EBP + 0x18]       ; 0054fedc
    FSTP double ptr [EBP + 0x18]        ; 0054fedf
    JMP 0x0054fe19                      ; 0054fee2
        ;   XREF to: 0054fe19 (UNCONDITIONAL_JUMP)  ; LAB_0054fe19
    PUSH EBX                            ; 0054fee7
        ;   Label: LAB_0054fee7
    MOV ESI,0x5e8ad4                    ; 0054fee8 | = "..\\sound\\sndmain.cpp"
    MOV EDI,0xdcf                       ; 0054feed
    PUSH 0x5e8ae9                       ; 0054fef2 | = "SampleInfo::cvtPlaybackPos - can't us..."
    MOV dword ptr [0x01d046a0],ESI      ; 0054fef7 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 0054fefd | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0054ff03
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 0054ff08
    FILD dword ptr [EBX + 0x110]        ; 0054ff0b
    FDIVR double ptr [EBP + 0x18]       ; 0054ff11
    FSTP double ptr [EBP + 0x18]        ; 0054ff14
    JMP 0x0054fe19                      ; 0054ff17
        ;   XREF to: 0054fe19 (UNCONDITIONAL_JUMP)  ; LAB_0054fe19
    JBE 0x0054febc                      ; 0054ff1c
        ;   XREF to: 0054febc (CONDITIONAL_JUMP)  ; LAB_0054febc
        ;   Label: LAB_0054ff1c
    CMP ESI,0x2                         ; 0054ff1e
    JZ 0x0054fecd                       ; 0054ff21
        ;   XREF to: 0054fecd (CONDITIONAL_JUMP)  ; LAB_0054fecd
    JMP 0x0054fdf7                      ; 0054ff23
        ;   XREF to: 0054fdf7 (UNCONDITIONAL_JUMP)  ; LAB_0054fdf7


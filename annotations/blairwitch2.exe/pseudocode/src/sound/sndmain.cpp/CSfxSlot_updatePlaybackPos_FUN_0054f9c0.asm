; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_CSfxSlot_updatePlaybackPos_FUN_0054f9c0(CSfxSlot *this_ptr,double hardware_playback_pos)
;
; Parameters:
; CSfxSlot *       Stack[0x4]:4   this_ptr
; double           Stack[0x8]:8   hardware_playback_pos
; Local Variables:
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[2]:
;   sound_sndmain.cpp_CSfxSlot_mix_FUN_0054edb0 at 0054f1c8
;   sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_0054f930 at 0054f9a5
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005e88eb
;   TerminatedCString s_SfxSlot_updatePlaybackPo_005e8900
;   TerminatedCString s_sound_sndmain_cpp_005e892a
;   TerminatedCString s_SfxSlot_updatePlaybackPo_005e893f
;   TerminatedCString s_sound_sndmain_cpp_005e8974
;   TerminatedCString s_SfxSlot_updatePlaybackPo_005e8989
;   undefined4 DAT_005e89d6
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_math.c_floor_FUN_005b84d0
;   sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_00550010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054f9c0
        ;   Label: sound_sndmain.cpp_CSfxSlot_updatePlaybackPos_FUN_0054f9c0
    PUSH ESI                            ; 0054f9c1
    PUSH EDI                            ; 0054f9c2
    PUSH EBP                            ; 0054f9c3
    MOV EBP,ESP                         ; 0054f9c4
    SUB ESP,0x18                        ; 0054f9c6
    AND ESP,0xfffffff8                  ; 0054f9c9
    MOV EBX,dword ptr [EBP + 0x14]      ; 0054f9cc
    CMP dword ptr [EBX + 0x68],0x0      ; 0054f9cf
    JZ 0x0054faf6                       ; 0054f9d3
        ;   XREF to: 0054faf6 (CONDITIONAL_JUMP)  ; LAB_0054faf6
    FLDZ                                ; 0054f9d9
        ;   Label: LAB_0054f9d9
    FCOMP double ptr [EBP + 0x18]       ; 0054f9db
    FNSTSW AX                           ; 0054f9de
    SAHF                                ; 0054f9e0
    JBE 0x0054fb1e                      ; 0054f9e1
        ;   XREF to: 0054fb1e (CONDITIONAL_JUMP)  ; LAB_0054fb1e
    MOV EDI,0x5e892a                    ; 0054f9e7 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_0054f9e7
    MOV EAX,0xd3a                       ; 0054f9ec
    PUSH 0x5e893f                       ; 0054f9f1 | = "SfxSlot::updatePlaybackPos - invalid ..."
    MOV dword ptr [0x01d046a0],EDI      ; 0054f9f6 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 0054f9fc | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0054fa01
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0054fa06
    FLD double ptr [EBP + 0x18]         ; 0054fa09
        ;   Label: LAB_0054fa09
    FSUB double ptr [EBX + 0x10c]       ; 0054fa0c
    FLDZ                                ; 0054fa12
    FXCH                                ; 0054fa14
    FSTP double ptr [ESP]               ; 0054fa16
    FCOMP double ptr [ESP]              ; 0054fa19
    FNSTSW AX                           ; 0054fa1c
    SAHF                                ; 0054fa1e
    JBE 0x0054fa30                      ; 0054fa1f
        ;   XREF to: 0054fa30 (CONDITIONAL_JUMP)  ; LAB_0054fa30
    MOV EAX,dword ptr [EBX + 0x68]      ; 0054fa21
    FILD dword ptr [EAX + 0x164]        ; 0054fa24
    FADD double ptr [ESP]               ; 0054fa2a
    FSTP double ptr [ESP]               ; 0054fa2d
    FLDZ                                ; 0054fa30
        ;   Label: LAB_0054fa30
    FCOMP double ptr [ESP]              ; 0054fa32
    FNSTSW AX                           ; 0054fa35
    SAHF                                ; 0054fa37
    JBE 0x0054fb38                      ; 0054fa38
        ;   XREF to: 0054fb38 (CONDITIONAL_JUMP)  ; LAB_0054fb38
    MOV ESI,dword ptr [EBX + 0x68]      ; 0054fa3e
        ;   Label: LAB_0054fa3e
    PUSH ESI                            ; 0054fa41
    MOV EDI,dword ptr [ESI + 0x164]     ; 0054fa42
    MOV EDX,0x5e8974                    ; 0054fa48 | = "..\\sound\\sndmain.cpp"
    PUSH EDI                            ; 0054fa4d
    MOV EAX,dword ptr [ESP + 0xc]       ; 0054fa4e
    MOV dword ptr [0x01d046a0],EDX      ; 0054fa52 | DAT_01d046a0
    PUSH EAX                            ; 0054fa58
    MOV EDX,dword ptr [ESP + 0xc]       ; 0054fa59
    MOV ECX,0xd48                       ; 0054fa5d
    PUSH EDX                            ; 0054fa62
    MOV dword ptr [0x01d046a4],ECX      ; 0054fa63 | DAT_01d046a4
    MOV ECX,dword ptr [EBX + 0x110]     ; 0054fa69
    PUSH ECX                            ; 0054fa6f
    MOV ESI,dword ptr [EBX + 0x10c]     ; 0054fa70
    PUSH ESI                            ; 0054fa76
    MOV EDI,dword ptr [EBP + 0x1c]      ; 0054fa77
    PUSH EDI                            ; 0054fa7a
    MOV EAX,dword ptr [EBP + 0x18]      ; 0054fa7b
    PUSH EAX                            ; 0054fa7e
    PUSH 0x5e8989                       ; 0054fa7f | = "SfxSlot::updatePlaybackPos - stepped ..."
    CALL core_main.c_FUN_004e4500       ; 0054fa84
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x24                        ; 0054fa89
    FLD double ptr [EBX + 0x50]         ; 0054fa8c
        ;   Label: LAB_0054fa8c
    FCOMP double ptr [EBX + 0x10c]      ; 0054fa8f
    FNSTSW AX                           ; 0054fa95
    SAHF                                ; 0054fa97
    JZ 0x0054fb58                       ; 0054fa98
        ;   XREF to: 0054fb58 (CONDITIONAL_JUMP)  ; LAB_0054fb58
    FLD double ptr [EBX + 0x50]         ; 0054fa9e
        ;   Label: LAB_0054fa9e
    FADD double ptr [ESP]               ; 0054faa1
    FSTP double ptr [EBX + 0x50]        ; 0054faa4
    FLDZ                                ; 0054faa7
        ;   Label: LAB_0054faa7
    FCOMP double ptr [EBX + 0x50]       ; 0054faa9
    FNSTSW AX                           ; 0054faac
    SAHF                                ; 0054faae
    JBE 0x0054fabf                      ; 0054faaf
        ;   XREF to: 0054fabf (CONDITIONAL_JUMP)  ; LAB_0054fabf
    MOV dword ptr [EBX + 0x50],0x0      ; 0054fab1
    MOV dword ptr [EBX + 0x54],0x0      ; 0054fab8
    MOV EDX,dword ptr [EBX + 0x68]      ; 0054fabf
        ;   Label: LAB_0054fabf
    CMP dword ptr [EDX + 0x110],0x0     ; 0054fac2
    JL 0x0054fadd                       ; 0054fac9
        ;   XREF to: 0054fadd (CONDITIONAL_JUMP)  ; LAB_0054fadd
    FILD dword ptr [EDX + 0x110]        ; 0054facb
    FCOMP double ptr [EBX + 0x50]       ; 0054fad1
    FNSTSW AX                           ; 0054fad4
    SAHF                                ; 0054fad6
    JBE 0x0054fb78                      ; 0054fad7
        ;   XREF to: 0054fb78 (CONDITIONAL_JUMP)  ; LAB_0054fb78
    MOV EAX,dword ptr [EBP + 0x18]      ; 0054fadd
        ;   Label: LAB_0054fadd
    MOV dword ptr [EBX + 0x10c],EAX     ; 0054fae0
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0054fae6
    MOV dword ptr [EBX + 0x110],EAX     ; 0054fae9
    MOV ESP,EBP                         ; 0054faef
    POP EBP                             ; 0054faf1
    POP EDI                             ; 0054faf2
    POP ESI                             ; 0054faf3
    POP EBX                             ; 0054faf4
    RET                                 ; 0054faf5
    MOV ECX,0x5e88eb                    ; 0054faf6 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_0054faf6
    MOV ESI,0xd34                       ; 0054fafb
    PUSH 0x5e8900                       ; 0054fb00 | = "SfxSlot::updatePlaybackPos - no sampl..."
    MOV dword ptr [0x01d046a0],ECX      ; 0054fb05 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0054fb0b | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0054fb11
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0054fb16
    JMP 0x0054f9d9                      ; 0054fb19
        ;   XREF to: 0054f9d9 (UNCONDITIONAL_JUMP)  ; LAB_0054f9d9
    MOV EAX,dword ptr [EBX + 0x68]      ; 0054fb1e
        ;   Label: LAB_0054fb1e
    FILD dword ptr [EAX + 0x164]        ; 0054fb21
    FCOMP double ptr [EBP + 0x18]       ; 0054fb27
    FNSTSW AX                           ; 0054fb2a
    SAHF                                ; 0054fb2c
    JC 0x0054f9e7                       ; 0054fb2d
        ;   XREF to: 0054f9e7 (CONDITIONAL_JUMP)  ; LAB_0054f9e7
    JMP 0x0054fa09                      ; 0054fb33
        ;   XREF to: 0054fa09 (UNCONDITIONAL_JUMP)  ; LAB_0054fa09
    MOV EAX,dword ptr [EBX + 0x68]      ; 0054fb38
        ;   Label: LAB_0054fb38
    FILD dword ptr [EAX + 0x164]        ; 0054fb3b
    FADD double ptr [0x005e89d6]        ; 0054fb41 | DAT_005e89d6
    FCOMP double ptr [ESP]              ; 0054fb47
    FNSTSW AX                           ; 0054fb4a
    SAHF                                ; 0054fb4c
    JC 0x0054fa3e                       ; 0054fb4d
        ;   XREF to: 0054fa3e (CONDITIONAL_JUMP)  ; LAB_0054fa3e
    JMP 0x0054fa8c                      ; 0054fb53
        ;   XREF to: 0054fa8c (UNCONDITIONAL_JUMP)  ; LAB_0054fa8c
    FLD double ptr [EBP + 0x18]         ; 0054fb58
        ;   Label: LAB_0054fb58
    FCOMP double ptr [EBX + 0x50]       ; 0054fb5b
    FNSTSW AX                           ; 0054fb5e
    SAHF                                ; 0054fb60
    JC 0x0054fa9e                       ; 0054fb61
        ;   XREF to: 0054fa9e (CONDITIONAL_JUMP)  ; LAB_0054fa9e
    MOV EAX,dword ptr [EBP + 0x18]      ; 0054fb67
    MOV dword ptr [EBX + 0x50],EAX      ; 0054fb6a
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0054fb6d
    MOV dword ptr [EBX + 0x54],EAX      ; 0054fb70
    JMP 0x0054faa7                      ; 0054fb73
        ;   XREF to: 0054faa7 (UNCONDITIONAL_JUMP)  ; LAB_0054faa7
    PUSH EDX                            ; 0054fb78
        ;   Label: LAB_0054fb78
    CALL sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_00550010 ; 0054fb79
        ;   XREF to: 00550010 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_00550010(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 0054fb7e
    TEST EAX,EAX                        ; 0054fb81
    JNZ 0x0054fb96                      ; 0054fb83
        ;   XREF to: 0054fb96 (CONDITIONAL_JUMP)  ; LAB_0054fb96
    MOV EAX,dword ptr [EBX + 0x68]      ; 0054fb85
    FILD dword ptr [EAX + 0x110]        ; 0054fb88
    FSTP double ptr [EBX + 0x50]        ; 0054fb8e
    JMP 0x0054fadd                      ; 0054fb91
        ;   XREF to: 0054fadd (UNCONDITIONAL_JUMP)  ; LAB_0054fadd
    MOV EAX,dword ptr [EBX + 0x68]      ; 0054fb96
        ;   Label: LAB_0054fb96
    FLD double ptr [EBX + 0x50]         ; 0054fb99
    FILD dword ptr [EAX + 0x110]        ; 0054fb9c
    FSTP double ptr [ESP + 0x10]        ; 0054fba2
    FDIV double ptr [ESP + 0x10]        ; 0054fba6
    SUB ESP,0x8                         ; 0054fbaa
    FSTP double ptr [ESP]               ; 0054fbad
    CALL crt_math.c_floor_FUN_005b84d0  ; 0054fbb0
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005b84d0(double input_value)
    MOV dword ptr [ESP + 0x10],EAX      ; 0054fbb5
    MOV dword ptr [ESP + 0x14],EDX      ; 0054fbb9
    FLD double ptr [ESP + 0x10]         ; 0054fbbd
    ADD ESP,0x8                         ; 0054fbc1
    FMUL double ptr [ESP + 0x10]        ; 0054fbc4
    FSUBR double ptr [EBX + 0x50]       ; 0054fbc8
    FSTP double ptr [EBX + 0x50]        ; 0054fbcb
    JMP 0x0054fadd                      ; 0054fbce
        ;   XREF to: 0054fadd (UNCONDITIONAL_JUMP)  ; LAB_0054fadd


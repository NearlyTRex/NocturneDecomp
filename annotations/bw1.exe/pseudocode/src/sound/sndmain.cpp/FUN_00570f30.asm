; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00570f30(int param_1,float param_2)
;
; Local Variables:
; undefined8       Stack[-0x58]:8  local_58
; undefined8       Stack[-0x50]:8  local_50
; undefined8       Stack[-0x48]:8  local_48
; undefined8       Stack[-0x40]:8  local_40
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[5]:
;   FUN_0056f6d0 at 0056f7f2
;   FUN_00572d20 at 00572f5f
;   FUN_00575db0 at 00575f15
;   FUN_00576c20 at 00576dea
;   FUN_00576f40 at 00576f9f
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005f37e7
;   TerminatedCString s_SfxSlot_compute_must_be_005f37fc
;   TerminatedCString s_SFXDBG_sample_s_005f381f
;   TerminatedCString s_Killing_s_in_compute_005f3834
;   TerminatedCString s_auto_computing_delay_005f384d
;   TerminatedCString s_delayRemaining_7_2fs_005f3868
;   TerminatedCString s_freq_5_2f_005f3883
;   TerminatedCString s_distToEar_7_2fs_005f3893
;   TerminatedCString s_doppler_5_2f_005f38a9
;   TerminatedCString s_doppler_clamped_5_2f_005f38bc
;   TerminatedCString s_non_spatialized_005f38d9
;   TerminatedCString s_vol_5_2f_005f38ec
;   TerminatedCString s_channelVol_d_5_2f_005f38fb
;   TerminatedCString s_effFreq_5_2f_005f3915
;   undefined4 DAT_00605af4
;   ... and 15 more
;
; Called Functions:
;   FUN_00445430
;   FUN_005030e0
;   FUN_0056f1e0
;   FUN_00570a40
;   FUN_00570bd0
;   FUN_00570c40
;   FUN_00570d50
;   FUN_00570e90
;   FUN_00571d70
;   FUN_00574080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570f30
        ;   Label: FUN_00570f30
    PUSH ESI                            ; 00570f31
    PUSH EDI                            ; 00570f32
    PUSH EBP                            ; 00570f33
    MOV EBP,ESP                         ; 00570f34
    SUB ESP,0x3c                        ; 00570f36
    AND ESP,0xfffffff8                  ; 00570f39
    MOV EBX,dword ptr [EBP + 0x14]      ; 00570f3c
    CMP dword ptr [0x02c807ec],0x0      ; 00570f3f | DAT_02c807ec
    JLE 0x005711c9                      ; 00570f46
        ;   XREF to: 005711c9 (CONDITIONAL_JUMP)  ; LAB_005711c9
    MOV EDI,dword ptr [EBX + 0x68]      ; 00570f4c
        ;   Label: LAB_00570f4c
    TEST EDI,EDI                        ; 00570f4f
    JZ 0x005711f1                       ; 00570f51
        ;   XREF to: 005711f1 (CONDITIONAL_JUMP)  ; LAB_005711f1
    CMP dword ptr [EBX + 0x108],0x1     ; 00570f57
    JNZ 0x00570f75                      ; 00570f5e
        ;   XREF to: 00570f75 (CONDITIONAL_JUMP)  ; LAB_00570f75
    PUSH EDI                            ; 00570f60
    PUSH 0x5f381f                       ; 00570f61 | = "SFXDBG: sample = %s\n"
    MOV ECX,dword ptr [0x00611100]      ; 00570f66 | PTR_DAT_00611100
    PUSH ECX                            ; 00570f6c | DAT_007db5f0
    CALL FUN_00445430                   ; 00570f6d
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined FUN_00445430()
    ADD ESP,0xc                         ; 00570f72
    CMP dword ptr [EBX + 0x64],0x0      ; 00570f75
        ;   Label: LAB_00570f75
    JZ 0x005711fa                       ; 00570f79
        ;   XREF to: 005711fa (CONDITIONAL_JUMP)  ; LAB_005711fa
    FLDZ                                ; 00570f7f
    FCOMP double ptr [EBX + 0x50]       ; 00570f81
    FNSTSW AX                           ; 00570f84
    SAHF                                ; 00570f86
    JA 0x005711fa                       ; 00570f87
        ;   XREF to: 005711fa (CONDITIONAL_JUMP)  ; LAB_005711fa
    FLDZ                                ; 00570f8d
    FCOMP float ptr [EBP + 0x18]        ; 00570f8f
    FNSTSW AX                           ; 00570f92
    SAHF                                ; 00570f94
    JNC 0x00570fe9                      ; 00570f95
        ;   XREF to: 00570fe9 (CONDITIONAL_JUMP)  ; LAB_00570fe9
    FLDZ                                ; 00570f97
    FCOMP float ptr [EBX + 0x100]       ; 00570f99
    FNSTSW AX                           ; 00570f9f
    SAHF                                ; 00570fa1
    JA 0x00570fe9                       ; 00570fa2
        ;   XREF to: 00570fe9 (CONDITIONAL_JUMP)  ; LAB_00570fe9
    FLD float ptr [EBX + 0x100]         ; 00570fa4
    FCOMP float ptr [EBP + 0x18]        ; 00570faa
    FNSTSW AX                           ; 00570fad
    SAHF                                ; 00570faf
    JBE 0x00571224                      ; 00570fb0
        ;   XREF to: 00571224 (CONDITIONAL_JUMP)  ; LAB_00571224
    FLD float ptr [EBX + 0xfc]          ; 00570fb6
    FSUB float ptr [EBX + 0x38]         ; 00570fbc
    FLD float ptr [EBP + 0x18]          ; 00570fbf
    FLD ST0                             ; 00570fc2
    FDIV float ptr [EBX + 0x100]        ; 00570fc4
    FMULP ST2                           ; 00570fca
    FSUBR float ptr [EBX + 0x100]       ; 00570fcc
    FXCH                                ; 00570fd2
    FADD float ptr [EBX + 0x38]         ; 00570fd4
    FXCH                                ; 00570fd7
    FSTP float ptr [EBX + 0x100]        ; 00570fd9
    FSTP float ptr [EBX + 0x38]         ; 00570fdf
    OR byte ptr [EBX + 0x118],0x8       ; 00570fe2
        ;   Label: LAB_00570fe2
    PUSH EBX                            ; 00570fe9
        ;   Label: LAB_00570fe9
    CALL FUN_00570a40                   ; 00570fea
        ;   XREF to: 00570a40 (UNCONDITIONAL_CALL)  ; undefined FUN_00570a40()
    ADD ESP,0x4                         ; 00570fef
    MOV EAX,dword ptr [EBX + 0x18]      ; 00570ff2
    PUSH EAX                            ; 00570ff5
    MOV EDX,dword ptr [EBX + 0x14]      ; 00570ff6
    PUSH EDX                            ; 00570ff9
    MOV ECX,dword ptr [EBX + 0x10]      ; 00570ffa
    PUSH ECX                            ; 00570ffd
    MOV ESI,dword ptr [EBX + 0xc]       ; 00570ffe
    PUSH ESI                            ; 00571001
    MOV EDI,dword ptr [EBX + 0x8]       ; 00571002
    PUSH EDI                            ; 00571005
    MOV EAX,dword ptr [EBX + 0x4]       ; 00571006
    PUSH EAX                            ; 00571009
    CALL FUN_00574080                   ; 0057100a
        ;   XREF to: 00574080 (UNCONDITIONAL_CALL)  ; undefined FUN_00574080()
    MOV EDX,dword ptr [0x02c7fc8c]      ; 0057100f | DAT_02c7fc8c
    ADD ESP,0x18                        ; 00571015
    MOV [0x02c7fc88],EAX                ; 00571018 | DAT_02c7fc88
    TEST EDX,EDX                        ; 0057101d
    JZ 0x00571026                       ; 0057101f
        ;   XREF to: 00571026 (CONDITIONAL_JUMP)  ; LAB_00571026
    CALL FUN_0056f1e0                   ; 00571021
        ;   XREF to: 0056f1e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056f1e0()
    FLD float ptr [EBX + 0x40]          ; 00571026
        ;   Label: LAB_00571026
    FCOMP float ptr [0x00605af4]        ; 00571029 | DAT_00605af4
    FNSTSW AX                           ; 0057102f
    SAHF                                ; 00571031
    JZ 0x0057123e                       ; 00571032
        ;   XREF to: 0057123e (CONDITIONAL_JUMP)  ; LAB_0057123e
    CMP dword ptr [EBX + 0x108],0x1     ; 00571038
        ;   Label: LAB_00571038
    JNZ 0x0057105d                      ; 0057103f
        ;   XREF to: 0057105d (CONDITIONAL_JUMP)  ; LAB_0057105d
    SUB ESP,0x8                         ; 00571041
    FLD float ptr [EBX + 0x40]          ; 00571044
    FSTP double ptr [ESP]               ; 00571047
    PUSH 0x5f3868                       ; 0057104a | = "  delayRemaining = %7.2fs\n"
    MOV EAX,[0x00611100]                ; 0057104f | PTR_DAT_00611100
    PUSH EAX                            ; 00571054 | DAT_007db5f0
    CALL FUN_00445430                   ; 00571055
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined FUN_00445430()
    ADD ESP,0x10                        ; 0057105a
    FLD float ptr [EBX + 0x3c]          ; 0057105d
        ;   Label: LAB_0057105d
    MOV EDX,dword ptr [EBX + 0x108]     ; 00571060
    FSTP float ptr [EBX + 0x6c]         ; 00571066
    CMP EDX,0x1                         ; 00571069
    JNZ 0x0057108b                      ; 0057106c
        ;   XREF to: 0057108b (CONDITIONAL_JUMP)  ; LAB_0057108b
    SUB ESP,0x8                         ; 0057106e
    FLD float ptr [EBX + 0x6c]          ; 00571071
    FSTP double ptr [ESP]               ; 00571074
    PUSH 0x5f3883                       ; 00571077 | = "  freq = %5.2f\n"
    MOV ECX,dword ptr [0x00611100]      ; 0057107c | PTR_DAT_00611100
    PUSH ECX                            ; 00571082 | DAT_007db5f0
    CALL FUN_00445430                   ; 00571083
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined FUN_00445430()
    ADD ESP,0x10                        ; 00571088
    TEST byte ptr [EBX + 0x4c],0x1      ; 0057108b
        ;   Label: LAB_0057108b
    JZ 0x00571269                       ; 0057108f
        ;   XREF to: 00571269 (CONDITIONAL_JUMP)  ; LAB_00571269
    CMP dword ptr [EBX + 0x108],0x1     ; 00571095
    JNZ 0x005710b1                      ; 0057109c
        ;   XREF to: 005710b1 (CONDITIONAL_JUMP)  ; LAB_005710b1
    PUSH 0x5f38d9                       ; 0057109e | = "  non spatialized\n"
    MOV EAX,[0x00611100]                ; 005710a3 | PTR_DAT_00611100
    PUSH EAX                            ; 005710a8 | DAT_007db5f0
    CALL FUN_00445430                   ; 005710a9
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined FUN_00445430()
    ADD ESP,0x8                         ; 005710ae
    PUSH EBX                            ; 005710b1
        ;   Label: LAB_005710b1
    CALL FUN_00570bd0                   ; 005710b2
        ;   XREF to: 00570bd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00570bd0()
    ADD ESP,0x4                         ; 005710b7
    PUSH EBX                            ; 005710ba
    CALL FUN_00570c40                   ; 005710bb
        ;   XREF to: 00570c40 (UNCONDITIONAL_CALL)  ; undefined FUN_00570c40()
    MOV EDX,dword ptr [EBX + 0x108]     ; 005710c0
    ADD ESP,0x4                         ; 005710c6
    CMP EDX,0x1                         ; 005710c9
    JNZ 0x005710eb                      ; 005710cc
        ;   XREF to: 005710eb (CONDITIONAL_JUMP)  ; LAB_005710eb
    SUB ESP,0x8                         ; 005710ce
    FLD float ptr [EBX + 0x38]          ; 005710d1
    FSTP double ptr [ESP]               ; 005710d4
    PUSH 0x5f38ec                       ; 005710d7 | = "  vol = %5.2f\n"
    MOV ECX,dword ptr [0x00611100]      ; 005710dc | PTR_DAT_00611100
    PUSH ECX                            ; 005710e2 | DAT_007db5f0
    CALL FUN_00445430                   ; 005710e3
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined FUN_00445430()
    ADD ESP,0x10                        ; 005710e8
    PUSH EBX                            ; 005710eb
        ;   Label: LAB_005710eb
    CALL FUN_00570d50                   ; 005710ec
        ;   XREF to: 00570d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00570d50()
    MOV ESI,dword ptr [EBX + 0x108]     ; 005710f1
    ADD ESP,0x4                         ; 005710f7
    CMP ESI,0x1                         ; 005710fa
    JNZ 0x00571160                      ; 005710fd
        ;   XREF to: 00571160 (CONDITIONAL_JUMP)  ; LAB_00571160
    MOV EDI,dword ptr [0x006232ec]      ; 005710ff | DAT_006232ec
    XOR ESI,ESI                         ; 00571105
    TEST EDI,EDI                        ; 00571107
    JLE 0x00571160                      ; 00571109
        ;   XREF to: 00571160 (CONDITIONAL_JUMP)  ; LAB_00571160
    MOV EDI,EBX                         ; 0057110b
    MOV ECX,dword ptr [EBX + 0x68]      ; 0057110d
        ;   Label: LAB_0057110d
    MOV ECX,dword ptr [ECX + 0x104]     ; 00571110
    MOV EAX,0x1                         ; 00571116
    DEC ECX                             ; 0057111b
    SHL EAX,CL                          ; 0057111c
    MOV dword ptr [ESP + 0x38],EAX      ; 0057111e
    FILD dword ptr [ESP + 0x38]         ; 00571122
    FMUL float ptr [EDI + 0x90]         ; 00571126
    SUB ESP,0x8                         ; 0057112c
    FSTP double ptr [ESP]               ; 0057112f
    PUSH ESI                            ; 00571132
    PUSH 0x5f38fb                       ; 00571133 | = "  channelVol[%d] = %5.2f\n"
    MOV ECX,dword ptr [0x00611100]      ; 00571138 | PTR_DAT_00611100
    PUSH ECX                            ; 0057113e | DAT_007db5f0
    ADD EDI,0x4                         ; 0057113f
    INC ESI                             ; 00571142
    CALL FUN_00445430                   ; 00571143
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined FUN_00445430()
    MOV EAX,[0x006232ec]                ; 00571148 | DAT_006232ec
    ADD ESP,0x14                        ; 0057114d
    CMP ESI,EAX                         ; 00571150
    JL 0x0057110d                       ; 00571152
        ;   XREF to: 0057110d (CONDITIONAL_JUMP)  ; LAB_0057110d
    LEA EAX,[EAX]                       ; 00571154
    LEA EDX,[EDX]                       ; 0057115a
    FLD1                                ; 00571160
        ;   Label: LAB_00571160
    FDIV float ptr [0x00605b00]         ; 00571162 | DAT_00605b00
    FLD float ptr [EBX + 0x6c]          ; 00571168
    FXCH                                ; 0057116b
    FSTP float ptr [ESP + 0x34]         ; 0057116d
    FCOMP float ptr [ESP + 0x34]        ; 00571171
    FNSTSW AX                           ; 00571175
    SAHF                                ; 00571177
    JNC 0x00571181                      ; 00571178
        ;   XREF to: 00571181 (CONDITIONAL_JUMP)  ; LAB_00571181
    MOV EAX,dword ptr [ESP + 0x34]      ; 0057117a
    MOV dword ptr [EBX + 0x6c],EAX      ; 0057117e
    FLD float ptr [EBX + 0x6c]          ; 00571181
        ;   Label: LAB_00571181
    FCOMP float ptr [0x00605b00]        ; 00571184 | DAT_00605b00
    FNSTSW AX                           ; 0057118a
    SAHF                                ; 0057118c
    JBE 0x00571197                      ; 0057118d
        ;   XREF to: 00571197 (CONDITIONAL_JUMP)  ; LAB_00571197
    MOV EAX,[0x00605b00]                ; 0057118f | DAT_00605b00
    MOV dword ptr [EBX + 0x6c],EAX      ; 00571194
    CMP dword ptr [EBX + 0x108],0x1     ; 00571197
        ;   Label: LAB_00571197
    JNZ 0x005711bd                      ; 0057119e
        ;   XREF to: 005711bd (CONDITIONAL_JUMP)  ; LAB_005711bd
    SUB ESP,0x8                         ; 005711a0
    FLD float ptr [EBX + 0x6c]          ; 005711a3
    FSTP double ptr [ESP]               ; 005711a6
    PUSH 0x5f3915                       ; 005711a9 | = "  effFreq = %5.2f\n"
    MOV ECX,dword ptr [0x00611100]      ; 005711ae | PTR_DAT_00611100
    PUSH ECX                            ; 005711b4 | DAT_007db5f0
    CALL FUN_00445430                   ; 005711b5
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined FUN_00445430()
    ADD ESP,0x10                        ; 005711ba
    MOV EAX,0x1                         ; 005711bd
        ;   Label: LAB_005711bd
    MOV ESP,EBP                         ; 005711c2
    POP EBP                             ; 005711c4
    POP EDI                             ; 005711c5
    POP ESI                             ; 005711c6
    POP EBX                             ; 005711c7
    RET                                 ; 005711c8
    MOV ECX,0x5f37e7                    ; 005711c9 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005711c9
    MOV ESI,0xade                       ; 005711ce
    PUSH 0x5f37fc                       ; 005711d3 | = "SfxSlot::compute - must be locked!"
    MOV dword ptr [0x01d1d400],ECX      ; 005711d8 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 005711de | DAT_01d1d404
    CALL FUN_005030e0                   ; 005711e4
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 005711e9
    JMP 0x00570f4c                      ; 005711ec
        ;   XREF to: 00570f4c (UNCONDITIONAL_JUMP)  ; LAB_00570f4c
    XOR EAX,EAX                         ; 005711f1
        ;   Label: LAB_005711f1
    MOV ESP,EBP                         ; 005711f3
    POP EBP                             ; 005711f5
    POP EDI                             ; 005711f6
    POP ESI                             ; 005711f7
    POP EBX                             ; 005711f8
    RET                                 ; 005711f9
    MOV EAX,dword ptr [EBX + 0x68]      ; 005711fa
        ;   Label: LAB_005711fa
    PUSH EAX                            ; 005711fd
    PUSH 0x5f3834                       ; 005711fe | = "Killing %s in compute()\n"
    MOV EDX,dword ptr [0x00611100]      ; 00571203 | PTR_DAT_00611100
    PUSH EDX                            ; 00571209 | DAT_007db5f0
    CALL FUN_00445430                   ; 0057120a
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined FUN_00445430()
    ADD ESP,0xc                         ; 0057120f
    PUSH EBX                            ; 00571212
        ;   Label: LAB_00571212
    CALL FUN_00571d70                   ; 00571213
        ;   XREF to: 00571d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00571d70()
    ADD ESP,0x4                         ; 00571218
    XOR EAX,EAX                         ; 0057121b
    MOV ESP,EBP                         ; 0057121d
    POP EBP                             ; 0057121f
    POP EDI                             ; 00571220
    POP ESI                             ; 00571221
    POP EBX                             ; 00571222
    RET                                 ; 00571223
    TEST dword ptr [EBX + 0x104],0x7fffffff ; 00571224
        ;   Label: LAB_00571224
    JNZ 0x00571212                      ; 0057122e
        ;   XREF to: 00571212 (CONDITIONAL_JUMP)  ; LAB_00571212
    MOV EAX,dword ptr [EBX + 0xfc]      ; 00571230
    MOV dword ptr [EBX + 0x38],EAX      ; 00571236
    JMP 0x00570fe2                      ; 00571239
        ;   XREF to: 00570fe2 (UNCONDITIONAL_JUMP)  ; LAB_00570fe2
    CMP dword ptr [EBX + 0x108],0x1     ; 0057123e
        ;   Label: LAB_0057123e
    JNZ 0x0057125b                      ; 00571245
        ;   XREF to: 0057125b (CONDITIONAL_JUMP)  ; LAB_0057125b
    PUSH 0x5f384d                       ; 00571247 | = "  auto computing delay...\n"
    MOV ESI,dword ptr [0x00611100]      ; 0057124c | PTR_DAT_00611100
    PUSH ESI                            ; 00571252 | DAT_007db5f0
    CALL FUN_00445430                   ; 00571253
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined FUN_00445430()
    ADD ESP,0x8                         ; 00571258
    PUSH EBX                            ; 0057125b
        ;   Label: LAB_0057125b
    CALL FUN_00570e90                   ; 0057125c
        ;   XREF to: 00570e90 (UNCONDITIONAL_CALL)  ; undefined FUN_00570e90()
    ADD ESP,0x4                         ; 00571261
    JMP 0x00571038                      ; 00571264
        ;   XREF to: 00571038 (UNCONDITIONAL_JUMP)  ; LAB_00571038
    FLD double ptr [EBX + 0x4]          ; 00571269
        ;   Label: LAB_00571269
    MOV EAX,[0x02c7fc88]                ; 0057126c | DAT_02c7fc88
    FLD double ptr [EBX + 0xc]          ; 00571271
    FXCH                                ; 00571274
    FSUB double ptr [EAX*0x8 + 0x2c7fbf8] ; 00571276 | DAT_02c7fbf8
    FXCH                                ; 0057127d
    FSUB double ptr [EAX*0x8 + 0x2c7fc08] ; 0057127f | DAT_02c7fc08
    FXCH                                ; 00571286
    FST double ptr [ESP]                ; 00571288
    FMUL double ptr [ESP]               ; 0057128b
    FXCH                                ; 0057128e
    FST double ptr [ESP + 0x8]          ; 00571290
    FMUL double ptr [ESP + 0x8]         ; 00571294
    FLD double ptr [EBX + 0x14]         ; 00571298
    FSUB double ptr [EAX*0x8 + 0x2c7fc18] ; 0057129b | DAT_02c7fc18
    FXCH                                ; 005712a2
    FADDP ST2,ST0                       ; 005712a4
    FST double ptr [ESP + 0x10]         ; 005712a6
    FMUL double ptr [ESP + 0x10]        ; 005712aa
    FADDP                               ; 005712ae
    FSQRT                               ; 005712b0
    MOV ESI,dword ptr [EBX + 0x108]     ; 005712b2
    FSTP float ptr [ESP + 0x20]         ; 005712b8
    CMP ESI,0x1                         ; 005712bc
    JNZ 0x005712df                      ; 005712bf
        ;   XREF to: 005712df (CONDITIONAL_JUMP)  ; LAB_005712df
    FLD float ptr [ESP + 0x20]          ; 005712c1
    SUB ESP,0x8                         ; 005712c5
    FSTP double ptr [ESP]               ; 005712c8
    PUSH 0x5f3893                       ; 005712cb | = "  distToEar = %7.2fs\n"
    MOV EDI,dword ptr [0x00611100]      ; 005712d0 | PTR_DAT_00611100
    PUSH EDI                            ; 005712d6 | DAT_007db5f0
    CALL FUN_00445430                   ; 005712d7
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined FUN_00445430()
    ADD ESP,0x10                        ; 005712dc
    MOV EAX,[0x02c7fc88]                ; 005712df | DAT_02c7fc88
        ;   Label: LAB_005712df
    FLDZ                                ; 005712e4
    FLD float ptr [EAX*0x4 + 0x2c7fc28] ; 005712e6
    FLD float ptr [EAX*0x4 + 0x2c7fc30] ; 005712ed
    FLD float ptr [EAX*0x4 + 0x2c7fc38] ; 005712f4
    FXCH ST2                            ; 005712fb
    FSUB float ptr [EBX + 0x24]         ; 005712fd
    FXCH                                ; 00571300
    FSUB float ptr [EBX + 0x28]         ; 00571302
    FXCH ST2                            ; 00571305
    FSUB float ptr [EBX + 0x2c]         ; 00571307
    FXCH                                ; 0057130a
    FSTP float ptr [ESP + 0x18]         ; 0057130c
    FXCH                                ; 00571310
    FSTP float ptr [ESP + 0x24]         ; 00571312
    FSTP float ptr [ESP + 0x1c]         ; 00571316
    FCOMP float ptr [ESP + 0x20]        ; 0057131a
    FNSTSW AX                           ; 0057131e
    SAHF                                ; 00571320
    JNC 0x005713fe                      ; 00571321
        ;   XREF to: 005713fe (CONDITIONAL_JUMP)  ; LAB_005713fe
    FLD float ptr [ESP + 0x18]          ; 00571327
    FMUL double ptr [ESP]               ; 0057132b
    FLD float ptr [ESP + 0x24]          ; 0057132e
    FMUL double ptr [ESP + 0x8]         ; 00571332
    FADDP                               ; 00571336
    FLD float ptr [ESP + 0x1c]          ; 00571338
    FMUL double ptr [ESP + 0x10]        ; 0057133c
    FADDP                               ; 00571340
    FDIV float ptr [ESP + 0x20]         ; 00571342
    FSTP float ptr [ESP + 0x30]         ; 00571346
        ;   Label: LAB_00571346
    FLD float ptr [ESP + 0x30]          ; 0057134a
    FMUL float ptr [0x00623304]         ; 0057134e | DAT_00623304
    FLD float ptr [0x00605af8]          ; 00571354 | DAT_00605af8
    FXCH                                ; 0057135a
    FADD ST0,ST1                        ; 0057135c
    FDIVRP                              ; 0057135e
    MOV EAX,dword ptr [EBX + 0x108]     ; 00571360
    FSTP float ptr [ESP + 0x28]         ; 00571366
    CMP EAX,0x1                         ; 0057136a
    JNZ 0x0057138d                      ; 0057136d
        ;   XREF to: 0057138d (CONDITIONAL_JUMP)  ; LAB_0057138d
    FLD float ptr [ESP + 0x28]          ; 0057136f
    SUB ESP,0x8                         ; 00571373
    FSTP double ptr [ESP]               ; 00571376
    PUSH 0x5f38a9                       ; 00571379 | = "  doppler = %5.2f\n"
    MOV EDX,dword ptr [0x00611100]      ; 0057137e | PTR_DAT_00611100
    PUSH EDX                            ; 00571384 | DAT_007db5f0
    CALL FUN_00445430                   ; 00571385
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined FUN_00445430()
    ADD ESP,0x10                        ; 0057138a
    FLD1                                ; 0057138d
        ;   Label: LAB_0057138d
    FDIV float ptr [0x00605afc]         ; 0057138f | DAT_00605afc
    FLD float ptr [ESP + 0x28]          ; 00571395
    FXCH                                ; 00571399
    FSTP float ptr [ESP + 0x2c]         ; 0057139b
    FCOMP float ptr [ESP + 0x2c]        ; 0057139f
    FNSTSW AX                           ; 005713a3
    SAHF                                ; 005713a5
    JNC 0x005713b0                      ; 005713a6
        ;   XREF to: 005713b0 (CONDITIONAL_JUMP)  ; LAB_005713b0
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005713a8
    MOV dword ptr [ESP + 0x28],EAX      ; 005713ac
    FLD float ptr [ESP + 0x28]          ; 005713b0
        ;   Label: LAB_005713b0
    FCOMP float ptr [0x00605afc]        ; 005713b4 | DAT_00605afc
    FNSTSW AX                           ; 005713ba
    SAHF                                ; 005713bc
    JBE 0x005713c8                      ; 005713bd
        ;   XREF to: 005713c8 (CONDITIONAL_JUMP)  ; LAB_005713c8
    MOV EAX,[0x00605afc]                ; 005713bf | DAT_00605afc
    MOV dword ptr [ESP + 0x28],EAX      ; 005713c4
    CMP dword ptr [EBX + 0x108],0x1     ; 005713c8
        ;   Label: LAB_005713c8
    JNZ 0x005713ef                      ; 005713cf
        ;   XREF to: 005713ef (CONDITIONAL_JUMP)  ; LAB_005713ef
    FLD float ptr [ESP + 0x28]          ; 005713d1
    SUB ESP,0x8                         ; 005713d5
    FSTP double ptr [ESP]               ; 005713d8
    PUSH 0x5f38bc                       ; 005713db | = "  doppler (clamped) = %5.2f\n"
    MOV ESI,dword ptr [0x00611100]      ; 005713e0 | PTR_DAT_00611100
    PUSH ESI                            ; 005713e6 | DAT_007db5f0
    CALL FUN_00445430                   ; 005713e7
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined FUN_00445430()
    ADD ESP,0x10                        ; 005713ec
    FLD float ptr [EBX + 0x6c]          ; 005713ef
        ;   Label: LAB_005713ef
    FMUL float ptr [ESP + 0x28]         ; 005713f2
    FSTP float ptr [EBX + 0x6c]         ; 005713f6
    JMP 0x005710b1                      ; 005713f9
        ;   XREF to: 005710b1 (UNCONDITIONAL_JUMP)  ; LAB_005710b1
    FLD float ptr [ESP + 0x18]          ; 005713fe
        ;   Label: LAB_005713fe
    FMUL ST0                            ; 00571402
    FLD float ptr [ESP + 0x24]          ; 00571404
    FMUL ST0                            ; 00571408
    FADDP                               ; 0057140a
    FLD float ptr [ESP + 0x1c]          ; 0057140c
    FMUL ST0                            ; 00571410
    FADDP                               ; 00571412
    FSQRT                               ; 00571414
    JMP 0x00571346                      ; 00571416
        ;   XREF to: 00571346 (UNCONDITIONAL_JUMP)  ; LAB_00571346


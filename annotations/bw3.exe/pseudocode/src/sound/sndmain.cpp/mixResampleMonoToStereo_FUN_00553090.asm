; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl sound_sndmain_cpp_mixResampleMonoToStereo_FUN_00553090(int param_1,int *param_2,float *param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8)
;
; Local Variables:
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined8       Stack[-0x34]:8  local_34
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_sndmain.cpp_FUN_00554920 at 00555186
;
; Referenced Globals:
;   undefined4 DAT_005d2b82
;
; Called Functions:
;   crt_math.c_floor_FUN_005a3600
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00553090
        ;   Label: sound_sndmain.cpp_mixResampleMonoToStereo_FUN_00553090
    PUSH ESI                            ; 00553091
    PUSH EDI                            ; 00553092
    PUSH EBP                            ; 00553093
    MOV EBP,ESP                         ; 00553094
    SUB ESP,0x2c                        ; 00553096
    CMP dword ptr [EBP + 0x30],0x1      ; 00553099
    JGE 0x005530b8                      ; 0055309d
        ;   XREF to: 005530b8 (CONDITIONAL_JUMP)  ; LAB_005530b8
    MOV EAX,dword ptr [EBP + 0x20]      ; 0055309f
        ;   Label: LAB_0055309f
    MOV dword ptr [EBP + -0x2c],EAX     ; 005530a2
    MOV EAX,dword ptr [EBP + 0x24]      ; 005530a5
    MOV dword ptr [EBP + -0x28],EAX     ; 005530a8
    MOV EAX,dword ptr [EBP + -0x2c]     ; 005530ab
    MOV EDX,dword ptr [EBP + -0x28]     ; 005530ae
    MOV ESP,EBP                         ; 005530b1
    POP EBP                             ; 005530b3
    POP EDI                             ; 005530b4
    POP ESI                             ; 005530b5
    POP EBX                             ; 005530b6
    RET                                 ; 005530b7
    MOV ECX,dword ptr [EBP + 0x24]      ; 005530b8
        ;   Label: LAB_005530b8
    PUSH ECX                            ; 005530bb
    MOV EBX,dword ptr [EBP + 0x20]      ; 005530bc
    PUSH EBX                            ; 005530bf
    CALL crt_math.c_floor_FUN_005a3600  ; 005530c0
        ;   XREF to: 005a3600 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005a3600(double input_value)
    MOV dword ptr [EBP + -0x24],EAX     ; 005530c5
    MOV dword ptr [EBP + -0x20],EDX     ; 005530c8
    ADD ESP,0x8                         ; 005530cb
    FLD double ptr [EBP + -0x24]        ; 005530ce
    CALL crt_math.c_round_FUN_005a3120  ; 005530d1
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP qword ptr [EBP + -0x24]       ; 005530d6
    MOV EAX,dword ptr [EBP + -0x24]     ; 005530d9
    MOV dword ptr [EBP + -0x18],EAX     ; 005530dc
    XOR ESI,ESI                         ; 005530df
    MOV dword ptr [EBP + -0x20],ESI     ; 005530e1
    MOV EAX,dword ptr [EBP + -0x18]     ; 005530e4
    MOV dword ptr [EBP + -0x24],EAX     ; 005530e7
    FILD qword ptr [EBP + -0x24]        ; 005530ea
    FSUBR double ptr [EBP + 0x20]       ; 005530ed
    FMUL double ptr [0x005d2b82]        ; 005530f0 | DAT_005d2b82
    CALL crt_math.c_round_FUN_005a3120  ; 005530f6
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP qword ptr [EBP + -0x24]       ; 005530fb
    MOV EAX,dword ptr [EBP + -0x24]     ; 005530fe
    MOV dword ptr [EBP + -0x14],EAX     ; 00553101
    MOV EDI,dword ptr [EBP + 0x2c]      ; 00553104
    PUSH EDI                            ; 00553107
    MOV EAX,dword ptr [EBP + 0x28]      ; 00553108
    PUSH EAX                            ; 0055310b
    CALL crt_math.c_floor_FUN_005a3600  ; 0055310c
        ;   XREF to: 005a3600 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005a3600(double input_value)
    MOV dword ptr [EBP + -0x24],EAX     ; 00553111
    MOV dword ptr [EBP + -0x20],EDX     ; 00553114
    ADD ESP,0x8                         ; 00553117
    FLD double ptr [EBP + -0x24]        ; 0055311a
    CALL crt_math.c_round_FUN_005a3120  ; 0055311d
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP qword ptr [EBP + -0x24]       ; 00553122
    MOV EAX,dword ptr [EBP + -0x24]     ; 00553125
    MOV dword ptr [EBP + -0x10],EAX     ; 00553128
    MOV dword ptr [EBP + -0x20],ESI     ; 0055312b
    MOV EAX,dword ptr [EBP + -0x10]     ; 0055312e
    MOV dword ptr [EBP + -0x24],EAX     ; 00553131
    FILD qword ptr [EBP + -0x24]        ; 00553134
    FSUBR double ptr [EBP + 0x28]       ; 00553137
    FMUL double ptr [0x005d2b82]        ; 0055313a | DAT_005d2b82
    CALL crt_math.c_round_FUN_005a3120  ; 00553140
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP qword ptr [EBP + -0x24]       ; 00553145
    MOV EAX,dword ptr [EBP + -0x24]     ; 00553148
    MOV dword ptr [EBP + -0x1c],EAX     ; 0055314b
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0055314e
    MOV EAX,dword ptr [EAX]             ; 00553151
    MOV dword ptr [EBP + -0x4],EAX      ; 00553153
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00553156
    MOV EAX,dword ptr [EAX + 0x4]       ; 00553159
    MOV dword ptr [EBP + -0xc],EAX      ; 0055315c
    PUSHAD                              ; 0055315f
    MOV EDI,dword ptr [EBP + 0x18]      ; 00553160
    MOV EDX,dword ptr [EDI + 0x4]       ; 00553166
    MOV EDI,dword ptr [EDI]             ; 00553169
    MOV ESI,dword ptr [EBP + 0xffffffe8] ; 0055316b
    MOV EAX,dword ptr [EBP + 0xffffffec] ; 00553171
    MOV EBX,dword ptr [EBP + 0x14]      ; 00553177
    XOR ECX,ECX                         ; 0055317d
    FILD word ptr [EBX + ESI*0x2]       ; 0055317f
        ;   Label: LAB_0055317f
    FILD word ptr [EBX + ESI*0x2]       ; 00553182
    ADD EAX,dword ptr [EBP + 0xffffffe4] ; 00553185
    ADC ESI,dword ptr [EBP + 0xfffffff0] ; 0055318b
    FMUL float ptr [EBP + 0xfffffffc]   ; 00553191
    FADD float ptr [EDI + ECX*0x4]      ; 00553197
    FSTP float ptr [EDI + ECX*0x4]      ; 0055319a
    FMUL float ptr [EBP + 0xfffffff4]   ; 0055319d
    FADD float ptr [EDX + ECX*0x4]      ; 005531a3
    FSTP float ptr [EDX + ECX*0x4]      ; 005531a6
    INC ECX                             ; 005531a9
    CMP ECX,dword ptr [EBP + 0x30]      ; 005531aa
    JL 0x0055317f                       ; 005531b0
        ;   XREF to: 0055317f (CONDITIONAL_JUMP)  ; LAB_0055317f
    POPAD                               ; 005531b2
    MOV EAX,dword ptr [EBP + 0x30]      ; 005531b3
    MOV dword ptr [EBP + -0x8],EAX      ; 005531b6
    FILD dword ptr [EBP + -0x8]         ; 005531b9
    FMUL double ptr [EBP + 0x28]        ; 005531bc
    FADD double ptr [EBP + 0x20]        ; 005531bf
    FSTP double ptr [EBP + 0x20]        ; 005531c2
    JMP 0x0055309f                      ; 005531c5
        ;   XREF to: 0055309f (UNCONDITIONAL_JUMP)  ; LAB_0055309f


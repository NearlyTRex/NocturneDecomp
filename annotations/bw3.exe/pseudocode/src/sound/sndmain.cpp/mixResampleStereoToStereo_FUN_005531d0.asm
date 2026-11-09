; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl sound_sndmain_cpp_mixResampleStereoToStereo_FUN_005531d0(int param_1,int *param_2,float *param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8)
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
;   sound_sndmain.cpp_FUN_00554920 at 005550a2
;
; Referenced Globals:
;   undefined4 DAT_005d2b8a
;
; Called Functions:
;   crt_math.c_floor_FUN_005a3600
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005531d0
        ;   Label: sound_sndmain.cpp_mixResampleStereoToStereo_FUN_005531d0
    PUSH ESI                            ; 005531d1
    PUSH EDI                            ; 005531d2
    PUSH EBP                            ; 005531d3
    MOV EBP,ESP                         ; 005531d4
    SUB ESP,0x2c                        ; 005531d6
    CMP dword ptr [EBP + 0x30],0x1      ; 005531d9
    JGE 0x005531f8                      ; 005531dd
        ;   XREF to: 005531f8 (CONDITIONAL_JUMP)  ; LAB_005531f8
    MOV EAX,dword ptr [EBP + 0x20]      ; 005531df
        ;   Label: LAB_005531df
    MOV dword ptr [EBP + -0x2c],EAX     ; 005531e2
    MOV EAX,dword ptr [EBP + 0x24]      ; 005531e5
    MOV dword ptr [EBP + -0x28],EAX     ; 005531e8
    MOV EAX,dword ptr [EBP + -0x2c]     ; 005531eb
    MOV EDX,dword ptr [EBP + -0x28]     ; 005531ee
    MOV ESP,EBP                         ; 005531f1
    POP EBP                             ; 005531f3
    POP EDI                             ; 005531f4
    POP ESI                             ; 005531f5
    POP EBX                             ; 005531f6
    RET                                 ; 005531f7
    MOV ECX,dword ptr [EBP + 0x24]      ; 005531f8
        ;   Label: LAB_005531f8
    PUSH ECX                            ; 005531fb
    MOV EBX,dword ptr [EBP + 0x20]      ; 005531fc
    PUSH EBX                            ; 005531ff
    CALL crt_math.c_floor_FUN_005a3600  ; 00553200
        ;   XREF to: 005a3600 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005a3600(double input_value)
    MOV dword ptr [EBP + -0x24],EAX     ; 00553205
    MOV dword ptr [EBP + -0x20],EDX     ; 00553208
    ADD ESP,0x8                         ; 0055320b
    FLD double ptr [EBP + -0x24]        ; 0055320e
    CALL crt_math.c_round_FUN_005a3120  ; 00553211
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP qword ptr [EBP + -0x24]       ; 00553216
    MOV EAX,dword ptr [EBP + -0x24]     ; 00553219
    MOV dword ptr [EBP + -0x18],EAX     ; 0055321c
    XOR ESI,ESI                         ; 0055321f
    MOV dword ptr [EBP + -0x20],ESI     ; 00553221
    MOV EAX,dword ptr [EBP + -0x18]     ; 00553224
    MOV dword ptr [EBP + -0x24],EAX     ; 00553227
    FILD qword ptr [EBP + -0x24]        ; 0055322a
    FSUBR double ptr [EBP + 0x20]       ; 0055322d
    FMUL double ptr [0x005d2b8a]        ; 00553230 | DAT_005d2b8a
    CALL crt_math.c_round_FUN_005a3120  ; 00553236
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP qword ptr [EBP + -0x24]       ; 0055323b
    MOV EAX,dword ptr [EBP + -0x24]     ; 0055323e
    MOV dword ptr [EBP + -0x14],EAX     ; 00553241
    MOV EDI,dword ptr [EBP + 0x2c]      ; 00553244
    PUSH EDI                            ; 00553247
    MOV EAX,dword ptr [EBP + 0x28]      ; 00553248
    PUSH EAX                            ; 0055324b
    CALL crt_math.c_floor_FUN_005a3600  ; 0055324c
        ;   XREF to: 005a3600 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005a3600(double input_value)
    MOV dword ptr [EBP + -0x24],EAX     ; 00553251
    MOV dword ptr [EBP + -0x20],EDX     ; 00553254
    ADD ESP,0x8                         ; 00553257
    FLD double ptr [EBP + -0x24]        ; 0055325a
    CALL crt_math.c_round_FUN_005a3120  ; 0055325d
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP qword ptr [EBP + -0x24]       ; 00553262
    MOV EAX,dword ptr [EBP + -0x24]     ; 00553265
    MOV dword ptr [EBP + -0x10],EAX     ; 00553268
    MOV dword ptr [EBP + -0x20],ESI     ; 0055326b
    MOV EAX,dword ptr [EBP + -0x10]     ; 0055326e
    MOV dword ptr [EBP + -0x24],EAX     ; 00553271
    FILD qword ptr [EBP + -0x24]        ; 00553274
    FSUBR double ptr [EBP + 0x28]       ; 00553277
    FMUL double ptr [0x005d2b8a]        ; 0055327a | DAT_005d2b8a
    CALL crt_math.c_round_FUN_005a3120  ; 00553280
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP qword ptr [EBP + -0x24]       ; 00553285
    MOV EAX,dword ptr [EBP + -0x24]     ; 00553288
    MOV dword ptr [EBP + -0x1c],EAX     ; 0055328b
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0055328e
    MOV EAX,dword ptr [EAX]             ; 00553291
    MOV dword ptr [EBP + -0x4],EAX      ; 00553293
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00553296
    MOV EAX,dword ptr [EAX + 0x4]       ; 00553299
    MOV dword ptr [EBP + -0xc],EAX      ; 0055329c
    PUSHAD                              ; 0055329f
    MOV EDI,dword ptr [EBP + 0x18]      ; 005532a0
    MOV EDX,dword ptr [EDI + 0x4]       ; 005532a6
    MOV EDI,dword ptr [EDI]             ; 005532a9
    MOV ESI,dword ptr [EBP + 0xffffffe8] ; 005532ab
    MOV EAX,dword ptr [EBP + 0xffffffec] ; 005532b1
    MOV EBX,dword ptr [EBP + 0x14]      ; 005532b7
    XOR ECX,ECX                         ; 005532bd
    FILD word ptr [EBX + ESI*0x4]       ; 005532bf
        ;   Label: LAB_005532bf
    FILD word ptr [EBX + ESI*0x4 + 0x2] ; 005532c2
    ADD EAX,dword ptr [EBP + 0xffffffe4] ; 005532c6
    ADC ESI,dword ptr [EBP + 0xfffffff0] ; 005532cc
    FMUL float ptr [EBP + 0xfffffffc]   ; 005532d2
    FADD float ptr [EDI + ECX*0x4]      ; 005532d8
    FSTP float ptr [EDI + ECX*0x4]      ; 005532db
    FMUL float ptr [EBP + 0xfffffff4]   ; 005532de
    FADD float ptr [EDX + ECX*0x4]      ; 005532e4
    FSTP float ptr [EDX + ECX*0x4]      ; 005532e7
    INC ECX                             ; 005532ea
    CMP ECX,dword ptr [EBP + 0x30]      ; 005532eb
    JL 0x005532bf                       ; 005532f1
        ;   XREF to: 005532bf (CONDITIONAL_JUMP)  ; LAB_005532bf
    POPAD                               ; 005532f3
    MOV EAX,dword ptr [EBP + 0x30]      ; 005532f4
    MOV dword ptr [EBP + -0x8],EAX      ; 005532f7
    FILD dword ptr [EBP + -0x8]         ; 005532fa
    FMUL double ptr [EBP + 0x28]        ; 005532fd
    FADD double ptr [EBP + 0x20]        ; 00553300
    FSTP double ptr [EBP + 0x20]        ; 00553303
    JMP 0x005531df                      ; 00553306
        ;   XREF to: 005531df (UNCONDITIONAL_JUMP)  ; LAB_005531df


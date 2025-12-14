; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl double sound_sndmain.cpp_mixResampleMonoToStereo_FUN_005a5e70(short * sample_data, SStereoBuffers * channel_buffers, SStereoGains * channel_gains, double resample_position, double resample_delta, int samples_to_process)
;
; Parameters:
; short *          Stack[0x14]:4   sample_data
; SStereoBuffers * Stack[0x18]:4   channel_buffers
; SStereoGains *   Stack[0x1c]:4   channel_gains
; double           Stack[0x20]:8   resample_position
; double           Stack[0x28]:8   resample_delta
; int              Stack[0x30]:4   samples_to_process
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
;   sound_sndmain.cpp_CSfxSlot_mix_FUN_005a75e0 at 005a7d87
;
; Referenced Globals:
;   double DOUBLE_0064fcaf = 4294967296
;
; Called Functions:
;   crt_math.c_floor_FUN_005feb90
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a5e70
        ;   Label: sound_sndmain.cpp_mixResampleMonoToStereo_FUN_005a5e70
    PUSH ESI                            ; 005a5e71
    PUSH EDI                            ; 005a5e72
    PUSH EBP                            ; 005a5e73
    MOV EBP,ESP                         ; 005a5e74
    SUB ESP,0x2c                        ; 005a5e76
    CMP dword ptr [EBP + 0x30],0x1      ; 005a5e79
    JGE 0x005a5e98                      ; 005a5e7d
        ;   XREF to: 005a5e98 (CONDITIONAL_JUMP)  ; LAB_005a5e98
    MOV EAX,dword ptr [EBP + 0x20]      ; 005a5e7f
        ;   Label: LAB_005a5e7f
    MOV dword ptr [EBP + -0x2c],EAX     ; 005a5e82
    MOV EAX,dword ptr [EBP + 0x24]      ; 005a5e85
    MOV dword ptr [EBP + -0x28],EAX     ; 005a5e88
    MOV EAX,dword ptr [EBP + -0x2c]     ; 005a5e8b
    MOV EDX,dword ptr [EBP + -0x28]     ; 005a5e8e
    MOV ESP,EBP                         ; 005a5e91
    POP EBP                             ; 005a5e93
    POP EDI                             ; 005a5e94
    POP ESI                             ; 005a5e95
    POP EBX                             ; 005a5e96
    RET                                 ; 005a5e97
    MOV ECX,dword ptr [EBP + 0x24]      ; 005a5e98
        ;   Label: LAB_005a5e98
    PUSH ECX                            ; 005a5e9b
    MOV EBX,dword ptr [EBP + 0x20]      ; 005a5e9c
    PUSH EBX                            ; 005a5e9f
    CALL crt_math.c_floor_FUN_005feb90  ; 005a5ea0
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [EBP + -0x24],EAX     ; 005a5ea5
    MOV dword ptr [EBP + -0x20],EDX     ; 005a5ea8
    ADD ESP,0x8                         ; 005a5eab
    FLD double ptr [EBP + -0x24]        ; 005a5eae
    CALL crt_math.c_round_FUN_005fe6b0  ; 005a5eb1
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP qword ptr [EBP + -0x24]       ; 005a5eb6
    MOV EAX,dword ptr [EBP + -0x24]     ; 005a5eb9
    MOV dword ptr [EBP + -0x18],EAX     ; 005a5ebc
    XOR ESI,ESI                         ; 005a5ebf
    MOV dword ptr [EBP + -0x20],ESI     ; 005a5ec1
    MOV EAX,dword ptr [EBP + -0x18]     ; 005a5ec4
    MOV dword ptr [EBP + -0x24],EAX     ; 005a5ec7
    FILD qword ptr [EBP + -0x24]        ; 005a5eca
    FSUBR double ptr [EBP + 0x20]       ; 005a5ecd
    FMUL double ptr [0x0064fcaf]        ; 005a5ed0 | DOUBLE_0064fcaf
    CALL crt_math.c_round_FUN_005fe6b0  ; 005a5ed6
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP qword ptr [EBP + -0x24]       ; 005a5edb
    MOV EAX,dword ptr [EBP + -0x24]     ; 005a5ede
    MOV dword ptr [EBP + -0x14],EAX     ; 005a5ee1
    MOV EDI,dword ptr [EBP + 0x2c]      ; 005a5ee4
    PUSH EDI                            ; 005a5ee7
    MOV EAX,dword ptr [EBP + 0x28]      ; 005a5ee8
    PUSH EAX                            ; 005a5eeb
    CALL crt_math.c_floor_FUN_005feb90  ; 005a5eec
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [EBP + -0x24],EAX     ; 005a5ef1
    MOV dword ptr [EBP + -0x20],EDX     ; 005a5ef4
    ADD ESP,0x8                         ; 005a5ef7
    FLD double ptr [EBP + -0x24]        ; 005a5efa
    CALL crt_math.c_round_FUN_005fe6b0  ; 005a5efd
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP qword ptr [EBP + -0x24]       ; 005a5f02
    MOV EAX,dword ptr [EBP + -0x24]     ; 005a5f05
    MOV dword ptr [EBP + -0x10],EAX     ; 005a5f08
    MOV dword ptr [EBP + -0x20],ESI     ; 005a5f0b
    MOV EAX,dword ptr [EBP + -0x10]     ; 005a5f0e
    MOV dword ptr [EBP + -0x24],EAX     ; 005a5f11
    FILD qword ptr [EBP + -0x24]        ; 005a5f14
    FSUBR double ptr [EBP + 0x28]       ; 005a5f17
    FMUL double ptr [0x0064fcaf]        ; 005a5f1a | DOUBLE_0064fcaf
    CALL crt_math.c_round_FUN_005fe6b0  ; 005a5f20
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP qword ptr [EBP + -0x24]       ; 005a5f25
    MOV EAX,dword ptr [EBP + -0x24]     ; 005a5f28
    MOV dword ptr [EBP + -0x1c],EAX     ; 005a5f2b
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005a5f2e
    MOV EAX,dword ptr [EAX]             ; 005a5f31
    MOV dword ptr [EBP + -0x4],EAX      ; 005a5f33
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005a5f36
    MOV EAX,dword ptr [EAX + 0x4]       ; 005a5f39
    MOV dword ptr [EBP + -0xc],EAX      ; 005a5f3c
    PUSHAD                              ; 005a5f3f
    MOV EDI,dword ptr [EBP + 0x18]      ; 005a5f40
    MOV EDX,dword ptr [EDI + 0x4]       ; 005a5f46
    MOV EDI,dword ptr [EDI]             ; 005a5f49
    MOV ESI,dword ptr [EBP + 0xffffffe8] ; 005a5f4b
    MOV EAX,dword ptr [EBP + 0xffffffec] ; 005a5f51
    MOV EBX,dword ptr [EBP + 0x14]      ; 005a5f57
    XOR ECX,ECX                         ; 005a5f5d
    FILD word ptr [EBX + ESI*0x2]       ; 005a5f5f
        ;   Label: LAB_005a5f5f
    FILD word ptr [EBX + ESI*0x2]       ; 005a5f62
    ADD EAX,dword ptr [EBP + 0xffffffe4] ; 005a5f65
    ADC ESI,dword ptr [EBP + 0xfffffff0] ; 005a5f6b
    FMUL float ptr [EBP + 0xfffffffc]   ; 005a5f71
    FADD float ptr [EDI + ECX*0x4]      ; 005a5f77
    FSTP float ptr [EDI + ECX*0x4]      ; 005a5f7a
    FMUL float ptr [EBP + 0xfffffff4]   ; 005a5f7d
    FADD float ptr [EDX + ECX*0x4]      ; 005a5f83
    FSTP float ptr [EDX + ECX*0x4]      ; 005a5f86
    INC ECX                             ; 005a5f89
    CMP ECX,dword ptr [EBP + 0x30]      ; 005a5f8a
    JL 0x005a5f5f                       ; 005a5f90
        ;   XREF to: 005a5f5f (CONDITIONAL_JUMP)  ; LAB_005a5f5f
    POPAD                               ; 005a5f92
    MOV EAX,dword ptr [EBP + 0x30]      ; 005a5f93
    MOV dword ptr [EBP + -0x8],EAX      ; 005a5f96
    FILD dword ptr [EBP + -0x8]         ; 005a5f99
    FMUL double ptr [EBP + 0x28]        ; 005a5f9c
    FADD double ptr [EBP + 0x20]        ; 005a5f9f
    FSTP double ptr [EBP + 0x20]        ; 005a5fa2
    JMP 0x005a5e7f                      ; 005a5fa5
        ;   XREF to: 005a5e7f (UNCONDITIONAL_JUMP)  ; LAB_005a5e7f


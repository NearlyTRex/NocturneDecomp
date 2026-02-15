; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl sound_sndmain_cpp_mixResampleStereoToStereo_FUN_005a5fb0(short *sample_data,SStereoBuffers *channel_buffers,SStereoGains *channel_gains,double resample_position,double resample_delta,int samples_to_process)
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
;   sound_sndmain.cpp_CSfxSlot_mix_FUN_005a75e0 at 005a7cad
;
; Referenced Globals:
;   double DOUBLE_0064fcb7 = 4294967296
;
; Called Functions:
;   crt_math.c_floor_FUN_005feb90
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a5fb0
        ;   Label: sound_sndmain.cpp_mixResampleStereoToStereo_FUN_005a5fb0
    PUSH ESI                            ; 005a5fb1
    PUSH EDI                            ; 005a5fb2
    PUSH EBP                            ; 005a5fb3
    MOV EBP,ESP                         ; 005a5fb4
    SUB ESP,0x2c                        ; 005a5fb6
    CMP dword ptr [EBP + 0x30],0x1      ; 005a5fb9
    JGE 0x005a5fd8                      ; 005a5fbd
        ;   XREF to: 005a5fd8 (CONDITIONAL_JUMP)  ; LAB_005a5fd8
    MOV EAX,dword ptr [EBP + 0x20]      ; 005a5fbf
        ;   Label: LAB_005a5fbf
    MOV dword ptr [EBP + -0x2c],EAX     ; 005a5fc2
    MOV EAX,dword ptr [EBP + 0x24]      ; 005a5fc5
    MOV dword ptr [EBP + -0x28],EAX     ; 005a5fc8
    MOV EAX,dword ptr [EBP + -0x2c]     ; 005a5fcb
    MOV EDX,dword ptr [EBP + -0x28]     ; 005a5fce
    MOV ESP,EBP                         ; 005a5fd1
    POP EBP                             ; 005a5fd3
    POP EDI                             ; 005a5fd4
    POP ESI                             ; 005a5fd5
    POP EBX                             ; 005a5fd6
    RET                                 ; 005a5fd7
    MOV ECX,dword ptr [EBP + 0x24]      ; 005a5fd8
        ;   Label: LAB_005a5fd8
    PUSH ECX                            ; 005a5fdb
    MOV EBX,dword ptr [EBP + 0x20]      ; 005a5fdc
    PUSH EBX                            ; 005a5fdf
    CALL crt_math.c_floor_FUN_005feb90  ; 005a5fe0
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [EBP + -0x24],EAX     ; 005a5fe5
    MOV dword ptr [EBP + -0x20],EDX     ; 005a5fe8
    ADD ESP,0x8                         ; 005a5feb
    FLD double ptr [EBP + -0x24]        ; 005a5fee
    CALL crt_math.c_round_FUN_005fe6b0  ; 005a5ff1
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP qword ptr [EBP + -0x24]       ; 005a5ff6
    MOV EAX,dword ptr [EBP + -0x24]     ; 005a5ff9
    MOV dword ptr [EBP + -0x18],EAX     ; 005a5ffc
    XOR ESI,ESI                         ; 005a5fff
    MOV dword ptr [EBP + -0x20],ESI     ; 005a6001
    MOV EAX,dword ptr [EBP + -0x18]     ; 005a6004
    MOV dword ptr [EBP + -0x24],EAX     ; 005a6007
    FILD qword ptr [EBP + -0x24]        ; 005a600a
    FSUBR double ptr [EBP + 0x20]       ; 005a600d
    FMUL double ptr [0x0064fcb7]        ; 005a6010 | DOUBLE_0064fcb7
    CALL crt_math.c_round_FUN_005fe6b0  ; 005a6016
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP qword ptr [EBP + -0x24]       ; 005a601b
    MOV EAX,dword ptr [EBP + -0x24]     ; 005a601e
    MOV dword ptr [EBP + -0x14],EAX     ; 005a6021
    MOV EDI,dword ptr [EBP + 0x2c]      ; 005a6024
    PUSH EDI                            ; 005a6027
    MOV EAX,dword ptr [EBP + 0x28]      ; 005a6028
    PUSH EAX                            ; 005a602b
    CALL crt_math.c_floor_FUN_005feb90  ; 005a602c
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [EBP + -0x24],EAX     ; 005a6031
    MOV dword ptr [EBP + -0x20],EDX     ; 005a6034
    ADD ESP,0x8                         ; 005a6037
    FLD double ptr [EBP + -0x24]        ; 005a603a
    CALL crt_math.c_round_FUN_005fe6b0  ; 005a603d
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP qword ptr [EBP + -0x24]       ; 005a6042
    MOV EAX,dword ptr [EBP + -0x24]     ; 005a6045
    MOV dword ptr [EBP + -0x10],EAX     ; 005a6048
    MOV dword ptr [EBP + -0x20],ESI     ; 005a604b
    MOV EAX,dword ptr [EBP + -0x10]     ; 005a604e
    MOV dword ptr [EBP + -0x24],EAX     ; 005a6051
    FILD qword ptr [EBP + -0x24]        ; 005a6054
    FSUBR double ptr [EBP + 0x28]       ; 005a6057
    FMUL double ptr [0x0064fcb7]        ; 005a605a | DOUBLE_0064fcb7
    CALL crt_math.c_round_FUN_005fe6b0  ; 005a6060
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP qword ptr [EBP + -0x24]       ; 005a6065
    MOV EAX,dword ptr [EBP + -0x24]     ; 005a6068
    MOV dword ptr [EBP + -0x1c],EAX     ; 005a606b
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005a606e
    MOV EAX,dword ptr [EAX]             ; 005a6071
    MOV dword ptr [EBP + -0x4],EAX      ; 005a6073
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005a6076
    MOV EAX,dword ptr [EAX + 0x4]       ; 005a6079
    MOV dword ptr [EBP + -0xc],EAX      ; 005a607c
    PUSHAD                              ; 005a607f
    MOV EDI,dword ptr [EBP + 0x18]      ; 005a6080
    MOV EDX,dword ptr [EDI + 0x4]       ; 005a6086
    MOV EDI,dword ptr [EDI]             ; 005a6089
    MOV ESI,dword ptr [EBP + 0xffffffe8] ; 005a608b
    MOV EAX,dword ptr [EBP + 0xffffffec] ; 005a6091
    MOV EBX,dword ptr [EBP + 0x14]      ; 005a6097
    XOR ECX,ECX                         ; 005a609d
    FILD word ptr [EBX + ESI*0x4]       ; 005a609f
        ;   Label: LAB_005a609f
    FILD word ptr [EBX + ESI*0x4 + 0x2] ; 005a60a2
    ADD EAX,dword ptr [EBP + 0xffffffe4] ; 005a60a6
    ADC ESI,dword ptr [EBP + 0xfffffff0] ; 005a60ac
    FMUL float ptr [EBP + 0xfffffffc]   ; 005a60b2
    FADD float ptr [EDI + ECX*0x4]      ; 005a60b8
    FSTP float ptr [EDI + ECX*0x4]      ; 005a60bb
    FMUL float ptr [EBP + 0xfffffff4]   ; 005a60be
    FADD float ptr [EDX + ECX*0x4]      ; 005a60c4
    FSTP float ptr [EDX + ECX*0x4]      ; 005a60c7
    INC ECX                             ; 005a60ca
    CMP ECX,dword ptr [EBP + 0x30]      ; 005a60cb
    JL 0x005a609f                       ; 005a60d1
        ;   XREF to: 005a609f (CONDITIONAL_JUMP)  ; LAB_005a609f
    POPAD                               ; 005a60d3
    MOV EAX,dword ptr [EBP + 0x30]      ; 005a60d4
    MOV dword ptr [EBP + -0x8],EAX      ; 005a60d7
    FILD dword ptr [EBP + -0x8]         ; 005a60da
    FMUL double ptr [EBP + 0x28]        ; 005a60dd
    FADD double ptr [EBP + 0x20]        ; 005a60e0
    FSTP double ptr [EBP + 0x20]        ; 005a60e3
    JMP 0x005a5fbf                      ; 005a60e6
        ;   XREF to: 005a5fbf (UNCONDITIONAL_JUMP)  ; LAB_005a5fbf


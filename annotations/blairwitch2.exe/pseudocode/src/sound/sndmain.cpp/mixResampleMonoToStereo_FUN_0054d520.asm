; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl sound_sndmain_cpp_mixResampleMonoToStereo_FUN_0054d520(short *sample_data,SStereoBuffers *channel_buffers,SStereoGains *channel_gains,double resample_position,double resample_delta,int samples_to_process)
;
; Parameters:
; short *          Stack[0x4]:4   sample_data
; SStereoBuffers * Stack[0x8]:4   channel_buffers
; SStereoGains *   Stack[0xc]:4   channel_gains
; double           Stack[0x10]:8   resample_position
; double           Stack[0x18]:8   resample_delta
; int              Stack[0x20]:4   samples_to_process
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
;   sound_sndmain.cpp_CSfxSlot_mix_FUN_0054edb0 at 0054f616
;
; Referenced Globals:
;   undefined4 DAT_005e809e
;
; Called Functions:
;   crt_math.c_floor_FUN_005b84d0
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054d520
        ;   Label: sound_sndmain.cpp_mixResampleMonoToStereo_FUN_0054d520
    PUSH ESI                            ; 0054d521
    PUSH EDI                            ; 0054d522
    PUSH EBP                            ; 0054d523
    MOV EBP,ESP                         ; 0054d524
    SUB ESP,0x2c                        ; 0054d526
    CMP dword ptr [EBP + 0x30],0x1      ; 0054d529
    JGE 0x0054d548                      ; 0054d52d
        ;   XREF to: 0054d548 (CONDITIONAL_JUMP)  ; LAB_0054d548
    MOV EAX,dword ptr [EBP + 0x20]      ; 0054d52f
        ;   Label: LAB_0054d52f
    MOV dword ptr [EBP + -0x2c],EAX     ; 0054d532
    MOV EAX,dword ptr [EBP + 0x24]      ; 0054d535
    MOV dword ptr [EBP + -0x28],EAX     ; 0054d538
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0054d53b
    MOV EDX,dword ptr [EBP + -0x28]     ; 0054d53e
    MOV ESP,EBP                         ; 0054d541
    POP EBP                             ; 0054d543
    POP EDI                             ; 0054d544
    POP ESI                             ; 0054d545
    POP EBX                             ; 0054d546
    RET                                 ; 0054d547
    MOV ECX,dword ptr [EBP + 0x24]      ; 0054d548
        ;   Label: LAB_0054d548
    PUSH ECX                            ; 0054d54b
    MOV EBX,dword ptr [EBP + 0x20]      ; 0054d54c
    PUSH EBX                            ; 0054d54f
    CALL crt_math.c_floor_FUN_005b84d0  ; 0054d550
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005b84d0(double input_value)
    MOV dword ptr [EBP + -0x24],EAX     ; 0054d555
    MOV dword ptr [EBP + -0x20],EDX     ; 0054d558
    ADD ESP,0x8                         ; 0054d55b
    FLD double ptr [EBP + -0x24]        ; 0054d55e
    CALL crt_math.c_round_FUN_005b7ff0  ; 0054d561
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP qword ptr [EBP + -0x24]       ; 0054d566
    MOV EAX,dword ptr [EBP + -0x24]     ; 0054d569
    MOV dword ptr [EBP + -0x18],EAX     ; 0054d56c
    XOR ESI,ESI                         ; 0054d56f
    MOV dword ptr [EBP + -0x20],ESI     ; 0054d571
    MOV EAX,dword ptr [EBP + -0x18]     ; 0054d574
    MOV dword ptr [EBP + -0x24],EAX     ; 0054d577
    FILD qword ptr [EBP + -0x24]        ; 0054d57a
    FSUBR double ptr [EBP + 0x20]       ; 0054d57d
    FMUL double ptr [0x005e809e]        ; 0054d580 | DAT_005e809e
    CALL crt_math.c_round_FUN_005b7ff0  ; 0054d586
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP qword ptr [EBP + -0x24]       ; 0054d58b
    MOV EAX,dword ptr [EBP + -0x24]     ; 0054d58e
    MOV dword ptr [EBP + -0x14],EAX     ; 0054d591
    MOV EDI,dword ptr [EBP + 0x2c]      ; 0054d594
    PUSH EDI                            ; 0054d597
    MOV EAX,dword ptr [EBP + 0x28]      ; 0054d598
    PUSH EAX                            ; 0054d59b
    CALL crt_math.c_floor_FUN_005b84d0  ; 0054d59c
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005b84d0(double input_value)
    MOV dword ptr [EBP + -0x24],EAX     ; 0054d5a1
    MOV dword ptr [EBP + -0x20],EDX     ; 0054d5a4
    ADD ESP,0x8                         ; 0054d5a7
    FLD double ptr [EBP + -0x24]        ; 0054d5aa
    CALL crt_math.c_round_FUN_005b7ff0  ; 0054d5ad
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP qword ptr [EBP + -0x24]       ; 0054d5b2
    MOV EAX,dword ptr [EBP + -0x24]     ; 0054d5b5
    MOV dword ptr [EBP + -0x10],EAX     ; 0054d5b8
    MOV dword ptr [EBP + -0x20],ESI     ; 0054d5bb
    MOV EAX,dword ptr [EBP + -0x10]     ; 0054d5be
    MOV dword ptr [EBP + -0x24],EAX     ; 0054d5c1
    FILD qword ptr [EBP + -0x24]        ; 0054d5c4
    FSUBR double ptr [EBP + 0x28]       ; 0054d5c7
    FMUL double ptr [0x005e809e]        ; 0054d5ca | DAT_005e809e
    CALL crt_math.c_round_FUN_005b7ff0  ; 0054d5d0
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP qword ptr [EBP + -0x24]       ; 0054d5d5
    MOV EAX,dword ptr [EBP + -0x24]     ; 0054d5d8
    MOV dword ptr [EBP + -0x1c],EAX     ; 0054d5db
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0054d5de
    MOV EAX,dword ptr [EAX]             ; 0054d5e1
    MOV dword ptr [EBP + -0x4],EAX      ; 0054d5e3
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0054d5e6
    MOV EAX,dword ptr [EAX + 0x4]       ; 0054d5e9
    MOV dword ptr [EBP + -0xc],EAX      ; 0054d5ec
    PUSHAD                              ; 0054d5ef
    MOV EDI,dword ptr [EBP + 0x18]      ; 0054d5f0
    MOV EDX,dword ptr [EDI + 0x4]       ; 0054d5f6
    MOV EDI,dword ptr [EDI]             ; 0054d5f9
    MOV ESI,dword ptr [EBP + 0xffffffe8] ; 0054d5fb
    MOV EAX,dword ptr [EBP + 0xffffffec] ; 0054d601
    MOV EBX,dword ptr [EBP + 0x14]      ; 0054d607
    XOR ECX,ECX                         ; 0054d60d
    FILD word ptr [EBX + ESI*0x2]       ; 0054d60f
        ;   Label: LAB_0054d60f
    FILD word ptr [EBX + ESI*0x2]       ; 0054d612
    ADD EAX,dword ptr [EBP + 0xffffffe4] ; 0054d615
    ADC ESI,dword ptr [EBP + 0xfffffff0] ; 0054d61b
    FMUL float ptr [EBP + 0xfffffffc]   ; 0054d621
    FADD float ptr [EDI + ECX*0x4]      ; 0054d627
    FSTP float ptr [EDI + ECX*0x4]      ; 0054d62a
    FMUL float ptr [EBP + 0xfffffff4]   ; 0054d62d
    FADD float ptr [EDX + ECX*0x4]      ; 0054d633
    FSTP float ptr [EDX + ECX*0x4]      ; 0054d636
    INC ECX                             ; 0054d639
    CMP ECX,dword ptr [EBP + 0x30]      ; 0054d63a
    JL 0x0054d60f                       ; 0054d640
        ;   XREF to: 0054d60f (CONDITIONAL_JUMP)  ; LAB_0054d60f
    POPAD                               ; 0054d642
    MOV EAX,dword ptr [EBP + 0x30]      ; 0054d643
    MOV dword ptr [EBP + -0x8],EAX      ; 0054d646
    FILD dword ptr [EBP + -0x8]         ; 0054d649
    FMUL double ptr [EBP + 0x28]        ; 0054d64c
    FADD double ptr [EBP + 0x20]        ; 0054d64f
    FSTP double ptr [EBP + 0x20]        ; 0054d652
    JMP 0x0054d52f                      ; 0054d655
        ;   XREF to: 0054d52f (UNCONDITIONAL_JUMP)  ; LAB_0054d52f


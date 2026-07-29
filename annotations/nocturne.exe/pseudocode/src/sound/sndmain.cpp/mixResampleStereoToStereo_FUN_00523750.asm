; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl sound_sndmain_cpp_mixResampleStereoToStereo_FUN_00523750(short *sample_data,SStereoBuffers *channel_buffers,SStereoGains *channel_gains,double resample_position,double resample_delta,int samples_to_process)
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
;   sound_sndmain.cpp_CSfxSlot_mix_FUN_00524d10 at 005253b7
;
; Referenced Globals:
;   double DOUBLE_0059294e = 4294967296
;
; Called Functions:
;   crt_math.c_floor_FUN_005648c0
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00523750
        ;   Label: sound_sndmain.cpp_mixResampleStereoToStereo_FUN_00523750
    PUSH ESI                            ; 00523751
    PUSH EDI                            ; 00523752
    PUSH EBP                            ; 00523753
    MOV EBP,ESP                         ; 00523754
    SUB ESP,0x2c                        ; 00523756
    CMP dword ptr [EBP + 0x30],0x1      ; 00523759
    JGE 0x00523778                      ; 0052375d
        ;   XREF to: 00523778 (CONDITIONAL_JUMP)  ; LAB_00523778
    MOV EAX,dword ptr [EBP + 0x20]      ; 0052375f
        ;   Label: LAB_0052375f
    MOV dword ptr [EBP + -0x2c],EAX     ; 00523762
    MOV EAX,dword ptr [EBP + 0x24]      ; 00523765
    MOV dword ptr [EBP + -0x28],EAX     ; 00523768
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0052376b
    MOV EDX,dword ptr [EBP + -0x28]     ; 0052376e
    MOV ESP,EBP                         ; 00523771
    POP EBP                             ; 00523773
    POP EDI                             ; 00523774
    POP ESI                             ; 00523775
    POP EBX                             ; 00523776
    RET                                 ; 00523777
    MOV ECX,dword ptr [EBP + 0x24]      ; 00523778
        ;   Label: LAB_00523778
    PUSH ECX                            ; 0052377b
    MOV EBX,dword ptr [EBP + 0x20]      ; 0052377c
    PUSH EBX                            ; 0052377f
    CALL crt_math.c_floor_FUN_005648c0  ; 00523780
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005648c0(double input_value)
    MOV dword ptr [EBP + -0x24],EAX     ; 00523785
    MOV dword ptr [EBP + -0x20],EDX     ; 00523788
    ADD ESP,0x8                         ; 0052378b
    FLD double ptr [EBP + -0x24]        ; 0052378e
    CALL crt_math.c_round_FUN_00563a30  ; 00523791
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP qword ptr [EBP + -0x24]       ; 00523796
    MOV EAX,dword ptr [EBP + -0x24]     ; 00523799
    MOV dword ptr [EBP + -0x18],EAX     ; 0052379c
    XOR ESI,ESI                         ; 0052379f
    MOV dword ptr [EBP + -0x20],ESI     ; 005237a1
    MOV EAX,dword ptr [EBP + -0x18]     ; 005237a4
    MOV dword ptr [EBP + -0x24],EAX     ; 005237a7
    FILD qword ptr [EBP + -0x24]        ; 005237aa
    FSUBR double ptr [EBP + 0x20]       ; 005237ad
    FMUL double ptr [0x0059294e]        ; 005237b0 | DOUBLE_0059294e
    CALL crt_math.c_round_FUN_00563a30  ; 005237b6
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP qword ptr [EBP + -0x24]       ; 005237bb
    MOV EAX,dword ptr [EBP + -0x24]     ; 005237be
    MOV dword ptr [EBP + -0x14],EAX     ; 005237c1
    MOV EDI,dword ptr [EBP + 0x2c]      ; 005237c4
    PUSH EDI                            ; 005237c7
    MOV EAX,dword ptr [EBP + 0x28]      ; 005237c8
    PUSH EAX                            ; 005237cb
    CALL crt_math.c_floor_FUN_005648c0  ; 005237cc
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005648c0(double input_value)
    MOV dword ptr [EBP + -0x24],EAX     ; 005237d1
    MOV dword ptr [EBP + -0x20],EDX     ; 005237d4
    ADD ESP,0x8                         ; 005237d7
    FLD double ptr [EBP + -0x24]        ; 005237da
    CALL crt_math.c_round_FUN_00563a30  ; 005237dd
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP qword ptr [EBP + -0x24]       ; 005237e2
    MOV EAX,dword ptr [EBP + -0x24]     ; 005237e5
    MOV dword ptr [EBP + -0x10],EAX     ; 005237e8
    MOV dword ptr [EBP + -0x20],ESI     ; 005237eb
    MOV EAX,dword ptr [EBP + -0x10]     ; 005237ee
    MOV dword ptr [EBP + -0x24],EAX     ; 005237f1
    FILD qword ptr [EBP + -0x24]        ; 005237f4
    FSUBR double ptr [EBP + 0x28]       ; 005237f7
    FMUL double ptr [0x0059294e]        ; 005237fa | DOUBLE_0059294e
    CALL crt_math.c_round_FUN_00563a30  ; 00523800
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP qword ptr [EBP + -0x24]       ; 00523805
    MOV EAX,dword ptr [EBP + -0x24]     ; 00523808
    MOV dword ptr [EBP + -0x1c],EAX     ; 0052380b
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0052380e
    MOV EAX,dword ptr [EAX]             ; 00523811
    MOV dword ptr [EBP + -0x4],EAX      ; 00523813
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00523816
    MOV EAX,dword ptr [EAX + 0x4]       ; 00523819
    MOV dword ptr [EBP + -0xc],EAX      ; 0052381c
    PUSHAD                              ; 0052381f
    MOV EDI,dword ptr [EBP + 0x18]      ; 00523820
    MOV EDX,dword ptr [EDI + 0x4]       ; 00523826
    MOV EDI,dword ptr [EDI]             ; 00523829
    MOV ESI,dword ptr [EBP + 0xffffffe8] ; 0052382b
    MOV EAX,dword ptr [EBP + 0xffffffec] ; 00523831
    MOV EBX,dword ptr [EBP + 0x14]      ; 00523837
    XOR ECX,ECX                         ; 0052383d
    FILD word ptr [EBX + ESI*0x4]       ; 0052383f
        ;   Label: LAB_0052383f
    FILD word ptr [EBX + ESI*0x4 + 0x2] ; 00523842
    ADD EAX,dword ptr [EBP + 0xffffffe4] ; 00523846
    ADC ESI,dword ptr [EBP + 0xfffffff0] ; 0052384c
    FMUL float ptr [EBP + 0xfffffffc]   ; 00523852
    FADD float ptr [EDI + ECX*0x4]      ; 00523858
    FSTP float ptr [EDI + ECX*0x4]      ; 0052385b
    FMUL float ptr [EBP + 0xfffffff4]   ; 0052385e
    FADD float ptr [EDX + ECX*0x4]      ; 00523864
    FSTP float ptr [EDX + ECX*0x4]      ; 00523867
    INC ECX                             ; 0052386a
    CMP ECX,dword ptr [EBP + 0x30]      ; 0052386b
    JL 0x0052383f                       ; 00523871
        ;   XREF to: 0052383f (CONDITIONAL_JUMP)  ; LAB_0052383f
    POPAD                               ; 00523873
    MOV EAX,dword ptr [EBP + 0x30]      ; 00523874
    MOV dword ptr [EBP + -0x8],EAX      ; 00523877
    FILD dword ptr [EBP + -0x8]         ; 0052387a
    FMUL double ptr [EBP + 0x28]        ; 0052387d
    FADD double ptr [EBP + 0x20]        ; 00523880
    FSTP double ptr [EBP + 0x20]        ; 00523883
    JMP 0x0052375f                      ; 00523886
        ;   XREF to: 0052375f (UNCONDITIONAL_JUMP)  ; LAB_0052375f


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl sound_sndmain_cpp_mixResampleMonoToStereo_FUN_0056fb90(short *sample_data,SStereoBuffers *channel_buffers,SStereoGains *channel_gains,double resample_position,double resample_delta,int samples_to_process)
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
;   sound_sndmain.cpp_CSfxSlot_mix_FUN_00571420 at 00571c86
;
; Referenced Globals:
;   undefined4 DAT_005f3298
;
; Called Functions:
;   crt_math.c_floor_FUN_005c0880
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056fb90
        ;   Label: sound_sndmain.cpp_mixResampleMonoToStereo_FUN_0056fb90
    PUSH ESI                            ; 0056fb91
    PUSH EDI                            ; 0056fb92
    PUSH EBP                            ; 0056fb93
    MOV EBP,ESP                         ; 0056fb94
    SUB ESP,0x2c                        ; 0056fb96
    CMP dword ptr [EBP + 0x30],0x1      ; 0056fb99
    JGE 0x0056fbb8                      ; 0056fb9d
        ;   XREF to: 0056fbb8 (CONDITIONAL_JUMP)  ; LAB_0056fbb8
    MOV EAX,dword ptr [EBP + 0x20]      ; 0056fb9f
        ;   Label: LAB_0056fb9f
    MOV dword ptr [EBP + -0x2c],EAX     ; 0056fba2
    MOV EAX,dword ptr [EBP + 0x24]      ; 0056fba5
    MOV dword ptr [EBP + -0x28],EAX     ; 0056fba8
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0056fbab
    MOV EDX,dword ptr [EBP + -0x28]     ; 0056fbae
    MOV ESP,EBP                         ; 0056fbb1
    POP EBP                             ; 0056fbb3
    POP EDI                             ; 0056fbb4
    POP ESI                             ; 0056fbb5
    POP EBX                             ; 0056fbb6
    RET                                 ; 0056fbb7
    MOV ECX,dword ptr [EBP + 0x24]      ; 0056fbb8
        ;   Label: LAB_0056fbb8
    PUSH ECX                            ; 0056fbbb
    MOV EBX,dword ptr [EBP + 0x20]      ; 0056fbbc
    PUSH EBX                            ; 0056fbbf
    CALL crt_math.c_floor_FUN_005c0880  ; 0056fbc0
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005c0880(double input_value)
    MOV dword ptr [EBP + -0x24],EAX     ; 0056fbc5
    MOV dword ptr [EBP + -0x20],EDX     ; 0056fbc8
    ADD ESP,0x8                         ; 0056fbcb
    FLD double ptr [EBP + -0x24]        ; 0056fbce
    CALL crt_math.c_round_FUN_005c03a0  ; 0056fbd1
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP qword ptr [EBP + -0x24]       ; 0056fbd6
    MOV EAX,dword ptr [EBP + -0x24]     ; 0056fbd9
    MOV dword ptr [EBP + -0x18],EAX     ; 0056fbdc
    XOR ESI,ESI                         ; 0056fbdf
    MOV dword ptr [EBP + -0x20],ESI     ; 0056fbe1
    MOV EAX,dword ptr [EBP + -0x18]     ; 0056fbe4
    MOV dword ptr [EBP + -0x24],EAX     ; 0056fbe7
    FILD qword ptr [EBP + -0x24]        ; 0056fbea
    FSUBR double ptr [EBP + 0x20]       ; 0056fbed
    FMUL double ptr [0x005f3298]        ; 0056fbf0 | DAT_005f3298
    CALL crt_math.c_round_FUN_005c03a0  ; 0056fbf6
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP qword ptr [EBP + -0x24]       ; 0056fbfb
    MOV EAX,dword ptr [EBP + -0x24]     ; 0056fbfe
    MOV dword ptr [EBP + -0x14],EAX     ; 0056fc01
    MOV EDI,dword ptr [EBP + 0x2c]      ; 0056fc04
    PUSH EDI                            ; 0056fc07
    MOV EAX,dword ptr [EBP + 0x28]      ; 0056fc08
    PUSH EAX                            ; 0056fc0b
    CALL crt_math.c_floor_FUN_005c0880  ; 0056fc0c
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005c0880(double input_value)
    MOV dword ptr [EBP + -0x24],EAX     ; 0056fc11
    MOV dword ptr [EBP + -0x20],EDX     ; 0056fc14
    ADD ESP,0x8                         ; 0056fc17
    FLD double ptr [EBP + -0x24]        ; 0056fc1a
    CALL crt_math.c_round_FUN_005c03a0  ; 0056fc1d
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP qword ptr [EBP + -0x24]       ; 0056fc22
    MOV EAX,dword ptr [EBP + -0x24]     ; 0056fc25
    MOV dword ptr [EBP + -0x10],EAX     ; 0056fc28
    MOV dword ptr [EBP + -0x20],ESI     ; 0056fc2b
    MOV EAX,dword ptr [EBP + -0x10]     ; 0056fc2e
    MOV dword ptr [EBP + -0x24],EAX     ; 0056fc31
    FILD qword ptr [EBP + -0x24]        ; 0056fc34
    FSUBR double ptr [EBP + 0x28]       ; 0056fc37
    FMUL double ptr [0x005f3298]        ; 0056fc3a | DAT_005f3298
    CALL crt_math.c_round_FUN_005c03a0  ; 0056fc40
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP qword ptr [EBP + -0x24]       ; 0056fc45
    MOV EAX,dword ptr [EBP + -0x24]     ; 0056fc48
    MOV dword ptr [EBP + -0x1c],EAX     ; 0056fc4b
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0056fc4e
    MOV EAX,dword ptr [EAX]             ; 0056fc51
    MOV dword ptr [EBP + -0x4],EAX      ; 0056fc53
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0056fc56
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056fc59
    MOV dword ptr [EBP + -0xc],EAX      ; 0056fc5c
    PUSHAD                              ; 0056fc5f
    MOV EDI,dword ptr [EBP + 0x18]      ; 0056fc60
    MOV EDX,dword ptr [EDI + 0x4]       ; 0056fc66
    MOV EDI,dword ptr [EDI]             ; 0056fc69
    MOV ESI,dword ptr [EBP + 0xffffffe8] ; 0056fc6b
    MOV EAX,dword ptr [EBP + 0xffffffec] ; 0056fc71
    MOV EBX,dword ptr [EBP + 0x14]      ; 0056fc77
    XOR ECX,ECX                         ; 0056fc7d
    FILD word ptr [EBX + ESI*0x2]       ; 0056fc7f
        ;   Label: LAB_0056fc7f
    FILD word ptr [EBX + ESI*0x2]       ; 0056fc82
    ADD EAX,dword ptr [EBP + 0xffffffe4] ; 0056fc85
    ADC ESI,dword ptr [EBP + 0xfffffff0] ; 0056fc8b
    FMUL float ptr [EBP + 0xfffffffc]   ; 0056fc91
    FADD float ptr [EDI + ECX*0x4]      ; 0056fc97
    FSTP float ptr [EDI + ECX*0x4]      ; 0056fc9a
    FMUL float ptr [EBP + 0xfffffff4]   ; 0056fc9d
    FADD float ptr [EDX + ECX*0x4]      ; 0056fca3
    FSTP float ptr [EDX + ECX*0x4]      ; 0056fca6
    INC ECX                             ; 0056fca9
    CMP ECX,dword ptr [EBP + 0x30]      ; 0056fcaa
    JL 0x0056fc7f                       ; 0056fcb0
        ;   XREF to: 0056fc7f (CONDITIONAL_JUMP)  ; LAB_0056fc7f
    POPAD                               ; 0056fcb2
    MOV EAX,dword ptr [EBP + 0x30]      ; 0056fcb3
    MOV dword ptr [EBP + -0x8],EAX      ; 0056fcb6
    FILD dword ptr [EBP + -0x8]         ; 0056fcb9
    FMUL double ptr [EBP + 0x28]        ; 0056fcbc
    FADD double ptr [EBP + 0x20]        ; 0056fcbf
    FSTP double ptr [EBP + 0x20]        ; 0056fcc2
    JMP 0x0056fb9f                      ; 0056fcc5
        ;   XREF to: 0056fb9f (UNCONDITIONAL_JUMP)  ; LAB_0056fb9f


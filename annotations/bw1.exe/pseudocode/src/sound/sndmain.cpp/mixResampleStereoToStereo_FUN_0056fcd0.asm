; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl sound_sndmain_cpp_mixResampleStereoToStereo_FUN_0056fcd0(int param_1,int *param_2,float *param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8)
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
;   sound_sndmain.cpp_FUN_00571420 at 00571ba2
;
; Referenced Globals:
;   undefined4 DAT_005f32a0
;
; Called Functions:
;   crt_math.c_floor_FUN_005c0880
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056fcd0
        ;   Label: sound_sndmain.cpp_mixResampleStereoToStereo_FUN_0056fcd0
    PUSH ESI                            ; 0056fcd1
    PUSH EDI                            ; 0056fcd2
    PUSH EBP                            ; 0056fcd3
    MOV EBP,ESP                         ; 0056fcd4
    SUB ESP,0x2c                        ; 0056fcd6
    CMP dword ptr [EBP + 0x30],0x1      ; 0056fcd9
    JGE 0x0056fcf8                      ; 0056fcdd
        ;   XREF to: 0056fcf8 (CONDITIONAL_JUMP)  ; LAB_0056fcf8
    MOV EAX,dword ptr [EBP + 0x20]      ; 0056fcdf
        ;   Label: LAB_0056fcdf
    MOV dword ptr [EBP + -0x2c],EAX     ; 0056fce2
    MOV EAX,dword ptr [EBP + 0x24]      ; 0056fce5
    MOV dword ptr [EBP + -0x28],EAX     ; 0056fce8
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0056fceb
    MOV EDX,dword ptr [EBP + -0x28]     ; 0056fcee
    MOV ESP,EBP                         ; 0056fcf1
    POP EBP                             ; 0056fcf3
    POP EDI                             ; 0056fcf4
    POP ESI                             ; 0056fcf5
    POP EBX                             ; 0056fcf6
    RET                                 ; 0056fcf7
    MOV ECX,dword ptr [EBP + 0x24]      ; 0056fcf8
        ;   Label: LAB_0056fcf8
    PUSH ECX                            ; 0056fcfb
    MOV EBX,dword ptr [EBP + 0x20]      ; 0056fcfc
    PUSH EBX                            ; 0056fcff
    CALL crt_math.c_floor_FUN_005c0880  ; 0056fd00
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005c0880(double input_value)
    MOV dword ptr [EBP + -0x24],EAX     ; 0056fd05
    MOV dword ptr [EBP + -0x20],EDX     ; 0056fd08
    ADD ESP,0x8                         ; 0056fd0b
    FLD double ptr [EBP + -0x24]        ; 0056fd0e
    CALL crt_math.c_round_FUN_005c03a0  ; 0056fd11
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP qword ptr [EBP + -0x24]       ; 0056fd16
    MOV EAX,dword ptr [EBP + -0x24]     ; 0056fd19
    MOV dword ptr [EBP + -0x18],EAX     ; 0056fd1c
    XOR ESI,ESI                         ; 0056fd1f
    MOV dword ptr [EBP + -0x20],ESI     ; 0056fd21
    MOV EAX,dword ptr [EBP + -0x18]     ; 0056fd24
    MOV dword ptr [EBP + -0x24],EAX     ; 0056fd27
    FILD qword ptr [EBP + -0x24]        ; 0056fd2a
    FSUBR double ptr [EBP + 0x20]       ; 0056fd2d
    FMUL double ptr [0x005f32a0]        ; 0056fd30 | DAT_005f32a0
    CALL crt_math.c_round_FUN_005c03a0  ; 0056fd36
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP qword ptr [EBP + -0x24]       ; 0056fd3b
    MOV EAX,dword ptr [EBP + -0x24]     ; 0056fd3e
    MOV dword ptr [EBP + -0x14],EAX     ; 0056fd41
    MOV EDI,dword ptr [EBP + 0x2c]      ; 0056fd44
    PUSH EDI                            ; 0056fd47
    MOV EAX,dword ptr [EBP + 0x28]      ; 0056fd48
    PUSH EAX                            ; 0056fd4b
    CALL crt_math.c_floor_FUN_005c0880  ; 0056fd4c
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005c0880(double input_value)
    MOV dword ptr [EBP + -0x24],EAX     ; 0056fd51
    MOV dword ptr [EBP + -0x20],EDX     ; 0056fd54
    ADD ESP,0x8                         ; 0056fd57
    FLD double ptr [EBP + -0x24]        ; 0056fd5a
    CALL crt_math.c_round_FUN_005c03a0  ; 0056fd5d
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP qword ptr [EBP + -0x24]       ; 0056fd62
    MOV EAX,dword ptr [EBP + -0x24]     ; 0056fd65
    MOV dword ptr [EBP + -0x10],EAX     ; 0056fd68
    MOV dword ptr [EBP + -0x20],ESI     ; 0056fd6b
    MOV EAX,dword ptr [EBP + -0x10]     ; 0056fd6e
    MOV dword ptr [EBP + -0x24],EAX     ; 0056fd71
    FILD qword ptr [EBP + -0x24]        ; 0056fd74
    FSUBR double ptr [EBP + 0x28]       ; 0056fd77
    FMUL double ptr [0x005f32a0]        ; 0056fd7a | DAT_005f32a0
    CALL crt_math.c_round_FUN_005c03a0  ; 0056fd80
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP qword ptr [EBP + -0x24]       ; 0056fd85
    MOV EAX,dword ptr [EBP + -0x24]     ; 0056fd88
    MOV dword ptr [EBP + -0x1c],EAX     ; 0056fd8b
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0056fd8e
    MOV EAX,dword ptr [EAX]             ; 0056fd91
    MOV dword ptr [EBP + -0x4],EAX      ; 0056fd93
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0056fd96
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056fd99
    MOV dword ptr [EBP + -0xc],EAX      ; 0056fd9c
    PUSHAD                              ; 0056fd9f
    MOV EDI,dword ptr [EBP + 0x18]      ; 0056fda0
    MOV EDX,dword ptr [EDI + 0x4]       ; 0056fda6
    MOV EDI,dword ptr [EDI]             ; 0056fda9
    MOV ESI,dword ptr [EBP + 0xffffffe8] ; 0056fdab
    MOV EAX,dword ptr [EBP + 0xffffffec] ; 0056fdb1
    MOV EBX,dword ptr [EBP + 0x14]      ; 0056fdb7
    XOR ECX,ECX                         ; 0056fdbd
    FILD word ptr [EBX + ESI*0x4]       ; 0056fdbf
        ;   Label: LAB_0056fdbf
    FILD word ptr [EBX + ESI*0x4 + 0x2] ; 0056fdc2
    ADD EAX,dword ptr [EBP + 0xffffffe4] ; 0056fdc6
    ADC ESI,dword ptr [EBP + 0xfffffff0] ; 0056fdcc
    FMUL float ptr [EBP + 0xfffffffc]   ; 0056fdd2
    FADD float ptr [EDI + ECX*0x4]      ; 0056fdd8
    FSTP float ptr [EDI + ECX*0x4]      ; 0056fddb
    FMUL float ptr [EBP + 0xfffffff4]   ; 0056fdde
    FADD float ptr [EDX + ECX*0x4]      ; 0056fde4
    FSTP float ptr [EDX + ECX*0x4]      ; 0056fde7
    INC ECX                             ; 0056fdea
    CMP ECX,dword ptr [EBP + 0x30]      ; 0056fdeb
    JL 0x0056fdbf                       ; 0056fdf1
        ;   XREF to: 0056fdbf (CONDITIONAL_JUMP)  ; LAB_0056fdbf
    POPAD                               ; 0056fdf3
    MOV EAX,dword ptr [EBP + 0x30]      ; 0056fdf4
    MOV dword ptr [EBP + -0x8],EAX      ; 0056fdf7
    FILD dword ptr [EBP + -0x8]         ; 0056fdfa
    FMUL double ptr [EBP + 0x28]        ; 0056fdfd
    FADD double ptr [EBP + 0x20]        ; 0056fe00
    FSTP double ptr [EBP + 0x20]        ; 0056fe03
    JMP 0x0056fcdf                      ; 0056fe06
        ;   XREF to: 0056fcdf (UNCONDITIONAL_JUMP)  ; LAB_0056fcdf


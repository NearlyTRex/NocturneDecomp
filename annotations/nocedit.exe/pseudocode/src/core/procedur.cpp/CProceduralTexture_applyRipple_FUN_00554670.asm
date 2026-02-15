; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_procedur_cpp_CProceduralTexture_applyRipple_FUN_00554670(CProceduralTexture *this_ptr,float wave_x,float wave_y,float wave_offset)
;
; Parameters:
; CProceduralTexture * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   wave_x
; float            Stack[0xc]:4   wave_y
; float            Stack[0x10]:4   wave_offset
; Local Variables:
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_procedur.cpp_CProceduralTexture_createWaterFrames_FUN_005542b0 at 00554411
;
; Referenced Globals:
;   float FLOAT_00640a0c = -32
;   float FLOAT_00640a10 = 0.03125
;   double DOUBLE_00640a18 = 3.14159000000000
;   double DOUBLE_00640a20 = 16
;   double DOUBLE_00640a28 = 0.0078125
;   double DOUBLE_00640a30 = 128
;   uchar[65536] g_RippleBuffer
;   undefined4 DAT_030f6159
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00554670
        ;   Label: core_procedur.cpp_CProceduralTexture_applyRipple_FUN_00554670
    PUSH ESI                            ; 00554671
    PUSH EDI                            ; 00554672
    PUSH EBP                            ; 00554673
    MOV EBP,ESP                         ; 00554674
    SUB ESP,0x30                        ; 00554676
    AND ESP,0xfffffff8                  ; 00554679
    MOV EAX,dword ptr [EBP + 0x20]      ; 0055467c
    MOV dword ptr [ESP + 0x4],EAX       ; 0055467f
    FLD float ptr [ESP + 0x4]           ; 00554683
    FADD float ptr [0x00640a0c]         ; 00554687 | FLOAT_00640a0c
    FST float ptr [ESP]                 ; 0055468d
    FLDZ                                ; 00554690
    FCOMPP                              ; 00554692
    FNSTSW AX                           ; 00554694
    SAHF                                ; 00554696
    JBE 0x0055469e                      ; 00554697
        ;   XREF to: 0055469e (CONDITIONAL_JUMP)  ; LAB_0055469e
    XOR EDX,EDX                         ; 00554699
    MOV dword ptr [ESP],EDX             ; 0055469b
    FLD float ptr [ESP]                 ; 0055469e
        ;   Label: LAB_0055469e
    FMUL ST0                            ; 005546a1
    FLD float ptr [ESP + 0x4]           ; 005546a3
    FMUL ST0                            ; 005546a7
    PUSH 0x10000                        ; 005546a9
    XOR EBX,EBX                         ; 005546ae
    XOR ESI,ESI                         ; 005546b0
    PUSH 0x0                            ; 005546b2
    FXCH                                ; 005546b4
    FSTP float ptr [ESP + 0x8]          ; 005546b6
    PUSH 0x30f6158                      ; 005546ba | g_RippleBuffer
    FSTP float ptr [ESP + 0x20]         ; 005546bf
    CALL crt_memory.c_memset_FUN_005fde40 ; 005546c3
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005546c8
    MOV ECX,ESI                         ; 005546cb
        ;   Label: LAB_005546cb
    XOR EDX,EDX                         ; 005546cd
    MOV dword ptr [ESP + 0x28],EDX      ; 005546cf
        ;   Label: LAB_005546cf
    MOV dword ptr [ESP + 0x2c],EBX      ; 005546d3
    FLD double ptr [0x00640a30]         ; 005546d7 | DOUBLE_00640a30
    FILD dword ptr [ESP + 0x28]         ; 005546dd
    FSUBR ST0,ST1                       ; 005546e1
    FMUL ST0                            ; 005546e3
    FILD dword ptr [ESP + 0x2c]         ; 005546e5
    FSUBP ST2,ST0                       ; 005546e9
    FLD ST1                             ; 005546eb
    FMULP ST2                           ; 005546ed
    FADDP                               ; 005546ef
    FST float ptr [ESP + 0x8]           ; 005546f1
    FCOMP float ptr [ESP + 0x14]        ; 005546f5
    FNSTSW AX                           ; 005546f9
    SAHF                                ; 005546fb
    JBE 0x005547fc                      ; 005546fc
        ;   XREF to: 005547fc (CONDITIONAL_JUMP)  ; LAB_005547fc
    INC EDX                             ; 00554702
        ;   Label: LAB_00554702
    INC ECX                             ; 00554703
    CMP EDX,0x100                       ; 00554704
    JL 0x005546cf                       ; 0055470a
        ;   XREF to: 005546cf (CONDITIONAL_JUMP)  ; LAB_005546cf
    INC EBX                             ; 0055470c
    ADD ESI,0x100                       ; 0055470d
    CMP EBX,0x100                       ; 00554713
    JL 0x005546cb                       ; 00554719
        ;   XREF to: 005546cb (CONDITIONAL_JUMP)  ; LAB_005546cb
    MOV EAX,dword ptr [EBP + 0x14]      ; 0055471b
    XOR ECX,ECX                         ; 0055471e
    MOV dword ptr [ESP + 0x10],EAX      ; 00554720
    MOV dword ptr [ESP + 0x18],ECX      ; 00554724
    MOV EDI,0x100                       ; 00554728
    MOV EBX,dword ptr [ESP + 0x10]      ; 0055472d
        ;   Label: LAB_0055472d
    XOR EDX,EDX                         ; 00554731
    MOV ECX,EBX                         ; 00554733
    MOV dword ptr [ESP + 0x2c],EDX      ; 00554735
        ;   Label: LAB_00554735
    MOV EAX,dword ptr [ESP + 0x18]      ; 00554739
    FILD dword ptr [ESP + 0x2c]         ; 0055473d
    MOV dword ptr [ESP + 0x2c],EAX      ; 00554741
    FSUB float ptr [EBP + 0x18]         ; 00554745
    FILD dword ptr [ESP + 0x2c]         ; 00554748
    FXCH                                ; 0055474c
    CALL crt_math.c_round_FUN_005fe6b0  ; 0055474e
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 00554753
    FSUB float ptr [EBP + 0x1c]         ; 00554755
    FXCH                                ; 00554758
    FISTP dword ptr [ESP + 0x24]        ; 0055475a
    CALL crt_math.c_round_FUN_005fe6b0  ; 0055475e
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    MOV ESI,dword ptr [ESP + 0x24]      ; 00554763
    FISTP dword ptr [ESP + 0x20]        ; 00554767
    TEST ESI,ESI                        ; 0055476b
    JL 0x00554864                       ; 0055476d
        ;   XREF to: 00554864 (CONDITIONAL_JUMP)  ; LAB_00554864
    MOV ESI,dword ptr [ESP + 0x24]      ; 00554773
        ;   Label: LAB_00554773
    CMP EDI,ESI                         ; 00554777
    JG 0x00554785                       ; 00554779
        ;   XREF to: 00554785 (CONDITIONAL_JUMP)  ; LAB_00554785
    LEA EAX,[ESI + 0xffffff00]          ; 0055477b
    MOV dword ptr [ESP + 0x24],EAX      ; 00554781
    MOV ESI,dword ptr [ESP + 0x20]      ; 00554785
        ;   Label: LAB_00554785
    TEST ESI,ESI                        ; 00554789
    JL 0x00554870                       ; 0055478b
        ;   XREF to: 00554870 (CONDITIONAL_JUMP)  ; LAB_00554870
    MOV ESI,dword ptr [ESP + 0x20]      ; 00554791
        ;   Label: LAB_00554791
    CMP EDI,ESI                         ; 00554795
    JG 0x005547a3                       ; 00554797
        ;   XREF to: 005547a3 (CONDITIONAL_JUMP)  ; LAB_005547a3
    LEA EAX,[ESI + 0xffffff00]          ; 00554799
    MOV dword ptr [ESP + 0x20],EAX      ; 0055479f
    MOV ESI,dword ptr [ESP + 0x20]      ; 005547a3
        ;   Label: LAB_005547a3
    SHL ESI,0x8                         ; 005547a7
    XOR EAX,EAX                         ; 005547aa
    ADD ESI,dword ptr [ESP + 0x24]      ; 005547ac
    MOV AL,byte ptr [EBX + 0x8]         ; 005547b0
    MOVZX ESI,byte ptr [ESI + 0x30f6158] ; 005547b3 | g_RippleBuffer
    ADD EAX,ESI                         ; 005547ba
    CMP EAX,0xff                        ; 005547bc
    JBE 0x005547c8                      ; 005547c1
        ;   XREF to: 005547c8 (CONDITIONAL_JUMP)  ; LAB_005547c8
    MOV EAX,0xff                        ; 005547c3
    INC ECX                             ; 005547c8
        ;   Label: LAB_005547c8
    INC EBX                             ; 005547c9
    INC EDX                             ; 005547ca
    MOV byte ptr [ECX + 0x7],AL         ; 005547cb
    CMP EDX,0x100                       ; 005547ce
    JL 0x00554735                       ; 005547d4
        ;   XREF to: 00554735 (CONDITIONAL_JUMP)  ; LAB_00554735
    MOV EDX,dword ptr [ESP + 0x18]      ; 005547da
    MOV EAX,dword ptr [ESP + 0x10]      ; 005547de
    INC EDX                             ; 005547e2
    ADD EAX,EDI                         ; 005547e3
    MOV dword ptr [ESP + 0x18],EDX      ; 005547e5
    MOV dword ptr [ESP + 0x10],EAX      ; 005547e9
    CMP EDI,EDX                         ; 005547ed
    JG 0x0055472d                       ; 005547ef
        ;   XREF to: 0055472d (CONDITIONAL_JUMP)  ; LAB_0055472d
    MOV ESP,EBP                         ; 005547f5
    POP EBP                             ; 005547f7
    POP EDI                             ; 005547f8
    POP ESI                             ; 005547f9
    POP EBX                             ; 005547fa
    RET                                 ; 005547fb
    FLD float ptr [ESP + 0x8]           ; 005547fc
        ;   Label: LAB_005547fc
    FCOMP float ptr [ESP]               ; 00554800
    FNSTSW AX                           ; 00554803
    SAHF                                ; 00554805
    JC 0x00554702                       ; 00554806
        ;   XREF to: 00554702 (CONDITIONAL_JUMP)  ; LAB_00554702
    FLD float ptr [ESP + 0x8]           ; 0055480c
    FSQRT                               ; 00554810
    FLD float ptr [ESP + 0x4]           ; 00554812
    FLD ST0                             ; 00554816
    FXCH ST2                            ; 00554818
    FSTP float ptr [ESP + 0x8]          ; 0055481a
    FXCH                                ; 0055481e
    FSUB float ptr [ESP + 0x8]          ; 00554820
    FST float ptr [ESP + 0x8]           ; 00554824
    FMUL float ptr [0x00640a10]         ; 00554828 | FLOAT_00640a10
    FMUL double ptr [0x00640a18]        ; 0055482e | DOUBLE_00640a18
    FSIN                                ; 00554834
    FMUL double ptr [0x00640a20]        ; 00554836 | DOUBLE_00640a20
    FXCH                                ; 0055483c
    FSUBR double ptr [0x00640a30]       ; 0055483e | DOUBLE_00640a30
    FMULP                               ; 00554844
    FMUL double ptr [0x00640a28]        ; 00554846 | DOUBLE_00640a28
    CALL crt_math.c_round_FUN_005fe6b0  ; 0055484c
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x2c]        ; 00554851
    MOV AL,byte ptr [ESP + 0x2c]        ; 00554855
    MOV byte ptr [ECX + 0x30f6158],AL   ; 00554859 | DAT_030f6159
    JMP 0x00554702                      ; 0055485f
        ;   XREF to: 00554702 (UNCONDITIONAL_JUMP)  ; LAB_00554702
    LEA EAX,[ESI + EDI*0x1]             ; 00554864
        ;   Label: LAB_00554864
    MOV dword ptr [ESP + 0x24],EAX      ; 00554867
    JMP 0x00554773                      ; 0055486b
        ;   XREF to: 00554773 (UNCONDITIONAL_JUMP)  ; LAB_00554773
    LEA EAX,[ESI + EDI*0x1]             ; 00554870
        ;   Label: LAB_00554870
    MOV dword ptr [ESP + 0x20],EAX      ; 00554873
    JMP 0x00554791                      ; 00554877
        ;   XREF to: 00554791 (UNCONDITIONAL_JUMP)  ; LAB_00554791


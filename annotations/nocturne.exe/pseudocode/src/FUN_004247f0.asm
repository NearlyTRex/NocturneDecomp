; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004247f0(int param_1,float *param_2,int param_3,float *param_4,float param_5,float param_6)
;
; Local Variables:
; undefined4       Stack[-0x11c]:4  local_11c
; undefined8       Stack[-0x118]:8  local_118
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined        Stack[-0xf8]:1  local_f8
; undefined        Stack[-0xec]:1  local_ec
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined        Stack[-0xd4]:1  local_d4
; undefined        Stack[-0xc8]:1  local_c8
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined        Stack[-0xb0]:1  local_b0
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined        Stack[-0x74]:1  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
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
; XREF[27]:
;   FUN_00412480 at 00412b19
;   FUN_00413800 at 004141de
;   FUN_00418a00 at 004193d1
;   FUN_004196b0 at 00419918
;   FUN_0041fe40 at 0042017b
;   FUN_00428780 at 00428a53
;   FUN_00428c00 at 00428d22
;   FUN_0042a1e0 at 0042a4bc
;   FUN_0042af70 at 0042afe0
;   FUN_0043bdb0 at 0043c25c
;   ... and 17 more
;
; Referenced Globals:
;   string s_CCharacter::walkToPoint_-_go_som_00579ed8
;   undefined4 DAT_00579f0a
;   undefined4 DAT_00579f12
;   undefined4 DAT_00579f1a
;   undefined4 DAT_00579f22
;   undefined4 DAT_00579f2a
;   undefined4 DAT_00579f32
;   undefined4 DAT_00579f3a
;   void* PTR_DAT_005ad350 = 0077ad0c
;   undefined4 DAT_0077ad0c
;
; Called Functions:
;   FUN_0040a200
;   FUN_0040a240
;   FUN_0040a290
;   FUN_0040df00
;   FUN_0043ac60
;   FUN_004f1600
;   FUN_004f1e00
;   FUN_0054e4a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004247f0
        ;   Label: FUN_004247f0
    PUSH ESI                            ; 004247f1
    PUSH EDI                            ; 004247f2
    PUSH EBP                            ; 004247f3
    MOV EBP,ESP                         ; 004247f4
    SUB ESP,0x104                       ; 004247f6
    AND ESP,0xfffffff8                  ; 004247fc
    MOV EBX,dword ptr [EBP + 0x14]      ; 004247ff
    MOV EDI,dword ptr [EBP + 0x18]      ; 00424802
    MOV ESI,dword ptr [EBP + 0x20]      ; 00424805
    FLD float ptr [ESI + 0x8]           ; 00424808
    FMUL ST0                            ; 0042480b
    MOV EAX,dword ptr [EBX + 0x242c]    ; 0042480d
    FLD float ptr [ESI]                 ; 00424813
    FMUL ST0                            ; 00424815
    MOV dword ptr [ESP + 0x8],EAX       ; 00424817
    MOV EAX,dword ptr [EBX + 0x2430]    ; 0042481b
    FADDP                               ; 00424821
    MOV dword ptr [ESP + 0xfc],EAX      ; 00424823
    FSQRT                               ; 0042482a
    PUSH ESI                            ; 0042482c
    LEA EAX,[ESP + 0x6c]                ; 0042482d
    PUSH EAX                            ; 00424831
    FSTP float ptr [ESP + 0x20]         ; 00424832
    CALL FUN_0054e4a0                   ; 00424836
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e4a0()
    ADD ESP,0x8                         ; 0042483b
    MOV EAX,dword ptr [EAX + 0x4]       ; 0042483e
    PUSH EDI                            ; 00424841
    MOV dword ptr [ESP + 0x14],EAX      ; 00424842
    LEA EAX,[ESP + 0x60]                ; 00424846
    PUSH EAX                            ; 0042484a
    PUSH EBX                            ; 0042484b
    CALL FUN_0040a290                   ; 0042484c
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a290()
    ADD ESP,0xc                         ; 00424851
    FLD float ptr [ESP + 0x64]          ; 00424854
    FMUL ST0                            ; 00424858
    FLD float ptr [ESP + 0x5c]          ; 0042485a
    FMUL ST0                            ; 0042485e
    FADDP                               ; 00424860
    FSQRT                               ; 00424862
    LEA EAX,[ESP + 0x5c]                ; 00424864
    PUSH EAX                            ; 00424868
    LEA EAX,[ESP + 0x48]                ; 00424869
    PUSH EAX                            ; 0042486d
    FSTP float ptr [ESP + 0x14]         ; 0042486e
    CALL FUN_0054e4a0                   ; 00424872
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e4a0()
    ADD ESP,0x8                         ; 00424877
    MOV EAX,dword ptr [EAX + 0x4]       ; 0042487a
    FLD float ptr [ESP + 0xc]           ; 0042487d
    FSUB float ptr [ESP + 0x18]         ; 00424881
    MOV dword ptr [ESP + 0xf8],EAX      ; 00424885
    FABS                                ; 0042488c
    FLD float ptr [ESI + 0x4]           ; 0042488e
    FMUL ST0                            ; 00424891
    FLD float ptr [ESI]                 ; 00424893
    FMUL ST0                            ; 00424895
    FADDP                               ; 00424897
    FLD float ptr [ESI + 0x8]           ; 00424899
    FMUL ST0                            ; 0042489c
    FADDP                               ; 0042489e
    FSQRT                               ; 004248a0
    XOR EDX,EDX                         ; 004248a2
    MOV dword ptr [ESP + 0xcc],EDX      ; 004248a4
    MOV dword ptr [ESP + 0x1c],EDX      ; 004248ab
    FXCH                                ; 004248af
    FSTP float ptr [ESP + 0x14]         ; 004248b1
    FLDZ                                ; 004248b5
    FCOMPP                              ; 004248b7
    FNSTSW AX                           ; 004248b9
    SAHF                                ; 004248bb
    JC 0x004249a2                       ; 004248bc
        ;   XREF to: 004249a2 (CONDITIONAL_JUMP)  ; LAB_004249a2
    FLD float ptr [EBP + 0x24]          ; 004248c2
        ;   Label: LAB_004248c2
    FADD double ptr [0x00579f0a]        ; 004248c5 | DAT_00579f0a
    FLD float ptr [ESP + 0x14]          ; 004248cb
    FCOMPP                              ; 004248cf
    FNSTSW AX                           ; 004248d1
    SAHF                                ; 004248d3
    JNC 0x00424906                      ; 004248d4
        ;   XREF to: 00424906 (CONDITIONAL_JUMP)  ; LAB_00424906
    FLD float ptr [EBP + 0x28]          ; 004248d6
    FADD double ptr [0x00579f0a]        ; 004248d9 | DAT_00579f0a
    FLD float ptr [ESP + 0x1c]          ; 004248df
    FCOMPP                              ; 004248e3
    FNSTSW AX                           ; 004248e5
    SAHF                                ; 004248e7
    JNC 0x00424906                      ; 004248e8
        ;   XREF to: 00424906 (CONDITIONAL_JUMP)  ; LAB_00424906
    FLD float ptr [ESP + 0x60]          ; 004248ea
    FABS                                ; 004248ee
    FCOMP double ptr [0x00579f12]       ; 004248f0 | DAT_00579f12
    FNSTSW AX                           ; 004248f6
    SAHF                                ; 004248f8
    JNC 0x00424906                      ; 004248f9
        ;   XREF to: 00424906 (CONDITIONAL_JUMP)  ; LAB_00424906
    MOV dword ptr [ESP + 0xcc],0x1      ; 004248fb
    LEA EAX,[EBX + 0x23a4]              ; 00424906
        ;   Label: LAB_00424906
    MOV dword ptr [EAX + 0x8],0x0       ; 0042490c
    FLD float ptr [ESP + 0x10]          ; 00424913
    MOV EDX,dword ptr [EAX + 0x8]       ; 00424917
    MOV dword ptr [EAX + 0x4],EDX       ; 0042491a
    MOV EDX,dword ptr [EAX + 0x4]       ; 0042491d
    MOV dword ptr [EAX],EDX             ; 00424920
    FABS                                ; 00424922
    FMUL double ptr [0x00579f1a]        ; 00424924 | DAT_00579f1a
    FMUL double ptr [0x00579f22]        ; 0042492a | DAT_00579f22
    FLD float ptr [ESP + 0x18]          ; 00424930
    FST double ptr [ESP]                ; 00424934
    FMUL double ptr [0x00579f2a]        ; 00424937 | DAT_00579f2a
    FADD double ptr [0x00579f32]        ; 0042493d | DAT_00579f32
    FADDP                               ; 00424943
    FCOMP float ptr [ESP + 0xc]         ; 00424945
    FNSTSW AX                           ; 00424949
    SAHF                                ; 0042494b
    JA 0x004249d4                       ; 0042494c
        ;   XREF to: 004249d4 (CONDITIONAL_JUMP)  ; LAB_004249d4
    CMP dword ptr [EBP + 0x1c],0x0      ; 00424952
        ;   Label: LAB_00424952
    JNZ 0x00424964                      ; 00424956
        ;   XREF to: 00424964 (CONDITIONAL_JUMP)  ; LAB_00424964
    PUSH EDI                            ; 00424958
    CALL FUN_004f1e00                   ; 00424959
        ;   XREF to: 004f1e00 (UNCONDITIONAL_CALL)  ; undefined FUN_004f1e00()
    ADD ESP,0x4                         ; 0042495e
    MOV dword ptr [EBP + 0x1c],EAX      ; 00424961
    MOV ESI,dword ptr [EBX + 0x6c]      ; 00424964
        ;   Label: LAB_00424964
    PUSH ESI                            ; 00424967
    LEA EAX,[ESP + 0xa8]                ; 00424968
    PUSH EAX                            ; 0042496f
    LEA EAX,[EBX + 0x20]                ; 00424970
    PUSH EAX                            ; 00424973
    MOV EDI,dword ptr [EBP + 0x1c]      ; 00424974
    PUSH EDI                            ; 00424977
    CALL FUN_004f1600                   ; 00424978
        ;   XREF to: 004f1600 (UNCONDITIONAL_CALL)  ; undefined FUN_004f1600()
    ADD ESP,0x10                        ; 0042497d
    TEST EAX,EAX                        ; 00424980
    JNZ 0x00424ba2                      ; 00424982
        ;   XREF to: 00424ba2 (CONDITIONAL_JUMP)  ; LAB_00424ba2
    CMP dword ptr [ESP + 0xcc],0x0      ; 00424988
    JZ 0x00424b82                       ; 00424990
        ;   XREF to: 00424b82 (CONDITIONAL_JUMP)  ; LAB_00424b82
    MOV EAX,0x1                         ; 00424996
    MOV ESP,EBP                         ; 0042499b
        ;   Label: LAB_0042499b
    POP EBP                             ; 0042499d
    POP EDI                             ; 0042499e
    POP ESI                             ; 0042499f
    POP EBX                             ; 004249a0
    RET                                 ; 004249a1
    FLD float ptr [ESP + 0xf8]          ; 004249a2
        ;   Label: LAB_004249a2
    FSUB float ptr [ESP + 0x10]         ; 004249a9
    SUB ESP,0x4                         ; 004249ad
    FSTP float ptr [ESP]                ; 004249b0
    CALL FUN_0040df00                   ; 004249b3
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040df00()
    MOV dword ptr [ESP + 0x104],EAX     ; 004249b8
    FLD float ptr [ESP + 0x104]         ; 004249bf
    FABS                                ; 004249c6
    ADD ESP,0x4                         ; 004249c8
    FSTP float ptr [ESP + 0x1c]         ; 004249cb
    JMP 0x004248c2                      ; 004249cf
        ;   XREF to: 004248c2 (UNCONDITIONAL_JUMP)  ; LAB_004248c2
    FLD float ptr [ESP + 0x60]          ; 004249d4
        ;   Label: LAB_004249d4
    FABS                                ; 004249d8
    FLD1                                ; 004249da
    FCOMPP                              ; 004249dc
    FNSTSW AX                           ; 004249de
    SAHF                                ; 004249e0
    JC 0x00424952                       ; 004249e1
        ;   XREF to: 00424952 (CONDITIONAL_JUMP)  ; LAB_00424952
    FLD float ptr [ESP + 0x8]           ; 004249e7
    FMUL double ptr [0x00579f3a]        ; 004249eb | DAT_00579f3a
    FADD double ptr [ESP]               ; 004249f1
    FLD float ptr [ESP + 0xc]           ; 004249f4
    FCOMPP                              ; 004249f8
    FNSTSW AX                           ; 004249fa
    SAHF                                ; 004249fc
    JNC 0x00424cdf                      ; 004249fd
        ;   XREF to: 00424cdf (CONDITIONAL_JUMP)  ; LAB_00424cdf
    FLD float ptr [ESP + 0x60]          ; 00424a03
    FLD float ptr [ESP + 0x5c]          ; 00424a07
    FSUB float ptr [ESI]                ; 00424a0b
    FLD float ptr [ESP + 0x64]          ; 00424a0d
    FXCH                                ; 00424a11
    FSTP float ptr [ESP + 0x38]         ; 00424a13
    FXCH                                ; 00424a17
    FSUB float ptr [ESI + 0x4]          ; 00424a19
    FLD float ptr [ESP + 0x38]          ; 00424a1c
    FXCH                                ; 00424a20
    FSTP float ptr [ESP + 0x3c]         ; 00424a22
    FXCH                                ; 00424a26
    FSUB float ptr [ESI + 0x8]          ; 00424a28
    FXCH                                ; 00424a2b
    FMUL float ptr [ESP + 0x38]         ; 00424a2d
    FXCH                                ; 00424a31
    FST float ptr [ESP + 0x40]          ; 00424a33
    FMUL float ptr [ESP + 0x40]         ; 00424a37
    FADDP                               ; 00424a3b
    FSQRT                               ; 00424a3d
    XOR EDX,EDX                         ; 00424a3f
    MOV dword ptr [ESP + 0x3c],EDX      ; 00424a41
    FST float ptr [ESP + 0xb8]          ; 00424a45
    FCOMP float ptr [ESP + 0x8]         ; 00424a4c
    FNSTSW AX                           ; 00424a50
    SAHF                                ; 00424a52
    JBE 0x00424a96                      ; 00424a53
        ;   XREF to: 00424a96 (CONDITIONAL_JUMP)  ; LAB_00424a96
    FLD float ptr [ESP + 0x8]           ; 00424a55
    FDIV float ptr [ESP + 0xb8]         ; 00424a59
    FLD float ptr [ESP + 0x38]          ; 00424a60
    FXCH                                ; 00424a64
    FSTP float ptr [ESP + 0xd0]         ; 00424a66
    FMUL float ptr [ESP + 0xd0]         ; 00424a6d
    FLDZ                                ; 00424a74
    FMUL float ptr [ESP + 0xd0]         ; 00424a76
    FLD float ptr [ESP + 0x40]          ; 00424a7d
    FMUL float ptr [ESP + 0xd0]         ; 00424a81
    FXCH ST2                            ; 00424a88
    FSTP float ptr [ESP + 0x38]         ; 00424a8a
    FSTP float ptr [ESP + 0x3c]         ; 00424a8e
    FSTP float ptr [ESP + 0x40]         ; 00424a92
    LEA ESI,[EBX + 0x2414]              ; 00424a96
        ;   Label: LAB_00424a96
    LEA EAX,[ESP + 0x98]                ; 00424a9c
    FLD float ptr [ESI + 0x4]           ; 00424aa3
    FLD float ptr [ESI]                 ; 00424aa6
    FADD float ptr [ESP + 0x38]         ; 00424aa8
    FLD float ptr [ESI + 0x8]           ; 00424aac
    FXCH                                ; 00424aaf
    FSTP float ptr [ESI]                ; 00424ab1
    FXCH                                ; 00424ab3
    FADD float ptr [ESP + 0x3c]         ; 00424ab5
    PUSH EAX                            ; 00424ab9
    FSTP float ptr [ESI + 0x4]          ; 00424aba
    FADD float ptr [ESP + 0x44]         ; 00424abd
    LEA EAX,[ESP + 0x54]                ; 00424ac1
    FSTP float ptr [ESI + 0x8]          ; 00424ac5
    FLD float ptr [ESP + 0x60]          ; 00424ac8
    FSUB float ptr [ESI]                ; 00424acc
    FLD float ptr [ESP + 0x64]          ; 00424ace
    FXCH                                ; 00424ad2
    FSTP float ptr [ESP + 0x9c]         ; 00424ad4
    FSUB float ptr [ESI + 0x4]          ; 00424adb
    FLD float ptr [ESP + 0x68]          ; 00424ade
    FXCH                                ; 00424ae2
    FSTP float ptr [ESP + 0xa0]         ; 00424ae4
    FSUB float ptr [ESI + 0x8]          ; 00424aeb
    PUSH EAX                            ; 00424aee
    FSTP float ptr [ESP + 0xa8]         ; 00424aef
    CALL FUN_0054e4a0                   ; 00424af6
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e4a0()
    ADD ESP,0x8                         ; 00424afb
    FLD float ptr [EAX + 0x4]           ; 00424afe
    FSUB float ptr [ESP + 0x10]         ; 00424b01
    SUB ESP,0x4                         ; 00424b05
    FSTP float ptr [ESP]                ; 00424b08
    CALL FUN_0040df00                   ; 00424b0b
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040df00()
    MOV dword ptr [ESP + 0x104],EAX     ; 00424b10
    FLD float ptr [ESP + 0x104]         ; 00424b17
    ADD ESP,0x4                         ; 00424b1e
    FLD float ptr [ESP + 0xfc]          ; 00424b21
    FXCH                                ; 00424b28
    FST float ptr [ESP + 0xf0]          ; 00424b2a
    FXCH                                ; 00424b31
    FCHS                                ; 00424b33
    FSTP float ptr [ESP + 0xc0]         ; 00424b35
    FCOMP float ptr [ESP + 0xc0]        ; 00424b3c
    FNSTSW AX                           ; 00424b43
    SAHF                                ; 00424b45
    JNC 0x00424cb4                      ; 00424b46
        ;   XREF to: 00424cb4 (CONDITIONAL_JUMP)  ; LAB_00424cb4
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00424b4c
    MOV dword ptr [ESP + 0xe0],EAX      ; 00424b53
        ;   Label: LAB_00424b53
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00424b5a
    MOV dword ptr [EBX + 0x2410],EAX    ; 00424b61
        ;   Label: LAB_00424b61
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00424b67
        ;   Label: LAB_00424b67
    TEST EAX,EAX                        ; 00424b6e
    JZ 0x0042499b                       ; 00424b70
        ;   XREF to: 0042499b (CONDITIONAL_JUMP)  ; LAB_0042499b
    MOV EAX,0x1                         ; 00424b76
    MOV ESP,EBP                         ; 00424b7b
    POP EBP                             ; 00424b7d
    POP EDI                             ; 00424b7e
    POP ESI                             ; 00424b7f
    POP EBX                             ; 00424b80
    RET                                 ; 00424b81
    PUSH 0x579ed8                       ; 00424b82 | = "CCharacter::walkToPoint - go somewher..."
        ;   Label: LAB_00424b82
    MOV ECX,dword ptr [0x005ad350]      ; 00424b87 | PTR_DAT_005ad350
    PUSH ECX                            ; 00424b8d | DAT_0077ad0c
    CALL FUN_0043ac60                   ; 00424b8e
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined FUN_0043ac60()
    MOV EAX,0xffffffff                  ; 00424b93
    ADD ESP,0x8                         ; 00424b98
    MOV ESP,EBP                         ; 00424b9b
    POP EBP                             ; 00424b9d
    POP EDI                             ; 00424b9e
    POP ESI                             ; 00424b9f
    POP EBX                             ; 00424ba0
    RET                                 ; 00424ba1
    FLD float ptr [ESP + 0xc]           ; 00424ba2
        ;   Label: LAB_00424ba2
    FLD float ptr [ESP + 0x8]           ; 00424ba6
    LEA EDX,[EBX + 0x241c]              ; 00424baa
    FCHS                                ; 00424bb0
    FXCH                                ; 00424bb2
    FSUB float ptr [ESP + 0x18]         ; 00424bb4
    FXCH                                ; 00424bb8
    FSTP float ptr [ESP + 0xc4]         ; 00424bba
    FST float ptr [ESP + 0xc8]          ; 00424bc1
    FCOMP float ptr [ESP + 0xc4]        ; 00424bc8
    FNSTSW AX                           ; 00424bcf
    SAHF                                ; 00424bd1
    JNC 0x00424c6a                      ; 00424bd2
        ;   XREF to: 00424c6a (CONDITIONAL_JUMP)  ; LAB_00424c6a
    MOV EAX,dword ptr [ESP + 0xc4]      ; 00424bd8
    MOV dword ptr [ESP + 0xd4],EAX      ; 00424bdf
        ;   Label: LAB_00424bdf
    FLD float ptr [EDX]                 ; 00424be6
    FADD float ptr [ESP + 0xd4]         ; 00424be8
    FSTP float ptr [EDX]                ; 00424bef
    FLD float ptr [ESP + 0xa8]          ; 00424bf1
    FSUB float ptr [EBX + 0x34]         ; 00424bf8
    FSTP float ptr [ESP + 0x100]        ; 00424bfb
    PUSH dword ptr [ESP + 0x100]        ; 00424c02
    CALL FUN_0040df00                   ; 00424c09
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040df00()
    MOV dword ptr [ESP + 0x104],EAX     ; 00424c0e
    FLD float ptr [ESP + 0x104]         ; 00424c15
    ADD ESP,0x4                         ; 00424c1c
    ADD EBX,0x2410                      ; 00424c1f
    FLD float ptr [ESP + 0xfc]          ; 00424c25
    FXCH                                ; 00424c2c
    FST float ptr [ESP + 0xf4]          ; 00424c2e
    FXCH                                ; 00424c35
    FCHS                                ; 00424c37
    FSTP float ptr [ESP + 0xbc]         ; 00424c39
    FCOMP float ptr [ESP + 0xbc]        ; 00424c40
    FNSTSW AX                           ; 00424c47
    SAHF                                ; 00424c49
    JNC 0x00424c8f                      ; 00424c4a
        ;   XREF to: 00424c8f (CONDITIONAL_JUMP)  ; LAB_00424c8f
    MOV EAX,dword ptr [ESP + 0xbc]      ; 00424c4c
    MOV dword ptr [ESP + 0xd8],EAX      ; 00424c53
        ;   Label: LAB_00424c53
    FLD float ptr [EBX]                 ; 00424c5a
    FADD float ptr [ESP + 0xd8]         ; 00424c5c
    FSTP float ptr [EBX]                ; 00424c63
    JMP 0x00424b67                      ; 00424c65
        ;   XREF to: 00424b67 (UNCONDITIONAL_JUMP)  ; LAB_00424b67
    FLD float ptr [ESP + 0xc8]          ; 00424c6a
        ;   Label: LAB_00424c6a
    FCOMP float ptr [ESP + 0x8]         ; 00424c71
    FNSTSW AX                           ; 00424c75
    SAHF                                ; 00424c77
    JBE 0x00424c83                      ; 00424c78
        ;   XREF to: 00424c83 (CONDITIONAL_JUMP)  ; LAB_00424c83
    MOV EAX,dword ptr [ESP + 0x8]       ; 00424c7a
    JMP 0x00424bdf                      ; 00424c7e
        ;   XREF to: 00424bdf (UNCONDITIONAL_JUMP)  ; LAB_00424bdf
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00424c83
        ;   Label: LAB_00424c83
    JMP 0x00424bdf                      ; 00424c8a
        ;   XREF to: 00424bdf (UNCONDITIONAL_JUMP)  ; LAB_00424bdf
    FLD float ptr [ESP + 0xf4]          ; 00424c8f
        ;   Label: LAB_00424c8f
    FCOMP float ptr [ESP + 0xfc]        ; 00424c96
    FNSTSW AX                           ; 00424c9d
    SAHF                                ; 00424c9f
    JBE 0x00424cab                      ; 00424ca0
        ;   XREF to: 00424cab (CONDITIONAL_JUMP)  ; LAB_00424cab
    MOV EAX,dword ptr [ESP + 0xfc]      ; 00424ca2
    JMP 0x00424c53                      ; 00424ca9
        ;   XREF to: 00424c53 (UNCONDITIONAL_JUMP)  ; LAB_00424c53
    MOV EAX,dword ptr [ESP + 0xf4]      ; 00424cab
        ;   Label: LAB_00424cab
    JMP 0x00424c53                      ; 00424cb2
        ;   XREF to: 00424c53 (UNCONDITIONAL_JUMP)  ; LAB_00424c53
    FLD float ptr [ESP + 0xf0]          ; 00424cb4
        ;   Label: LAB_00424cb4
    FCOMP float ptr [ESP + 0xfc]        ; 00424cbb
    FNSTSW AX                           ; 00424cc2
    SAHF                                ; 00424cc4
    JBE 0x00424cd3                      ; 00424cc5
        ;   XREF to: 00424cd3 (CONDITIONAL_JUMP)  ; LAB_00424cd3
    MOV EAX,dword ptr [ESP + 0xfc]      ; 00424cc7
    JMP 0x00424b53                      ; 00424cce
        ;   XREF to: 00424b53 (UNCONDITIONAL_JUMP)  ; LAB_00424b53
    MOV EAX,dword ptr [ESP + 0xf0]      ; 00424cd3
        ;   Label: LAB_00424cd3
    JMP 0x00424b53                      ; 00424cda
        ;   XREF to: 00424b53 (UNCONDITIONAL_JUMP)  ; LAB_00424b53
    FLD float ptr [ESP + 0xc]           ; 00424cdf
        ;   Label: LAB_00424cdf
    FLD float ptr [ESP + 0x8]           ; 00424ce3
    LEA EDX,[EBX + 0x241c]              ; 00424ce7
    FCHS                                ; 00424ced
    FXCH                                ; 00424cef
    FSUB float ptr [ESP + 0x18]         ; 00424cf1
    FXCH                                ; 00424cf5
    FSTP float ptr [ESP + 0xb4]         ; 00424cf7
    FST float ptr [ESP + 0xdc]          ; 00424cfe
    FCOMP float ptr [ESP + 0xb4]        ; 00424d05
    FNSTSW AX                           ; 00424d0c
    SAHF                                ; 00424d0e
    JNC 0x00424e21                      ; 00424d0f
        ;   XREF to: 00424e21 (CONDITIONAL_JUMP)  ; LAB_00424e21
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00424d15
    MOV dword ptr [ESP + 0xe8],EAX      ; 00424d1c
        ;   Label: LAB_00424d1c
    LEA EAX,[EBX + 0x2414]              ; 00424d23
    PUSH EAX                            ; 00424d29
    LEA EAX,[ESP + 0x90]                ; 00424d2a
    FLD float ptr [EDX]                 ; 00424d31
    PUSH EAX                            ; 00424d33
    FADD float ptr [ESP + 0xf0]         ; 00424d34
    PUSH EBX                            ; 00424d3b
    FSTP float ptr [EDX]                ; 00424d3c
    CALL FUN_0040a240                   ; 00424d3e
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a240()
    ADD ESP,0xc                         ; 00424d43
    PUSH ESI                            ; 00424d46
    LEA EAX,[ESP + 0x24]                ; 00424d47
    PUSH EAX                            ; 00424d4b
    PUSH EBX                            ; 00424d4c
    CALL FUN_0040a200                   ; 00424d4d
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a200()
    FLD float ptr [EDI]                 ; 00424d52
    FSUB float ptr [EAX]                ; 00424d54
    ADD ESP,0xc                         ; 00424d56
    FST float ptr [ESP + 0x74]          ; 00424d59
    FLD float ptr [EDI + 0x4]           ; 00424d5d
    FSUB float ptr [EAX + 0x4]          ; 00424d60
    FXCH                                ; 00424d63
    FSUB float ptr [ESP + 0x8c]         ; 00424d65
    FXCH                                ; 00424d6c
    FST float ptr [ESP + 0x78]          ; 00424d6e
    FLD float ptr [EDI + 0x8]           ; 00424d72
    FSUB float ptr [EAX + 0x8]          ; 00424d75
    FXCH                                ; 00424d78
    FSUB float ptr [ESP + 0x90]         ; 00424d7a
    FXCH                                ; 00424d81
    FSTP float ptr [ESP + 0x7c]         ; 00424d83
    FXCH                                ; 00424d87
    FSTP float ptr [ESP + 0x80]         ; 00424d89
    FSTP float ptr [ESP + 0x84]         ; 00424d90
    LEA EAX,[ESP + 0x80]                ; 00424d97
    FLD float ptr [ESP + 0x7c]          ; 00424d9e
    PUSH EAX                            ; 00424da2
    LEA EAX,[ESP + 0x30]                ; 00424da3
    FSUB float ptr [ESP + 0x98]         ; 00424da7
    PUSH EAX                            ; 00424dae
    FSTP float ptr [ESP + 0x90]         ; 00424daf
    CALL FUN_0054e4a0                   ; 00424db6
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e4a0()
    FLD float ptr [EAX + 0x4]           ; 00424dbb
    ADD ESP,0x8                         ; 00424dbe
    FSUB float ptr [EBX + 0x34]         ; 00424dc1
    SUB ESP,0x4                         ; 00424dc4
    FSTP float ptr [ESP]                ; 00424dc7
    CALL FUN_0040df00                   ; 00424dca
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040df00()
    MOV dword ptr [ESP + 0x104],EAX     ; 00424dcf
    FLD float ptr [ESP + 0x104]         ; 00424dd6
    ADD ESP,0x4                         ; 00424ddd
    FLD float ptr [ESP + 0xfc]          ; 00424de0
    FXCH                                ; 00424de7
    FST float ptr [ESP + 0xec]          ; 00424de9
    FXCH                                ; 00424df0
    FCHS                                ; 00424df2
    FSTP float ptr [ESP + 0xb0]         ; 00424df4
    FCOMP float ptr [ESP + 0xb0]        ; 00424dfb
    FNSTSW AX                           ; 00424e02
    SAHF                                ; 00424e04
    JNC 0x00424e46                      ; 00424e05
        ;   XREF to: 00424e46 (CONDITIONAL_JUMP)  ; LAB_00424e46
    MOV EAX,dword ptr [ESP + 0xb0]      ; 00424e07
    MOV dword ptr [ESP + 0xe4],EAX      ; 00424e0e
    MOV EAX,dword ptr [ESP + 0xe4]      ; 00424e15
    JMP 0x00424b61                      ; 00424e1c
        ;   XREF to: 00424b61 (UNCONDITIONAL_JUMP)  ; LAB_00424b61
    FLD float ptr [ESP + 0xdc]          ; 00424e21
        ;   Label: LAB_00424e21
    FCOMP float ptr [ESP + 0x8]         ; 00424e28
    FNSTSW AX                           ; 00424e2c
    SAHF                                ; 00424e2e
    JBE 0x00424e3a                      ; 00424e2f
        ;   XREF to: 00424e3a (CONDITIONAL_JUMP)  ; LAB_00424e3a
    MOV EAX,dword ptr [ESP + 0x8]       ; 00424e31
    JMP 0x00424d1c                      ; 00424e35
        ;   XREF to: 00424d1c (UNCONDITIONAL_JUMP)  ; LAB_00424d1c
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00424e3a
        ;   Label: LAB_00424e3a
    JMP 0x00424d1c                      ; 00424e41
        ;   XREF to: 00424d1c (UNCONDITIONAL_JUMP)  ; LAB_00424d1c
    FLD float ptr [ESP + 0xec]          ; 00424e46
        ;   Label: LAB_00424e46
    FCOMP float ptr [ESP + 0xfc]        ; 00424e4d
    FNSTSW AX                           ; 00424e54
    SAHF                                ; 00424e56
    JBE 0x00424e73                      ; 00424e57
        ;   XREF to: 00424e73 (CONDITIONAL_JUMP)  ; LAB_00424e73
    MOV EAX,dword ptr [ESP + 0xfc]      ; 00424e59
    MOV dword ptr [ESP + 0xe4],EAX      ; 00424e60
    MOV EAX,dword ptr [ESP + 0xe4]      ; 00424e67
    JMP 0x00424b61                      ; 00424e6e
        ;   XREF to: 00424b61 (UNCONDITIONAL_JUMP)  ; LAB_00424b61
    MOV EAX,dword ptr [ESP + 0xec]      ; 00424e73
        ;   Label: LAB_00424e73
    MOV dword ptr [ESP + 0xe4],EAX      ; 00424e7a
    MOV EAX,dword ptr [ESP + 0xe4]      ; 00424e81
    JMP 0x00424b61                      ; 00424e88
        ;   XREF to: 00424b61 (UNCONDITIONAL_JUMP)  ; LAB_00424b61


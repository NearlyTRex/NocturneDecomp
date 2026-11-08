; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056ba50(float *param_1)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
;
; XREF[1]:
;   FUN_004ce580 at 004ce735
;
; Referenced Globals:
;   undefined4 DAT_005f2813
;   undefined4 DAT_005f281b
;   undefined4 DAT_005f2823
;   undefined4 DAT_005f282b
;   undefined4 DAT_005f2833
;   undefined4 DAT_005f283b
;   undefined4 DAT_005f283f
;   undefined4 DAT_005f2843
;   undefined4 DAT_005f2847
;   undefined4 DAT_005f284b
;   undefined4 DAT_0061d95c
;   undefined4 DAT_0061f2a4
;   undefined4 DAT_01ccf624
;   undefined4 DAT_01d1bca0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056ba50
        ;   Label: FUN_0056ba50
    PUSH EBP                            ; 0056ba51
    MOV EBP,ESP                         ; 0056ba52
    SUB ESP,0x24                        ; 0056ba54
    AND ESP,0xfffffff8                  ; 0056ba57
    MOV EBX,dword ptr [EBP + 0xc]       ; 0056ba5a
    MOV EAX,[0x0061d95c]                ; 0056ba5d | DAT_0061d95c
    MOV EAX,dword ptr [EAX + 0x294]     ; 0056ba62 | DAT_01ccf624
    PUSH 0x38                           ; 0056ba68
    MOV dword ptr [ESP + 0x8],EAX       ; 0056ba6a
    MOV dword ptr [ESP + 0xc],EAX       ; 0056ba6e
    MOV EAX,[0x0061f2a4]                ; 0056ba72 | DAT_0061f2a4
    PUSH EAX                            ; 0056ba77 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0056ba78 | DAT_01d1bca0
    CALL dword ptr [EDX]                ; 0056ba7a
    ADD ESP,0x8                         ; 0056ba7c
    TEST EAX,EAX                        ; 0056ba7f
    JZ 0x0056bdad                       ; 0056ba81
        ;   XREF to: 0056bdad (CONDITIONAL_JUMP)  ; LAB_0056bdad
    FLD float ptr [ESP + 0x4]           ; 0056ba87
    FMUL double ptr [0x005f281b]        ; 0056ba8b | DAT_005f281b
    FSTP float ptr [ESP + 0x8]          ; 0056ba91
        ;   Label: LAB_0056ba91
    FLD float ptr [ESP + 0x8]           ; 0056ba95
        ;   Label: LAB_0056ba95
    FLD ST0                             ; 0056ba99
    FMUL float ptr [0x005f2823]         ; 0056ba9b | DAT_005f2823
    FLD ST1                             ; 0056baa1
    FMUL double ptr [0x005f282b]        ; 0056baa3 | DAT_005f282b
    PUSH 0x4f                           ; 0056baa9
    MOV EAX,[0x0061f2a4]                ; 0056baab | DAT_0061f2a4
    FXCH ST2                            ; 0056bab0
    FMUL double ptr [0x005f2833]        ; 0056bab2 | DAT_005f2833
    PUSH EAX                            ; 0056bab8 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0056bab9 | DAT_01d1bca0
    FXCH                                ; 0056babb
    FSTP float ptr [ESP + 0x24]         ; 0056babd
    FXCH                                ; 0056bac1
    FSTP float ptr [ESP + 0x8]          ; 0056bac3
    FSTP float ptr [ESP + 0x28]         ; 0056bac7
    CALL dword ptr [EDX]                ; 0056bacb
    ADD ESP,0x8                         ; 0056bacd
    TEST EAX,EAX                        ; 0056bad0
    JZ 0x0056bade                       ; 0056bad2
        ;   XREF to: 0056bade (CONDITIONAL_JUMP)  ; LAB_0056bade
    FLD float ptr [EBX + 0x10]          ; 0056bad4
    FSUB float ptr [ESP + 0x1c]         ; 0056bad7
    FSTP float ptr [EBX + 0x10]         ; 0056badb
    PUSH 0x51                           ; 0056bade
        ;   Label: LAB_0056bade
    MOV EAX,[0x0061f2a4]                ; 0056bae0 | DAT_0061f2a4
    PUSH EAX                            ; 0056bae5 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0056bae6 | DAT_01d1bca0
    CALL dword ptr [EDX]                ; 0056bae8
    ADD ESP,0x8                         ; 0056baea
    TEST EAX,EAX                        ; 0056baed
    JZ 0x0056bafb                       ; 0056baef
        ;   XREF to: 0056bafb (CONDITIONAL_JUMP)  ; LAB_0056bafb
    FLD float ptr [EBX + 0x10]          ; 0056baf1
    FADD float ptr [ESP + 0x1c]         ; 0056baf4
    FSTP float ptr [EBX + 0x10]         ; 0056baf8
    PUSH 0x48                           ; 0056bafb
        ;   Label: LAB_0056bafb
    MOV EAX,[0x0061f2a4]                ; 0056bafd | DAT_0061f2a4
    PUSH EAX                            ; 0056bb02 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0056bb03 | DAT_01d1bca0
    CALL dword ptr [EDX]                ; 0056bb05
    ADD ESP,0x8                         ; 0056bb07
    TEST EAX,EAX                        ; 0056bb0a
    JZ 0x0056bb3a                       ; 0056bb0c
        ;   XREF to: 0056bb3a (CONDITIONAL_JUMP)  ; LAB_0056bb3a
    FLD float ptr [EBX + 0x10]          ; 0056bb0e
    FSINCOS                             ; 0056bb11
    FLD float ptr [ESP]                 ; 0056bb13
    FXCH ST2                            ; 0056bb16
    FMUL ST2                            ; 0056bb18
    FXCH                                ; 0056bb1a
    FMULP ST2                           ; 0056bb1c
    FLD float ptr [EBX]                 ; 0056bb1e
    FLD float ptr [EBX + 0x8]           ; 0056bb20
    FXCH ST2                            ; 0056bb23
    FADD ST0,ST1                        ; 0056bb25
    FXCH ST3                            ; 0056bb27
    FADD ST0,ST2                        ; 0056bb29
    FXCH ST3                            ; 0056bb2b
    FSTP ST1                            ; 0056bb2d
    FXCH ST2                            ; 0056bb2f
    FSTP ST1                            ; 0056bb31
    FXCH                                ; 0056bb33
    FSTP float ptr [EBX]                ; 0056bb35
    FSTP float ptr [EBX + 0x8]          ; 0056bb37
    PUSH 0x50                           ; 0056bb3a
        ;   Label: LAB_0056bb3a
    MOV EAX,[0x0061f2a4]                ; 0056bb3c | DAT_0061f2a4
    PUSH EAX                            ; 0056bb41 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0056bb42 | DAT_01d1bca0
    CALL dword ptr [EDX]                ; 0056bb44
    ADD ESP,0x8                         ; 0056bb46
    TEST EAX,EAX                        ; 0056bb49
    JZ 0x0056bb79                       ; 0056bb4b
        ;   XREF to: 0056bb79 (CONDITIONAL_JUMP)  ; LAB_0056bb79
    FLD float ptr [EBX + 0x10]          ; 0056bb4d
    FSINCOS                             ; 0056bb50
    FLD float ptr [ESP]                 ; 0056bb52
    FXCH ST2                            ; 0056bb55
    FMUL ST2                            ; 0056bb57
    FXCH                                ; 0056bb59
    FMULP ST2                           ; 0056bb5b
    FLD float ptr [EBX]                 ; 0056bb5d
    FLD float ptr [EBX + 0x8]           ; 0056bb5f
    FXCH ST2                            ; 0056bb62
    FSUBR ST0,ST1                       ; 0056bb64
    FXCH ST3                            ; 0056bb66
    FSUBR ST0,ST2                       ; 0056bb68
    FXCH ST3                            ; 0056bb6a
    FSTP ST1                            ; 0056bb6c
    FXCH ST2                            ; 0056bb6e
    FSTP ST1                            ; 0056bb70
    FXCH                                ; 0056bb72
    FSTP float ptr [EBX]                ; 0056bb74
    FSTP float ptr [EBX + 0x8]          ; 0056bb76
    PUSH 0x4b                           ; 0056bb79
        ;   Label: LAB_0056bb79
    MOV EAX,[0x0061f2a4]                ; 0056bb7b | DAT_0061f2a4
    PUSH EAX                            ; 0056bb80 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0056bb81 | DAT_01d1bca0
    CALL dword ptr [EDX]                ; 0056bb83
    ADD ESP,0x8                         ; 0056bb85
    TEST EAX,EAX                        ; 0056bb88
    JZ 0x0056bbc9                       ; 0056bb8a
        ;   XREF to: 0056bbc9 (CONDITIONAL_JUMP)  ; LAB_0056bbc9
    FLD float ptr [0x005f283b]          ; 0056bb8c | DAT_005f283b
    FLD float ptr [EBX + 0x10]          ; 0056bb92
    FADD ST0,ST1                        ; 0056bb95
    FSIN                                ; 0056bb97
    FLD float ptr [EBX + 0x10]          ; 0056bb99
    FADDP ST2,ST0                       ; 0056bb9c
    FXCH                                ; 0056bb9e
    FCOS                                ; 0056bba0
    FLD float ptr [ESP]                 ; 0056bba2
    FXCH ST2                            ; 0056bba5
    FMUL ST2                            ; 0056bba7
    FXCH                                ; 0056bba9
    FMULP ST2                           ; 0056bbab
    FLD float ptr [EBX]                 ; 0056bbad
    FLD float ptr [EBX + 0x8]           ; 0056bbaf
    FXCH ST2                            ; 0056bbb2
    FADD ST0,ST1                        ; 0056bbb4
    FXCH ST3                            ; 0056bbb6
    FADD ST0,ST2                        ; 0056bbb8
    FXCH ST3                            ; 0056bbba
    FSTP ST1                            ; 0056bbbc
    FXCH ST2                            ; 0056bbbe
    FSTP ST1                            ; 0056bbc0
    FXCH                                ; 0056bbc2
    FSTP float ptr [EBX]                ; 0056bbc4
    FSTP float ptr [EBX + 0x8]          ; 0056bbc6
    PUSH 0x4d                           ; 0056bbc9
        ;   Label: LAB_0056bbc9
    MOV EAX,[0x0061f2a4]                ; 0056bbcb | DAT_0061f2a4
    PUSH EAX                            ; 0056bbd0 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0056bbd1 | DAT_01d1bca0
    CALL dword ptr [EDX]                ; 0056bbd3
    ADD ESP,0x8                         ; 0056bbd5
    TEST EAX,EAX                        ; 0056bbd8
    JZ 0x0056bc19                       ; 0056bbda
        ;   XREF to: 0056bc19 (CONDITIONAL_JUMP)  ; LAB_0056bc19
    FLD float ptr [0x005f283f]          ; 0056bbdc | DAT_005f283f
    FLD float ptr [EBX + 0x10]          ; 0056bbe2
    FADD ST0,ST1                        ; 0056bbe5
    FSIN                                ; 0056bbe7
    FLD float ptr [EBX + 0x10]          ; 0056bbe9
    FADDP ST2,ST0                       ; 0056bbec
    FXCH                                ; 0056bbee
    FCOS                                ; 0056bbf0
    FLD float ptr [ESP]                 ; 0056bbf2
    FXCH ST2                            ; 0056bbf5
    FMUL ST2                            ; 0056bbf7
    FXCH                                ; 0056bbf9
    FMULP ST2                           ; 0056bbfb
    FLD float ptr [EBX]                 ; 0056bbfd
    FLD float ptr [EBX + 0x8]           ; 0056bbff
    FXCH ST2                            ; 0056bc02
    FADD ST0,ST1                        ; 0056bc04
    FXCH ST3                            ; 0056bc06
    FADD ST0,ST2                        ; 0056bc08
    FXCH ST3                            ; 0056bc0a
    FSTP ST1                            ; 0056bc0c
    FXCH ST2                            ; 0056bc0e
    FSTP ST1                            ; 0056bc10
    FXCH                                ; 0056bc12
    FSTP float ptr [EBX]                ; 0056bc14
    FSTP float ptr [EBX + 0x8]          ; 0056bc16
    PUSH 0x10                           ; 0056bc19
        ;   Label: LAB_0056bc19
    MOV EAX,[0x0061f2a4]                ; 0056bc1b | DAT_0061f2a4
    PUSH EAX                            ; 0056bc20 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0056bc21 | DAT_01d1bca0
    CALL dword ptr [EDX]                ; 0056bc23
    ADD ESP,0x8                         ; 0056bc25
    TEST EAX,EAX                        ; 0056bc28
    JZ 0x0056bc35                       ; 0056bc2a
        ;   XREF to: 0056bc35 (CONDITIONAL_JUMP)  ; LAB_0056bc35
    FLD float ptr [EBX + 0x4]           ; 0056bc2c
    FADD float ptr [ESP]                ; 0056bc2f
    FSTP float ptr [EBX + 0x4]          ; 0056bc32
    PUSH 0x1e                           ; 0056bc35
        ;   Label: LAB_0056bc35
    MOV EAX,[0x0061f2a4]                ; 0056bc37 | DAT_0061f2a4
    PUSH EAX                            ; 0056bc3c | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0056bc3d | DAT_01d1bca0
    CALL dword ptr [EDX]                ; 0056bc3f
    ADD ESP,0x8                         ; 0056bc41
    TEST EAX,EAX                        ; 0056bc44
    JZ 0x0056bc51                       ; 0056bc46
        ;   XREF to: 0056bc51 (CONDITIONAL_JUMP)  ; LAB_0056bc51
    FLD float ptr [EBX + 0x4]           ; 0056bc48
    FSUB float ptr [ESP]                ; 0056bc4b
    FSTP float ptr [EBX + 0x4]          ; 0056bc4e
    PUSH 0x3f                           ; 0056bc51
        ;   Label: LAB_0056bc51
    MOV EAX,[0x0061f2a4]                ; 0056bc53 | DAT_0061f2a4
    PUSH EAX                            ; 0056bc58 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0056bc59 | DAT_01d1bca0
    CALL dword ptr [EDX]                ; 0056bc5b
    ADD ESP,0x8                         ; 0056bc5d
    TEST EAX,EAX                        ; 0056bc60
    JZ 0x0056bc6e                       ; 0056bc62
        ;   XREF to: 0056bc6e (CONDITIONAL_JUMP)  ; LAB_0056bc6e
    FLD float ptr [EBX + 0xc]           ; 0056bc64
    FSUB float ptr [ESP + 0x1c]         ; 0056bc67
    FSTP float ptr [EBX + 0xc]          ; 0056bc6b
    PUSH 0x42                           ; 0056bc6e
        ;   Label: LAB_0056bc6e
    MOV EAX,[0x0061f2a4]                ; 0056bc70 | DAT_0061f2a4
    PUSH EAX                            ; 0056bc75 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0056bc76 | DAT_01d1bca0
    CALL dword ptr [EDX]                ; 0056bc78
    ADD ESP,0x8                         ; 0056bc7a
    TEST EAX,EAX                        ; 0056bc7d
    JZ 0x0056bc8b                       ; 0056bc7f
        ;   XREF to: 0056bc8b (CONDITIONAL_JUMP)  ; LAB_0056bc8b
    FLD float ptr [EBX + 0xc]           ; 0056bc81
    FADD float ptr [ESP + 0x1c]         ; 0056bc84
    FSTP float ptr [EBX + 0xc]          ; 0056bc88
    PUSH 0x47                           ; 0056bc8b
        ;   Label: LAB_0056bc8b
    MOV EAX,[0x0061f2a4]                ; 0056bc8d | DAT_0061f2a4
    PUSH EAX                            ; 0056bc92 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0056bc93 | DAT_01d1bca0
    CALL dword ptr [EDX]                ; 0056bc95
    ADD ESP,0x8                         ; 0056bc97
    TEST EAX,EAX                        ; 0056bc9a
    JZ 0x0056bca8                       ; 0056bc9c
        ;   XREF to: 0056bca8 (CONDITIONAL_JUMP)  ; LAB_0056bca8
    FLD float ptr [EBX + 0x14]          ; 0056bc9e
    FSUB float ptr [ESP + 0x1c]         ; 0056bca1
    FSTP float ptr [EBX + 0x14]         ; 0056bca5
    PUSH 0x49                           ; 0056bca8
        ;   Label: LAB_0056bca8
    MOV EAX,[0x0061f2a4]                ; 0056bcaa | DAT_0061f2a4
    PUSH EAX                            ; 0056bcaf | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0056bcb0 | DAT_01d1bca0
    CALL dword ptr [EDX]                ; 0056bcb2
    ADD ESP,0x8                         ; 0056bcb4
    TEST EAX,EAX                        ; 0056bcb7
    JZ 0x0056bcc5                       ; 0056bcb9
        ;   XREF to: 0056bcc5 (CONDITIONAL_JUMP)  ; LAB_0056bcc5
    FLD float ptr [EBX + 0x14]          ; 0056bcbb
    FADD float ptr [ESP + 0x1c]         ; 0056bcbe
    FSTP float ptr [EBX + 0x14]         ; 0056bcc2
    PUSH 0xc                            ; 0056bcc5
        ;   Label: LAB_0056bcc5
    MOV EAX,[0x0061f2a4]                ; 0056bcc7 | DAT_0061f2a4
    PUSH EAX                            ; 0056bccc | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0056bccd | DAT_01d1bca0
    CALL dword ptr [EDX]                ; 0056bccf
    ADD ESP,0x8                         ; 0056bcd1
    TEST EAX,EAX                        ; 0056bcd4
    JZ 0x0056bce2                       ; 0056bcd6
        ;   XREF to: 0056bce2 (CONDITIONAL_JUMP)  ; LAB_0056bce2
    FLD float ptr [EBX + 0x18]          ; 0056bcd8
    FSUB float ptr [ESP + 0x20]         ; 0056bcdb
    FSTP float ptr [EBX + 0x18]         ; 0056bcdf
    PUSH 0xd                            ; 0056bce2
        ;   Label: LAB_0056bce2
    MOV EAX,[0x0061f2a4]                ; 0056bce4 | DAT_0061f2a4
    PUSH EAX                            ; 0056bce9 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0056bcea | DAT_01d1bca0
    CALL dword ptr [EDX]                ; 0056bcec
    ADD ESP,0x8                         ; 0056bcee
    TEST EAX,EAX                        ; 0056bcf1
    JZ 0x0056bcff                       ; 0056bcf3
        ;   XREF to: 0056bcff (CONDITIONAL_JUMP)  ; LAB_0056bcff
    FLD float ptr [EBX + 0x18]          ; 0056bcf5
    FADD float ptr [ESP + 0x20]         ; 0056bcf8
    FSTP float ptr [EBX + 0x18]         ; 0056bcfc
    PUSH 0x4c                           ; 0056bcff
        ;   Label: LAB_0056bcff
    MOV EAX,[0x0061f2a4]                ; 0056bd01 | DAT_0061f2a4
    PUSH EAX                            ; 0056bd06 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0056bd07 | DAT_01d1bca0
    CALL dword ptr [EDX]                ; 0056bd09
    ADD ESP,0x8                         ; 0056bd0b
    TEST EAX,EAX                        ; 0056bd0e
    JZ 0x0056bd27                       ; 0056bd10
        ;   XREF to: 0056bd27 (CONDITIONAL_JUMP)  ; LAB_0056bd27
    LEA EAX,[EBX + 0xc]                 ; 0056bd12
    MOV dword ptr [EAX + 0x8],0x0       ; 0056bd15
    MOV EDX,dword ptr [EAX + 0x8]       ; 0056bd1c
    MOV dword ptr [EAX + 0x4],EDX       ; 0056bd1f
    MOV EDX,dword ptr [EAX + 0x4]       ; 0056bd22
    MOV dword ptr [EAX],EDX             ; 0056bd25
    FLD float ptr [EBX + 0x10]          ; 0056bd27
        ;   Label: LAB_0056bd27
    FCOMP float ptr [0x005f2843]        ; 0056bd2a | DAT_005f2843
    FNSTSW AX                           ; 0056bd30
    SAHF                                ; 0056bd32
    JNC 0x0056bd41                      ; 0056bd33
        ;   XREF to: 0056bd41 (CONDITIONAL_JUMP)  ; LAB_0056bd41
    FLD float ptr [EBX + 0x10]          ; 0056bd35
    FADD float ptr [0x005f2847]         ; 0056bd38 | DAT_005f2847
    FSTP float ptr [EBX + 0x10]         ; 0056bd3e
    CMP dword ptr [EBX + 0x10],0x40490fdb ; 0056bd41
        ;   Label: LAB_0056bd41
    JLE 0x0056bd56                      ; 0056bd48
        ;   XREF to: 0056bd56 (CONDITIONAL_JUMP)  ; LAB_0056bd56
    FLD float ptr [EBX + 0x10]          ; 0056bd4a
    FADD float ptr [0x005f284b]         ; 0056bd4d | DAT_005f284b
    FSTP float ptr [EBX + 0x10]         ; 0056bd53
    FLD float ptr [EBX + 0xc]           ; 0056bd56
        ;   Label: LAB_0056bd56
    FCOMP float ptr [0x005f2843]        ; 0056bd59 | DAT_005f2843
    FNSTSW AX                           ; 0056bd5f
    SAHF                                ; 0056bd61
    JNC 0x0056bd70                      ; 0056bd62
        ;   XREF to: 0056bd70 (CONDITIONAL_JUMP)  ; LAB_0056bd70
    FLD float ptr [EBX + 0xc]           ; 0056bd64
    FADD float ptr [0x005f2847]         ; 0056bd67 | DAT_005f2847
    FSTP float ptr [EBX + 0xc]          ; 0056bd6d
    CMP dword ptr [EBX + 0xc],0x40490fdb ; 0056bd70
        ;   Label: LAB_0056bd70
    JLE 0x0056bd85                      ; 0056bd77
        ;   XREF to: 0056bd85 (CONDITIONAL_JUMP)  ; LAB_0056bd85
    FLD float ptr [EBX + 0xc]           ; 0056bd79
    FADD float ptr [0x005f284b]         ; 0056bd7c | DAT_005f284b
    FSTP float ptr [EBX + 0xc]          ; 0056bd82
    FLD float ptr [EBX + 0x14]          ; 0056bd85
        ;   Label: LAB_0056bd85
    FCOMP float ptr [0x005f2843]        ; 0056bd88 | DAT_005f2843
    FNSTSW AX                           ; 0056bd8e
    SAHF                                ; 0056bd90
    JNC 0x0056bd9f                      ; 0056bd91
        ;   XREF to: 0056bd9f (CONDITIONAL_JUMP)  ; LAB_0056bd9f
    FLD float ptr [EBX + 0x14]          ; 0056bd93
    FADD float ptr [0x005f2847]         ; 0056bd96 | DAT_005f2847
    FSTP float ptr [EBX + 0x14]         ; 0056bd9c
    CMP dword ptr [EBX + 0x14],0x40490fdb ; 0056bd9f
        ;   Label: LAB_0056bd9f
    JG 0x0056bdd7                       ; 0056bda6
        ;   XREF to: 0056bdd7 (CONDITIONAL_JUMP)  ; LAB_0056bdd7
    MOV ESP,EBP                         ; 0056bda8
    POP EBP                             ; 0056bdaa
    POP EBX                             ; 0056bdab
    RET                                 ; 0056bdac
    PUSH 0x2a                           ; 0056bdad
        ;   Label: LAB_0056bdad
    MOV EAX,[0x0061f2a4]                ; 0056bdaf | DAT_0061f2a4
    PUSH EAX                            ; 0056bdb4 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0056bdb5 | DAT_01d1bca0
    CALL dword ptr [EDX]                ; 0056bdb7
    ADD ESP,0x8                         ; 0056bdb9
    TEST EAX,EAX                        ; 0056bdbc
    JZ 0x0056ba95                       ; 0056bdbe
        ;   XREF to: 0056ba95 (CONDITIONAL_JUMP)  ; LAB_0056ba95
    FLD float ptr [ESP + 0x4]           ; 0056bdc4
    FLD ST0                             ; 0056bdc8
    FMUL double ptr [0x005f2813]        ; 0056bdca | DAT_005f2813
    FSTP ST1                            ; 0056bdd0
    JMP 0x0056ba91                      ; 0056bdd2
        ;   XREF to: 0056ba91 (UNCONDITIONAL_JUMP)  ; LAB_0056ba91
    FLD float ptr [EBX + 0x14]          ; 0056bdd7
        ;   Label: LAB_0056bdd7
    FADD float ptr [0x005f284b]         ; 0056bdda | DAT_005f284b
    FSTP float ptr [EBX + 0x14]         ; 0056bde0
    MOV ESP,EBP                         ; 0056bde3
    POP EBP                             ; 0056bde5
    POP EBX                             ; 0056bde6
    RET                                 ; 0056bde7


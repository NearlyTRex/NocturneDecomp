; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_00452810(int *param_1,undefined4 *param_2)
;
; Local Variables:
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[1]:
;   FUN_00454520 at 00454543
;
; Called Functions:
;   FUN_00452490
;   FUN_00452770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00452810
        ;   Label: FUN_00452810
    PUSH ESI                            ; 00452811
    PUSH EDI                            ; 00452812
    PUSH EBP                            ; 00452813
    SUB ESP,0x74                        ; 00452814
    MOV ESI,dword ptr [ESP + 0x88]      ; 00452817
    MOV EBX,dword ptr [ESP + 0x8c]      ; 0045281e
    FLD float ptr [ESI + 0xc]           ; 00452825
    FMUL float ptr [EBX + 0x18]         ; 00452828
    FLD float ptr [ESI + 0x14]          ; 0045282b
    FMUL float ptr [EBX + 0x1c]         ; 0045282e
    FADDP                               ; 00452831
    FLDZ                                ; 00452833
    FCOMPP                              ; 00452835
    FNSTSW AX                           ; 00452837
    SAHF                                ; 00452839
    JNC 0x00452c13                      ; 0045283a
        ;   XREF to: 00452c13 (CONDITIONAL_JUMP)  ; LAB_00452c13
    MOV EBP,dword ptr [ESI]             ; 00452840
    FLD float ptr [EBP + 0x8]           ; 00452842
    FMUL float ptr [EBX + 0x1c]         ; 00452845
    MOV EDI,dword ptr [ESI + 0x4]       ; 00452848
    MOV EAX,dword ptr [ESI + 0x8]       ; 0045284b
    FLD float ptr [EDI + 0x8]           ; 0045284e
    FMUL float ptr [EBX + 0x1c]         ; 00452851
    FLD float ptr [EAX + 0x8]           ; 00452854
    FMUL float ptr [EBX + 0x1c]         ; 00452857
    FLD float ptr [EBP]                 ; 0045285a
    FMUL float ptr [EBX + 0x18]         ; 0045285d
    FLD float ptr [EDI]                 ; 00452860
    FMUL float ptr [EBX + 0x18]         ; 00452862
    FLD float ptr [EAX]                 ; 00452865
    FMUL float ptr [EBX + 0x18]         ; 00452867
    MOV dword ptr [ESP + 0x50],EAX      ; 0045286a
    FXCH ST2                            ; 0045286e
    FADDP ST5,ST0                       ; 00452870
    FADDP ST3,ST0                       ; 00452872
    FADDP                               ; 00452874
    FXCH ST2                            ; 00452876
    FSTP float ptr [ESP + 0x54]         ; 00452878
    FSTP float ptr [ESP + 0x64]         ; 0045287c
    FSTP float ptr [ESP + 0x4c]         ; 00452880
    FLD float ptr [ESP + 0x54]          ; 00452884
    FCOMP float ptr [ESP + 0x64]        ; 00452888
    FNSTSW AX                           ; 0045288c
    SAHF                                ; 0045288e
    JA 0x00452c1d                       ; 0045288f
        ;   XREF to: 00452c1d (CONDITIONAL_JUMP)  ; LAB_00452c1d
    FLD float ptr [ESP + 0x64]          ; 00452895
        ;   Label: LAB_00452895
    FCOMP float ptr [ESP + 0x4c]        ; 00452899
    FNSTSW AX                           ; 0045289d
    SAHF                                ; 0045289f
    JBE 0x004528c4                      ; 004528a0
        ;   XREF to: 004528c4 (CONDITIONAL_JUMP)  ; LAB_004528c4
    MOV EAX,dword ptr [ESP + 0x64]      ; 004528a2
    MOV dword ptr [ESP + 0x40],EAX      ; 004528a6
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004528aa
    MOV dword ptr [ESP + 0x64],EAX      ; 004528ae
    MOV EAX,dword ptr [ESP + 0x40]      ; 004528b2
    MOV dword ptr [ESP + 0x4c],EAX      ; 004528b6
    MOV EAX,EDI                         ; 004528ba
    MOV EDI,dword ptr [ESP + 0x50]      ; 004528bc
    MOV dword ptr [ESP + 0x50],EAX      ; 004528c0
    FLD float ptr [ESP + 0x54]          ; 004528c4
        ;   Label: LAB_004528c4
    FCOMP float ptr [ESP + 0x64]        ; 004528c8
    FNSTSW AX                           ; 004528cc
    SAHF                                ; 004528ce
    JBE 0x004528df                      ; 004528cf
        ;   XREF to: 004528df (CONDITIONAL_JUMP)  ; LAB_004528df
    MOV EAX,dword ptr [ESP + 0x64]      ; 004528d1
    MOV dword ptr [ESP + 0x54],EAX      ; 004528d5
    MOV EAX,EBP                         ; 004528d9
    MOV EBP,EDI                         ; 004528db
    MOV EDI,EAX                         ; 004528dd
    FLD float ptr [ESP + 0x4c]          ; 004528df
        ;   Label: LAB_004528df
    FCOMP float ptr [EBX + 0x2c]        ; 004528e3
    FNSTSW AX                           ; 004528e6
    SAHF                                ; 004528e8
    JC 0x00452c13                       ; 004528e9
        ;   XREF to: 00452c13 (CONDITIONAL_JUMP)  ; LAB_00452c13
    FLD float ptr [ESP + 0x54]          ; 004528ef
    FCOMP float ptr [EBX + 0x30]        ; 004528f3
    FNSTSW AX                           ; 004528f6
    SAHF                                ; 004528f8
    JA 0x00452c13                       ; 004528f9
        ;   XREF to: 00452c13 (CONDITIONAL_JUMP)  ; LAB_00452c13
    MOV EAX,dword ptr [ESI]             ; 004528ff
    XOR EDX,EDX                         ; 00452901
    FLD float ptr [EAX + 0x4]           ; 00452903
    MOV dword ptr [ESP + 0x58],EDX      ; 00452906
    FCOMP float ptr [EBX + 0x24]        ; 0045290a
    FNSTSW AX                           ; 0045290d
    SAHF                                ; 0045290f
    JC 0x0045291a                       ; 00452910
        ;   XREF to: 0045291a (CONDITIONAL_JUMP)  ; LAB_0045291a
    MOV dword ptr [ESP + 0x58],0x1      ; 00452912
    MOV EAX,dword ptr [ESI]             ; 0045291a
        ;   Label: LAB_0045291a
    FLD float ptr [EAX + 0x4]           ; 0045291c
    FCOMP float ptr [EBX + 0x28]        ; 0045291f
    FNSTSW AX                           ; 00452922
    SAHF                                ; 00452924
    JA 0x0045292c                       ; 00452925
        ;   XREF to: 0045292c (CONDITIONAL_JUMP)  ; LAB_0045292c
    OR byte ptr [ESP + 0x58],0x2        ; 00452927
    XOR EAX,EAX                         ; 0045292c
        ;   Label: LAB_0045292c
    MOV dword ptr [ESP + 0x5c],EAX      ; 0045292e
    MOV EAX,dword ptr [ESI + 0x4]       ; 00452932
    FLD float ptr [EAX + 0x4]           ; 00452935
    FCOMP float ptr [EBX + 0x24]        ; 00452938
    FNSTSW AX                           ; 0045293b
    SAHF                                ; 0045293d
    JC 0x00452948                       ; 0045293e
        ;   XREF to: 00452948 (CONDITIONAL_JUMP)  ; LAB_00452948
    MOV dword ptr [ESP + 0x5c],0x1      ; 00452940
    MOV EAX,dword ptr [ESI + 0x4]       ; 00452948
        ;   Label: LAB_00452948
    FLD float ptr [EAX + 0x4]           ; 0045294b
    FCOMP float ptr [EBX + 0x28]        ; 0045294e
    FNSTSW AX                           ; 00452951
    SAHF                                ; 00452953
    JA 0x0045295b                       ; 00452954
        ;   XREF to: 0045295b (CONDITIONAL_JUMP)  ; LAB_0045295b
    OR byte ptr [ESP + 0x5c],0x2        ; 00452956
    MOV EAX,dword ptr [ESI + 0x8]       ; 0045295b
        ;   Label: LAB_0045295b
    XOR ECX,ECX                         ; 0045295e
    FLD float ptr [EAX + 0x4]           ; 00452960
    MOV dword ptr [ESP + 0x60],ECX      ; 00452963
    FCOMP float ptr [EBX + 0x24]        ; 00452967
    FNSTSW AX                           ; 0045296a
    SAHF                                ; 0045296c
    JC 0x00452977                       ; 0045296d
        ;   XREF to: 00452977 (CONDITIONAL_JUMP)  ; LAB_00452977
    MOV dword ptr [ESP + 0x60],0x1      ; 0045296f
    MOV EAX,dword ptr [ESI + 0x8]       ; 00452977
        ;   Label: LAB_00452977
    FLD float ptr [EAX + 0x4]           ; 0045297a
    FCOMP float ptr [EBX + 0x28]        ; 0045297d
    FNSTSW AX                           ; 00452980
    SAHF                                ; 00452982
    JA 0x0045298a                       ; 00452983
        ;   XREF to: 0045298a (CONDITIONAL_JUMP)  ; LAB_0045298a
    OR byte ptr [ESP + 0x60],0x2        ; 00452985
    MOV EAX,dword ptr [ESP + 0x58]      ; 0045298a
        ;   Label: LAB_0045298a
    MOV EDX,dword ptr [ESP + 0x5c]      ; 0045298e
    MOV ECX,dword ptr [ESP + 0x60]      ; 00452992
    AND EAX,EDX                         ; 00452996
    TEST EAX,ECX                        ; 00452998
    JNZ 0x00452c13                      ; 0045299a
        ;   XREF to: 00452c13 (CONDITIONAL_JUMP)  ; LAB_00452c13
    FLDZ                                ; 004529a0
    FCOMP float ptr [ESI + 0x10]        ; 004529a2
    FNSTSW AX                           ; 004529a5
    SAHF                                ; 004529a7
    JA 0x00452ad6                       ; 004529a8
        ;   XREF to: 00452ad6 (CONDITIONAL_JUMP)  ; LAB_00452ad6
    MOV EDX,dword ptr [ESP + 0x58]      ; 004529ae
    XOR EDX,dword ptr [ESP + 0x5c]      ; 004529b2
    XOR EAX,EAX                         ; 004529b6
    TEST DL,0x1                         ; 004529b8
    JZ 0x004529f9                       ; 004529bb
        ;   XREF to: 004529f9 (CONDITIONAL_JUMP)  ; LAB_004529f9
    MOV EDX,dword ptr [ESI + 0x4]       ; 004529bd
    MOV EAX,dword ptr [ESI]             ; 004529c0
    FLD float ptr [EDX + 0x4]           ; 004529c2
    FSUB float ptr [EAX + 0x4]          ; 004529c5
    FLD float ptr [EDX]                 ; 004529c8
    FLD float ptr [EBX + 0x24]          ; 004529ca
    FSUB float ptr [EAX + 0x4]          ; 004529cd
    FXCH                                ; 004529d0
    FSUB float ptr [EAX]                ; 004529d2
    FXCH                                ; 004529d4
    FDIVRP ST2,ST0                      ; 004529d6
    FMUL ST1                            ; 004529d8
    FADD float ptr [EAX]                ; 004529da
    FSTP float ptr [ESP + 0x18]         ; 004529dc
    MOV EDX,dword ptr [ESI + 0x4]       ; 004529e0
    MOV EAX,dword ptr [ESI]             ; 004529e3
    FLD float ptr [EDX + 0x8]           ; 004529e5
    FSUB float ptr [EAX + 0x8]          ; 004529e8
    FMULP                               ; 004529eb
    FADD float ptr [EAX + 0x8]          ; 004529ed
    FSTP float ptr [ESP + 0xc]          ; 004529f0
    MOV EAX,0x1                         ; 004529f4
    MOV EDX,dword ptr [ESP + 0x5c]      ; 004529f9
        ;   Label: LAB_004529f9
    XOR EDX,dword ptr [ESP + 0x60]      ; 004529fd
    TEST DL,0x1                         ; 00452a01
    JZ 0x00452a50                       ; 00452a04
        ;   XREF to: 00452a50 (CONDITIONAL_JUMP)  ; LAB_00452a50
    MOV ECX,dword ptr [ESI + 0x8]       ; 00452a06
    MOV EDX,dword ptr [ESI + 0x4]       ; 00452a09
    FLD float ptr [ECX + 0x4]           ; 00452a0c
    FSUB float ptr [EDX + 0x4]          ; 00452a0f
    FLD float ptr [ECX]                 ; 00452a12
    FLD float ptr [EBX + 0x24]          ; 00452a14
    FSUB float ptr [EDX + 0x4]          ; 00452a17
    FXCH                                ; 00452a1a
    FSUB float ptr [EDX]                ; 00452a1c
    FXCH                                ; 00452a1e
    FDIVRP ST2,ST0                      ; 00452a20
    FMUL ST1                            ; 00452a22
    FADD float ptr [EDX]                ; 00452a24
    FSTP float ptr [ESP + EAX*0x4 + 0x18] ; 00452a26
    MOV ECX,dword ptr [ESI + 0x8]       ; 00452a2a
    MOV dword ptr [ESP + 0x68],ECX      ; 00452a2d
    MOV ECX,dword ptr [ESI + 0x4]       ; 00452a31
    MOV dword ptr [ESP + 0x30],ECX      ; 00452a34
    MOV ECX,dword ptr [ESP + 0x68]      ; 00452a38
    FLD float ptr [ECX + 0x8]           ; 00452a3c
    MOV ECX,dword ptr [ESP + 0x30]      ; 00452a3f
    FSUB float ptr [ECX + 0x8]          ; 00452a43
    FMULP                               ; 00452a46
    FADD float ptr [ECX + 0x8]          ; 00452a48
    INC EAX                             ; 00452a4b
    FSTP float ptr [ESP + EAX*0x4 + 0x8] ; 00452a4c
    MOV EDX,dword ptr [ESP + 0x60]      ; 00452a50
        ;   Label: LAB_00452a50
    XOR EDX,dword ptr [ESP + 0x58]      ; 00452a54
    TEST DL,0x1                         ; 00452a58
    JZ 0x00452aa4                       ; 00452a5b
        ;   XREF to: 00452aa4 (CONDITIONAL_JUMP)  ; LAB_00452aa4
    MOV ECX,dword ptr [ESI]             ; 00452a5d
    MOV EDX,dword ptr [ESI + 0x8]       ; 00452a5f
    FLD float ptr [ECX + 0x4]           ; 00452a62
    FSUB float ptr [EDX + 0x4]          ; 00452a65
    FLD float ptr [ECX]                 ; 00452a68
    FLD float ptr [EBX + 0x24]          ; 00452a6a
    FSUB float ptr [EDX + 0x4]          ; 00452a6d
    FXCH                                ; 00452a70
    FSUB float ptr [EDX]                ; 00452a72
    FXCH                                ; 00452a74
    FDIVRP ST2,ST0                      ; 00452a76
    FMUL ST1                            ; 00452a78
    FADD float ptr [EDX]                ; 00452a7a
    LEA EDX,[EAX*0x4 + 0x0]             ; 00452a7c
    FSTP float ptr [ESP + EDX*0x1 + 0x18] ; 00452a83
    MOV ECX,dword ptr [ESI]             ; 00452a87
    MOV dword ptr [ESP + 0x68],EDX      ; 00452a89
    MOV EDX,dword ptr [ESI + 0x8]       ; 00452a8d
    FLD float ptr [ECX + 0x8]           ; 00452a90
    FSUB float ptr [EDX + 0x8]          ; 00452a93
    FMULP                               ; 00452a96
    FADD float ptr [EDX + 0x8]          ; 00452a98
    MOV EDX,dword ptr [ESP + 0x68]      ; 00452a9b
    INC EAX                             ; 00452a9f
    FSTP float ptr [ESP + EDX*0x1 + 0xc] ; 00452aa0
    CMP EAX,0x2                         ; 00452aa4
        ;   Label: LAB_00452aa4
    JL 0x00452ad6                       ; 00452aa7
        ;   XREF to: 00452ad6 (CONDITIONAL_JUMP)  ; LAB_00452ad6
    MOV EAX,dword ptr [ESP + 0x18]      ; 00452aa9
    MOV dword ptr [EBX + 0x3c],EAX      ; 00452aad
    MOV EAX,dword ptr [ESP + 0xc]       ; 00452ab0
    MOV dword ptr [EBX + 0x40],EAX      ; 00452ab4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00452ab7
    MOV dword ptr [EBX + 0x44],EAX      ; 00452abb
    MOV EAX,dword ptr [ESP + 0x10]      ; 00452abe
    PUSH EBX                            ; 00452ac2
    MOV dword ptr [EBX + 0x48],EAX      ; 00452ac3
    CALL FUN_00452490                   ; 00452ac6
        ;   XREF to: 00452490 (UNCONDITIONAL_CALL)  ; undefined FUN_00452490()
    ADD ESP,0x4                         ; 00452acb
    TEST EAX,EAX                        ; 00452ace
    JNZ 0x00452bd4                      ; 00452ad0
        ;   XREF to: 00452bd4 (CONDITIONAL_JUMP)  ; LAB_00452bd4
    FLDZ                                ; 00452ad6
        ;   Label: LAB_00452ad6
    FCOMP float ptr [ESI + 0x10]        ; 00452ad8
    FNSTSW AX                           ; 00452adb
    SAHF                                ; 00452add
    JC 0x00452c80                       ; 00452ade
        ;   XREF to: 00452c80 (CONDITIONAL_JUMP)  ; LAB_00452c80
    MOV EDX,dword ptr [ESP + 0x58]      ; 00452ae4
    XOR EDX,dword ptr [ESP + 0x5c]      ; 00452ae8
    XOR EAX,EAX                         ; 00452aec
    TEST DL,0x2                         ; 00452aee
    JNZ 0x00452c40                      ; 00452af1
        ;   XREF to: 00452c40 (CONDITIONAL_JUMP)  ; LAB_00452c40
    MOV EDX,dword ptr [ESP + 0x5c]      ; 00452af7
        ;   Label: LAB_00452af7
    XOR EDX,dword ptr [ESP + 0x60]      ; 00452afb
    TEST DL,0x2                         ; 00452aff
    JZ 0x00452b4c                       ; 00452b02
        ;   XREF to: 00452b4c (CONDITIONAL_JUMP)  ; LAB_00452b4c
    MOV ECX,dword ptr [ESI + 0x8]       ; 00452b04
    MOV EDX,dword ptr [ESI + 0x4]       ; 00452b07
    FLD float ptr [ECX + 0x4]           ; 00452b0a
    FSUB float ptr [EDX + 0x4]          ; 00452b0d
    FLD float ptr [ECX]                 ; 00452b10
    FLD float ptr [EBX + 0x28]          ; 00452b12
    FSUB float ptr [EDX + 0x4]          ; 00452b15
    FXCH                                ; 00452b18
    FSUB float ptr [EDX]                ; 00452b1a
    FXCH                                ; 00452b1c
    FDIVRP ST2,ST0                      ; 00452b1e
    FMUL ST1                            ; 00452b20
    FADD float ptr [EDX]                ; 00452b22
    LEA EDX,[EAX*0x4 + 0x0]             ; 00452b24
    FSTP float ptr [ESP + EDX*0x1 + 0x24] ; 00452b2b
    MOV ECX,dword ptr [ESI + 0x8]       ; 00452b2f
    MOV dword ptr [ESP + 0x68],EDX      ; 00452b32
    MOV EDX,dword ptr [ESI + 0x4]       ; 00452b36
    FLD float ptr [ECX + 0x8]           ; 00452b39
    FSUB float ptr [EDX + 0x8]          ; 00452b3c
    FMULP                               ; 00452b3f
    FADD float ptr [EDX + 0x8]          ; 00452b41
    MOV EDX,dword ptr [ESP + 0x68]      ; 00452b44
    INC EAX                             ; 00452b48
    FSTP float ptr [ESP + EDX*0x1]      ; 00452b49
    MOV EDX,dword ptr [ESP + 0x60]      ; 00452b4c
        ;   Label: LAB_00452b4c
    XOR EDX,dword ptr [ESP + 0x58]      ; 00452b50
    TEST DL,0x2                         ; 00452b54
    JZ 0x00452b9f                       ; 00452b57
        ;   XREF to: 00452b9f (CONDITIONAL_JUMP)  ; LAB_00452b9f
    MOV ECX,dword ptr [ESI]             ; 00452b59
    MOV EDX,dword ptr [ESI + 0x8]       ; 00452b5b
    FLD float ptr [ECX + 0x4]           ; 00452b5e
    FSUB float ptr [EDX + 0x4]          ; 00452b61
    FLD float ptr [ECX]                 ; 00452b64
    FLD float ptr [EBX + 0x28]          ; 00452b66
    FSUB float ptr [EDX + 0x4]          ; 00452b69
    FXCH                                ; 00452b6c
    FSUB float ptr [EDX]                ; 00452b6e
    FXCH                                ; 00452b70
    FDIVRP ST2,ST0                      ; 00452b72
    FMUL ST1                            ; 00452b74
    FADD float ptr [EDX]                ; 00452b76
    LEA EDX,[EAX*0x4 + 0x0]             ; 00452b78
    FSTP float ptr [ESP + EDX*0x1 + 0x24] ; 00452b7f
    MOV ECX,dword ptr [ESI]             ; 00452b83
    MOV dword ptr [ESP + 0x68],EDX      ; 00452b85
    MOV EDX,dword ptr [ESI + 0x8]       ; 00452b89
    FLD float ptr [ECX + 0x8]           ; 00452b8c
    FSUB float ptr [EDX + 0x8]          ; 00452b8f
    FMULP                               ; 00452b92
    FADD float ptr [EDX + 0x8]          ; 00452b94
    MOV EDX,dword ptr [ESP + 0x68]      ; 00452b97
    INC EAX                             ; 00452b9b
    FSTP float ptr [ESP + EDX*0x1]      ; 00452b9c
    CMP EAX,0x2                         ; 00452b9f
        ;   Label: LAB_00452b9f
    JL 0x00452c80                       ; 00452ba2
        ;   XREF to: 00452c80 (CONDITIONAL_JUMP)  ; LAB_00452c80
    MOV EAX,dword ptr [ESP + 0x24]      ; 00452ba8
    MOV dword ptr [EBX + 0x3c],EAX      ; 00452bac
    MOV EAX,dword ptr [ESP]             ; 00452baf
    MOV dword ptr [EBX + 0x40],EAX      ; 00452bb2
    MOV EAX,dword ptr [ESP + 0x28]      ; 00452bb5
    MOV dword ptr [EBX + 0x44],EAX      ; 00452bb9
    MOV EAX,dword ptr [ESP + 0x4]       ; 00452bbc
    PUSH EBX                            ; 00452bc0
    MOV dword ptr [EBX + 0x48],EAX      ; 00452bc1
    CALL FUN_00452490                   ; 00452bc4
        ;   XREF to: 00452490 (UNCONDITIONAL_CALL)  ; undefined FUN_00452490()
    ADD ESP,0x4                         ; 00452bc9
    TEST EAX,EAX                        ; 00452bcc
    JZ 0x00452c80                       ; 00452bce
        ;   XREF to: 00452c80 (CONDITIONAL_JUMP)  ; LAB_00452c80
    FLD float ptr [EBX + 0x18]          ; 00452bd4
        ;   Label: LAB_00452bd4
    FMUL float ptr [EBX + 0x4c]         ; 00452bd7
    FLD float ptr [EBX + 0x1c]          ; 00452bda
    FMUL float ptr [EBX + 0x4c]         ; 00452bdd
    FLD float ptr [EBX + 0x4c]          ; 00452be0
    MOV dword ptr [EBX + 0x8],0x0       ; 00452be3
    MOV EAX,0x1                         ; 00452bea
    FSTP float ptr [EBX]                ; 00452bef
    FXCH                                ; 00452bf1
    FADD float ptr [EBX + 0x10]         ; 00452bf3
    FXCH                                ; 00452bf6
    FADD float ptr [EBX + 0x14]         ; 00452bf8
    FLD float ptr [EBX + 0x54]          ; 00452bfb
    FLD float ptr [EBX + 0x58]          ; 00452bfe
    FSUBP ST2,ST0                       ; 00452c01
    FSUBP ST2,ST0                       ; 00452c03
    FSTP float ptr [EBX + 0xc]          ; 00452c05
    FSTP float ptr [EBX + 0x4]          ; 00452c08
    ADD ESP,0x74                        ; 00452c0b
    POP EBP                             ; 00452c0e
    POP EDI                             ; 00452c0f
    POP ESI                             ; 00452c10
    POP EBX                             ; 00452c11
    RET                                 ; 00452c12
    XOR EAX,EAX                         ; 00452c13
        ;   Label: LAB_00452c13
    ADD ESP,0x74                        ; 00452c15
    POP EBP                             ; 00452c18
    POP EDI                             ; 00452c19
    POP ESI                             ; 00452c1a
    POP EBX                             ; 00452c1b
    RET                                 ; 00452c1c
    MOV EAX,dword ptr [ESP + 0x54]      ; 00452c1d
        ;   Label: LAB_00452c1d
    MOV dword ptr [ESP + 0x34],EAX      ; 00452c21
    MOV EAX,dword ptr [ESP + 0x64]      ; 00452c25
    MOV dword ptr [ESP + 0x54],EAX      ; 00452c29
    MOV EAX,dword ptr [ESP + 0x34]      ; 00452c2d
    MOV dword ptr [ESP + 0x64],EAX      ; 00452c31
    MOV EAX,EBP                         ; 00452c35
    MOV EBP,EDI                         ; 00452c37
    MOV EDI,EAX                         ; 00452c39
    JMP 0x00452895                      ; 00452c3b
        ;   XREF to: 00452895 (UNCONDITIONAL_JUMP)  ; LAB_00452895
    MOV EDX,dword ptr [ESI + 0x4]       ; 00452c40
        ;   Label: LAB_00452c40
    MOV EAX,dword ptr [ESI]             ; 00452c43
    FLD float ptr [EDX + 0x4]           ; 00452c45
    FSUB float ptr [EAX + 0x4]          ; 00452c48
    FLD float ptr [EDX]                 ; 00452c4b
    FLD float ptr [EBX + 0x28]          ; 00452c4d
    FSUB float ptr [EAX + 0x4]          ; 00452c50
    FXCH                                ; 00452c53
    FSUB float ptr [EAX]                ; 00452c55
    FXCH                                ; 00452c57
    FDIVRP ST2,ST0                      ; 00452c59
    FMUL ST1                            ; 00452c5b
    FADD float ptr [EAX]                ; 00452c5d
    FSTP float ptr [ESP + 0x24]         ; 00452c5f
    MOV EDX,dword ptr [ESI + 0x4]       ; 00452c63
    MOV EAX,dword ptr [ESI]             ; 00452c66
    FLD float ptr [EDX + 0x8]           ; 00452c68
    FSUB float ptr [EAX + 0x8]          ; 00452c6b
    FMULP                               ; 00452c6e
    FADD float ptr [EAX + 0x8]          ; 00452c70
    FSTP float ptr [ESP]                ; 00452c73
    MOV EAX,0x1                         ; 00452c76
    JMP 0x00452af7                      ; 00452c7b
        ;   XREF to: 00452af7 (UNCONDITIONAL_JUMP)  ; LAB_00452af7
    PUSH EDI                            ; 00452c80
        ;   Label: LAB_00452c80
    PUSH EBP                            ; 00452c81
    PUSH EBX                            ; 00452c82
    CALL FUN_00452770                   ; 00452c83
        ;   XREF to: 00452770 (UNCONDITIONAL_CALL)  ; undefined FUN_00452770()
    ADD ESP,0xc                         ; 00452c88
    MOV EDI,dword ptr [ESP + 0x50]      ; 00452c8b
    PUSH EDI                            ; 00452c8f
    PUSH EBP                            ; 00452c90
    PUSH EBX                            ; 00452c91
    MOV ESI,EAX                         ; 00452c92
    CALL FUN_00452770                   ; 00452c94
        ;   XREF to: 00452770 (UNCONDITIONAL_CALL)  ; undefined FUN_00452770()
    ADD ESP,0xc                         ; 00452c99
    OR EAX,ESI                          ; 00452c9c
    ADD ESP,0x74                        ; 00452c9e
    POP EBP                             ; 00452ca1
    POP EDI                             ; 00452ca2
    POP ESI                             ; 00452ca3
    POP EBX                             ; 00452ca4
    RET                                 ; 00452ca5


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl crt_stdio_c_fread_FUN_005a3890(char *param_1,uint param_2,int param_3,int *param_4)
;
;
; XREF[26]:
;   cockpit_ckptutil.c_FUN_004367e0 at 00436850
;   cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_0050ff60 at 0050ff82
;   cockpit_pkbitmap.cpp_parsePBGFile_FUN_005102b0 at 005102c9
;   cockpit_pkbmpset.cpp_FUN_0051080e at 0051096e
;   cockpit_pkbmpset.cpp_FUN_00510a90 at 00510be3
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044c130 at 0044c1ef
;   core_dcube.cpp_CDemonCubeTriangle_readFromFile_FUN_00451fb0 at 00451fc8
;   core_dcube.cpp_CDemonCube_load_FUN_00453fa0 at 00453fb5
;   core_dfilter.cpp_CDemonFilter_load_FUN_00459980 at 00459aa3
;   core_dfilter.cpp_CFilterFX_openMovie_FUN_00459d00 at 00459ddf
;   ... and 16 more
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079a4 = 005a7f44
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079a8 = 005a7f44
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005a92c0
;   crt_unknown.c_FUN_005a33b0
;   crt_unknown.c_FUN_005a7f44
;   crt_unknown.c_FUN_005a9310
;   crt_unknown.c_FUN_005a9440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3890
        ;   Label: crt_stdio.c_fread_FUN_005a3890
    PUSH ESI                            ; 005a3891
    PUSH EDI                            ; 005a3892
    PUSH EBP                            ; 005a3893
    SUB ESP,0x4                         ; 005a3894
    MOV ESI,dword ptr [ESP + 0x20]      ; 005a3897
    MOV EBX,dword ptr [ESP + 0x24]      ; 005a389b
    MOV EDX,dword ptr [EBX + 0x10]      ; 005a389f
    PUSH EDX                            ; 005a38a2
    CALL dword ptr [0x006079a4]         ; 005a38a3 | PTR_crt_unknown.c_FUN_005a7f44_006079a4
    MOV AH,byte ptr [EBX + 0xc]         ; 005a38a9
    ADD ESP,0x4                         ; 005a38ac
    TEST AH,0x1                         ; 005a38af
    JNZ 0x005a38d6                      ; 005a38b2
        ;   XREF to: 005a38d6 (CONDITIONAL_JUMP)  ; LAB_005a38d6
    PUSH 0x4                            ; 005a38b4
    CALL crt_errno.c_setErrno_FUN_005a92c0 ; 005a38b6
        ;   XREF to: 005a92c0 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005a92c0(int error_code)
    OR byte ptr [EBX + 0xc],0x20        ; 005a38bb
    ADD ESP,0x4                         ; 005a38bf
    MOV EDX,dword ptr [EBX + 0x10]      ; 005a38c2
    PUSH EDX                            ; 005a38c5
    CALL dword ptr [0x006079a8]         ; 005a38c6 | PTR_crt_unknown.c_FUN_005a7f44_006079a8
    ADD ESP,0x4                         ; 005a38cc
    XOR EAX,EAX                         ; 005a38cf
    JMP 0x005a3a7f                      ; 005a38d1
        ;   XREF to: 005a3a7f (UNCONDITIONAL_JUMP)  ; LAB_005a3a7f
    IMUL ESI,dword ptr [ESP + 0x1c]     ; 005a38d6
        ;   Label: LAB_005a38d6
    TEST ESI,ESI                        ; 005a38db
    JNZ 0x005a38f6                      ; 005a38dd
        ;   XREF to: 005a38f6 (CONDITIONAL_JUMP)  ; LAB_005a38f6
    MOV EAX,dword ptr [EBX + 0x10]      ; 005a38df
    PUSH EAX                            ; 005a38e2
    CALL dword ptr [0x006079a8]         ; 005a38e3 | PTR_crt_unknown.c_FUN_005a7f44_006079a8
    ADD ESP,0x4                         ; 005a38e9
    MOV EAX,ESI                         ; 005a38ec
    ADD ESP,0x4                         ; 005a38ee
    POP EBP                             ; 005a38f1
    POP EDI                             ; 005a38f2
    POP ESI                             ; 005a38f3
    POP EBX                             ; 005a38f4
    RET                                 ; 005a38f5
    MOV EAX,dword ptr [EBX + 0x8]       ; 005a38f6
        ;   Label: LAB_005a38f6
    CMP dword ptr [EAX + 0x8],0x0       ; 005a38f9
    JNZ 0x005a3908                      ; 005a38fd
        ;   XREF to: 005a3908 (CONDITIONAL_JUMP)  ; LAB_005a3908
    PUSH EBX                            ; 005a38ff
    CALL crt_unknown.c_FUN_005a9310     ; 005a3900
        ;   XREF to: 005a9310 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a9310()
    ADD ESP,0x4                         ; 005a3905
    XOR EBP,EBP                         ; 005a3908
        ;   Label: LAB_005a3908
    MOV DL,byte ptr [EBX + 0xc]         ; 005a390a
    MOV dword ptr [ESP],EBP             ; 005a390d
    TEST DL,0x40                        ; 005a3910
    JZ 0x005a39f8                       ; 005a3913
        ;   XREF to: 005a39f8 (CONDITIONAL_JUMP)  ; LAB_005a39f8
    MOV EBP,ESI                         ; 005a3919
    MOV ECX,dword ptr [EBX + 0x4]       ; 005a391b
        ;   Label: LAB_005a391b
    TEST ECX,ECX                        ; 005a391e
    JZ 0x005a3966                       ; 005a3920
        ;   XREF to: 005a3966 (CONDITIONAL_JUMP)  ; LAB_005a3966
    MOV EDX,ECX                         ; 005a3922
    CMP ECX,EBP                         ; 005a3924
    JBE 0x005a392a                      ; 005a3926
        ;   XREF to: 005a392a (CONDITIONAL_JUMP)  ; LAB_005a392a
    MOV EDX,EBP                         ; 005a3928
    MOV EDI,dword ptr [ESP + 0x18]      ; 005a392a
        ;   Label: LAB_005a392a
    MOV ECX,EDX                         ; 005a392e
    MOV ESI,dword ptr [EBX]             ; 005a3930
    PUSH ES                             ; 005a3932
    MOV AX,DS                           ; 005a3933
    MOV ES,AX                           ; 005a3935
    PUSH EDI                            ; 005a3937
    MOV EAX,ECX                         ; 005a3938
    SHR ECX,0x2                         ; 005a393a
    MOVSD.REP ES:EDI,ESI                ; 005a393d
    MOV CL,AL                           ; 005a393f
    AND CL,0x3                          ; 005a3941
    MOVSB.REP ES:EDI,ESI                ; 005a3944
    POP EDI                             ; 005a3946
    POP ES                              ; 005a3947
    SUB EBP,EDX                         ; 005a3948
    MOV ECX,dword ptr [ESP]             ; 005a394a
    MOV ESI,dword ptr [EBX]             ; 005a394d
    ADD EDI,EDX                         ; 005a394f
    MOV EAX,dword ptr [EBX + 0x4]       ; 005a3951
    MOV dword ptr [ESP + 0x18],EDI      ; 005a3954
    ADD ESI,EDX                         ; 005a3958
    SUB EAX,EDX                         ; 005a395a
    ADD ECX,EDX                         ; 005a395c
    MOV dword ptr [EBX],ESI             ; 005a395e
    MOV dword ptr [ESP],ECX             ; 005a3960
    MOV dword ptr [EBX + 0x4],EAX       ; 005a3963
    TEST EBP,EBP                        ; 005a3966
        ;   Label: LAB_005a3966
    JZ 0x005a3a69                       ; 005a3968
        ;   XREF to: 005a3a69 (CONDITIONAL_JUMP)  ; LAB_005a3a69
    CMP EBP,dword ptr [EBX + 0x14]      ; 005a396e
    JNC 0x005a3979                      ; 005a3971
        ;   XREF to: 005a3979 (CONDITIONAL_JUMP)  ; LAB_005a3979
    TEST byte ptr [EBX + 0xd],0x4       ; 005a3973
    JZ 0x005a39e2                       ; 005a3977
        ;   XREF to: 005a39e2 (CONDITIONAL_JUMP)  ; LAB_005a39e2
    MOV EDX,dword ptr [EBX + 0x8]       ; 005a3979
        ;   Label: LAB_005a3979
    MOV EDX,dword ptr [EDX + 0x8]       ; 005a397c
    MOV dword ptr [EBX],EDX             ; 005a397f
    MOV EAX,EBP                         ; 005a3981
    MOV DL,byte ptr [EBX + 0xd]         ; 005a3983
    MOV dword ptr [EBX + 0x4],0x0       ; 005a3986
    TEST DL,0x4                         ; 005a398d
    JNZ 0x005a399f                      ; 005a3990
        ;   XREF to: 005a399f (CONDITIONAL_JUMP)  ; LAB_005a399f
    CMP EBP,0x200                       ; 005a3992
    JBE 0x005a399f                      ; 005a3998
        ;   XREF to: 005a399f (CONDITIONAL_JUMP)  ; LAB_005a399f
    XOR AL,AL                           ; 005a399a
    AND AH,0xfe                         ; 005a399c
    PUSH EAX                            ; 005a399f
        ;   Label: LAB_005a399f
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005a39a0
    PUSH EDI                            ; 005a39a4
    MOV EAX,dword ptr [EBX + 0x10]      ; 005a39a5
    PUSH EAX                            ; 005a39a8
    CALL crt_unknown.c_FUN_005a9440     ; 005a39a9
        ;   XREF to: 005a9440 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a9440()
    ADD ESP,0xc                         ; 005a39ae
    CMP EAX,-0x1                        ; 005a39b1
    JNZ 0x005a39bf                      ; 005a39b4
        ;   XREF to: 005a39bf (CONDITIONAL_JUMP)  ; LAB_005a39bf
    OR byte ptr [EBX + 0xc],0x20        ; 005a39b6
    JMP 0x005a3a69                      ; 005a39ba
        ;   XREF to: 005a3a69 (UNCONDITIONAL_JUMP)  ; LAB_005a3a69
    TEST EAX,EAX                        ; 005a39bf
        ;   Label: LAB_005a39bf
    JNZ 0x005a39cc                      ; 005a39c1
        ;   XREF to: 005a39cc (CONDITIONAL_JUMP)  ; LAB_005a39cc
    OR byte ptr [EBX + 0xc],0x10        ; 005a39c3
    JMP 0x005a3a69                      ; 005a39c7
        ;   XREF to: 005a3a69 (UNCONDITIONAL_JUMP)  ; LAB_005a3a69
    MOV ECX,dword ptr [ESP]             ; 005a39cc
        ;   Label: LAB_005a39cc
    LEA EDX,[EDI + EAX*0x1]             ; 005a39cf
    SUB EBP,EAX                         ; 005a39d2
    ADD ECX,EAX                         ; 005a39d4
    MOV dword ptr [ESP + 0x18],EDX      ; 005a39d6
    MOV dword ptr [ESP],ECX             ; 005a39da
    JMP 0x005a391b                      ; 005a39dd
        ;   XREF to: 005a391b (UNCONDITIONAL_JUMP)  ; LAB_005a391b
    PUSH EBX                            ; 005a39e2
        ;   Label: LAB_005a39e2
    CALL crt_unknown.c_FUN_005a33b0     ; 005a39e3
        ;   XREF to: 005a33b0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a33b0()
    ADD ESP,0x4                         ; 005a39e8
    TEST EAX,EAX                        ; 005a39eb
    JZ 0x005a3a69                       ; 005a39ed
        ;   XREF to: 005a3a69 (CONDITIONAL_JUMP)  ; LAB_005a3a69
    JMP 0x005a391b                      ; 005a39f3
        ;   XREF to: 005a391b (UNCONDITIONAL_JUMP)  ; LAB_005a391b
    MOV EBP,dword ptr [ESP + 0x18]      ; 005a39f8
        ;   Label: LAB_005a39f8
    ADD ESI,EBP                         ; 005a39fc
    XOR EDI,EDI                         ; 005a39fe
    CMP EDI,dword ptr [EBX + 0x4]       ; 005a3a00
        ;   Label: LAB_005a3a00
    JNZ 0x005a3a12                      ; 005a3a03
        ;   XREF to: 005a3a12 (CONDITIONAL_JUMP)  ; LAB_005a3a12
    PUSH EBX                            ; 005a3a05
    CALL crt_unknown.c_FUN_005a33b0     ; 005a3a06
        ;   XREF to: 005a33b0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a33b0()
    ADD ESP,0x4                         ; 005a3a0b
    TEST EAX,EAX                        ; 005a3a0e
    JZ 0x005a3a69                       ; 005a3a10
        ;   XREF to: 005a3a69 (CONDITIONAL_JUMP)  ; LAB_005a3a69
    MOV EDX,dword ptr [EBX + 0x4]       ; 005a3a12
        ;   Label: LAB_005a3a12
    DEC EDX                             ; 005a3a15
    MOV EAX,dword ptr [EBX]             ; 005a3a16
    MOV dword ptr [EBX + 0x4],EDX       ; 005a3a18
    LEA EDX,[EAX + 0x1]                 ; 005a3a1b
    MOV dword ptr [EBX],EDX             ; 005a3a1e
    MOV AL,byte ptr [EAX]               ; 005a3a20
    AND EAX,0xff                        ; 005a3a22
    CMP EAX,0xd                         ; 005a3a27
    JNZ 0x005a3a4f                      ; 005a3a2a
        ;   XREF to: 005a3a4f (CONDITIONAL_JUMP)  ; LAB_005a3a4f
    CMP EDI,dword ptr [EBX + 0x4]       ; 005a3a2c
    JNZ 0x005a3a3e                      ; 005a3a2f
        ;   XREF to: 005a3a3e (CONDITIONAL_JUMP)  ; LAB_005a3a3e
    PUSH EBX                            ; 005a3a31
    CALL crt_unknown.c_FUN_005a33b0     ; 005a3a32
        ;   XREF to: 005a33b0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a33b0()
    ADD ESP,0x4                         ; 005a3a37
    TEST EAX,EAX                        ; 005a3a3a
    JZ 0x005a3a69                       ; 005a3a3c
        ;   XREF to: 005a3a69 (CONDITIONAL_JUMP)  ; LAB_005a3a69
    DEC dword ptr [EBX + 0x4]           ; 005a3a3e
        ;   Label: LAB_005a3a3e
    MOV EAX,dword ptr [EBX]             ; 005a3a41
    LEA EDX,[EAX + 0x1]                 ; 005a3a43
    MOV dword ptr [EBX],EDX             ; 005a3a46
    MOV AL,byte ptr [EAX]               ; 005a3a48
    AND EAX,0xff                        ; 005a3a4a
    CMP EAX,0x1a                        ; 005a3a4f
        ;   Label: LAB_005a3a4f
    JNZ 0x005a3a5a                      ; 005a3a52
        ;   XREF to: 005a3a5a (CONDITIONAL_JUMP)  ; LAB_005a3a5a
    OR byte ptr [EBX + 0xc],0x10        ; 005a3a54
    JMP 0x005a3a69                      ; 005a3a58
        ;   XREF to: 005a3a69 (UNCONDITIONAL_JUMP)  ; LAB_005a3a69
    MOV EDX,dword ptr [ESP]             ; 005a3a5a
        ;   Label: LAB_005a3a5a
    INC EBP                             ; 005a3a5d
    INC EDX                             ; 005a3a5e
    MOV byte ptr [EBP + -0x1],AL        ; 005a3a5f
    MOV dword ptr [ESP],EDX             ; 005a3a62
    CMP EBP,ESI                         ; 005a3a65
    JNZ 0x005a3a00                      ; 005a3a67
        ;   XREF to: 005a3a00 (CONDITIONAL_JUMP)  ; LAB_005a3a00
    MOV ESI,dword ptr [EBX + 0x10]      ; 005a3a69
        ;   Label: LAB_005a3a69
    PUSH ESI                            ; 005a3a6c
    CALL dword ptr [0x006079a8]         ; 005a3a6d | PTR_crt_unknown.c_FUN_005a7f44_006079a8
    ADD ESP,0x4                         ; 005a3a73
    XOR EDX,EDX                         ; 005a3a76
    MOV EAX,dword ptr [ESP]             ; 005a3a78
    DIV dword ptr [ESP + 0x1c]          ; 005a3a7b
    ADD ESP,0x4                         ; 005a3a7f
        ;   Label: LAB_005a3a7f
    POP EBP                             ; 005a3a82
    POP EDI                             ; 005a3a83
    POP ESI                             ; 005a3a84
    POP EBX                             ; 005a3a85
    RET                                 ; 005a3a86


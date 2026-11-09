; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f37e0(int param_1,int param_2,int param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[11]:
;   engine_mini3d.cpp_FUN_004f36e0 at 004f36ec
;   engine_mini3d.cpp_FUN_004f3ab0 at 004f3ac0
;   engine_mini3d.cpp_FUN_004f3ad0 at 004f3ae4
;   shape_edittool.cpp_FUN_0047b7c0 at 0047b85e
;   shape_edittool.cpp_FUN_0047b8e0 at 0047b90a
;   shape_edittool.cpp_FUN_0047c050 at 0047c1fe
;   shape_edittool.cpp_FUN_0047ee50 at 0047f079
;   shape_edittool.cpp_FUN_0047fa80 at 0047fc38
;   shape_edittool.cpp_FUN_004843d0 at 0048477c
;   shape_edittool.cpp_FUN_004850a0 at 00485225
;   ... and 1 more
;
; Referenced Globals:
;   undefined4 DAT_005c8341
;   undefined4 DAT_005c8345
;   undefined4 DAT_006004b8
;   undefined4 DAT_006004c8
;   undefined4 DAT_01d76c38
;   undefined4 DAT_01d76c4c
;   undefined4 DAT_01d76c50
;   undefined4 DAT_01d76c54
;   undefined4 DAT_01d76c58
;   undefined4 DAT_01d76cc4
;   undefined4 DAT_01d7a6c4
;   undefined4 DAT_01d7f4f4
;
; Called Functions:
;   crt_math.c_round_FUN_005a3120
;   engine_mini3d.cpp_FUN_004ed980
;   engine_mini3d.cpp_FUN_004ee5b0
;   engine_mini3d.cpp_FUN_004f3af0
;
; *****************************************************************************

section .text

    SUB ESP,0x14                        ; 004f37e0
        ;   Label: engine_mini3d.cpp_FUN_004f37e0
    MOV EAX,dword ptr [ESP + 0x18]      ; 004f37e3
    MOV dword ptr [ESP + 0x10],EAX      ; 004f37e7
    FILD dword ptr [ESP + 0x10]         ; 004f37eb
    FCOMP float ptr [0x01d76c4c]        ; 004f37ef | DAT_01d76c4c
    FNSTSW AX                           ; 004f37f5
    SAHF                                ; 004f37f7
    JC 0x004f3888                       ; 004f37f8
        ;   XREF to: 004f3888 (CONDITIONAL_JUMP)  ; LAB_004f3888
    MOV EAX,dword ptr [ESP + 0x20]      ; 004f37fe
        ;   Label: LAB_004f37fe
    MOV dword ptr [ESP + 0x10],EAX      ; 004f3802
    FILD dword ptr [ESP + 0x10]         ; 004f3806
    FCOMP float ptr [0x01d76c54]        ; 004f380a | DAT_01d76c54
    FNSTSW AX                           ; 004f3810
    SAHF                                ; 004f3812
    JBE 0x004f3824                      ; 004f3813
        ;   XREF to: 004f3824 (CONDITIONAL_JUMP)  ; LAB_004f3824
    FLD float ptr [0x01d76c54]          ; 004f3815 | DAT_01d76c54
    CALL crt_math.c_round_FUN_005a3120  ; 004f381b
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x20]        ; 004f3820
    MOV EAX,dword ptr [ESP + 0x18]      ; 004f3824
        ;   Label: LAB_004f3824
    CMP EAX,dword ptr [ESP + 0x20]      ; 004f3828
    JG 0x004f3884                       ; 004f382c
        ;   XREF to: 004f3884 (CONDITIONAL_JUMP)  ; LAB_004f3884
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004f382e
    MOV dword ptr [ESP + 0x10],EAX      ; 004f3832
    FILD dword ptr [ESP + 0x10]         ; 004f3836
    FCOMP float ptr [0x01d76c50]        ; 004f383a | DAT_01d76c50
    FNSTSW AX                           ; 004f3840
    SAHF                                ; 004f3842
    JNC 0x004f3854                      ; 004f3843
        ;   XREF to: 004f3854 (CONDITIONAL_JUMP)  ; LAB_004f3854
    FLD float ptr [0x01d76c50]          ; 004f3845 | DAT_01d76c50
    CALL crt_math.c_round_FUN_005a3120  ; 004f384b
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x1c]        ; 004f3850
    MOV EAX,dword ptr [ESP + 0x24]      ; 004f3854
        ;   Label: LAB_004f3854
    MOV dword ptr [ESP + 0x10],EAX      ; 004f3858
    FILD dword ptr [ESP + 0x10]         ; 004f385c
    FCOMP float ptr [0x01d76c58]        ; 004f3860 | DAT_01d76c58
    FNSTSW AX                           ; 004f3866
    SAHF                                ; 004f3868
    JBE 0x004f387a                      ; 004f3869
        ;   XREF to: 004f387a (CONDITIONAL_JUMP)  ; LAB_004f387a
    FLD float ptr [0x01d76c58]          ; 004f386b | DAT_01d76c58
    CALL crt_math.c_round_FUN_005a3120  ; 004f3871
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x24]        ; 004f3876
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004f387a
        ;   Label: LAB_004f387a
    CMP EAX,dword ptr [ESP + 0x24]      ; 004f387e
    JLE 0x004f389c                      ; 004f3882
        ;   XREF to: 004f389c (CONDITIONAL_JUMP)  ; LAB_004f389c
    ADD ESP,0x14                        ; 004f3884
        ;   Label: LAB_004f3884
    RET                                 ; 004f3887
    FLD float ptr [0x01d76c4c]          ; 004f3888 | DAT_01d76c4c
        ;   Label: LAB_004f3888
    CALL crt_math.c_round_FUN_005a3120  ; 004f388e
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x18]        ; 004f3893
    JMP 0x004f37fe                      ; 004f3897
        ;   XREF to: 004f37fe (UNCONDITIONAL_JUMP)  ; LAB_004f37fe
    PUSH EDI                            ; 004f389c
        ;   Label: LAB_004f389c
    PUSH ESI                            ; 004f389d
    PUSH EBX                            ; 004f389e
    CALL engine_mini3d.cpp_FUN_004f3af0 ; 004f389f
        ;   XREF to: 004f3af0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3af0()
    MOV dword ptr [ESP + 0x1c],EAX      ; 004f38a4
    FLD1                                ; 004f38a8
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004f38aa
    MOV dword ptr [ESP + 0x18],EAX      ; 004f38ae
    FDIV float ptr [ESP + 0x18]         ; 004f38b2
    MOV EAX,dword ptr [ESP + 0x24]      ; 004f38b6
    MOV dword ptr [ESP + 0x1c],EAX      ; 004f38ba
    FLD float ptr [0x01d76cc4]          ; 004f38be | DAT_01d76cc4
    FILD dword ptr [ESP + 0x1c]         ; 004f38c4
    FMUL ST1                            ; 004f38c8
    FLD float ptr [0x005c8341]          ; 004f38ca | DAT_005c8341
    FXCH                                ; 004f38d0
    FADD ST0,ST1                        ; 004f38d2
    MOV EBX,dword ptr [0x01d7f4f4]      ; 004f38d4 | DAT_01d7f4f4
    FSTP float ptr [ESP + 0xc]          ; 004f38da
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f38de
    MOV dword ptr [EBX],EAX             ; 004f38e2
    MOV EAX,dword ptr [ESP + 0x28]      ; 004f38e4
    MOV dword ptr [EBX + 0x14],0x0      ; 004f38e8
    MOV dword ptr [ESP + 0x1c],EAX      ; 004f38ef
    MOV dword ptr [EBX + 0x18],0x3f000000 ; 004f38f3
    FILD dword ptr [ESP + 0x1c]         ; 004f38fa
    FMUL ST2                            ; 004f38fe
    MOV dword ptr [EBX + 0x1c],0x3f000000 ; 004f3900
    FADDP                               ; 004f3907
    MOV dword ptr [EBX + 0x34],0x0      ; 004f3909
    FSTP float ptr [ESP + 0x10]         ; 004f3910
    MOV EAX,dword ptr [ESP + 0x10]      ; 004f3914
    MOV dword ptr [EBX + 0x4],EAX       ; 004f3918
    MOV EAX,dword ptr [ESP + 0x18]      ; 004f391b
    FXCH                                ; 004f391f
    FSTP float ptr [ESP + 0x14]         ; 004f3921
    MOV dword ptr [EBX + 0x8],EAX       ; 004f3925
    MOV EAX,dword ptr [ESP + 0x14]      ; 004f3928
    MOV dword ptr [EBX + 0xc],EAX       ; 004f392c
    MOV EAX,[0x01d7a6c4]                ; 004f392f | DAT_01d7a6c4
    MOV dword ptr [EBX + 0x10],EAX      ; 004f3934
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004f3937
    MOV dword ptr [EBX + 0x38],0x3f000000 ; 004f393b
    MOV dword ptr [ESP + 0x1c],EAX      ; 004f3942
    MOV dword ptr [EBX + 0x3c],0x3f000000 ; 004f3946
    FILD dword ptr [ESP + 0x1c]         ; 004f394d
    FMUL ST1                            ; 004f3951
    MOV dword ptr [EBX + 0x54],0x0      ; 004f3953
    FLD float ptr [0x005c8345]          ; 004f395a | DAT_005c8345
    FXCH                                ; 004f3960
    FADD ST0,ST1                        ; 004f3962
    MOV dword ptr [EBX + 0x58],0x3f000000 ; 004f3964
    FSTP float ptr [ESP + 0x1c]         ; 004f396b
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004f396f
    MOV dword ptr [EBX + 0x20],EAX      ; 004f3973
    MOV EAX,dword ptr [ESP + 0x10]      ; 004f3976
    MOV dword ptr [EBX + 0x24],EAX      ; 004f397a
    MOV EAX,dword ptr [ESP + 0x18]      ; 004f397d
    MOV dword ptr [EBX + 0x28],EAX      ; 004f3981
    MOV EAX,dword ptr [ESP + 0x14]      ; 004f3984
    MOV dword ptr [EBX + 0x2c],EAX      ; 004f3988
    MOV EAX,[0x01d7a6c4]                ; 004f398b | DAT_01d7a6c4
    MOV dword ptr [EBX + 0x30],EAX      ; 004f3990
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004f3993
    MOV dword ptr [EBX + 0x40],EAX      ; 004f3997
    MOV EAX,dword ptr [ESP + 0x30]      ; 004f399a
    MOV dword ptr [EBX + 0x5c],0x3f000000 ; 004f399e
    MOV dword ptr [ESP + 0x1c],EAX      ; 004f39a5
    MOV dword ptr [EBX + 0x74],0x0      ; 004f39a9
    FILD dword ptr [ESP + 0x1c]         ; 004f39b0
    FMULP ST2                           ; 004f39b4
    MOV dword ptr [EBX + 0x78],0x3f000000 ; 004f39b6
    FADDP                               ; 004f39bd
    MOV dword ptr [EBX + 0x7c],0x3f000000 ; 004f39bf
    FSTP float ptr [ESP + 0x10]         ; 004f39c6
    MOV EAX,dword ptr [ESP + 0x10]      ; 004f39ca
    MOV dword ptr [EBX + 0x44],EAX      ; 004f39ce
    MOV EAX,dword ptr [ESP + 0x18]      ; 004f39d1
    MOV dword ptr [EBX + 0x48],EAX      ; 004f39d5
    MOV EAX,dword ptr [ESP + 0x14]      ; 004f39d8
    MOV dword ptr [EBX + 0x4c],EAX      ; 004f39dc
    MOV EAX,[0x01d7a6c4]                ; 004f39df | DAT_01d7a6c4
    MOV dword ptr [EBX + 0x50],EAX      ; 004f39e4
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f39e7
    MOV dword ptr [EBX + 0x60],EAX      ; 004f39eb
    MOV EAX,dword ptr [ESP + 0x10]      ; 004f39ee
    MOV dword ptr [EBX + 0x64],EAX      ; 004f39f2
    MOV EAX,dword ptr [ESP + 0x18]      ; 004f39f5
    MOV dword ptr [EBX + 0x68],EAX      ; 004f39f9
    MOV EAX,dword ptr [ESP + 0x14]      ; 004f39fc
    MOV dword ptr [EBX + 0x6c],EAX      ; 004f3a00
    MOV EAX,[0x01d7a6c4]                ; 004f3a03 | DAT_01d7a6c4
    PUSH 0x6004c8                       ; 004f3a08 | DAT_006004c8
    MOV dword ptr [EBX + 0x70],EAX      ; 004f3a0d
    CALL engine_mini3d.cpp_FUN_004ed980 ; 004f3a10
        ;   XREF to: 004ed980 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004ed980()
    ADD ESP,0x4                         ; 004f3a15
    PUSH 0x2                            ; 004f3a18
    PUSH 0x6004b8                       ; 004f3a1a | DAT_006004b8
    PUSH 0x4                            ; 004f3a1f
    XOR EDI,EDI                         ; 004f3a21
    PUSH EBX                            ; 004f3a23
    MOV ESI,dword ptr [0x01d76c38]      ; 004f3a24 | DAT_01d76c38
    MOV dword ptr [0x01d76c38],EDI      ; 004f3a2a | DAT_01d76c38
    CALL engine_mini3d.cpp_FUN_004ee5b0 ; 004f3a30
        ;   XREF to: 004ee5b0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004ee5b0()
    ADD ESP,0x10                        ; 004f3a35
    MOV dword ptr [0x01d76c38],ESI      ; 004f3a38 | DAT_01d76c38
    POP EBX                             ; 004f3a3e
    POP ESI                             ; 004f3a3f
    POP EDI                             ; 004f3a40
    ADD ESP,0x14                        ; 004f3a41
    RET                                 ; 004f3a44


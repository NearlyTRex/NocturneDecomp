; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_inverse_FUN_00592830(float *param_1)
;
; Local Variables:
; undefined4       Stack[-0x6c]:4  local_6c
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
; undefined8       Stack[-0x3c]:8  local_3c
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[6]:
;   core_charactr.cpp_CCharacter_addDamageDecal_FUN_00426a10 at 00426dab
;   core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_00428e30 at 00429076
;   core_charactr.cpp_FUN_00428bd0 at 00428cb3
;   core_cloth.cpp_CCloth_computeBoneTransform_FUN_005af3b0 at 005af400
;   core_mirror.cpp_CMirrorReflection_setupMirrorReflection_FUN_004f9990 at 004f9db1
;   core_tentacle.cpp_CTentacle_process_FUN_005726c0 at 005729df
;
; Referenced Globals:
;   TerminatedCString s_core_xform_cpp_005eed4a
;   TerminatedCString s_inverse_Singular_matrix_005eed5c
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_xform.cpp_determinant_FUN_005927e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00592830
        ;   Label: core_xform.cpp_inverse_FUN_00592830
    PUSH EDI                            ; 00592831
    PUSH EBP                            ; 00592832
    SUB ESP,0x60                        ; 00592833
    MOV EBX,dword ptr [ESP + 0x70]      ; 00592836
    MOV EBP,ESI                         ; 0059283a
    PUSH EBX                            ; 0059283c
    CALL core_xform.cpp_determinant_FUN_005927e0 ; 0059283d
        ;   XREF to: 005927e0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_determinant_FUN_005927e0()
    MOV dword ptr [ESP + 0x34],EAX      ; 00592842
    MOV dword ptr [ESP + 0x38],EDX      ; 00592846
    FLD double ptr [ESP + 0x34]         ; 0059284a
    ADD ESP,0x4                         ; 0059284e
    FSTP float ptr [ESP + 0x5c]         ; 00592851
    TEST dword ptr [ESP + 0x5c],0x7fffffff ; 00592855
    JZ 0x00592a32                       ; 0059285d
        ;   XREF to: 00592a32 (CONDITIONAL_JUMP)  ; LAB_00592a32
    FLD float ptr [EBX + 0x14]          ; 00592863
        ;   Label: LAB_00592863
    FMUL float ptr [EBX + 0x28]         ; 00592866
    FLD float ptr [EBX + 0x10]          ; 00592869
    FMUL float ptr [EBX + 0x28]         ; 0059286c
    FLD float ptr [EBX + 0x10]          ; 0059286f
    FMUL float ptr [EBX + 0x24]         ; 00592872
    FLD float ptr [EBX + 0x4]           ; 00592875
    FMUL float ptr [EBX + 0x28]         ; 00592878
    FLD float ptr [EBX + 0x8]           ; 0059287b
    FMUL float ptr [EBX + 0x20]         ; 0059287e
    FLD float ptr [EBX + 0x18]          ; 00592881
    FMUL float ptr [EBX + 0x24]         ; 00592884
    FLD float ptr [EBX + 0x18]          ; 00592887
    FXCH                                ; 0059288a
    FSUBP ST6,ST0                       ; 0059288c
    FMUL float ptr [EBX + 0x20]         ; 0059288e
    FXCH ST5                            ; 00592891
    FSTP float ptr [ESP + 0x58]         ; 00592893
    FLD float ptr [EBX + 0x4]           ; 00592897
    FMUL float ptr [EBX + 0x20]         ; 0059289a
    FXCH ST5                            ; 0059289d
    FSUBP ST4,ST0                       ; 0059289f
    FLD1                                ; 005928a1
    FXCH ST4                            ; 005928a3
    FCHS                                ; 005928a5
    FSTP float ptr [ESP + 0x38]         ; 005928a7
    FLD float ptr [EBX + 0x14]          ; 005928ab
    FMUL float ptr [EBX + 0x20]         ; 005928ae
    FXCH ST4                            ; 005928b1
    FDIV float ptr [ESP + 0x5c]         ; 005928b3
    FLD float ptr [EBX + 0x4]           ; 005928b7
    FMUL float ptr [EBX + 0x18]         ; 005928ba
    FXCH ST5                            ; 005928bd
    FSUBP ST4,ST0                       ; 005928bf
    FXCH ST3                            ; 005928c1
    FSTP float ptr [ESP + 0x54]         ; 005928c3
    FLD float ptr [EBX + 0x8]           ; 005928c7
    FMUL float ptr [EBX + 0x24]         ; 005928ca
    FLD float ptr [EBX + 0x8]           ; 005928cd
    FXCH                                ; 005928d0
    FSUBP ST3,ST0                       ; 005928d2
    FMUL float ptr [EBX + 0x10]         ; 005928d4
    FXCH ST2                            ; 005928d7
    FCHS                                ; 005928d9
    FSTP float ptr [ESP + 0x3c]         ; 005928db
    FLD float ptr [EBX]                 ; 005928df
    FMUL float ptr [EBX + 0x28]         ; 005928e1
    FLD float ptr [EBX + 0x4]           ; 005928e4
    FMUL float ptr [EBX + 0x10]         ; 005928e7
    FXCH                                ; 005928ea
    FSUBRP ST2,ST0                      ; 005928ec
    FXCH                                ; 005928ee
    FSTP float ptr [ESP + 0x40]         ; 005928f0
    FLD float ptr [EBX]                 ; 005928f4
    FMUL float ptr [EBX + 0x24]         ; 005928f6
    FLD float ptr [EBX + 0x8]           ; 005928f9
    FXCH                                ; 005928fc
    FSUBRP ST6,ST0                      ; 005928fe
    FMUL float ptr [EBX + 0x14]         ; 00592900
    FXCH ST5                            ; 00592903
    FCHS                                ; 00592905
    FSTP float ptr [ESP + 0x44]         ; 00592907
    FLD float ptr [EBX]                 ; 0059290b
    FMUL float ptr [EBX + 0x18]         ; 0059290d
    FLD float ptr [EBX]                 ; 00592910
    FMUL float ptr [EBX + 0x14]         ; 00592912
    FXCH ST6                            ; 00592915
    FSUBP ST5,ST0                       ; 00592917
    FLD float ptr [ESP + 0x58]          ; 00592919
    FXCH ST4                            ; 0059291d
    FSTP float ptr [ESP + 0x5c]         ; 0059291f
    FXCH ST3                            ; 00592923
    FMUL float ptr [ESP + 0x5c]         ; 00592925
    FXCH ST3                            ; 00592929
    FSUBRP ST2,ST0                      ; 0059292b
    FLD float ptr [ESP + 0x3c]          ; 0059292d
    FMUL float ptr [ESP + 0x5c]         ; 00592931
    FXCH ST2                            ; 00592935
    FCHS                                ; 00592937
    FXCH ST4                            ; 00592939
    FMUL float ptr [ESP + 0x5c]         ; 0059293b
    FLD float ptr [ESP + 0x38]          ; 0059293f
    FMUL float ptr [ESP + 0x5c]         ; 00592943
    FXCH ST6                            ; 00592947
    FSUBRP ST2,ST0                      ; 00592949
    FXCH                                ; 0059294b
    FSTP float ptr [ESP + 0x50]         ; 0059294d
    FLD float ptr [ESP + 0x40]          ; 00592951
    FMUL float ptr [ESP + 0x5c]         ; 00592955
    FXCH ST4                            ; 00592959
    FMUL float ptr [ESP + 0x5c]         ; 0059295b
    FLD float ptr [ESP + 0x54]          ; 0059295f
    FMUL float ptr [ESP + 0x5c]         ; 00592963
    FXCH ST4                            ; 00592967
    FSTP float ptr [ESP]                ; 00592969
    FLD float ptr [ESP + 0x44]          ; 0059296c
    FMUL float ptr [ESP + 0x5c]         ; 00592970
    FXCH ST3                            ; 00592974
    FSTP float ptr [ESP + 0x4]          ; 00592976
    FLD float ptr [ESP + 0x50]          ; 0059297a
    FMUL float ptr [ESP + 0x5c]         ; 0059297e
    FXCH ST2                            ; 00592982
    FSTP float ptr [ESP + 0x8]          ; 00592984
    FLD float ptr [EBX + 0x1c]          ; 00592988
    FMUL float ptr [ESP + 0x4]          ; 0059298b
    FXCH ST6                            ; 0059298f
    FSTP float ptr [ESP + 0x10]         ; 00592991
    FLD float ptr [EBX + 0xc]           ; 00592995
    FMUL float ptr [ESP + 0x10]         ; 00592998
    FXCH ST5                            ; 0059299c
    FSTP float ptr [ESP + 0x14]         ; 0059299e
    FLD float ptr [EBX + 0xc]           ; 005929a2
    FXCH ST4                            ; 005929a5
    FSTP float ptr [ESP + 0x20]         ; 005929a7
    FXCH ST3                            ; 005929ab
    FMUL float ptr [ESP + 0x20]         ; 005929ad
    FXCH ST3                            ; 005929b1
    FSTP float ptr [ESP + 0x18]         ; 005929b3
    FLD float ptr [EBX + 0xc]           ; 005929b7
    FMUL float ptr [ESP]                ; 005929ba
    FLD float ptr [EBX + 0x1c]          ; 005929bd
    FMUL float ptr [ESP + 0x14]         ; 005929c0
    FXCH ST3                            ; 005929c4
    FSTP float ptr [ESP + 0x24]         ; 005929c6
    FLD float ptr [EBX + 0x1c]          ; 005929ca
    FMUL float ptr [ESP + 0x24]         ; 005929cd
    FXCH                                ; 005929d1
    FADDP ST6,ST0                       ; 005929d3
    FXCH ST2                            ; 005929d5
    FADDP ST4,ST0                       ; 005929d7
    FLD float ptr [EBX + 0x2c]          ; 005929d9
    FMUL float ptr [ESP + 0x8]          ; 005929dc
    FLD float ptr [EBX + 0x2c]          ; 005929e0
    FMUL float ptr [ESP + 0x18]         ; 005929e3
    FXCH ST3                            ; 005929e7
    FADDP ST4,ST0                       ; 005929e9
    FXCH                                ; 005929eb
    FSTP float ptr [ESP + 0x28]         ; 005929ed
    FLD float ptr [EBX + 0x2c]          ; 005929f1
    FMUL float ptr [ESP + 0x28]         ; 005929f4
    MOV ECX,0xc                         ; 005929f8
    MOV ESI,ESP                         ; 005929fd
    MOV EDI,EBP                         ; 005929ff
    FXCH                                ; 00592a01
    FADDP ST5,ST0                       ; 00592a03
    FXCH                                ; 00592a05
    FADDP ST3,ST0                       ; 00592a07
    FADDP                               ; 00592a09
    FXCH ST2                            ; 00592a0b
    FCHS                                ; 00592a0d
    FXCH                                ; 00592a0f
    FCHS                                ; 00592a11
    FXCH ST2                            ; 00592a13
    FCHS                                ; 00592a15
    FXCH                                ; 00592a17
    FSTP float ptr [ESP + 0xc]          ; 00592a19
    FXCH                                ; 00592a1d
    FSTP float ptr [ESP + 0x1c]         ; 00592a1f
    FSTP float ptr [ESP + 0x2c]         ; 00592a23
    MOVSD.REP ES:EDI,ESI                ; 00592a27
    MOV EAX,EBP                         ; 00592a29
    ADD ESP,0x60                        ; 00592a2b
    POP EBP                             ; 00592a2e
    POP EDI                             ; 00592a2f
    POP EBX                             ; 00592a30
    RET                                 ; 00592a31
    MOV ECX,0x5eed4a                    ; 00592a32 | = "..\\core\\xform.cpp"
        ;   Label: LAB_00592a32
    MOV ESI,0x23d                       ; 00592a37
    PUSH 0x5eed5c                       ; 00592a3c | = "inverse() - Singular matrix"
    MOV dword ptr [0x01d046a0],ECX      ; 00592a41 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00592a47 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00592a4d
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00592a52
    JMP 0x00592863                      ; 00592a55
        ;   XREF to: 00592863 (UNCONDITIONAL_JUMP)  ; LAB_00592863


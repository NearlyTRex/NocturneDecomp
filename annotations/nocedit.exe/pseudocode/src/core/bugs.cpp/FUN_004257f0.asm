; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_bugs.cpp_FUN_004257f0()
;
; Local Variables:
; undefined8       Stack[-0x84]:8  local_84
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
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
; undefined8       Stack[-0x40]:8  local_40
; undefined1       Stack[-0x38]:1  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[3]:
;   core_bugs.cpp_FUN_00425cc0 at 00425fb9
;   core_bugs.cpp_FUN_00425fe0 at 004263f4
;   core_bugs.cpp_FUN_004278d0 at 00427951
;
; Referenced Globals:
;   float FLOAT_00616ddf = 0.5
;   float FLOAT_00616de3 = 11
;   double DOUBLE_00616deb = 0.5
;   undefined4 DAT_0065b5c8
;   undefined4 DAT_00822d08
;   undefined1 DAT_00822d0c
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0
;   crt_math.c_floor_FUN_005feb90
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004257f0
        ;   Label: core_bugs.cpp_FUN_004257f0
    PUSH EBP                            ; 004257f1
    SUB ESP,0x74                        ; 004257f2
    FLD1                                ; 004257f5
    FDIV float ptr [0x0065b5c8]         ; 004257f7 | DAT_0065b5c8
    MOV EBX,dword ptr [ESP + 0x80]      ; 004257fd
    FLD float ptr [EBX + 0x199cc]       ; 00425804
    FADD float ptr [EBX + 0x199d8]      ; 0042580a
    FST float ptr [ESP + 0x24]          ; 00425810
    FLD float ptr [EBX + 0x199d0]       ; 00425814
    FADD float ptr [EBX + 0x199dc]      ; 0042581a
    FXCH                                ; 00425820
    FLD float ptr [0x00616ddf]          ; 00425822 | FLOAT_00616ddf
    FXCH                                ; 00425828
    FMUL ST1                            ; 0042582a
    FXCH ST2                            ; 0042582c
    FST float ptr [ESP + 0x28]          ; 0042582e
    FLD float ptr [EBX + 0x199d4]       ; 00425832
    FADD float ptr [EBX + 0x199e0]      ; 00425838
    FXCH                                ; 0042583e
    FMUL ST2                            ; 00425840
    FXCH                                ; 00425842
    FST float ptr [ESP + 0x2c]          ; 00425844
    FMULP ST2                           ; 00425848
    FXCH ST2                            ; 0042584a
    FSTP float ptr [ESP + 0x18]         ; 0042584c
    FXCH                                ; 00425850
    FSTP float ptr [ESP + 0x1c]         ; 00425852
    FSTP float ptr [ESP + 0x20]         ; 00425856
    FLD float ptr [EBX + 0x20]          ; 0042585a
    FADD float ptr [ESP + 0x18]         ; 0042585d
    FSTP float ptr [ESP + 0xc]          ; 00425861
    FLD float ptr [EBX + 0x24]          ; 00425865
    FADD float ptr [ESP + 0x1c]         ; 00425868
    FLD float ptr [ESP + 0xc]           ; 0042586c
    FXCH                                ; 00425870
    FSTP float ptr [ESP + 0x10]         ; 00425872
    FLD float ptr [EBX + 0x28]          ; 00425876
    FXCH ST2                            ; 00425879
    FSTP float ptr [ESP + 0x70]         ; 0042587b
    FXCH                                ; 0042587f
    FADD float ptr [ESP + 0x20]         ; 00425881
    FXCH                                ; 00425885
    FMUL float ptr [ESP + 0x70]         ; 00425887
    FXCH                                ; 0042588b
    FSTP float ptr [ESP + 0x14]         ; 0042588d
    SUB ESP,0x8                         ; 00425891
    FSTP double ptr [ESP]               ; 00425894
    CALL crt_math.c_floor_FUN_005feb90  ; 00425897
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x44],EAX      ; 0042589c
    MOV dword ptr [ESP + 0x48],EDX      ; 004258a0
    FLD double ptr [ESP + 0x44]         ; 004258a4
    ADD ESP,0x8                         ; 004258a8
    FLD float ptr [ESP + 0x14]          ; 004258ab
    FMUL float ptr [ESP + 0x70]         ; 004258af
    FXCH                                ; 004258b3
    CALL crt_math.c_round_FUN_005fe6b0  ; 004258b5
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x48]        ; 004258ba
    SUB ESP,0x8                         ; 004258be
    FSTP double ptr [ESP]               ; 004258c1
    CALL crt_math.c_floor_FUN_005feb90  ; 004258c4
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x44],EAX      ; 004258c9
    MOV dword ptr [ESP + 0x48],EDX      ; 004258cd
    FLD double ptr [ESP + 0x44]         ; 004258d1
    ADD ESP,0x8                         ; 004258d5
    MOV EAX,dword ptr [ESP + 0x48]      ; 004258d8
    MOV dword ptr [ESP + 0x70],EAX      ; 004258dc
    FILD dword ptr [ESP + 0x70]         ; 004258e0
    FMUL float ptr [0x0065b5c8]         ; 004258e4 | DAT_0065b5c8
    FXCH                                ; 004258ea
    CALL crt_math.c_round_FUN_005fe6b0  ; 004258ec
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x6c]        ; 004258f1
    MOV EAX,dword ptr [ESP + 0x6c]      ; 004258f5
    FSUB float ptr [EBX + 0x20]         ; 004258f9
    MOV dword ptr [ESP + 0x70],EAX      ; 004258fc
    FLD float ptr [0x0065b5c8]          ; 00425900 | DAT_0065b5c8
    FMUL float ptr [0x00616de3]         ; 00425906 | FLOAT_00616de3
    FILD dword ptr [ESP + 0x70]         ; 0042590c
    FMUL float ptr [0x0065b5c8]         ; 00425910 | DAT_0065b5c8
    FXCH                                ; 00425916
    FMUL double ptr [0x00616deb]        ; 00425918 | DOUBLE_00616deb
    MOV EDX,dword ptr [EBX + 0x199e4]   ; 0042591e
    MOV EAX,dword ptr [ESP + 0x48]      ; 00425924
    FXCH                                ; 00425928
    FSUB float ptr [EBX + 0x28]         ; 0042592a
    FXCH ST2                            ; 0042592d
    FSUB ST0,ST1                        ; 0042592f
    FXCH ST2                            ; 00425931
    FSUBRP                              ; 00425933
    FXCH                                ; 00425935
    FSTP float ptr [EBX + 0x199ec]      ; 00425937
    FSTP float ptr [EBX + 0x199f0]      ; 0042593d
    CMP EAX,EDX                         ; 00425943
    JNZ 0x00425957                      ; 00425945
        ;   XREF to: 00425957 (CONDITIONAL_JUMP)  ; LAB_00425957
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00425947
    CMP EAX,dword ptr [EBX + 0x199e8]   ; 0042594b
    JZ 0x00425b20                       ; 00425951
        ;   XREF to: 00425b20 (CONDITIONAL_JUMP)  ; LAB_00425b20
    PUSH EDI                            ; 00425957
        ;   Label: LAB_00425957
    PUSH ESI                            ; 00425958
    MOV EAX,dword ptr [ESP + 0x88]      ; 00425959
    MOV EBX,dword ptr [ESP + 0x50]      ; 00425960
    MOV EAX,dword ptr [EAX + 0x199e4]   ; 00425964
    SUB EAX,EBX                         ; 0042596a
    MOV dword ptr [ESP + 0x6c],EAX      ; 0042596c
    MOV EAX,dword ptr [ESP + 0x88]      ; 00425970
    MOV ESI,dword ptr [ESP + 0x74]      ; 00425977
    MOV EAX,dword ptr [EAX + 0x199e8]   ; 0042597b
    SUB EAX,ESI                         ; 00425981
    MOV ECX,0x240                       ; 00425983
    MOV dword ptr [ESP + 0x68],EAX      ; 00425988
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0042598c
    MOV EDI,0x822d08                    ; 00425990 | DAT_00822d08
    ADD EAX,0xb                         ; 00425995
    MOV EBX,dword ptr [ESP + 0x88]      ; 00425998
    MOV dword ptr [ESP + 0x60],EAX      ; 0042599f
    MOV EAX,dword ptr [ESP + 0x68]      ; 004259a3
    MOV ESI,dword ptr [ESP + 0x88]      ; 004259a7
    ADD EAX,0xb                         ; 004259ae
    ADD ESI,0x128b8                     ; 004259b1
    MOV dword ptr [ESP + 0x64],EAX      ; 004259b7
    PUSH EDI                            ; 004259bb | DAT_00822d08
    MOV EAX,ECX                         ; 004259bc
    SHR ECX,0x2                         ; 004259be
    MOVSD.REP ES:EDI,ESI                ; 004259c1 | DAT_00822d08 | DAT_00822d0c
    MOV CL,AL                           ; 004259c3
    AND CL,0x3                          ; 004259c5
    MOVSB.REP ES:EDI,ESI                ; 004259c8 | DAT_00822d08 | DAT_00822d0c
    POP EDI                             ; 004259ca
    MOV EAX,dword ptr [EBX + 0x20]      ; 004259cb
    ADD EBX,0x20                        ; 004259ce
    MOV dword ptr [ESP + 0x8],EAX       ; 004259d1
    LEA EAX,[EBX + 0x4]                 ; 004259d5
    MOV EAX,dword ptr [EAX]             ; 004259d8
    MOV dword ptr [ESP + 0xc],EAX       ; 004259da
    LEA EAX,[EBX + 0x8]                 ; 004259de
    MOV EAX,dword ptr [EAX]             ; 004259e1
    MOV dword ptr [ESP + 0x10],EAX      ; 004259e3
    MOV EAX,dword ptr [ESP + 0x88]      ; 004259e7
    FLD float ptr [ESP + 0x8]           ; 004259ee
    FADD float ptr [EAX + 0x199ec]      ; 004259f2
    FLD float ptr [ESP + 0x10]          ; 004259f8
    FXCH                                ; 004259fc
    FSTP float ptr [ESP + 0x8]          ; 004259fe
    FADD float ptr [EAX + 0x199f0]      ; 00425a02
    MOV EAX,dword ptr [ESP + 0x8]       ; 00425a08
    MOV dword ptr [ESP + 0x38],EAX      ; 00425a0c
    MOV EAX,dword ptr [ESP + 0xc]       ; 00425a10
    FSTP float ptr [ESP + 0x10]         ; 00425a14
    MOV dword ptr [ESP + 0x3c],EAX      ; 00425a18
    MOV EAX,dword ptr [ESP + 0x10]      ; 00425a1c
    MOV dword ptr [ESP + 0x40],EAX      ; 00425a20
    MOV EAX,dword ptr [ESP + 0x88]      ; 00425a24
    MOV EBX,dword ptr [ESP + 0x6c]      ; 00425a2b
    MOV dword ptr [ESP + 0x5c],EAX      ; 00425a2f
    LEA EAX,[EBX*0x4 + 0x0]             ; 00425a33
    SUB EAX,EBX                         ; 00425a3a
    SHL EAX,0x4                         ; 00425a3c
    NEG EAX                             ; 00425a3f
    MOV dword ptr [ESP + 0x58],EAX      ; 00425a41
    MOV EAX,dword ptr [ESP + 0x68]      ; 00425a45
    XOR EDI,EDI                         ; 00425a49
    SHL EAX,0x2                         ; 00425a4b
    MOV dword ptr [ESP + 0x70],EDI      ; 00425a4e
    MOV dword ptr [ESP + 0x54],EAX      ; 00425a52
    MOV EAX,dword ptr [ESP + 0x70]      ; 00425a56
        ;   Label: LAB_00425a56
    MOV dword ptr [ESP + 0x78],EAX      ; 00425a5a
    FILD dword ptr [ESP + 0x78]         ; 00425a5e
    FMUL float ptr [0x0065b5c8]         ; 00425a62 | DAT_0065b5c8
    MOV EDI,dword ptr [ESP + 0x5c]      ; 00425a68
    MOV EBP,dword ptr [ESP + 0x58]      ; 00425a6c
    XOR EBX,EBX                         ; 00425a70
    MOV EAX,dword ptr [ESP + 0x54]      ; 00425a72
    MOV ESI,EDI                         ; 00425a76
    NEG EAX                             ; 00425a78
    FADD float ptr [ESP + 0x8]          ; 00425a7a
    ADD EBP,EAX                         ; 00425a7e
    FSTP float ptr [ESP + 0x38]         ; 00425a80
    MOV dword ptr [ESP + 0x78],EBX      ; 00425a84
        ;   Label: LAB_00425a84
    FILD dword ptr [ESP + 0x78]         ; 00425a88
    FMUL float ptr [0x0065b5c8]         ; 00425a8c | DAT_0065b5c8
    MOV EAX,dword ptr [ESP + 0x70]      ; 00425a92
    FADD float ptr [ESP + 0x10]         ; 00425a96
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00425a9a
    FSTP float ptr [ESP + 0x40]         ; 00425a9e
    CMP EAX,EDX                         ; 00425aa2
    JL 0x00425b26                       ; 00425aa4
        ;   XREF to: 00425b26 (CONDITIONAL_JUMP)  ; LAB_00425b26
    CMP EAX,dword ptr [ESP + 0x60]      ; 00425aaa
    JG 0x00425b26                       ; 00425aae
        ;   XREF to: 00425b26 (CONDITIONAL_JUMP)  ; LAB_00425b26
    CMP EBX,dword ptr [ESP + 0x68]      ; 00425ab4
    JL 0x00425b26                       ; 00425ab8
        ;   XREF to: 00425b26 (CONDITIONAL_JUMP)  ; LAB_00425b26
    CMP EBX,dword ptr [ESP + 0x64]      ; 00425aba
    JG 0x00425b26                       ; 00425abe
        ;   XREF to: 00425b26 (CONDITIONAL_JUMP)  ; LAB_00425b26
    MOV EAX,dword ptr [EBP + 0x822d08]  ; 00425ac0 | DAT_00822d08 | DAT_00822d0c
    MOV dword ptr [ESI + 0x128b8],EAX   ; 00425ac6
    ADD ESI,0x4                         ; 00425acc
        ;   Label: LAB_00425acc
    ADD EBP,0x4                         ; 00425acf
    INC EBX                             ; 00425ad2
    ADD EDI,0x4                         ; 00425ad3
    CMP EBX,0xc                         ; 00425ad6
    JL 0x00425a84                       ; 00425ad9
        ;   XREF to: 00425a84 (CONDITIONAL_JUMP)  ; LAB_00425a84
    MOV EBX,dword ptr [ESP + 0x58]      ; 00425adb
    MOV ESI,dword ptr [ESP + 0x70]      ; 00425adf
    MOV ECX,dword ptr [ESP + 0x5c]      ; 00425ae3
    ADD EBX,0x30                        ; 00425ae7
    INC ESI                             ; 00425aea
    ADD ECX,0x30                        ; 00425aeb
    MOV dword ptr [ESP + 0x58],EBX      ; 00425aee
    MOV dword ptr [ESP + 0x70],ESI      ; 00425af2
    MOV dword ptr [ESP + 0x5c],ECX      ; 00425af6
    CMP ESI,0xc                         ; 00425afa
    JL 0x00425a56                       ; 00425afd
        ;   XREF to: 00425a56 (CONDITIONAL_JUMP)  ; LAB_00425a56
    MOV EBX,dword ptr [ESP + 0x88]      ; 00425b03
    MOV EAX,dword ptr [ESP + 0x50]      ; 00425b0a
    MOV dword ptr [EBX + 0x199e4],EAX   ; 00425b0e
    MOV EAX,dword ptr [ESP + 0x74]      ; 00425b14
    MOV dword ptr [EBX + 0x199e8],EAX   ; 00425b18
    POP ESI                             ; 00425b1e
    POP EDI                             ; 00425b1f
    ADD ESP,0x74                        ; 00425b20
        ;   Label: LAB_00425b20
    POP EBP                             ; 00425b23
    POP EBX                             ; 00425b24
    RET                                 ; 00425b25
    PUSH 0x0                            ; 00425b26
        ;   Label: LAB_00425b26
    LEA EAX,[ESP + 0x50]                ; 00425b28
    PUSH EAX                            ; 00425b2c
    LEA EAX,[ESP + 0x40]                ; 00425b2d
    PUSH EAX                            ; 00425b31
    PUSH 0x3277d14                      ; 00425b32 | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0 ; 00425b37
        ;   XREF to: 004966f0 (UNCONDITIONAL_CALL)  ; float core_dtrace.cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0(CDemonRaytrace * this_ptr, CVector3f * pos, int * hit_flag, CVector3f * normal_out)
    MOV dword ptr [ESP + 0x88],EAX      ; 00425b3c
    FLD float ptr [ESP + 0x88]          ; 00425b43
    ADD ESP,0x10                        ; 00425b4a
    MOV EAX,dword ptr [ESP + 0x88]      ; 00425b4d
    FSUB float ptr [EAX + 0x24]         ; 00425b54
    FSTP float ptr [EDI + 0x128b8]      ; 00425b57
    JMP 0x00425acc                      ; 00425b5d
        ;   XREF to: 00425acc (UNCONDITIONAL_JUMP)  ; LAB_00425acc


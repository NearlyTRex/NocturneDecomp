; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0(float *param_1,float *param_2)
;
; Local Variables:
; undefined8       Stack[-0x90]:8  local_90
; undefined8       Stack[-0x88]:8  local_88
; undefined8       Stack[-0x80]:8  local_80
; undefined8       Stack[-0x78]:8  local_78
; undefined8       Stack[-0x70]:8  local_70
; undefined8       Stack[-0x68]:8  local_68
; undefined8       Stack[-0x60]:8  local_60
; undefined8       Stack[-0x58]:8  local_58
; undefined8       Stack[-0x50]:8  local_50
; undefined8       Stack[-0x48]:8  local_48
; undefined8       Stack[-0x40]:8  local_40
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[9]:
;   FUN_00437ab0 at 00437ad6
;   FUN_00450c90 at 00450cd4
;   core_box.cpp_CBox_processPhysics_FUN_0041ad10 at 0041b26f
;   core_bugs.cpp_CBugs_updateBugRenderingData_FUN_00422c70 at 00423314
;   core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_00451350 at 00451599
;   core_dlight.cpp_FUN_0044f0b0 at 0044f0e5
;   core_fire.cpp_CMuzzleFlash_init_FUN_00484e10 at 00484e8c
;   core_set.cpp_CDemonSet_setCameraView_FUN_005088f0 at 00508dc7
;   engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_004607b0 at 004607c6
;
; Referenced Globals:
;   double DOUBLE_0057c50e = -1
;   double DOUBLE_0057c516 = 0.707000000000000
;   double DOUBLE_0057c51e = -0.707000000000000
;   double DOUBLE_0057c526 = 3.14159265359000
;   double DOUBLE_0057c52e = -3.14159265359000
;   float FLOAT_0057c536 = 6.283185
;   float FLOAT_0057c53a = -6.283185
;
; Called Functions:
;   crt_math.c_acos_FUN_00565ca4
;   crt_math.c_asin_FUN_00565c76
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044dbd0
        ;   Label: core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0
    PUSH EDI                            ; 0044dbd1
    PUSH EBP                            ; 0044dbd2
    MOV EBP,ESP                         ; 0044dbd3
    SUB ESP,0x84                        ; 0044dbd5
    AND ESP,0xfffffff8                  ; 0044dbdb
    MOV ECX,dword ptr [EBP + 0x10]      ; 0044dbde
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044dbe1
    FLD float ptr [ECX + 0x14]          ; 0044dbe4
    FCHS                                ; 0044dbe7
    FST double ptr [ESP + 0x68]         ; 0044dbe9
    FCOMP double ptr [0x0057c50e]       ; 0044dbed | DOUBLE_0057c50e
    FNSTSW AX                           ; 0044dbf3
    SAHF                                ; 0044dbf5
    JBE 0x0044dcde                      ; 0044dbf6
        ;   XREF to: 0044dcde (CONDITIONAL_JUMP)  ; LAB_0044dcde
    FLD1                                ; 0044dbfc
    FCOMP double ptr [ESP + 0x68]       ; 0044dbfe
    FNSTSW AX                           ; 0044dc02
    SAHF                                ; 0044dc04
    JA 0x0044dce9                       ; 0044dc05
        ;   XREF to: 0044dce9 (CONDITIONAL_JUMP)  ; LAB_0044dce9
    MOV dword ptr [EDX],0x3fc90fdb      ; 0044dc0b
    MOV dword ptr [EDX + 0x8],0x0       ; 0044dc11
        ;   Label: LAB_0044dc11
    FLD float ptr [ECX + 0x18]          ; 0044dc18
    FCHS                                ; 0044dc1b
    FSTP double ptr [ESP + 0x18]        ; 0044dc1d
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044dc21
    FLD float ptr [ECX]                 ; 0044dc25
    MOV dword ptr [ESP + 0x28],EAX      ; 0044dc27
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0044dc2b
    FSTP double ptr [ESP + 0x48]        ; 0044dc2f
    MOV dword ptr [ESP + 0x2c],EAX      ; 0044dc33
    MOV EAX,dword ptr [ESP + 0x48]      ; 0044dc37
    MOV dword ptr [ESP + 0x60],EAX      ; 0044dc3b
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0044dc3f
    FLD double ptr [ESP + 0x18]         ; 0044dc43
    MOV dword ptr [ESP + 0x64],EAX      ; 0044dc47
    FCOMP double ptr [0x0057c516]       ; 0044dc4b | DOUBLE_0057c516
    FNSTSW AX                           ; 0044dc51
    SAHF                                ; 0044dc53
    JNC 0x0044deb1                      ; 0044dc54
        ;   XREF to: 0044deb1 (CONDITIONAL_JUMP)  ; LAB_0044deb1
    FLD double ptr [ESP + 0x18]         ; 0044dc5a
    FCOMP double ptr [0x0057c51e]       ; 0044dc5e | DOUBLE_0057c51e
    FNSTSW AX                           ; 0044dc64
    SAHF                                ; 0044dc66
    JBE 0x0044deb1                      ; 0044dc67
        ;   XREF to: 0044deb1 (CONDITIONAL_JUMP)  ; LAB_0044deb1
    FLD double ptr [ESP + 0x18]         ; 0044dc6d
    CALL crt_math.c_asin_FUN_00565c76   ; 0044dc71
        ;   XREF to: 00565c76 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_asin_FUN_00565c76()
    FLDZ                                ; 0044dc76
    FXCH                                ; 0044dc78
    FSTP float ptr [ESP + 0x70]         ; 0044dc7a
    FCOMP double ptr [ESP + 0x48]       ; 0044dc7e
    FNSTSW AX                           ; 0044dc82
    SAHF                                ; 0044dc84
    JBE 0x0044dc95                      ; 0044dc85
        ;   XREF to: 0044dc95 (CONDITIONAL_JUMP)  ; LAB_0044dc95
    FLD float ptr [ESP + 0x70]          ; 0044dc87
    FSUBR double ptr [0x0057c526]       ; 0044dc8b | DOUBLE_0057c526
    FSTP float ptr [ESP + 0x70]         ; 0044dc91
    FLD float ptr [ESP + 0x70]          ; 0044dc95
        ;   Label: LAB_0044dc95
    FCOMP double ptr [0x0057c52e]       ; 0044dc99 | DOUBLE_0057c52e
    FNSTSW AX                           ; 0044dc9f
    SAHF                                ; 0044dca1
    JNC 0x0044dcb2                      ; 0044dca2
        ;   XREF to: 0044dcb2 (CONDITIONAL_JUMP)  ; LAB_0044dcb2
    FLD float ptr [ESP + 0x70]          ; 0044dca4
    FADD float ptr [0x0057c536]         ; 0044dca8 | FLOAT_0057c536
    FSTP float ptr [ESP + 0x70]         ; 0044dcae
    FLD float ptr [ESP + 0x70]          ; 0044dcb2
        ;   Label: LAB_0044dcb2
    FCOMP double ptr [0x0057c526]       ; 0044dcb6 | DOUBLE_0057c526
    FNSTSW AX                           ; 0044dcbc
    SAHF                                ; 0044dcbe
    JBE 0x0044dccf                      ; 0044dcbf
        ;   XREF to: 0044dccf (CONDITIONAL_JUMP)  ; LAB_0044dccf
    FLD float ptr [ESP + 0x70]          ; 0044dcc1
    FADD float ptr [0x0057c53a]         ; 0044dcc5 | FLOAT_0057c53a
    FSTP float ptr [ESP + 0x70]         ; 0044dccb
    MOV EAX,dword ptr [ESP + 0x70]      ; 0044dccf
        ;   Label: LAB_0044dccf
    MOV dword ptr [EDX + 0x4],EAX       ; 0044dcd3
    MOV EAX,EDX                         ; 0044dcd6
    MOV ESP,EBP                         ; 0044dcd8
    POP EBP                             ; 0044dcda
    POP EDI                             ; 0044dcdb
    POP EBX                             ; 0044dcdc
    RET                                 ; 0044dcdd
    MOV dword ptr [EDX],0xbfc90fdb      ; 0044dcde
        ;   Label: LAB_0044dcde
    JMP 0x0044dc11                      ; 0044dce4
        ;   XREF to: 0044dc11 (UNCONDITIONAL_JUMP)  ; LAB_0044dc11
    FLD double ptr [ESP + 0x68]         ; 0044dce9
        ;   Label: LAB_0044dce9
    FLD ST0                             ; 0044dced
    CALL crt_math.c_asin_FUN_00565c76   ; 0044dcef
        ;   XREF to: 00565c76 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_asin_FUN_00565c76()
    FLD ST1                             ; 0044dcf4
    FMULP ST2                           ; 0044dcf6
    FLD1                                ; 0044dcf8
    FSUBRP ST2,ST0                      ; 0044dcfa
    FXCH                                ; 0044dcfc
    FSQRT                               ; 0044dcfe
    FLDZ                                ; 0044dd00
    FXCH ST2                            ; 0044dd02
    FSTP float ptr [EDX]                ; 0044dd04
    FSTP double ptr [ESP]               ; 0044dd06
    FCOMP double ptr [ESP]              ; 0044dd09
    FNSTSW AX                           ; 0044dd0c
    SAHF                                ; 0044dd0e
    JNC 0x0044dc11                      ; 0044dd0f
        ;   XREF to: 0044dc11 (CONDITIONAL_JUMP)  ; LAB_0044dc11
    FLD float ptr [ECX + 0x20]          ; 0044dd15
    FLD1                                ; 0044dd18
    FDIV double ptr [ESP]               ; 0044dd1a
    FLD float ptr [ECX + 0x8]           ; 0044dd1d
    FMUL ST1                            ; 0044dd20
    FXCH ST2                            ; 0044dd22
    FMULP                               ; 0044dd24
    FXCH                                ; 0044dd26
    FSTP double ptr [ESP + 0x10]        ; 0044dd28
    MOV EAX,dword ptr [ESP + 0x10]      ; 0044dd2c
    MOV dword ptr [ESP + 0x30],EAX      ; 0044dd30
    MOV EAX,dword ptr [ESP + 0x14]      ; 0044dd34
    FSTP double ptr [ESP + 0x38]        ; 0044dd38
    MOV dword ptr [ESP + 0x34],EAX      ; 0044dd3c
    MOV EAX,dword ptr [ESP + 0x38]      ; 0044dd40
    MOV dword ptr [ESP + 0x58],EAX      ; 0044dd44
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0044dd48
    FLD double ptr [ESP + 0x10]         ; 0044dd4c
    MOV dword ptr [ESP + 0x5c],EAX      ; 0044dd50
    FCOMP double ptr [0x0057c516]       ; 0044dd54 | DOUBLE_0057c516
    FNSTSW AX                           ; 0044dd5a
    SAHF                                ; 0044dd5c
    JNC 0x0044df03                      ; 0044dd5d
        ;   XREF to: 0044df03 (CONDITIONAL_JUMP)  ; LAB_0044df03
    FLD double ptr [ESP + 0x10]         ; 0044dd63
    FCOMP double ptr [0x0057c51e]       ; 0044dd67 | DOUBLE_0057c51e
    FNSTSW AX                           ; 0044dd6d
    SAHF                                ; 0044dd6f
    JBE 0x0044df03                      ; 0044dd70
        ;   XREF to: 0044df03 (CONDITIONAL_JUMP)  ; LAB_0044df03
    FLD double ptr [ESP + 0x10]         ; 0044dd76
    CALL crt_math.c_asin_FUN_00565c76   ; 0044dd7a
        ;   XREF to: 00565c76 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_asin_FUN_00565c76()
    FLDZ                                ; 0044dd7f
    FXCH                                ; 0044dd81
    FSTP float ptr [ESP + 0x78]         ; 0044dd83
    FCOMP double ptr [ESP + 0x38]       ; 0044dd87
    FNSTSW AX                           ; 0044dd8b
    SAHF                                ; 0044dd8d
    JBE 0x0044dd9e                      ; 0044dd8e
        ;   XREF to: 0044dd9e (CONDITIONAL_JUMP)  ; LAB_0044dd9e
    FLD float ptr [ESP + 0x78]          ; 0044dd90
    FSUBR double ptr [0x0057c526]       ; 0044dd94 | DOUBLE_0057c526
    FSTP float ptr [ESP + 0x78]         ; 0044dd9a
    FLD float ptr [ESP + 0x78]          ; 0044dd9e
        ;   Label: LAB_0044dd9e
    FCOMP double ptr [0x0057c52e]       ; 0044dda2 | DOUBLE_0057c52e
    FNSTSW AX                           ; 0044dda8
    SAHF                                ; 0044ddaa
    JNC 0x0044ddbb                      ; 0044ddab
        ;   XREF to: 0044ddbb (CONDITIONAL_JUMP)  ; LAB_0044ddbb
    FLD float ptr [ESP + 0x78]          ; 0044ddad
    FADD float ptr [0x0057c536]         ; 0044ddb1 | FLOAT_0057c536
    FSTP float ptr [ESP + 0x78]         ; 0044ddb7
    FLD float ptr [ESP + 0x78]          ; 0044ddbb
        ;   Label: LAB_0044ddbb
    FCOMP double ptr [0x0057c526]       ; 0044ddbf | DOUBLE_0057c526
    FNSTSW AX                           ; 0044ddc5
    SAHF                                ; 0044ddc7
    JBE 0x0044ddd8                      ; 0044ddc8
        ;   XREF to: 0044ddd8 (CONDITIONAL_JUMP)  ; LAB_0044ddd8
    FLD float ptr [ESP + 0x78]          ; 0044ddca
    FADD float ptr [0x0057c53a]         ; 0044ddce | FLOAT_0057c53a
    FSTP float ptr [ESP + 0x78]         ; 0044ddd4
    MOV EAX,dword ptr [ESP + 0x78]      ; 0044ddd8
        ;   Label: LAB_0044ddd8
    MOV dword ptr [EDX + 0x4],EAX       ; 0044dddc
    FLD float ptr [ECX + 0x10]          ; 0044dddf
    FLD1                                ; 0044dde2
    FDIV double ptr [ESP]               ; 0044dde4
    FLD float ptr [ECX + 0xc]           ; 0044dde7
    FMUL ST1                            ; 0044ddea
    FXCH ST2                            ; 0044ddec
    FMULP                               ; 0044ddee
    FXCH                                ; 0044ddf0
    FSTP double ptr [ESP + 0x8]         ; 0044ddf2
    MOV EAX,dword ptr [ESP + 0x8]       ; 0044ddf6
    MOV dword ptr [ESP + 0x20],EAX      ; 0044ddfa
    MOV EAX,dword ptr [ESP + 0xc]       ; 0044ddfe
    FSTP double ptr [ESP + 0x40]        ; 0044de02
    MOV dword ptr [ESP + 0x24],EAX      ; 0044de06
    MOV EAX,dword ptr [ESP + 0x40]      ; 0044de0a
    MOV dword ptr [ESP + 0x50],EAX      ; 0044de0e
    MOV EAX,dword ptr [ESP + 0x44]      ; 0044de12
    FLD double ptr [ESP + 0x8]          ; 0044de16
    MOV dword ptr [ESP + 0x54],EAX      ; 0044de1a
    FCOMP double ptr [0x0057c516]       ; 0044de1e | DOUBLE_0057c516
    FNSTSW AX                           ; 0044de24
    SAHF                                ; 0044de26
    JNC 0x0044df55                      ; 0044de27
        ;   XREF to: 0044df55 (CONDITIONAL_JUMP)  ; LAB_0044df55
    FLD double ptr [ESP + 0x8]          ; 0044de2d
    FCOMP double ptr [0x0057c51e]       ; 0044de31 | DOUBLE_0057c51e
    FNSTSW AX                           ; 0044de37
    SAHF                                ; 0044de39
    JBE 0x0044df55                      ; 0044de3a
        ;   XREF to: 0044df55 (CONDITIONAL_JUMP)  ; LAB_0044df55
    FLD double ptr [ESP + 0x8]          ; 0044de40
    CALL crt_math.c_asin_FUN_00565c76   ; 0044de44
        ;   XREF to: 00565c76 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_asin_FUN_00565c76()
    FLDZ                                ; 0044de49
    FXCH                                ; 0044de4b
    FSTP float ptr [ESP + 0x74]         ; 0044de4d
    FCOMP double ptr [ESP + 0x40]       ; 0044de51
    FNSTSW AX                           ; 0044de55
    SAHF                                ; 0044de57
    JBE 0x0044de68                      ; 0044de58
        ;   XREF to: 0044de68 (CONDITIONAL_JUMP)  ; LAB_0044de68
    FLD float ptr [ESP + 0x74]          ; 0044de5a
    FSUBR double ptr [0x0057c526]       ; 0044de5e | DOUBLE_0057c526
    FSTP float ptr [ESP + 0x74]         ; 0044de64
    FLD float ptr [ESP + 0x74]          ; 0044de68
        ;   Label: LAB_0044de68
    FCOMP double ptr [0x0057c52e]       ; 0044de6c | DOUBLE_0057c52e
    FNSTSW AX                           ; 0044de72
    SAHF                                ; 0044de74
    JNC 0x0044de85                      ; 0044de75
        ;   XREF to: 0044de85 (CONDITIONAL_JUMP)  ; LAB_0044de85
    FLD float ptr [ESP + 0x74]          ; 0044de77
    FADD float ptr [0x0057c536]         ; 0044de7b | FLOAT_0057c536
    FSTP float ptr [ESP + 0x74]         ; 0044de81
    FLD float ptr [ESP + 0x74]          ; 0044de85
        ;   Label: LAB_0044de85
    FCOMP double ptr [0x0057c526]       ; 0044de89 | DOUBLE_0057c526
    FNSTSW AX                           ; 0044de8f
    SAHF                                ; 0044de91
    JBE 0x0044dea2                      ; 0044de92
        ;   XREF to: 0044dea2 (CONDITIONAL_JUMP)  ; LAB_0044dea2
    FLD float ptr [ESP + 0x74]          ; 0044de94
    FADD float ptr [0x0057c53a]         ; 0044de98 | FLOAT_0057c53a
    FSTP float ptr [ESP + 0x74]         ; 0044de9e
    MOV EAX,dword ptr [ESP + 0x74]      ; 0044dea2
        ;   Label: LAB_0044dea2
    MOV dword ptr [EDX + 0x8],EAX       ; 0044dea6
    MOV EAX,EDX                         ; 0044dea9
    MOV ESP,EBP                         ; 0044deab
    POP EBP                             ; 0044dead
    POP EDI                             ; 0044deae
    POP EBX                             ; 0044deaf
    RET                                 ; 0044deb0
    FLD double ptr [ESP + 0x60]         ; 0044deb1
        ;   Label: LAB_0044deb1
    FCOMP double ptr [0x0057c50e]       ; 0044deb5 | DOUBLE_0057c50e
    FNSTSW AX                           ; 0044debb
    SAHF                                ; 0044debd
    JA 0x0044dee1                       ; 0044debe
        ;   XREF to: 0044dee1 (CONDITIONAL_JUMP)  ; LAB_0044dee1
    MOV dword ptr [ESP + 0x70],0x40490fdb ; 0044dec0
    FLDZ                                ; 0044dec8
        ;   Label: LAB_0044dec8
    FCOMP double ptr [ESP + 0x28]       ; 0044deca
    FNSTSW AX                           ; 0044dece
    SAHF                                ; 0044ded0
    JBE 0x0044dc95                      ; 0044ded1
        ;   XREF to: 0044dc95 (CONDITIONAL_JUMP)  ; LAB_0044dc95
    XOR byte ptr [ESP + 0x73],0x80      ; 0044ded7
    JMP 0x0044dc95                      ; 0044dedc
        ;   XREF to: 0044dc95 (UNCONDITIONAL_JUMP)  ; LAB_0044dc95
    FLD1                                ; 0044dee1
        ;   Label: LAB_0044dee1
    FCOMP double ptr [ESP + 0x60]       ; 0044dee3
    FNSTSW AX                           ; 0044dee7
    SAHF                                ; 0044dee9
    JA 0x0044def4                       ; 0044deea
        ;   XREF to: 0044def4 (CONDITIONAL_JUMP)  ; LAB_0044def4
    XOR ECX,ECX                         ; 0044deec
    MOV dword ptr [ESP + 0x70],ECX      ; 0044deee
    JMP 0x0044dec8                      ; 0044def2
        ;   XREF to: 0044dec8 (UNCONDITIONAL_JUMP)  ; LAB_0044dec8
    FLD double ptr [ESP + 0x60]         ; 0044def4
        ;   Label: LAB_0044def4
    CALL crt_math.c_acos_FUN_00565ca4   ; 0044def8
        ;   XREF to: 00565ca4 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_00565ca4()
    FSTP float ptr [ESP + 0x70]         ; 0044defd
    JMP 0x0044dec8                      ; 0044df01
        ;   XREF to: 0044dec8 (UNCONDITIONAL_JUMP)  ; LAB_0044dec8
    FLD double ptr [ESP + 0x58]         ; 0044df03
        ;   Label: LAB_0044df03
    FCOMP double ptr [0x0057c50e]       ; 0044df07 | DOUBLE_0057c50e
    FNSTSW AX                           ; 0044df0d
    SAHF                                ; 0044df0f
    JA 0x0044df33                       ; 0044df10
        ;   XREF to: 0044df33 (CONDITIONAL_JUMP)  ; LAB_0044df33
    MOV dword ptr [ESP + 0x78],0x40490fdb ; 0044df12
    FLDZ                                ; 0044df1a
        ;   Label: LAB_0044df1a
    FCOMP double ptr [ESP + 0x30]       ; 0044df1c
    FNSTSW AX                           ; 0044df20
    SAHF                                ; 0044df22
    JBE 0x0044dd9e                      ; 0044df23
        ;   XREF to: 0044dd9e (CONDITIONAL_JUMP)  ; LAB_0044dd9e
    XOR byte ptr [ESP + 0x7b],0x80      ; 0044df29
    JMP 0x0044dd9e                      ; 0044df2e
        ;   XREF to: 0044dd9e (UNCONDITIONAL_JUMP)  ; LAB_0044dd9e
    FLD1                                ; 0044df33
        ;   Label: LAB_0044df33
    FCOMP double ptr [ESP + 0x58]       ; 0044df35
    FNSTSW AX                           ; 0044df39
    SAHF                                ; 0044df3b
    JA 0x0044df46                       ; 0044df3c
        ;   XREF to: 0044df46 (CONDITIONAL_JUMP)  ; LAB_0044df46
    XOR EBX,EBX                         ; 0044df3e
    MOV dword ptr [ESP + 0x78],EBX      ; 0044df40
    JMP 0x0044df1a                      ; 0044df44
        ;   XREF to: 0044df1a (UNCONDITIONAL_JUMP)  ; LAB_0044df1a
    FLD double ptr [ESP + 0x58]         ; 0044df46
        ;   Label: LAB_0044df46
    CALL crt_math.c_acos_FUN_00565ca4   ; 0044df4a
        ;   XREF to: 00565ca4 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_00565ca4()
    FSTP float ptr [ESP + 0x78]         ; 0044df4f
    JMP 0x0044df1a                      ; 0044df53
        ;   XREF to: 0044df1a (UNCONDITIONAL_JUMP)  ; LAB_0044df1a
    FLD double ptr [ESP + 0x50]         ; 0044df55
        ;   Label: LAB_0044df55
    FCOMP double ptr [0x0057c50e]       ; 0044df59 | DOUBLE_0057c50e
    FNSTSW AX                           ; 0044df5f
    SAHF                                ; 0044df61
    JA 0x0044df85                       ; 0044df62
        ;   XREF to: 0044df85 (CONDITIONAL_JUMP)  ; LAB_0044df85
    MOV dword ptr [ESP + 0x74],0x40490fdb ; 0044df64
    FLDZ                                ; 0044df6c
        ;   Label: LAB_0044df6c
    FCOMP double ptr [ESP + 0x20]       ; 0044df6e
    FNSTSW AX                           ; 0044df72
    SAHF                                ; 0044df74
    JBE 0x0044de68                      ; 0044df75
        ;   XREF to: 0044de68 (CONDITIONAL_JUMP)  ; LAB_0044de68
    XOR byte ptr [ESP + 0x77],0x80      ; 0044df7b
    JMP 0x0044de68                      ; 0044df80
        ;   XREF to: 0044de68 (UNCONDITIONAL_JUMP)  ; LAB_0044de68
    FLD1                                ; 0044df85
        ;   Label: LAB_0044df85
    FCOMP double ptr [ESP + 0x50]       ; 0044df87
    FNSTSW AX                           ; 0044df8b
    SAHF                                ; 0044df8d
    JA 0x0044df98                       ; 0044df8e
        ;   XREF to: 0044df98 (CONDITIONAL_JUMP)  ; LAB_0044df98
    XOR EDI,EDI                         ; 0044df90
    MOV dword ptr [ESP + 0x74],EDI      ; 0044df92
    JMP 0x0044df6c                      ; 0044df96
        ;   XREF to: 0044df6c (UNCONDITIONAL_JUMP)  ; LAB_0044df6c
    FLD double ptr [ESP + 0x50]         ; 0044df98
        ;   Label: LAB_0044df98
    CALL crt_math.c_acos_FUN_00565ca4   ; 0044df9c
        ;   XREF to: 00565ca4 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_00565ca4()
    FSTP float ptr [ESP + 0x74]         ; 0044dfa1
    JMP 0x0044df6c                      ; 0044dfa5
        ;   XREF to: 0044df6c (UNCONDITIONAL_JUMP)  ; LAB_0044df6c


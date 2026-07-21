; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_00498de0(int param_1,int param_2,int param_3)
;
; Local Variables:
; undefined        Stack[-0xf8]:1  local_f8
;
; XREF[1]:
;   core_gabriela.cpp_CGabriella_updateAimTracking_FUN_004990c0 at 004992ed
;
; Referenced Globals:
;   undefined4 DAT_00582202
;   undefined4 DAT_0058220a
;   undefined4 DAT_00582212
;   undefined4 DAT_0058221a
;   undefined4 DAT_00582222
;   undefined4 DAT_0058222a
;   undefined4 DAT_00582232
;   undefined4 DAT_005993b0
;   undefined4 DAT_005be368
;   undefined4 DAT_01bcdef4
;   undefined4 DAT_01e57284
;   undefined4 DAT_01fa3fe0
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00511780
;   core_setcolid.cpp_CDemonSet_init_FUN_00511750
;   core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00
;   core_setcolid.cpp_CDemonSet_setRayType_FUN_00511800
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
;   crt_memory.c___arrinit_FUN_005644a7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00498de0
        ;   Label: FUN_00498de0
    PUSH ESI                            ; 00498de1
    PUSH EDI                            ; 00498de2
    PUSH EBP                            ; 00498de3
    MOV EBP,ESP                         ; 00498de4
    SUB ESP,0x100                       ; 00498de6
    AND ESP,0xfffffff8                  ; 00498dec
    MOV EDI,dword ptr [EBP + 0x14]      ; 00498def
    MOV ESI,dword ptr [EBP + 0x18]      ; 00498df2
    MOV EDX,dword ptr [0x01bcdef4]      ; 00498df5 | DAT_01bcdef4
    PUSH EDX                            ; 00498dfb
    PUSH ESI                            ; 00498dfc
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 00498dfd
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 00498e02
    PUSH 0x5993b0                       ; 00498e05 | DAT_005993b0
    PUSH 0xa                            ; 00498e0a
    MOV EBX,EAX                         ; 00498e0c
    LEA EAX,[ESP + 0x20]                ; 00498e0e
    PUSH EAX                            ; 00498e12
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 00498e13
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    ADD ESP,0xc                         ; 00498e18
    LEA EAX,[ESP + 0x18]                ; 00498e1b
    PUSH EAX                            ; 00498e1f
    MOV EDX,dword ptr [ESI + 0x14c]     ; 00498e20
    PUSH ESI                            ; 00498e26
    CALL dword ptr [EDX + 0x4c]         ; 00498e27
    ADD ESP,0x8                         ; 00498e2a
    TEST EAX,EAX                        ; 00498e2d
    JZ 0x00498e49                       ; 00498e2f
        ;   XREF to: 00498e49 (CONDITIONAL_JUMP)  ; LAB_00498e49
    TEST EBX,EBX                        ; 00498e31
    JZ 0x00498e62                       ; 00498e33
        ;   XREF to: 00498e62 (CONDITIONAL_JUMP)  ; LAB_00498e62
    PUSH EBX                            ; 00498e35
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00498e36
    CALL dword ptr [EAX + 0x104]        ; 00498e3c
    ADD ESP,0x4                         ; 00498e42
    TEST EAX,EAX                        ; 00498e45
    JLE 0x00498e62                      ; 00498e47
        ;   XREF to: 00498e62 (CONDITIONAL_JUMP)  ; LAB_00498e62
    MOV dword ptr [ESP + 0xf8],0xbf800000 ; 00498e49
        ;   Label: LAB_00498e49
    MOV EAX,dword ptr [ESP + 0xf8]      ; 00498e54
    MOV ESP,EBP                         ; 00498e5b
    POP EBP                             ; 00498e5d
    POP EDI                             ; 00498e5e
    POP ESI                             ; 00498e5f
    POP EBX                             ; 00498e60
    RET                                 ; 00498e61
    LEA EAX,[ESI + 0x20]                ; 00498e62
        ;   Label: LAB_00498e62
    PUSH EAX                            ; 00498e65
    LEA EAX,[ESP + 0xc4]                ; 00498e66
    PUSH EAX                            ; 00498e6d
    PUSH EDI                            ; 00498e6e
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 00498e6f
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290()
    ADD ESP,0xc                         ; 00498e74
    FLD float ptr [ESP + 0xc8]          ; 00498e77
    FLDZ                                ; 00498e7e
    FCOMPP                              ; 00498e80
    FNSTSW AX                           ; 00498e82
    SAHF                                ; 00498e84
    JNC 0x00498e49                      ; 00498e85
        ;   XREF to: 00498e49 (CONDITIONAL_JUMP)  ; LAB_00498e49
    FLD float ptr [ESP + 0xc4]          ; 00498e87
    FMUL ST0                            ; 00498e8e
    FLD float ptr [ESP + 0xc0]          ; 00498e90
    FMUL ST0                            ; 00498e97
    FADDP                               ; 00498e99
    FLD float ptr [ESP + 0xc8]          ; 00498e9b
    FMUL ST0                            ; 00498ea2
    FADDP                               ; 00498ea4
    FSQRT                               ; 00498ea6
    FSTP float ptr [ESP + 0x14]         ; 00498ea8
    MOV EAX,dword ptr [ESP + 0x14]      ; 00498eac
    MOV dword ptr [ESP + 0xf0],EAX      ; 00498eb0
    LEA EAX,[ESP + 0xc0]                ; 00498eb7
    PUSH EAX                            ; 00498ebe
    LEA EAX,[ESP + 0xac]                ; 00498ebf
    PUSH EAX                            ; 00498ec6
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 00498ec7
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    ADD ESP,0x8                         ; 00498ecc
    MOV EAX,dword ptr [EAX + 0x4]       ; 00498ecf
    MOV ECX,dword ptr [EBP + 0x1c]      ; 00498ed2
    MOV dword ptr [ESP + 0x10],EAX      ; 00498ed5
    TEST ECX,ECX                        ; 00498ed9
    JZ 0x00498f1b                       ; 00498edb
        ;   XREF to: 00498f1b (CONDITIONAL_JUMP)  ; LAB_00498f1b
    FLD float ptr [ESP + 0x14]          ; 00498edd
    FCOMP double ptr [0x0058221a]       ; 00498ee1 | DAT_0058221a
    FNSTSW AX                           ; 00498ee7
    SAHF                                ; 00498ee9
    JA 0x00498e49                       ; 00498eea
        ;   XREF to: 00498e49 (CONDITIONAL_JUMP)  ; LAB_00498e49
    FLD float ptr [ESP + 0x10]          ; 00498ef0
    FST double ptr [ESP + 0x8]          ; 00498ef4
    FCOMP double ptr [0x00582222]       ; 00498ef8 | DAT_00582222
    FNSTSW AX                           ; 00498efe
    SAHF                                ; 00498f00
    JC 0x00498e49                       ; 00498f01
        ;   XREF to: 00498e49 (CONDITIONAL_JUMP)  ; LAB_00498e49
    FLD double ptr [ESP + 0x8]          ; 00498f07
    FCOMP double ptr [0x0058222a]       ; 00498f0b | DAT_0058222a
    FNSTSW AX                           ; 00498f11
    SAHF                                ; 00498f13
    JBE 0x00498f56                      ; 00498f14
        ;   XREF to: 00498f56 (CONDITIONAL_JUMP)  ; LAB_00498f56
    JMP 0x00498e49                      ; 00498f16
        ;   XREF to: 00498e49 (UNCONDITIONAL_JUMP)  ; LAB_00498e49
    FLD float ptr [ESP + 0x14]          ; 00498f1b
        ;   Label: LAB_00498f1b
    FCOMP double ptr [0x00582202]       ; 00498f1f | DAT_00582202
    FNSTSW AX                           ; 00498f25
    SAHF                                ; 00498f27
    JA 0x00498e49                       ; 00498f28
        ;   XREF to: 00498e49 (CONDITIONAL_JUMP)  ; LAB_00498e49
    FLD float ptr [ESP + 0x10]          ; 00498f2e
    FST double ptr [ESP]                ; 00498f32
    FCOMP double ptr [0x0058220a]       ; 00498f35 | DAT_0058220a
    FNSTSW AX                           ; 00498f3b
    SAHF                                ; 00498f3d
    JC 0x00498e49                       ; 00498f3e
        ;   XREF to: 00498e49 (CONDITIONAL_JUMP)  ; LAB_00498e49
    FLD double ptr [ESP]                ; 00498f44
    FCOMP double ptr [0x00582212]       ; 00498f47 | DAT_00582212
    FNSTSW AX                           ; 00498f4d
    SAHF                                ; 00498f4f
    JA 0x00498e49                       ; 00498f50
        ;   XREF to: 00498e49 (CONDITIONAL_JUMP)  ; LAB_00498e49
    LEA EBX,[ESP + 0x90]                ; 00498f56
        ;   Label: LAB_00498f56
    PUSH EBX                            ; 00498f5d
    MOV EAX,dword ptr [EDI + 0x14c]     ; 00498f5e
    PUSH EDI                            ; 00498f64
    CALL dword ptr [EAX + 0x14]         ; 00498f65
    LEA EBX,[EAX + 0xc]                 ; 00498f68
    FLD float ptr [EAX]                 ; 00498f6b
    FADD float ptr [EBX]                ; 00498f6d
    ADD ESP,0x8                         ; 00498f6f
    FST float ptr [ESP + 0xd8]          ; 00498f72
    FLD float ptr [EAX + 0x4]           ; 00498f79
    FADD float ptr [EBX + 0x4]          ; 00498f7c
    FXCH                                ; 00498f7f
    FLD float ptr [0x00582232]          ; 00498f81 | DAT_00582232
    FXCH                                ; 00498f87
    FMUL ST1                            ; 00498f89
    FXCH ST2                            ; 00498f8b
    FST float ptr [ESP + 0xdc]          ; 00498f8d
    FLD float ptr [EAX + 0x8]           ; 00498f94
    FADD float ptr [EBX + 0x8]          ; 00498f97
    FXCH                                ; 00498f9a
    FMUL ST2                            ; 00498f9c
    FXCH                                ; 00498f9e
    FST float ptr [ESP + 0xe0]          ; 00498fa0
    FMULP ST2                           ; 00498fa7
    LEA EAX,[EDI + 0x20]                ; 00498fa9
    FXCH ST2                            ; 00498fac
    FSTP float ptr [ESP + 0xe4]         ; 00498fae
    FXCH                                ; 00498fb5
    FSTP float ptr [ESP + 0xe8]         ; 00498fb7
    FSTP float ptr [ESP + 0xec]         ; 00498fbe
    FLD float ptr [EAX]                 ; 00498fc5
    FADD float ptr [ESP + 0xe4]         ; 00498fc7
    FSTP float ptr [ESP + 0xb4]         ; 00498fce
    FLD float ptr [EAX + 0x4]           ; 00498fd5
    FADD float ptr [ESP + 0xe8]         ; 00498fd8
    FSTP float ptr [ESP + 0xb8]         ; 00498fdf
    FLD float ptr [EAX + 0x8]           ; 00498fe6
    LEA EAX,[ESP + 0x18]                ; 00498fe9
    PUSH EAX                            ; 00498fed
    LEA EAX,[ESP + 0xd0]                ; 00498fee
    PUSH EAX                            ; 00498ff5
    FADD float ptr [ESP + 0xf4]         ; 00498ff6
    PUSH ESI                            ; 00498ffd
    FSTP float ptr [ESP + 0xc8]         ; 00498ffe
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00499005
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 0049900a
    PUSH 0x1                            ; 0049900d
    MOV EAX,[0x005be368]                ; 0049900f | DAT_005be368
    PUSH EAX                            ; 00499014 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00511800 ; 00499015
        ;   XREF to: 00511800 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_setRayType_FUN_00511800()
    ADD ESP,0x8                         ; 0049901a
    PUSH EDI                            ; 0049901d
    MOV EDX,dword ptr [0x005be368]      ; 0049901e | DAT_005be368
    PUSH EDX                            ; 00499024 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 00499025
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_ignore_FUN_00511780()
    ADD ESP,0x8                         ; 0049902a
    LEA EAX,[ESP + 0xcc]                ; 0049902d
    PUSH EAX                            ; 00499034
    LEA EAX,[ESP + 0xb8]                ; 00499035
    PUSH EAX                            ; 0049903c
    MOV ECX,dword ptr [0x005be368]      ; 0049903d | DAT_005be368
    PUSH ECX                            ; 00499043 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00 ; 00499044
        ;   XREF to: 0050fb00 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00()
    MOV dword ptr [ESP + 0x108],EAX     ; 00499049
    FLD float ptr [ESP + 0x108]         ; 00499050
    ADD ESP,0xc                         ; 00499057
    MOV EBX,dword ptr [0x005be368]      ; 0049905a | DAT_005be368
    PUSH EBX                            ; 00499060 | DAT_01e57284
    FSTP float ptr [ESP + 0xf8]         ; 00499061
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00511750 ; 00499068
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_init_FUN_00511750()
    ADD ESP,0x4                         ; 0049906d
    FLD float ptr [ESP + 0xf4]          ; 00499070
    FLD1                                ; 00499077
    FCOMPP                              ; 00499079
    FNSTSW AX                           ; 0049907b
    SAHF                                ; 0049907d
    JC 0x00498e49                       ; 0049907e
        ;   XREF to: 00498e49 (CONDITIONAL_JUMP)  ; LAB_00498e49
    MOV EAX,[0x005be368]                ; 00499084 | DAT_005be368
    CMP ESI,dword ptr [EAX + 0x14cd5c]  ; 00499089 | DAT_01fa3fe0
    JNZ 0x00498e49                      ; 0049908f
        ;   XREF to: 00498e49 (CONDITIONAL_JUMP)  ; LAB_00498e49
    MOV EAX,dword ptr [ESP + 0xf0]      ; 00499095
    MOV dword ptr [ESP + 0xf8],EAX      ; 0049909c
    MOV EAX,dword ptr [ESP + 0xf8]      ; 004990a3
    MOV ESP,EBP                         ; 004990aa
    POP EBP                             ; 004990ac
    POP EDI                             ; 004990ad
    POP ESI                             ; 004990ae
    POP EBX                             ; 004990af
    RET                                 ; 004990b0


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_scat_cpp_FUN_004fda20(int param_1,int param_2,int param_3)
;
; Local Variables:
; undefined        Stack[-0xf8]:1  local_f8
;
; XREF[1]:
;   core_scat.cpp_CScat_updateAiming_FUN_004fd450 at 004fd747
;
; Referenced Globals:
;   double DOUBLE_0058df76 = 30
;   double DOUBLE_0058df7e = -0.781490709825871
;   double DOUBLE_0058df86 = 1.56298141965174
;   double DOUBLE_0058df8e = 35
;   double DOUBLE_0058df96 = -0.785398163375000
;   double DOUBLE_0058df9e = 1.57079632675000
;   float FLOAT_0058dfa6 = 0.5
;   WatcomTypeInfo g_CVectorTypeInfo_005993b0
;   undefined4 DAT_005be368
;   undefined4 g_CEnemyActorType_01bcdebc.name_hash
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

    PUSH EBX                            ; 004fda20
        ;   Label: core_scat.cpp_FUN_004fda20
    PUSH ESI                            ; 004fda21
    PUSH EDI                            ; 004fda22
    PUSH EBP                            ; 004fda23
    MOV EBP,ESP                         ; 004fda24
    SUB ESP,0x100                       ; 004fda26
    AND ESP,0xfffffff8                  ; 004fda2c
    MOV EDI,dword ptr [EBP + 0x14]      ; 004fda2f
    MOV ESI,dword ptr [EBP + 0x18]      ; 004fda32
    MOV EDX,dword ptr [0x01bcdef4]      ; 004fda35 | g_CEnemyActorType_01bcdebc.name_hash
    PUSH EDX                            ; 004fda3b
    PUSH ESI                            ; 004fda3c
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004fda3d
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 004fda42
    PUSH 0x5993b0                       ; 004fda45 | g_CVectorTypeInfo_005993b0
    PUSH 0xa                            ; 004fda4a
    MOV EBX,EAX                         ; 004fda4c
    LEA EAX,[ESP + 0x20]                ; 004fda4e
    PUSH EAX                            ; 004fda52
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 004fda53
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    ADD ESP,0xc                         ; 004fda58
    LEA EAX,[ESP + 0x18]                ; 004fda5b
    PUSH EAX                            ; 004fda5f
    MOV EDX,dword ptr [ESI + 0x14c]     ; 004fda60
    PUSH ESI                            ; 004fda66
    CALL dword ptr [EDX + 0x4c]         ; 004fda67
    ADD ESP,0x8                         ; 004fda6a
    TEST EAX,EAX                        ; 004fda6d
    JZ 0x004fda89                       ; 004fda6f
        ;   XREF to: 004fda89 (CONDITIONAL_JUMP)  ; LAB_004fda89
    TEST EBX,EBX                        ; 004fda71
    JZ 0x004fdaa2                       ; 004fda73
        ;   XREF to: 004fdaa2 (CONDITIONAL_JUMP)  ; LAB_004fdaa2
    PUSH EBX                            ; 004fda75
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004fda76
    CALL dword ptr [EAX + 0x104]        ; 004fda7c
    ADD ESP,0x4                         ; 004fda82
    TEST EAX,EAX                        ; 004fda85
    JLE 0x004fdaa2                      ; 004fda87
        ;   XREF to: 004fdaa2 (CONDITIONAL_JUMP)  ; LAB_004fdaa2
    MOV dword ptr [ESP + 0xf8],0xbf800000 ; 004fda89
        ;   Label: LAB_004fda89
    MOV EAX,dword ptr [ESP + 0xf8]      ; 004fda94
    MOV ESP,EBP                         ; 004fda9b
    POP EBP                             ; 004fda9d
    POP EDI                             ; 004fda9e
    POP ESI                             ; 004fda9f
    POP EBX                             ; 004fdaa0
    RET                                 ; 004fdaa1
    LEA EAX,[ESI + 0x20]                ; 004fdaa2
        ;   Label: LAB_004fdaa2
    PUSH EAX                            ; 004fdaa5
    LEA EAX,[ESP + 0xc4]                ; 004fdaa6
    PUSH EAX                            ; 004fdaad
    PUSH EDI                            ; 004fdaae
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 004fdaaf
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290()
    ADD ESP,0xc                         ; 004fdab4
    FLD float ptr [ESP + 0xc8]          ; 004fdab7
    FLDZ                                ; 004fdabe
    FCOMPP                              ; 004fdac0
    FNSTSW AX                           ; 004fdac2
    SAHF                                ; 004fdac4
    JNC 0x004fda89                      ; 004fdac5
        ;   XREF to: 004fda89 (CONDITIONAL_JUMP)  ; LAB_004fda89
    FLD float ptr [ESP + 0xc4]          ; 004fdac7
    FMUL ST0                            ; 004fdace
    FLD float ptr [ESP + 0xc0]          ; 004fdad0
    FMUL ST0                            ; 004fdad7
    FADDP                               ; 004fdad9
    FLD float ptr [ESP + 0xc8]          ; 004fdadb
    FMUL ST0                            ; 004fdae2
    FADDP                               ; 004fdae4
    FSQRT                               ; 004fdae6
    FSTP float ptr [ESP + 0x14]         ; 004fdae8
    MOV EAX,dword ptr [ESP + 0x14]      ; 004fdaec
    MOV dword ptr [ESP + 0xf0],EAX      ; 004fdaf0
    LEA EAX,[ESP + 0xc0]                ; 004fdaf7
    PUSH EAX                            ; 004fdafe
    LEA EAX,[ESP + 0xac]                ; 004fdaff
    PUSH EAX                            ; 004fdb06
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 004fdb07
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    ADD ESP,0x8                         ; 004fdb0c
    MOV EAX,dword ptr [EAX + 0x4]       ; 004fdb0f
    MOV ECX,dword ptr [EBP + 0x1c]      ; 004fdb12
    MOV dword ptr [ESP + 0x10],EAX      ; 004fdb15
    TEST ECX,ECX                        ; 004fdb19
    JZ 0x004fdb5b                       ; 004fdb1b
        ;   XREF to: 004fdb5b (CONDITIONAL_JUMP)  ; LAB_004fdb5b
    FLD float ptr [ESP + 0x14]          ; 004fdb1d
    FCOMP double ptr [0x0058df8e]       ; 004fdb21 | DOUBLE_0058df8e
    FNSTSW AX                           ; 004fdb27
    SAHF                                ; 004fdb29
    JA 0x004fda89                       ; 004fdb2a
        ;   XREF to: 004fda89 (CONDITIONAL_JUMP)  ; LAB_004fda89
    FLD float ptr [ESP + 0x10]          ; 004fdb30
    FST double ptr [ESP + 0x8]          ; 004fdb34
    FCOMP double ptr [0x0058df96]       ; 004fdb38 | DOUBLE_0058df96
    FNSTSW AX                           ; 004fdb3e
    SAHF                                ; 004fdb40
    JC 0x004fda89                       ; 004fdb41
        ;   XREF to: 004fda89 (CONDITIONAL_JUMP)  ; LAB_004fda89
    FLD double ptr [ESP + 0x8]          ; 004fdb47
    FCOMP double ptr [0x0058df9e]       ; 004fdb4b | DOUBLE_0058df9e
    FNSTSW AX                           ; 004fdb51
    SAHF                                ; 004fdb53
    JBE 0x004fdb96                      ; 004fdb54
        ;   XREF to: 004fdb96 (CONDITIONAL_JUMP)  ; LAB_004fdb96
    JMP 0x004fda89                      ; 004fdb56
        ;   XREF to: 004fda89 (UNCONDITIONAL_JUMP)  ; LAB_004fda89
    FLD float ptr [ESP + 0x14]          ; 004fdb5b
        ;   Label: LAB_004fdb5b
    FCOMP double ptr [0x0058df76]       ; 004fdb5f | DOUBLE_0058df76
    FNSTSW AX                           ; 004fdb65
    SAHF                                ; 004fdb67
    JA 0x004fda89                       ; 004fdb68
        ;   XREF to: 004fda89 (CONDITIONAL_JUMP)  ; LAB_004fda89
    FLD float ptr [ESP + 0x10]          ; 004fdb6e
    FST double ptr [ESP]                ; 004fdb72
    FCOMP double ptr [0x0058df7e]       ; 004fdb75 | DOUBLE_0058df7e
    FNSTSW AX                           ; 004fdb7b
    SAHF                                ; 004fdb7d
    JC 0x004fda89                       ; 004fdb7e
        ;   XREF to: 004fda89 (CONDITIONAL_JUMP)  ; LAB_004fda89
    FLD double ptr [ESP]                ; 004fdb84
    FCOMP double ptr [0x0058df86]       ; 004fdb87 | DOUBLE_0058df86
    FNSTSW AX                           ; 004fdb8d
    SAHF                                ; 004fdb8f
    JA 0x004fda89                       ; 004fdb90
        ;   XREF to: 004fda89 (CONDITIONAL_JUMP)  ; LAB_004fda89
    LEA EBX,[ESP + 0x90]                ; 004fdb96
        ;   Label: LAB_004fdb96
    PUSH EBX                            ; 004fdb9d
    MOV EAX,dword ptr [EDI + 0x14c]     ; 004fdb9e
    PUSH EDI                            ; 004fdba4
    CALL dword ptr [EAX + 0x14]         ; 004fdba5
    LEA EBX,[EAX + 0xc]                 ; 004fdba8
    FLD float ptr [EAX]                 ; 004fdbab
    FADD float ptr [EBX]                ; 004fdbad
    ADD ESP,0x8                         ; 004fdbaf
    FST float ptr [ESP + 0xd8]          ; 004fdbb2
    FLD float ptr [EAX + 0x4]           ; 004fdbb9
    FADD float ptr [EBX + 0x4]          ; 004fdbbc
    FXCH                                ; 004fdbbf
    FLD float ptr [0x0058dfa6]          ; 004fdbc1 | FLOAT_0058dfa6
    FXCH                                ; 004fdbc7
    FMUL ST1                            ; 004fdbc9
    FXCH ST2                            ; 004fdbcb
    FST float ptr [ESP + 0xdc]          ; 004fdbcd
    FLD float ptr [EAX + 0x8]           ; 004fdbd4
    FADD float ptr [EBX + 0x8]          ; 004fdbd7
    FXCH                                ; 004fdbda
    FMUL ST2                            ; 004fdbdc
    FXCH                                ; 004fdbde
    FST float ptr [ESP + 0xe0]          ; 004fdbe0
    FMULP ST2                           ; 004fdbe7
    LEA EAX,[EDI + 0x20]                ; 004fdbe9
    FXCH ST2                            ; 004fdbec
    FSTP float ptr [ESP + 0xe4]         ; 004fdbee
    FXCH                                ; 004fdbf5
    FSTP float ptr [ESP + 0xe8]         ; 004fdbf7
    FSTP float ptr [ESP + 0xec]         ; 004fdbfe
    FLD float ptr [EAX]                 ; 004fdc05
    FADD float ptr [ESP + 0xe4]         ; 004fdc07
    FSTP float ptr [ESP + 0xb4]         ; 004fdc0e
    FLD float ptr [EAX + 0x4]           ; 004fdc15
    FADD float ptr [ESP + 0xe8]         ; 004fdc18
    FSTP float ptr [ESP + 0xb8]         ; 004fdc1f
    FLD float ptr [EAX + 0x8]           ; 004fdc26
    LEA EAX,[ESP + 0x18]                ; 004fdc29
    PUSH EAX                            ; 004fdc2d
    LEA EAX,[ESP + 0xd0]                ; 004fdc2e
    PUSH EAX                            ; 004fdc35
    FADD float ptr [ESP + 0xf4]         ; 004fdc36
    PUSH ESI                            ; 004fdc3d
    FSTP float ptr [ESP + 0xc8]         ; 004fdc3e
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004fdc45
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 004fdc4a
    PUSH 0x1                            ; 004fdc4d
    MOV EAX,[0x005be368]                ; 004fdc4f | DAT_005be368
    PUSH EAX                            ; 004fdc54 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00511800 ; 004fdc55
        ;   XREF to: 00511800 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_setRayType_FUN_00511800()
    ADD ESP,0x8                         ; 004fdc5a
    PUSH EDI                            ; 004fdc5d
    MOV EDX,dword ptr [0x005be368]      ; 004fdc5e | DAT_005be368
    PUSH EDX                            ; 004fdc64 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 004fdc65
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_ignore_FUN_00511780()
    ADD ESP,0x8                         ; 004fdc6a
    LEA EAX,[ESP + 0xcc]                ; 004fdc6d
    PUSH EAX                            ; 004fdc74
    LEA EAX,[ESP + 0xb8]                ; 004fdc75
    PUSH EAX                            ; 004fdc7c
    MOV ECX,dword ptr [0x005be368]      ; 004fdc7d | DAT_005be368
    PUSH ECX                            ; 004fdc83 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00 ; 004fdc84
        ;   XREF to: 0050fb00 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00()
    MOV dword ptr [ESP + 0x108],EAX     ; 004fdc89
    FLD float ptr [ESP + 0x108]         ; 004fdc90
    ADD ESP,0xc                         ; 004fdc97
    MOV EBX,dword ptr [0x005be368]      ; 004fdc9a | DAT_005be368
    PUSH EBX                            ; 004fdca0 | DAT_01e57284
    FSTP float ptr [ESP + 0xf8]         ; 004fdca1
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00511750 ; 004fdca8
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_init_FUN_00511750()
    ADD ESP,0x4                         ; 004fdcad
    FLD float ptr [ESP + 0xf4]          ; 004fdcb0
    FLD1                                ; 004fdcb7
    FCOMPP                              ; 004fdcb9
    FNSTSW AX                           ; 004fdcbb
    SAHF                                ; 004fdcbd
    JC 0x004fda89                       ; 004fdcbe
        ;   XREF to: 004fda89 (CONDITIONAL_JUMP)  ; LAB_004fda89
    MOV EAX,[0x005be368]                ; 004fdcc4 | DAT_005be368
    CMP ESI,dword ptr [EAX + 0x14cd5c]  ; 004fdcc9 | DAT_01fa3fe0
    JNZ 0x004fda89                      ; 004fdccf
        ;   XREF to: 004fda89 (CONDITIONAL_JUMP)  ; LAB_004fda89
    MOV EAX,dword ptr [ESP + 0xf0]      ; 004fdcd5
    MOV dword ptr [ESP + 0xf8],EAX      ; 004fdcdc
    MOV EAX,dword ptr [ESP + 0xf8]      ; 004fdce3
    MOV ESP,EBP                         ; 004fdcea
    POP EBP                             ; 004fdcec
    POP EDI                             ; 004fdced
    POP ESI                             ; 004fdcee
    POP EBX                             ; 004fdcef
    RET                                 ; 004fdcf0


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_turret_cpp_FUN_0057fc20(CDemonActor *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005ed828
;   undefined4 DAT_005ed82c
;   undefined4 DAT_00614d30
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 g_CCharacterClassInfo.name_hash
;   undefined4 g_CCrateClassInfo.name_hash
;   undefined4 g_CFlameCanClassInfo.name_hash
;   undefined4 g_CGlassClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.field1364240_0x14d110
;   undefined4 g_CDemonSetInstance.field1364244_0x14d114
;   undefined4 g_CDemonSetInstance.field1364248_0x14d118
;   undefined4 g_CDemonSetInstance.field1364252_0x14d11c
;   undefined4 g_CDemonSetInstance.field1364256_0x14d120
;   undefined4 g_CDemonSetInstance.field1364260_0x14d124
;   ... and 6 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_FUN_00408cf0
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_00408de0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0
;   core_crate.cpp_FUN_0043a350
;   core_fire.cpp_FUN_0049cd50
;   core_fire.cpp_FUN_0049d120
;   core_flamecan.cpp_CFlameCan_ignite_FUN_004a08d0
;   core_glass.cpp_FUN_004c6d40
;   core_glass.cpp_FUN_004c72d0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30
;   core_setcolid.cpp_CDemonSet_setRayType_FUN_00537eb0
;   core_setcolid.cpp_FUN_00535ee0
;   core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_00578570
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057fc20
        ;   Label: core_turret.cpp_FUN_0057fc20
    PUSH ESI                            ; 0057fc21
    PUSH EDI                            ; 0057fc22
    PUSH EBP                            ; 0057fc23
    MOV EBP,ESP                         ; 0057fc24
    SUB ESP,0x128                       ; 0057fc26
    AND ESP,0xfffffff8                  ; 0057fc2c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0057fc2f
    PUSH EBX                            ; 0057fc32
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0057fc33
    LEA ESI,[ESP + 0x60]                ; 0057fc39
    LEA EDI,[ESP + 0x6c]                ; 0057fc3d
    CALL dword ptr [EAX + 0xe8]         ; 0057fc41
    ADD ESP,0x4                         ; 0057fc47
    LEA EAX,[ESP + 0x68]                ; 0057fc4a
    LEA ESI,[ESP + 0x5c]                ; 0057fc4e
    PUSH EAX                            ; 0057fc52
    MOVSD ES:EDI,ESI                    ; 0057fc53
    MOVSD ES:EDI,ESI                    ; 0057fc54
    MOVSD ES:EDI,ESI                    ; 0057fc55
    PUSH EBX                            ; 0057fc56
    LEA ESI,[ESP + 0xf4]                ; 0057fc57
    LEA EDI,[ESP + 0xac]                ; 0057fc5e
    CALL core_actor.cpp_FUN_00408d70    ; 0057fc65
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0xf4]                ; 0057fc6a
    ADD ESP,0x8                         ; 0057fc71
    MOVSD ES:EDI,ESI                    ; 0057fc74
    MOVSD ES:EDI,ESI                    ; 0057fc75
    MOVSD ES:EDI,ESI                    ; 0057fc76
    MOV EAX,dword ptr [EBX + 0x444]     ; 0057fc77
    MOV dword ptr [ESP + 0x7c],EAX      ; 0057fc7d
    LEA EAX,[ESP + 0x74]                ; 0057fc81
    XOR EDX,EDX                         ; 0057fc85
    PUSH EAX                            ; 0057fc87
    LEA ESI,[ESP + 0x54]                ; 0057fc88
    LEA EDI,[ESP + 0x9c]                ; 0057fc8c
    PUSH EBX                            ; 0057fc93
    MOV dword ptr [ESP + 0x7c],EDX      ; 0057fc94
    MOV dword ptr [ESP + 0x80],EDX      ; 0057fc98
    CALL core_actor.cpp_FUN_00408cf0    ; 0057fc9f
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    ADD ESP,0x8                         ; 0057fca4
    LEA ESI,[ESP + 0x50]                ; 0057fca7
    FLD float ptr [ESP + 0xa4]          ; 0057fcab
    FLD float ptr [ESP + 0xa8]          ; 0057fcb2
    MOVSD ES:EDI,ESI                    ; 0057fcb9
    MOVSD ES:EDI,ESI                    ; 0057fcba
    MOVSD ES:EDI,ESI                    ; 0057fcbb
    FLD float ptr [ESP + 0xac]          ; 0057fcbc
    LEA EDI,[ESP + 0x44]                ; 0057fcc3
    LEA ESI,[ESP + 0x104]               ; 0057fcc7
    FXCH ST2                            ; 0057fcce
    FADD float ptr [ESP + 0x98]         ; 0057fcd0
    FXCH                                ; 0057fcd7
    FADD float ptr [ESP + 0x9c]         ; 0057fcd9
    FXCH ST2                            ; 0057fce0
    FADD float ptr [ESP + 0xa0]         ; 0057fce2
    FXCH                                ; 0057fce9
    FSTP float ptr [ESP + 0x104]        ; 0057fceb
    FXCH                                ; 0057fcf2
    FSTP float ptr [ESP + 0x108]        ; 0057fcf4
    FSTP float ptr [ESP + 0x10c]        ; 0057fcfb
    MOVSD ES:EDI,ESI                    ; 0057fd02
    MOVSD ES:EDI,ESI                    ; 0057fd03
    MOVSD ES:EDI,ESI                    ; 0057fd04
    LEA EDI,[ESP + 0xb0]                ; 0057fd05
    LEA ESI,[ESP + 0xa4]                ; 0057fd0c
    MOVSD ES:EDI,ESI                    ; 0057fd13
    MOVSD ES:EDI,ESI                    ; 0057fd14
    MOVSD ES:EDI,ESI                    ; 0057fd15
    PUSH 0x1                            ; 0057fd16
    MOV ESI,dword ptr [0x0061b5a8]      ; 0057fd18 | g_CDemonSetPtr
    PUSH ESI                            ; 0057fd1e | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00537eb0 ; 0057fd1f
        ;   XREF to: 00537eb0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_00537eb0(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 0057fd24
    PUSH EBX                            ; 0057fd27
    MOV EDI,dword ptr [0x0061b5a8]      ; 0057fd28 | g_CDemonSetPtr
    PUSH EDI                            ; 0057fd2e | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 0057fd2f
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0057fd34
    XOR EAX,EAX                         ; 0057fd37
    MOV dword ptr [ESP + 0x118],EAX     ; 0057fd39
    LEA EAX,[ESP + 0x44]                ; 0057fd40
        ;   Label: LAB_0057fd40
    PUSH EAX                            ; 0057fd44
    LEA EAX,[ESP + 0xb4]                ; 0057fd45
    PUSH EAX                            ; 0057fd4c
    MOV EDX,dword ptr [0x0061b5a8]      ; 0057fd4d | g_CDemonSetPtr
    PUSH EDX                            ; 0057fd53 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00535ee0 ; 0057fd54
        ;   XREF to: 00535ee0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00535ee0()
    MOV dword ptr [ESP + 0x130],EAX     ; 0057fd59
    FLD float ptr [ESP + 0x130]         ; 0057fd60
    ADD ESP,0xc                         ; 0057fd67
    FLDZ                                ; 0057fd6a
    FXCH                                ; 0057fd6c
    FSTP double ptr [ESP]               ; 0057fd6e
    FCOMP double ptr [ESP]              ; 0057fd71
    FNSTSW AX                           ; 0057fd74
    SAHF                                ; 0057fd76
    JA 0x00580093                       ; 0057fd77
        ;   XREF to: 00580093 (CONDITIONAL_JUMP)  ; LAB_00580093
    FLD1                                ; 0057fd7d
    FCOMP double ptr [ESP]              ; 0057fd7f
    FNSTSW AX                           ; 0057fd82
    SAHF                                ; 0057fd84
    JC 0x00580093                       ; 0057fd85
        ;   XREF to: 00580093 (CONDITIONAL_JUMP)  ; LAB_00580093
    MOV ECX,dword ptr [0x007bdc94]      ; 0057fd8b | g_CCharacterClassInfo.name_hash
    MOV EAX,[0x0061b5a8]                ; 0057fd91 | g_CDemonSetPtr
    PUSH ECX                            ; 0057fd96
    MOV ESI,dword ptr [EAX + 0x14d144]  ; 0057fd97 | g_CDemonSetInstance.field1364292_0x14d144
    PUSH ESI                            ; 0057fd9d
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0057fd9e
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 0057fda3
    MOV dword ptr [ESP + 0x120],EAX     ; 0057fda6
    TEST EAX,EAX                        ; 0057fdad
    JZ 0x0057fdce                       ; 0057fdaf
        ;   XREF to: 0057fdce (CONDITIONAL_JUMP)  ; LAB_0057fdce
    PUSH EAX                            ; 0057fdb1
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 0057fdb2
    CALL dword ptr [ESI + 0x114]        ; 0057fdb8
    ADD ESP,0x4                         ; 0057fdbe
    TEST EAX,EAX                        ; 0057fdc1
    JLE 0x0057fdce                      ; 0057fdc3
        ;   XREF to: 0057fdce (CONDITIONAL_JUMP)  ; LAB_0057fdce
    XOR EDI,EDI                         ; 0057fdc5
    MOV dword ptr [ESP + 0x120],EDI     ; 0057fdc7
    MOV EAX,[0x01cb8280]                ; 0057fdce | g_CGlassClassInfo.name_hash
        ;   Label: LAB_0057fdce
    PUSH EAX                            ; 0057fdd3
    MOV EAX,[0x0061b5a8]                ; 0057fdd4 | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 0057fdd9 | g_CDemonSetInstance.field1364292_0x14d144
    PUSH EDX                            ; 0057fddf
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0057fde0
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    MOV ECX,dword ptr [0x02653628]      ; 0057fde5 | g_CTriggerClassInfo.name_hash
    ADD ESP,0x8                         ; 0057fdeb
    MOV EDI,EAX                         ; 0057fdee
    MOV EAX,[0x0061b5a8]                ; 0057fdf0 | g_CDemonSetPtr
    PUSH ECX                            ; 0057fdf5
    MOV ESI,dword ptr [EAX + 0x14d144]  ; 0057fdf6 | g_CDemonSetInstance.field1364292_0x14d144
    PUSH ESI                            ; 0057fdfc
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0057fdfd
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 0057fe02
    MOV ESI,EAX                         ; 0057fe05
    MOV dword ptr [ESP + 0x110],EAX     ; 0057fe07
    MOV EAX,[0x007c2670]                ; 0057fe0e | g_CCrateClassInfo.name_hash
    PUSH EAX                            ; 0057fe13
    MOV EAX,[0x0061b5a8]                ; 0057fe14 | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 0057fe19 | g_CDemonSetInstance.field1364292_0x14d144
    PUSH EDX                            ; 0057fe1f
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0057fe20
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    MOV dword ptr [ESP + 0x11c],EAX     ; 0057fe25
    ADD ESP,0x8                         ; 0057fe2c
    MOV ECX,dword ptr [0x01cab6f8]      ; 0057fe2f | g_CFlameCanClassInfo.name_hash
    MOV EAX,[0x0061b5a8]                ; 0057fe35 | g_CDemonSetPtr
    PUSH ECX                            ; 0057fe3a
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 0057fe3b | g_CDemonSetInstance.field1364292_0x14d144
    PUSH EDX                            ; 0057fe41
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0057fe42
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 0057fe47
    CMP dword ptr [ESP + 0x120],0x0     ; 0057fe4a
    JZ 0x005800f4                       ; 0057fe52
        ;   XREF to: 005800f4 (CONDITIONAL_JUMP)  ; LAB_005800f4
    LEA EAX,[ESP + 0x8]                 ; 0057fe58
    PUSH EAX                            ; 0057fe5c
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 0057fe5d
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    MOV EAX,[0x0061b5a8]                ; 0057fe62 | g_CDemonSetPtr
    ADD ESP,0x4                         ; 0057fe67
    MOV EAX,dword ptr [EAX + 0x14d148]  ; 0057fe6a | g_CDemonSetInstance.field1364296_0x14d148
    MOV dword ptr [ESP + 0x8],EAX       ; 0057fe70
    PUSH EBX                            ; 0057fe74
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0057fe75
    LEA EDI,[ESP + 0xd8]                ; 0057fe7b
    CALL dword ptr [EAX + 0xf4]         ; 0057fe82
    MOV dword ptr [ESP + 0x128],EAX     ; 0057fe88
    MOV EDX,0x3ecccccd                  ; 0057fe8f
    FLD float ptr [ESP + 0x128]         ; 0057fe94
    MOV EAX,[0x0061b5a8]                ; 0057fe9b | g_CDemonSetPtr
    ADD ESP,0x4                         ; 0057fea0
    LEA ESI,[EAX + 0x14d11c]            ; 0057fea3
    MOV dword ptr [ESP + 0x10],EDX      ; 0057fea9
    FSTP float ptr [ESP + 0xc]          ; 0057fead
    FLD float ptr [ESI + 0x4]           ; 0057feb1 | g_CDemonSetInstance.field1364256_0x14d120
    FLD float ptr [ESI + 0x8]           ; 0057feb4 | g_CDemonSetInstance.field1364260_0x14d124
    FLD float ptr [ESI]                 ; 0057feb7 | g_CDemonSetInstance.field1364252_0x14d11c
    LEA ESI,[ESP + 0xbc]                ; 0057feb9
    FSUB float ptr [EAX + 0x14d110]     ; 0057fec0 | g_CDemonSetInstance.field1364240_0x14d110
    FXCH ST2                            ; 0057fec6
    FSUB float ptr [EAX + 0x14d114]     ; 0057fec8 | g_CDemonSetInstance.field1364244_0x14d114
    FXCH                                ; 0057fece
    FSUB float ptr [EAX + 0x14d118]     ; 0057fed0 | g_CDemonSetInstance.field1364248_0x14d118
    FXCH ST2                            ; 0057fed6
    FSTP float ptr [ESP + 0xbc]         ; 0057fed8
    FSTP float ptr [ESP + 0xc0]         ; 0057fedf
    FSTP float ptr [ESP + 0xc4]         ; 0057fee6
    MOVSD ES:EDI,ESI                    ; 0057feed
    MOVSD ES:EDI,ESI                    ; 0057feee
    MOVSD ES:EDI,ESI                    ; 0057feef
    FLD float ptr [ESP + 0xd8]          ; 0057fef0
    FMUL ST0                            ; 0057fef7
    FLD float ptr [ESP + 0xd4]          ; 0057fef9
    FMUL ST0                            ; 0057ff00
    FADDP                               ; 0057ff02
    FLD float ptr [ESP + 0xdc]          ; 0057ff04
    FMUL ST0                            ; 0057ff0b
    FADDP                               ; 0057ff0d
    FSQRT                               ; 0057ff0f
    FDIVR double ptr [0x005ed82c]       ; 0057ff11 | DAT_005ed82c
    FLD float ptr [ESP + 0xd4]          ; 0057ff17
    FXCH                                ; 0057ff1e
    FSTP float ptr [ESP + 0x11c]        ; 0057ff20
    FMUL float ptr [ESP + 0x11c]        ; 0057ff27
    FLD float ptr [ESP + 0xd8]          ; 0057ff2e
    FMUL float ptr [ESP + 0x11c]        ; 0057ff35
    FLD float ptr [ESP + 0xdc]          ; 0057ff3c
    FMUL float ptr [ESP + 0x11c]        ; 0057ff43
    LEA EDI,[ESP + 0x80]                ; 0057ff4a
    LEA ESI,[ESP + 0xe0]                ; 0057ff51
    FXCH ST2                            ; 0057ff58
    FSTP float ptr [ESP + 0xe0]         ; 0057ff5a
    FSTP float ptr [ESP + 0xe4]         ; 0057ff61
    FSTP float ptr [ESP + 0xe8]         ; 0057ff68
    MOVSD ES:EDI,ESI                    ; 0057ff6f
    MOVSD ES:EDI,ESI                    ; 0057ff70
    MOVSD ES:EDI,ESI                    ; 0057ff71
    LEA EAX,[ESP + 0x14]                ; 0057ff72
    LEA ESI,[ESP + 0x80]                ; 0057ff76
    CMP EAX,ESI                         ; 0057ff7d
    JZ 0x0057ffa2                       ; 0057ff7f
        ;   XREF to: 0057ffa2 (CONDITIONAL_JUMP)  ; LAB_0057ffa2
    MOV EAX,dword ptr [ESP + 0x80]      ; 0057ff81
    MOV dword ptr [ESP + 0x14],EAX      ; 0057ff88
    MOV EAX,dword ptr [ESP + 0x84]      ; 0057ff8c
    MOV dword ptr [ESP + 0x18],EAX      ; 0057ff93
    MOV EAX,dword ptr [ESP + 0x88]      ; 0057ff97
    MOV dword ptr [ESP + 0x1c],EAX      ; 0057ff9e
    MOV EAX,[0x0061b5a8]                ; 0057ffa2 | g_CDemonSetPtr
        ;   Label: LAB_0057ffa2
    ADD EAX,0x14d138                    ; 0057ffa7
    PUSH EAX                            ; 0057ffac | g_CDemonSetInstance.field1364280_0x14d138
    MOV ECX,dword ptr [ESP + 0x124]     ; 0057ffad
    PUSH ECX                            ; 0057ffb4
    LEA ESI,[ESP + 0x100]               ; 0057ffb5
    LEA EDI,[ESP + 0x94]                ; 0057ffbc
    CALL core_actor.cpp_FUN_00408de0    ; 0057ffc3
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x100]               ; 0057ffc8
    ADD ESP,0x8                         ; 0057ffcf
    MOVSD ES:EDI,ESI                    ; 0057ffd2
    MOVSD ES:EDI,ESI                    ; 0057ffd3
    MOVSD ES:EDI,ESI                    ; 0057ffd4
    LEA EAX,[ESP + 0x8c]                ; 0057ffd5
    LEA ESI,[ESP + 0x24]                ; 0057ffdc
    CMP ESI,EAX                         ; 0057ffe0
    JZ 0x00580005                       ; 0057ffe2
        ;   XREF to: 00580005 (CONDITIONAL_JUMP)  ; LAB_00580005
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0057ffe4
    MOV dword ptr [ESP + 0x24],EAX      ; 0057ffeb
    MOV EAX,dword ptr [ESP + 0x90]      ; 0057ffef
    MOV dword ptr [ESP + 0x28],EAX      ; 0057fff6
    MOV EAX,dword ptr [ESP + 0x94]      ; 0057fffa
    MOV dword ptr [ESP + 0x2c],EAX      ; 00580001
    MOV ESI,0x65                        ; 00580005
        ;   Label: LAB_00580005
    MOV EAX,dword ptr [EBX + 0x6c8]     ; 0058000a
    MOV EDI,0x3f800000                  ; 00580010
    MOV dword ptr [ESP + 0x30],EAX      ; 00580015
    MOV dword ptr [ESP + 0x38],ESI      ; 00580019
    MOV dword ptr [ESP + 0x34],EDI      ; 0058001d
    MOV dword ptr [ESP + 0x3c],EBX      ; 00580021
    PUSH EBX                            ; 00580025
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00580026
    CALL dword ptr [EAX + 0x9c]         ; 0058002c
    ADD ESP,0x4                         ; 00580032
    MOV dword ptr [ESP + 0x40],EAX      ; 00580035
    LEA EAX,[ESP + 0x8]                 ; 00580039
    MOV ESI,dword ptr [ESP + 0x120]     ; 0058003d
    PUSH EAX                            ; 00580044
    MOV EAX,dword ptr [ESP + 0x124]     ; 00580045
    MOV ESI,dword ptr [ESI + 0x2b0]     ; 0058004c
    PUSH EAX                            ; 00580052
    CALL dword ptr [ESI + 0x110]        ; 00580053
    MOV EDX,dword ptr [EBX + 0x440]     ; 00580059
    ADD ESP,0x8                         ; 0058005f
    TEST EDX,EDX                        ; 00580062
    JZ 0x00580093                       ; 00580064
        ;   XREF to: 00580093 (CONDITIONAL_JUMP)  ; LAB_00580093
    MOV EAX,[0x0061b5a8]                ; 00580066 | g_CDemonSetPtr
    MOV ECX,dword ptr [EAX + 0x14d144]  ; 0058006b | g_CDemonSetInstance.field1364292_0x14d144
    PUSH ECX                            ; 00580071
    PUSH EAX                            ; 00580072 | g_CDemonSetInstance
        ;   Label: LAB_00580072
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 00580073
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00580078
        ;   Label: LAB_00580078
    MOV ESI,dword ptr [ESP + 0x118]     ; 0058007b
        ;   Label: LAB_0058007b
    INC ESI                             ; 00580082
    MOV dword ptr [ESP + 0x118],ESI     ; 00580083
    CMP ESI,0x4                         ; 0058008a
    JL 0x0057fd40                       ; 0058008d
        ;   XREF to: 0057fd40 (CONDITIONAL_JUMP)  ; LAB_0057fd40
    LEA EDI,[ESP + 0xc8]                ; 00580093
        ;   Label: LAB_00580093
    LEA EAX,[EBX + 0x3c]                ; 0058009a
    LEA ESI,[ESP + 0xa4]                ; 0058009d
    PUSH EAX                            ; 005800a4
    MOVSD ES:EDI,ESI                    ; 005800a5
    MOVSD ES:EDI,ESI                    ; 005800a6
    MOVSD ES:EDI,ESI                    ; 005800a7
    LEA EAX,[ESP + 0xcc]                ; 005800a8
    FLD float ptr [ESP + 0xd0]          ; 005800af
    PUSH EAX                            ; 005800b6
    MOV EAX,[0x00614d30]                ; 005800b7 | DAT_00614d30
    FADD float ptr [0x005ed828]         ; 005800bc | DAT_005ed828
    PUSH EAX                            ; 005800c2
    FSTP float ptr [ESP + 0xd8]         ; 005800c3
    CALL core_fire.cpp_FUN_0049d120     ; 005800ca
        ;   XREF to: 0049d120 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_FUN_0049d120(CFireEffect * this_ptr, CVector3f * position, CMatrix3x3f * rotation_matrix)
    FLD float ptr [EBX + 0x8d0]         ; 005800cf
    MOV EAX,0x1                         ; 005800d5
    MOV dword ptr [EBX + 0xa0c],0x2     ; 005800da
    ADD ESP,0xc                         ; 005800e4
    FSTP float ptr [EBX + 0x45c]        ; 005800e7
    MOV ESP,EBP                         ; 005800ed
    POP EBP                             ; 005800ef
    POP EDI                             ; 005800f0
    POP ESI                             ; 005800f1
    POP EBX                             ; 005800f2
    RET                                 ; 005800f3
    TEST EDI,EDI                        ; 005800f4
        ;   Label: LAB_005800f4
    JNZ 0x00580156                      ; 005800f6
        ;   XREF to: 00580156 (CONDITIONAL_JUMP)  ; LAB_00580156
    TEST ESI,ESI                        ; 005800f8
    JZ 0x0058017d                       ; 005800fa
        ;   XREF to: 0058017d (CONDITIONAL_JUMP)  ; LAB_0058017d
    PUSH ESI                            ; 00580100
    CALL core_trigger.cpp_CTrigger_onProjectileHit_FUN_00578550 ; 00580101
        ;   XREF to: 00578550 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_onProjectileHit_FUN_00578550(CTrigger * this_ptr)
    ADD ESP,0x4                         ; 00580106
    PUSH EBX                            ; 00580109
    PUSH ESI                            ; 0058010a
    CALL core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_00578570 ; 0058010b
        ;   XREF to: 00578570 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_00578570(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00580110
    TEST EAX,EAX                        ; 00580113
    JZ 0x00580144                       ; 00580115
        ;   XREF to: 00580144 (CONDITIONAL_JUMP)  ; LAB_00580144
    PUSH EBX                            ; 00580117
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00580118
    CALL dword ptr [EAX + 0xf4]         ; 0058011e
    MOV dword ptr [ESP + 0x128],EAX     ; 00580124
    FLD float ptr [ESP + 0x128]         ; 0058012b
    ADD ESP,0x4                         ; 00580132
    SUB ESP,0x4                         ; 00580135
    FSTP float ptr [ESP]                ; 00580138
    PUSH ESI                            ; 0058013b
    CALL core_trigger.cpp_CTrigger_applyDamage_FUN_005785b0 ; 0058013c
        ;   XREF to: 005785b0 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_applyDamage_FUN_005785b0(CTrigger * this_ptr, float hit_points)
    ADD ESP,0x8                         ; 00580141
    MOV EDI,dword ptr [ESP + 0x110]     ; 00580144
        ;   Label: LAB_00580144
    PUSH EDI                            ; 0058014b
    MOV EAX,[0x0061b5a8]                ; 0058014c | g_CDemonSetPtr
    JMP 0x00580072                      ; 00580151
        ;   XREF to: 00580072 (UNCONDITIONAL_JUMP)  ; LAB_00580072
    PUSH EDI                            ; 00580156
        ;   Label: LAB_00580156
    CALL core_glass.cpp_FUN_004c72d0    ; 00580157
        ;   XREF to: 004c72d0 (UNCONDITIONAL_CALL)  ; int core_glass.cpp_FUN_004c72d0(CGlass * this_ptr)
    ADD ESP,0x4                         ; 0058015c
    TEST EAX,EAX                        ; 0058015f
    JZ 0x00580093                       ; 00580161
        ;   XREF to: 00580093 (CONDITIONAL_JUMP)  ; LAB_00580093
    MOV EAX,[0x0061b5a8]                ; 00580167 | g_CDemonSetPtr
    ADD EAX,0x14d138                    ; 0058016c
    PUSH EAX                            ; 00580171 | g_CDemonSetInstance.field1364280_0x14d138
    PUSH EDI                            ; 00580172
    CALL core_glass.cpp_FUN_004c6d40    ; 00580173
        ;   XREF to: 004c6d40 (UNCONDITIONAL_CALL)  ; undefined core_glass.cpp_FUN_004c6d40()
    JMP 0x00580078                      ; 00580178
        ;   XREF to: 00580078 (UNCONDITIONAL_JUMP)  ; LAB_00580078
    MOV ESI,dword ptr [ESP + 0x114]     ; 0058017d
        ;   Label: LAB_0058017d
    TEST ESI,ESI                        ; 00580184
    JNZ 0x0058019a                      ; 00580186
        ;   XREF to: 0058019a (CONDITIONAL_JUMP)  ; LAB_0058019a
    TEST EAX,EAX                        ; 00580188
    JZ 0x005801a8                       ; 0058018a
        ;   XREF to: 005801a8 (CONDITIONAL_JUMP)  ; LAB_005801a8
    PUSH EAX                            ; 0058018c
    CALL core_flamecan.cpp_CFlameCan_ignite_FUN_004a08d0 ; 0058018d
        ;   XREF to: 004a08d0 (UNCONDITIONAL_CALL)  ; void core_flamecan.cpp_CFlameCan_ignite_FUN_004a08d0(CFlameCan * this_ptr)
    ADD ESP,0x4                         ; 00580192
    JMP 0x0058007b                      ; 00580195
        ;   XREF to: 0058007b (UNCONDITIONAL_JUMP)  ; LAB_0058007b
    PUSH ESI                            ; 0058019a
        ;   Label: LAB_0058019a
    CALL core_crate.cpp_FUN_0043a350    ; 0058019b
        ;   XREF to: 0043a350 (UNCONDITIONAL_CALL)  ; void core_crate.cpp_FUN_0043a350(CCrate * this_ptr)
    ADD ESP,0x4                         ; 005801a0
    JMP 0x0058007b                      ; 005801a3
        ;   XREF to: 0058007b (UNCONDITIONAL_JUMP)  ; LAB_0058007b
    MOV EAX,[0x0061b5a8]                ; 005801a8 | g_CDemonSetPtr
        ;   Label: LAB_005801a8
    MOV EDI,dword ptr [EAX + 0x14d144]  ; 005801ad | g_CDemonSetInstance.field1364292_0x14d144
    PUSH EDI                            ; 005801b3
    MOV EDX,dword ptr [EAX + 0x14d134]  ; 005801b4 | g_CDemonSetInstance.field1364276_0x14d134
    PUSH EDX                            ; 005801ba
    LEA ESI,[EAX + 0x14d128]            ; 005801bb
    PUSH ESI                            ; 005801c1 | g_CDemonSetInstance.field1364264_0x14d128
    ADD EAX,0x14d138                    ; 005801c2
    PUSH EAX                            ; 005801c7 | g_CDemonSetInstance.field1364280_0x14d138
    MOV ECX,dword ptr [0x00614d30]      ; 005801c8 | DAT_00614d30
    PUSH ECX                            ; 005801ce
    CALL core_fire.cpp_FUN_0049cd50     ; 005801cf
        ;   XREF to: 0049cd50 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_FUN_0049cd50(CFireEffect * this_ptr, CVector3f * impact_pos, CVector3f * surface_normal, int ground_type, ...)
    ADD ESP,0x14                        ; 005801d4
    JMP 0x00580093                      ; 005801d7
        ;   XREF to: 00580093 (UNCONDITIONAL_JUMP)  ; LAB_00580093


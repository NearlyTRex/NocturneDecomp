; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trash_cpp_CTrash_process_FUN_005decf0(CTrash *this_ptr,float delta_time)
;
; Parameters:
; CTrash *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; CMatrix3x4f      Stack[-0x1a8]:48  local_1a8
; CMatrix3x4f      Stack[-0x178]:48  local_178
; CMatrix3x4f      Stack[-0x148]:48  local_148
; CMatrix3x4f      Stack[-0x118]:48  local_118
; float            Stack[-0xe8]:4  local_e8
; float            Stack[-0xe4]:4  local_e4
; float            Stack[-0xe0]:4  local_e0
; float            Stack[-0xdc]:4  local_dc
; float            Stack[-0xd8]:4  local_d8
; float            Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; float            Stack[-0xc4]:4  local_c4
; float            Stack[-0xc0]:4  local_c0
; float            Stack[-0xbc]:4  local_bc
; float            Stack[-0xb8]:4  local_b8
; float            Stack[-0xb4]:4  local_b4
; float            Stack[-0xb0]:4  local_b0
; float            Stack[-0xac]:4  local_ac
; float            Stack[-0xa8]:4  local_a8
; float            Stack[-0xa4]:4  local_a4
; float            Stack[-0xa0]:4  local_a0
; float            Stack[-0x9c]:4  local_9c
; float            Stack[-0x98]:4  local_98
; float            Stack[-0x94]:4  local_94
; float            Stack[-0x90]:4  local_90
; float            Stack[-0x8c]:4  local_8c
; CVector3f        Stack[-0x88]:12  local_88
; float            Stack[-0x7c]:4  local_7c
; float            Stack[-0x78]:4  local_78
; float            Stack[-0x74]:4  local_74
; CVector3f        Stack[-0x70]:12  local_70
; float            Stack[-0x64]:4  local_64
; float            Stack[-0x60]:4  local_60
; float            Stack[-0x5c]:4  local_5c
; float            Stack[-0x58]:4  local_58
; float            Stack[-0x54]:4  local_54
; float            Stack[-0x50]:4  local_50
; float            Stack[-0x4c]:4  local_4c
; float            Stack[-0x48]:4  local_48
; float            Stack[-0x44]:4  local_44
; float            Stack[-0x40]:4  local_40
; float            Stack[-0x3c]:4  local_3c
; float            Stack[-0x38]:4  local_38
; CVector3f        Stack[-0x34]:12  local_34
; float            Stack[-0x28]:4  local_28
; float            Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; CVector3f *      Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   float FLOAT_0065559e = 0.05000000
;   float FLOAT_006555a2 = 0.07000000
;   float FLOAT_006555a6 = 0.5
;   float FLOAT_006555aa = 0.8000000
;   double DOUBLE_006555ae = 0.159154943096444
;   double DOUBLE_006555b6 = 0.900000000000000
;   double DOUBLE_006555be = 1.5
;   float FLOAT_006555c6 = 0.7000000
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.active_fog.scroll.x
;   undefined4 g_CDemonSetInstance.active_fog.scroll.y
;   undefined4 g_CDemonSetInstance.active_fog.scroll.z
;   UVector3 g_ZeroVector
;
; Called Functions:
;   core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;   core_hero.cpp_isAnyHeroWithinRadius_FUN_004f2220
;   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0
;   core_setcolid.cpp_CDemonSet_testCylinderCollision_FUN_00573470
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
;   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
;   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005decf0
        ;   Label: core_trash.cpp_CTrash_process_FUN_005decf0
    PUSH ESI                            ; 005decf1
    PUSH EDI                            ; 005decf2
    PUSH EBP                            ; 005decf3
    MOV EBP,ESP                         ; 005decf4
    SUB ESP,0x1a8                       ; 005decf6
    AND ESP,0xfffffff8                  ; 005decfc
    MOV EBX,dword ptr [EBP + 0x14]      ; 005decff
    LEA ESI,[EBX + 0x20]                ; 005ded02
    PUSH 0x42c80000                     ; 005ded05
    PUSH ESI                            ; 005ded0a
    CALL core_hero.cpp_isAnyHeroWithinRadius_FUN_004f2220 ; 005ded0b
        ;   XREF to: 004f2220 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_isAnyHeroWithinRadius_FUN_004f2220(CVector3f * point, float radius)
    ADD ESP,0x8                         ; 005ded10
    TEST EAX,EAX                        ; 005ded13
    JZ 0x005df505                       ; 005ded15
        ;   XREF to: 005df505 (CONDITIONAL_JUMP)  ; LAB_005df505
    PUSH 0x3d4ccccd                     ; 005ded1b
    PUSH 0xbd4ccccd                     ; 005ded20
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 005ded25
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x1ac],EAX     ; 005ded2a
    FLD float ptr [ESP + 0x1ac]         ; 005ded31
    ADD ESP,0x8                         ; 005ded38
    LEA ESI,[EBX + 0x300]               ; 005ded3b
    PUSH 0x3d4ccccd                     ; 005ded41
    FADD float ptr [ESI]                ; 005ded46
    PUSH 0xbd4ccccd                     ; 005ded48
    FSTP float ptr [ESI]                ; 005ded4d
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 005ded4f
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x1ac],EAX     ; 005ded54
    FLD float ptr [ESP + 0x1ac]         ; 005ded5b
    ADD ESP,0x8                         ; 005ded62
    LEA ESI,[EBX + 0x304]               ; 005ded65
    PUSH 0x3d4ccccd                     ; 005ded6b
    FADD float ptr [ESI]                ; 005ded70
    PUSH 0xbd4ccccd                     ; 005ded72
    FSTP float ptr [ESI]                ; 005ded77
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 005ded79
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV EDX,0x40800000                  ; 005ded7e
    LEA ESI,[EBX + 0x308]               ; 005ded83
    MOV dword ptr [ESP + 0x1ac],EAX     ; 005ded89
    XOR ECX,ECX                         ; 005ded90
    FLD float ptr [ESP + 0x1ac]         ; 005ded92
    LEA EAX,[ESP + 0xf0]                ; 005ded99
    FADD float ptr [ESI]                ; 005deda0
    ADD ESP,0x8                         ; 005deda2
    FSTP float ptr [ESI]                ; 005deda5
    MOV dword ptr [ESP + 0xe8],EDX      ; 005deda7
    MOV EDX,dword ptr [0x006810c8]      ; 005dedae | g_CDemonSetPtr
    MOV dword ptr [ESP + 0xec],ECX      ; 005dedb4
    ADD EDX,0x15ac60                    ; 005dedbb
    MOV dword ptr [ESP + 0xf0],ECX      ; 005dedc1
    CMP EDX,EAX                         ; 005dedc8
    JZ 0x005dede6                       ; 005dedca
        ;   XREF to: 005dede6 (CONDITIONAL_JUMP)  ; LAB_005dede6
    MOV dword ptr [EDX],0x40800000      ; 005dedcc | g_CDemonSetInstance.active_fog.scroll.x
    MOV EAX,dword ptr [ESP + 0xec]      ; 005dedd2
    MOV dword ptr [EDX + 0x4],EAX       ; 005dedd9 | g_CDemonSetInstance.active_fog.scroll.y
    MOV EAX,dword ptr [ESP + 0xf0]      ; 005deddc
    MOV dword ptr [EDX + 0x8],EAX       ; 005dede3 | g_CDemonSetInstance.active_fog.scroll.z
    FLD float ptr [EBX + 0x314]         ; 005dede6
        ;   Label: LAB_005dede6
    FSUB float ptr [EBP + 0x18]         ; 005dedec
    FST float ptr [EBX + 0x314]         ; 005dedef
    FLDZ                                ; 005dedf5
    FCOMPP                              ; 005dedf7
    FNSTSW AX                           ; 005dedf9
    SAHF                                ; 005dedfb
    JC 0x005deed0                       ; 005dedfc
        ;   XREF to: 005deed0 (CONDITIONAL_JUMP)  ; LAB_005deed0
    MOV EAX,[0x006810c8]                ; 005dee02 | g_CDemonSetPtr
    LEA EDX,[EBX + 0x318]               ; 005dee07
    ADD EAX,0x15ac60                    ; 005dee0d | g_CDemonSetInstance.active_fog.scroll.x
    CMP EDX,EAX                         ; 005dee12
    JZ 0x005dee26                       ; 005dee14
        ;   XREF to: 005dee26 (CONDITIONAL_JUMP)  ; LAB_005dee26
    MOV ECX,dword ptr [EAX]             ; 005dee16 | g_CDemonSetInstance.active_fog.scroll.x
    MOV dword ptr [EDX],ECX             ; 005dee18
    MOV ECX,dword ptr [EAX + 0x4]       ; 005dee1a | g_CDemonSetInstance.active_fog.scroll.y
    MOV dword ptr [EDX + 0x4],ECX       ; 005dee1d
    MOV ECX,dword ptr [EAX + 0x8]       ; 005dee20 | g_CDemonSetInstance.active_fog.scroll.z
    MOV dword ptr [EDX + 0x8],ECX       ; 005dee23
    PUSH 0x41200000                     ; 005dee26
        ;   Label: LAB_005dee26
    PUSH 0xc1200000                     ; 005dee2b
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 005dee30
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x1ac],EAX     ; 005dee35
    FLD float ptr [ESP + 0x1ac]         ; 005dee3c
    ADD ESP,0x8                         ; 005dee43
    PUSH 0x41c80000                     ; 005dee46
    FADD float ptr [EBX + 0x318]        ; 005dee4b
    PUSH 0x41700000                     ; 005dee51
    FSTP float ptr [EBX + 0x318]        ; 005dee56
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 005dee5c
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x1ac],EAX     ; 005dee61
    FLD float ptr [ESP + 0x1ac]         ; 005dee68
    ADD ESP,0x8                         ; 005dee6f
    PUSH 0x41200000                     ; 005dee72
    FADD float ptr [EBX + 0x31c]        ; 005dee77
    PUSH 0xc1200000                     ; 005dee7d
    FSTP float ptr [EBX + 0x31c]        ; 005dee82
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 005dee88
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x1ac],EAX     ; 005dee8d
    FLD float ptr [ESP + 0x1ac]         ; 005dee94
    ADD ESP,0x8                         ; 005dee9b
    PUSH 0x41a00000                     ; 005dee9e
    FADD float ptr [EBX + 0x320]        ; 005deea3
    PUSH 0x40c00000                     ; 005deea9
    FSTP float ptr [EBX + 0x320]        ; 005deeae
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 005deeb4
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x1ac],EAX     ; 005deeb9
    MOV EAX,dword ptr [ESP + 0x1ac]     ; 005deec0
    MOV dword ptr [EBX + 0x314],EAX     ; 005deec7
    ADD ESP,0x8                         ; 005deecd
    MOV EDX,dword ptr [0x006810c8]      ; 005deed0 | g_CDemonSetPtr
        ;   Label: LAB_005deed0
    LEA EAX,[EBX + 0x318]               ; 005deed6
    FLD float ptr [EDX + 0x15ac60]      ; 005deedc | g_CDemonSetInstance.active_fog.scroll.x
    FSUB float ptr [EAX]                ; 005deee2
    FST float ptr [ESP + 0x190]         ; 005deee4
    FLD float ptr [EDX + 0x15ac64]      ; 005deeeb | g_CDemonSetInstance.active_fog.scroll.y
    FSUB float ptr [EAX + 0x4]          ; 005deef1
    FXCH                                ; 005deef4
    FLD float ptr [0x0065559e]          ; 005deef6 | FLOAT_0065559e
    FXCH                                ; 005deefc
    FMUL ST1                            ; 005deefe
    FXCH ST2                            ; 005def00
    FST float ptr [ESP + 0x194]         ; 005def02
    FLD float ptr [EDX + 0x15ac68]      ; 005def09 | g_CDemonSetInstance.active_fog.scroll.z
    FSUB float ptr [EAX + 0x8]          ; 005def0f
    FXCH                                ; 005def12
    FMUL ST2                            ; 005def14
    FXCH                                ; 005def16
    FST float ptr [ESP + 0x198]         ; 005def18
    FMULP ST2                           ; 005def1f
    LEA EDX,[EBX + 0x300]               ; 005def21
    FXCH ST2                            ; 005def27
    FSTP float ptr [ESP + 0x10c]        ; 005def29
    FXCH                                ; 005def30
    FSTP float ptr [ESP + 0x110]        ; 005def32
    FSTP float ptr [ESP + 0x114]        ; 005def39
    FLD float ptr [EAX]                 ; 005def40
    FADD float ptr [ESP + 0x10c]        ; 005def42
    FLD float ptr [EAX + 0x4]           ; 005def49
    FXCH                                ; 005def4c
    FSTP float ptr [EAX]                ; 005def4e
    FADD float ptr [ESP + 0x110]        ; 005def50
    FLD float ptr [EAX + 0x8]           ; 005def57
    FXCH                                ; 005def5a
    FSTP float ptr [EAX + 0x4]          ; 005def5c
    FADD float ptr [ESP + 0x114]        ; 005def5f
    FLD float ptr [EAX]                 ; 005def66
    FXCH                                ; 005def68
    FSTP float ptr [EAX + 0x8]          ; 005def6a
    FSUB float ptr [EDX]                ; 005def6d
    FST float ptr [ESP + 0x124]         ; 005def6f
    FLD float ptr [EAX + 0x4]           ; 005def76
    FSUB float ptr [EDX + 0x4]          ; 005def79
    FXCH                                ; 005def7c
    FLD float ptr [0x006555a2]          ; 005def7e | FLOAT_006555a2
    FXCH                                ; 005def84
    FMUL ST1                            ; 005def86
    FXCH ST2                            ; 005def88
    FST float ptr [ESP + 0x128]         ; 005def8a
    FLD float ptr [EAX + 0x8]           ; 005def91
    FSUB float ptr [EDX + 0x8]          ; 005def94
    FXCH                                ; 005def97
    FMUL ST2                            ; 005def99
    FXCH                                ; 005def9b
    FST float ptr [ESP + 0x12c]         ; 005def9d
    FMULP ST2                           ; 005defa4
    FXCH ST2                            ; 005defa6
    FSTP float ptr [ESP + 0x178]        ; 005defa8
    FXCH                                ; 005defaf
    FSTP float ptr [ESP + 0x17c]        ; 005defb1
    FSTP float ptr [ESP + 0x180]        ; 005defb8
    FLD float ptr [EDX]                 ; 005defbf
    FADD float ptr [ESP + 0x178]        ; 005defc1
    FLD float ptr [EDX + 0x4]           ; 005defc8
    FXCH                                ; 005defcb
    FSTP float ptr [EDX]                ; 005defcd
    FADD float ptr [ESP + 0x17c]        ; 005defcf
    FLD float ptr [EDX + 0x8]           ; 005defd6
    FXCH                                ; 005defd9
    FSTP float ptr [EDX + 0x4]          ; 005defdb
    FADD float ptr [ESP + 0x180]        ; 005defde
    LEA ESI,[EBX + 0x20]                ; 005defe5
    FSTP float ptr [EDX + 0x8]          ; 005defe8
    MOV EAX,dword ptr [ESI]             ; 005defeb
    MOV dword ptr [ESP + 0xf4],EAX      ; 005defed
    LEA EAX,[ESI + 0x4]                 ; 005deff4
    MOV EAX,dword ptr [EAX]             ; 005deff7
    MOV dword ptr [ESP + 0xf8],EAX      ; 005deff9
    LEA EAX,[ESI + 0x8]                 ; 005df000
    MOV EAX,dword ptr [EAX]             ; 005df003
    MOV dword ptr [ESP + 0xfc],EAX      ; 005df005
    XOR EDI,EDI                         ; 005df00c
    FLD float ptr [EBX + 0x324]         ; 005df00e
    FCHS                                ; 005df014
    FSTP float ptr [ESP + 0x1a4]        ; 005df016
    MOV dword ptr [ESP + 0xdc],EDI      ; 005df01d
    MOV EAX,dword ptr [ESP + 0x1a4]     ; 005df024
    MOV dword ptr [ESP + 0xe4],EDI      ; 005df02b
    MOV dword ptr [ESP + 0xe0],EAX      ; 005df032
    LEA ESI,[EBX + 0x2e8]               ; 005df039
    FLD float ptr [EDX]                 ; 005df03f
    FSUB float ptr [ESI]                ; 005df041
    FSTP float ptr [ESP + 0xd0]         ; 005df043
    FLD float ptr [EDX + 0x4]           ; 005df04a
    FSUB float ptr [ESI + 0x4]          ; 005df04d
    LEA EAX,[EBX + 0x30c]               ; 005df050
    FSTP float ptr [ESP + 0xd4]         ; 005df056
    FLD float ptr [EDX + 0x8]           ; 005df05d
    FSUB float ptr [ESI + 0x8]          ; 005df060
    FLD float ptr [ESP + 0xd0]          ; 005df063
    FXCH                                ; 005df06a
    FSTP float ptr [ESP + 0xd8]         ; 005df06c
    FMUL float ptr [EAX]                ; 005df073
    FLD float ptr [ESP + 0xd4]          ; 005df075
    FXCH                                ; 005df07c
    FSTP float ptr [ESP + 0x16c]        ; 005df07e
    FMUL float ptr [EAX]                ; 005df085
    FLD float ptr [ESP + 0xd8]          ; 005df087
    FXCH                                ; 005df08e
    FSTP float ptr [ESP + 0x170]        ; 005df090
    FMUL float ptr [EAX]                ; 005df097
    FLD float ptr [ESP + 0x1a4]         ; 005df099
    FADD float ptr [ESP + 0x170]        ; 005df0a0
    MOV EAX,dword ptr [ESP + 0x16c]     ; 005df0a7
    FXCH                                ; 005df0ae
    FSTP float ptr [ESP + 0x174]        ; 005df0b0
    MOV dword ptr [ESP + 0xdc],EAX      ; 005df0b7
    MOV EAX,dword ptr [ESP + 0x174]     ; 005df0be
    FSTP float ptr [ESP + 0xe0]         ; 005df0c5
    MOV dword ptr [ESP + 0xe4],EAX      ; 005df0cc
    PUSH EDX                            ; 005df0d3
    LEA EAX,[ESP + 0x14c]               ; 005df0d4
    PUSH EAX                            ; 005df0db
    PUSH EBX                            ; 005df0dc
    CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0 ; 005df0dd
        ;   XREF to: 00408ea0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0(CDemonActor * this_ptr, CVector3f * output_vector, CVector3f * input_vector)
    FLD float ptr [0x006555a6]          ; 005df0e2 | FLOAT_006555a6
    FLD float ptr [EAX]                 ; 005df0e8
    FMUL ST1                            ; 005df0ea
    ADD ESP,0xc                         ; 005df0ec
    FSTP float ptr [ESP + 0x118]        ; 005df0ef
    FLD float ptr [EAX + 0x4]           ; 005df0f6
    FMUL ST1                            ; 005df0f9
    FSTP float ptr [ESP + 0x11c]        ; 005df0fb
    FMUL float ptr [EAX + 0x8]          ; 005df102
    LEA EDX,[EBX + 0x2f4]               ; 005df105
    FSTP float ptr [ESP + 0x120]        ; 005df10b
    FLD float ptr [0x006555aa]          ; 005df112 | FLOAT_006555aa
    FLD float ptr [EDX]                 ; 005df118
    FMUL ST1                            ; 005df11a
    FLD float ptr [EDX + 0x4]           ; 005df11c
    FMUL ST2                            ; 005df11f
    FLD float ptr [EDX + 0x8]           ; 005df121
    FMULP ST3                           ; 005df124
    FXCH                                ; 005df126
    FSTP float ptr [EDX]                ; 005df128
    FSTP float ptr [EDX + 0x4]          ; 005df12a
    FSTP float ptr [EDX + 0x8]          ; 005df12d
    FLD float ptr [EDX]                 ; 005df130
    FADD float ptr [ESP + 0x118]        ; 005df132
    FLD float ptr [EDX + 0x4]           ; 005df139
    FXCH                                ; 005df13c
    FSTP float ptr [EDX]                ; 005df13e
    FADD float ptr [ESP + 0x11c]        ; 005df140
    FLD float ptr [EDX + 0x8]           ; 005df147
    FXCH                                ; 005df14a
    FSTP float ptr [EDX + 0x4]          ; 005df14c
    FADD float ptr [ESP + 0x120]        ; 005df14f
    FSTP float ptr [EDX + 0x8]          ; 005df156
    FLD float ptr [EBP + 0x18]          ; 005df159
    FLD float ptr [ESP + 0xdc]          ; 005df15c
    FMUL ST1                            ; 005df163
    FLD float ptr [ESP + 0xe0]          ; 005df165
    FMUL ST2                            ; 005df16c
    FLD float ptr [ESP + 0xe4]          ; 005df16e
    FMULP ST3                           ; 005df175
    FXCH                                ; 005df177
    FSTP float ptr [ESP + 0x13c]        ; 005df179
    FSTP float ptr [ESP + 0x140]        ; 005df180
    FSTP float ptr [ESP + 0x144]        ; 005df187
    FLD float ptr [ESI]                 ; 005df18e
    FADD float ptr [ESP + 0x13c]        ; 005df190
    FLD float ptr [ESI + 0x4]           ; 005df197
    FXCH                                ; 005df19a
    FSTP float ptr [ESI]                ; 005df19c
    FADD float ptr [ESP + 0x140]        ; 005df19e
    FLD float ptr [ESI + 0x8]           ; 005df1a5
    FXCH                                ; 005df1a8
    FSTP float ptr [ESI + 0x4]          ; 005df1aa
    FADD float ptr [ESP + 0x144]        ; 005df1ad
    FSTP float ptr [ESI + 0x8]          ; 005df1b4
    FLD float ptr [EDX + 0x4]           ; 005df1b7
    FMUL ST0                            ; 005df1ba
    FLD float ptr [EDX]                 ; 005df1bc
    FMUL ST0                            ; 005df1be
    FADDP                               ; 005df1c0
    FLD float ptr [EDX + 0x8]           ; 005df1c2
    FMUL ST0                            ; 005df1c5
    FADDP                               ; 005df1c7
    FSQRT                               ; 005df1c9
    FMUL double ptr [0x006555ae]        ; 005df1cb | DOUBLE_006555ae
    FST float ptr [ESP + 0x8]           ; 005df1d1
    FLD1                                ; 005df1d5
    FCOMPP                              ; 005df1d7
    FNSTSW AX                           ; 005df1d9
    SAHF                                ; 005df1db
    JNC 0x005df200                      ; 005df1dc
        ;   XREF to: 005df200 (CONDITIONAL_JUMP)  ; LAB_005df200
    FLD1                                ; 005df1de
    FLD float ptr [EDX]                 ; 005df1e0
    FXCH                                ; 005df1e2
    FDIV float ptr [ESP + 0x8]          ; 005df1e4
    FXCH                                ; 005df1e8
    FMUL ST1                            ; 005df1ea
    FLD float ptr [EDX + 0x4]           ; 005df1ec
    FMUL ST2                            ; 005df1ef
    FLD float ptr [EDX + 0x8]           ; 005df1f1
    FMULP ST3                           ; 005df1f4
    FXCH                                ; 005df1f6
    FSTP float ptr [EDX]                ; 005df1f8
    FSTP float ptr [EDX + 0x4]          ; 005df1fa
    FSTP float ptr [EDX + 0x8]          ; 005df1fd
    LEA EAX,[EBX + 0x2e8]               ; 005df200
        ;   Label: LAB_005df200
    FLD float ptr [EBP + 0x18]          ; 005df206
    FLD float ptr [EAX]                 ; 005df209
    FMUL ST1                            ; 005df20b
    FSTP float ptr [ESP + 0x160]        ; 005df20d
    FLD float ptr [EAX + 0x4]           ; 005df214
    FMUL ST1                            ; 005df217
    FSTP float ptr [ESP + 0x164]        ; 005df219
    FLD float ptr [EAX + 0x8]           ; 005df220
    FMUL ST1                            ; 005df223
    LEA EAX,[EBX + 0x2f4]               ; 005df225
    FSTP float ptr [ESP + 0x168]        ; 005df22b
    FLD float ptr [EAX]                 ; 005df232
    FMUL ST1                            ; 005df234
    FSTP float ptr [ESP + 0x184]        ; 005df236
    FLD float ptr [EAX + 0x4]           ; 005df23d
    FMUL ST1                            ; 005df240
    FSTP float ptr [ESP + 0x188]        ; 005df242
    FMUL float ptr [EAX + 0x8]          ; 005df249
    FSTP float ptr [ESP + 0x18c]        ; 005df24c
    PUSH dword ptr [EBX + 0x2e4]        ; 005df253
    PUSH dword ptr [EBX + 0x2e0]        ; 005df259
    PUSH dword ptr [EBX + 0x310]        ; 005df25f
    PUSH dword ptr [ESP + 0x174]        ; 005df265
    PUSH dword ptr [ESP + 0x170]        ; 005df26c
    PUSH dword ptr [EBX + 0x28]         ; 005df273
    MOV EDX,dword ptr [0x006810c8]      ; 005df276 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH dword ptr [EBX + 0x20]         ; 005df27c
    PUSH EDX                            ; 005df27f | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_testCylinderCollision_FUN_00573470 ; 005df280
        ;   XREF to: 00573470 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_testCylinderCollision_FUN_00573470(CDemonSet * this_ptr, float start_x, float start_z, float dir_x, ...)
    MOV dword ptr [ESP + 0x1c4],EAX     ; 005df285
    XOR EDI,EDI                         ; 005df28c
    FLD float ptr [ESP + 0x1c4]         ; 005df28e
    ADD ESP,0x20                        ; 005df295
    FLDZ                                ; 005df298
    FXCH                                ; 005df29a
    FST float ptr [ESP + 0xc]           ; 005df29c
    FSTP double ptr [ESP]               ; 005df2a0
    FCOMP double ptr [ESP]              ; 005df2a3
    FNSTSW AX                           ; 005df2a6
    SAHF                                ; 005df2a8
    JA 0x005df2f0                       ; 005df2a9
        ;   XREF to: 005df2f0 (CONDITIONAL_JUMP)  ; LAB_005df2f0
    FLD1                                ; 005df2ab
    FCOMP double ptr [ESP]              ; 005df2ad
    FNSTSW AX                           ; 005df2b0
    SAHF                                ; 005df2b2
    JBE 0x005df2f0                      ; 005df2b3
        ;   XREF to: 005df2f0 (CONDITIONAL_JUMP)  ; LAB_005df2f0
    FLD float ptr [ESP + 0xc]           ; 005df2b5
    FLD float ptr [ESP + 0x160]         ; 005df2b9
    FMUL ST1                            ; 005df2c0
    FLD float ptr [ESP + 0x164]         ; 005df2c2
    FMUL ST2                            ; 005df2c9
    FLD float ptr [ESP + 0x168]         ; 005df2cb
    FMULP ST3                           ; 005df2d2
    MOV EDI,0x1                         ; 005df2d4
    FSTP float ptr [ESP + 0x164]        ; 005df2d9
    FXCH                                ; 005df2e0
    FSTP float ptr [ESP + 0x168]        ; 005df2e2
    FSTP float ptr [ESP + 0x160]        ; 005df2e9
    LEA ESI,[EBX + 0x20]                ; 005df2f0
        ;   Label: LAB_005df2f0
    FLD float ptr [ESI]                 ; 005df2f3
    FADD float ptr [ESP + 0x160]        ; 005df2f5
    FLD float ptr [ESI + 0x4]           ; 005df2fc
    FXCH                                ; 005df2ff
    FSTP float ptr [ESI]                ; 005df301
    FADD float ptr [ESP + 0x164]        ; 005df303
    FLD float ptr [ESI + 0x8]           ; 005df30a
    FXCH                                ; 005df30d
    FSTP float ptr [ESI + 0x4]          ; 005df30f
    FADD float ptr [ESP + 0x168]        ; 005df312
    FSTP float ptr [ESI + 0x8]          ; 005df319
    FLD float ptr [EBX + 0x310]         ; 005df31c
    FMUL double ptr [0x006555b6]        ; 005df322 | DOUBLE_006555b6
    SUB ESP,0x4                         ; 005df328
    FSTP float ptr [ESP]                ; 005df32b
    PUSH ESI                            ; 005df32e
    MOV ECX,dword ptr [0x006810c8]      ; 005df32f | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH ECX                            ; 005df335 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0 ; 005df336
        ;   XREF to: 005716b0 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0(CDemonSet * this_ptr, CVector3f * position, float radius)
    MOV dword ptr [ESP + 0x1b0],EAX     ; 005df33b
    FLD float ptr [ESP + 0x1b0]         ; 005df342
    ADD ESP,0xc                         ; 005df349
    FLD float ptr [EBX + 0x24]          ; 005df34c
    FXCH                                ; 005df34f
    FSTP float ptr [ESP + 0x19c]        ; 005df351
    FCOMP float ptr [ESP + 0x19c]       ; 005df358
    FNSTSW AX                           ; 005df35f
    SAHF                                ; 005df361
    JNC 0x005df534                      ; 005df362
        ;   XREF to: 005df534 (CONDITIONAL_JUMP)  ; LAB_005df534
    FLD float ptr [EBX + 0x310]         ; 005df368
    MOV EAX,dword ptr [ESP + 0x19c]     ; 005df36e
    FMUL double ptr [0x006555be]        ; 005df375 | DOUBLE_006555be
    MOV dword ptr [EBX + 0x24],EAX      ; 005df37b
    FADD float ptr [ESP + 0xf8]         ; 005df37e
    FLD float ptr [EBX + 0x24]          ; 005df385
    FCOMPP                              ; 005df388
    FNSTSW AX                           ; 005df38a
    SAHF                                ; 005df38c
    JBE 0x005df3ac                      ; 005df38d
        ;   XREF to: 005df3ac (CONDITIONAL_JUMP)  ; LAB_005df3ac
    MOV EAX,dword ptr [ESP + 0xf4]      ; 005df38f
    MOV dword ptr [ESI],EAX             ; 005df396
    MOV EAX,dword ptr [ESP + 0xf8]      ; 005df398
    MOV dword ptr [ESI + 0x4],EAX       ; 005df39f
    MOV EAX,dword ptr [ESP + 0xfc]      ; 005df3a2
    MOV dword ptr [ESI + 0x8],EAX       ; 005df3a9
    LEA EAX,[EBX + 0x2f4]               ; 005df3ac
        ;   Label: LAB_005df3ac
    FLD float ptr [0x006555c6]          ; 005df3b2 | FLOAT_006555c6
    FLD float ptr [EAX]                 ; 005df3b8
    FMUL ST1                            ; 005df3ba
    FLD float ptr [EAX + 0x4]           ; 005df3bc
    FMUL ST2                            ; 005df3bf
    FLD float ptr [EAX + 0x8]           ; 005df3c1
    FMULP ST3                           ; 005df3c4
    FXCH                                ; 005df3c6
    FSTP float ptr [EAX]                ; 005df3c8
    FSTP float ptr [EAX + 0x4]          ; 005df3ca
    FSTP float ptr [EAX + 0x8]          ; 005df3cd
    LEA EAX,[EBX + 0x20]                ; 005df3d0
        ;   Label: LAB_005df3d0
    FLD float ptr [EAX]                 ; 005df3d3
    FSUB float ptr [ESP + 0xf4]         ; 005df3d5
    FLD1                                ; 005df3dc
    FXCH                                ; 005df3de
    FST float ptr [ESP + 0x154]         ; 005df3e0
    FLD float ptr [EAX + 0x4]           ; 005df3e7
    FSUB float ptr [ESP + 0xf8]         ; 005df3ea
    FXCH ST2                            ; 005df3f1
    FDIV float ptr [EBP + 0x18]         ; 005df3f3
    FXCH                                ; 005df3f6
    FMUL ST1                            ; 005df3f8
    FXCH ST2                            ; 005df3fa
    FST float ptr [ESP + 0x158]         ; 005df3fc
    FLD float ptr [EAX + 0x8]           ; 005df403
    FSUB float ptr [ESP + 0xfc]         ; 005df406
    FXCH                                ; 005df40d
    FMUL ST2                            ; 005df40f
    FXCH                                ; 005df411
    FST float ptr [ESP + 0x15c]         ; 005df413
    FMULP ST2                           ; 005df41a
    LEA EDX,[EBX + 0x2e8]               ; 005df41c
    LEA EAX,[ESP + 0x100]               ; 005df422
    FXCH ST2                            ; 005df429
    FSTP float ptr [ESP + 0x100]        ; 005df42b
    FXCH                                ; 005df432
    FSTP float ptr [ESP + 0x104]        ; 005df434
    FSTP float ptr [ESP + 0x108]        ; 005df43b
    CMP EDX,EAX                         ; 005df442
    JZ 0x005df463                       ; 005df444
        ;   XREF to: 005df463 (CONDITIONAL_JUMP)  ; LAB_005df463
    MOV EAX,dword ptr [ESP + 0x100]     ; 005df446
    MOV dword ptr [EDX],EAX             ; 005df44d
    MOV EAX,dword ptr [ESP + 0x104]     ; 005df44f
    MOV dword ptr [EDX + 0x4],EAX       ; 005df456
    MOV EAX,dword ptr [ESP + 0x108]     ; 005df459
    MOV dword ptr [EDX + 0x8],EAX       ; 005df460
    LEA EAX,[EBX + 0x30]                ; 005df463
        ;   Label: LAB_005df463
    PUSH EAX                            ; 005df466
    PUSH 0x3f87558                      ; 005df467 | g_ZeroVector
    MOV dword ptr [ESP + 0x1a8],EAX     ; 005df46c
    LEA EAX,[ESP + 0x18]                ; 005df473
    PUSH EAX                            ; 005df477
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 005df478
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 005df47d
    LEA EAX,[ESP + 0x184]               ; 005df480
    PUSH EAX                            ; 005df487
    PUSH 0x3f87558                      ; 005df488 | g_ZeroVector
    LEA EAX,[ESP + 0xa8]                ; 005df48d
    PUSH EAX                            ; 005df494
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 005df495
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 005df49a
    LEA EAX,[ESP + 0x10]                ; 005df49d
    PUSH EAX                            ; 005df4a1
    LEA EAX,[ESP + 0xa4]                ; 005df4a2
    PUSH EAX                            ; 005df4a9
    LEA ESI,[ESP + 0x48]                ; 005df4aa
    LEA EDI,[ESP + 0x78]                ; 005df4ae
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 005df4b2
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    ADD ESP,0x8                         ; 005df4b7
    LEA EAX,[ESP + 0x130]               ; 005df4ba
    MOV ECX,0xc                         ; 005df4c1
    PUSH EAX                            ; 005df4c6
    LEA EAX,[ESP + 0x74]                ; 005df4c7
    LEA ESI,[ESP + 0x44]                ; 005df4cb
    PUSH EAX                            ; 005df4cf
    MOVSD.REP ES:EDI,ESI                ; 005df4d0
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690 ; 005df4d2
        ;   XREF to: 005f5690 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_005f5690(CMatrix3x4f * matrix_in, CVector3f * euler_out)
    ADD ESP,0x8                         ; 005df4d7
    MOV EDI,dword ptr [ESP + 0x1a0]     ; 005df4da
    CMP EAX,EDI                         ; 005df4e1
    JZ 0x005df4f5                       ; 005df4e3
        ;   XREF to: 005df4f5 (CONDITIONAL_JUMP)  ; LAB_005df4f5
    MOV EDX,dword ptr [EAX]             ; 005df4e5
    MOV dword ptr [EDI],EDX             ; 005df4e7
    MOV EDX,dword ptr [EAX + 0x4]       ; 005df4e9
    MOV dword ptr [EDI + 0x4],EDX       ; 005df4ec
    MOV EDX,dword ptr [EAX + 0x8]       ; 005df4ef
    MOV dword ptr [EDI + 0x8],EDX       ; 005df4f2
    PUSH EBX                            ; 005df4f5
        ;   Label: LAB_005df4f5
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 005df4f6
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005df4fb
    MOV ESP,EBP                         ; 005df4fe
        ;   Label: LAB_005df4fe
    POP EBP                             ; 005df500
    POP EDI                             ; 005df501
    POP ESI                             ; 005df502
    POP EBX                             ; 005df503
    RET                                 ; 005df504
    ADD EBX,0x2d4                       ; 005df505
        ;   Label: LAB_005df505
    PUSH 0x42c80000                     ; 005df50b
    PUSH EBX                            ; 005df510
    CALL core_hero.cpp_isAnyHeroWithinRadius_FUN_004f2220 ; 005df511
        ;   XREF to: 004f2220 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_isAnyHeroWithinRadius_FUN_004f2220(CVector3f * point, float radius)
    ADD ESP,0x8                         ; 005df516
    TEST EAX,EAX                        ; 005df519
    JNZ 0x005df4fe                      ; 005df51b
        ;   XREF to: 005df4fe (CONDITIONAL_JUMP)  ; LAB_005df4fe
    MOV EAX,dword ptr [EBX]             ; 005df51d
    MOV dword ptr [ESI],EAX             ; 005df51f
    MOV EAX,dword ptr [EBX + 0x4]       ; 005df521
    MOV dword ptr [ESI + 0x4],EAX       ; 005df524
    MOV EAX,dword ptr [EBX + 0x8]       ; 005df527
    MOV dword ptr [ESI + 0x8],EAX       ; 005df52a
    MOV ESP,EBP                         ; 005df52d
    POP EBP                             ; 005df52f
    POP EDI                             ; 005df530
    POP ESI                             ; 005df531
    POP EBX                             ; 005df532
    RET                                 ; 005df533
    TEST EDI,EDI                        ; 005df534
        ;   Label: LAB_005df534
    JNZ 0x005df3ac                      ; 005df536
        ;   XREF to: 005df3ac (CONDITIONAL_JUMP)  ; LAB_005df3ac
    JMP 0x005df3d0                      ; 005df53c
        ;   XREF to: 005df3d0 (UNCONDITIONAL_JUMP)  ; LAB_005df3d0


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_set.cpp_CDemonSet_FUN_0056fbd0(CDemonSet * this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x90]:8  local_90
; undefined1       Stack[-0x70]:1  local_70
; undefined1       Stack[-0x64]:1  local_64
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 at 0053a349
;   core_set.cpp_CDemonSet_FUN_0056be80 at 0056c0aa
;   core_set.cpp_CDemonSet_FUN_0056c1a0 at 0056c459
;   core_set.cpp_CDemonSet_FUN_0056c990 at 0056cb27
;   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 at 0056b3a4
;   core_set.cpp_FUN_005713c0 at 005713c9
;
; Referenced Globals:
;   TerminatedCString s_buildDispList_d_items_3__00645feb
;   float FLOAT_0064600f = 0.5
;   double DOUBLE_00646013 = 0.0555555555555556
;   double DOUBLE_0064601b = 0.0000152587890625
;   double DOUBLE_00646023 = 1000
;   CConsole* g_CConsolePtr = 0083b1a4
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CGame* g_CGamePtr = 02d81a9c
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CConsole g_ConsolePtr
;   CDemonRenderer g_CDemonRendererInstance
;   CGame g_CGameInstance
;   undefined4 DAT_02d81ca8
;   undefined4 g_CGameInstance.block_auto_save
;   undefined4 g_CGameInstance.delta_time_float
;   ... and 9 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_set.cpp_CDemonSet_isCameraPanning_FUN_00571320
;   crt_stdlib.c_qsort_FUN_005fdf38
;   engine_console.cpp_CConsole_printf_FUN_00441890
;   engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
;   engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
;   wincore_winrun.cpp_getTime_FUN_005f2dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056fbd0
        ;   Label: core_set.cpp_CDemonSet_FUN_0056fbd0
    PUSH ESI                            ; 0056fbd1
    PUSH EDI                            ; 0056fbd2
    PUSH EBP                            ; 0056fbd3
    SUB ESP,0x78                        ; 0056fbd4
    MOV EAX,[0x0067b654]                ; 0056fbd7 | CGame g_CGameInstance | CGame * g_CGamePtr
    CMP dword ptr [EAX + 0x20c],0x0     ; 0056fbdc | DAT_02d81ca8
    JNZ 0x0056fd2d                      ; 0056fbe3 | LAB_0056fd2d
        ;   XREF to: 0056fd2d (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [0x006703ec]      ; 0056fbe9 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
        ;   Label: LAB_0056fbe9
    XOR ECX,ECX                         ; 0056fbef
    PUSH EBX                            ; 0056fbf1 | CDemonRenderer g_CDemonRendererInstance
    LEA ESI,[ESP + 0x28]                ; 0056fbf2
    MOV dword ptr [0x03342b4c],ECX      ; 0056fbf6 | undefined4 DAT_03342b4c
    CALL engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760 ; 0056fbfc | void engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760(CDemonRenderer * this_ptr, CVector3i * output)
        ;   XREF to: 0048c760 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0056fc01
    LEA EAX,[ESP + 0x18]                ; 0056fc04
    PUSH EAX                            ; 0056fc08
    MOV ESI,dword ptr [0x006703ec]      ; 0056fc09 | CDemonRenderer * g_CDemonRendererPtr
    PUSH ESI                            ; 0056fc0f | CDemonRenderer g_CDemonRendererInstance
    MOV EDI,0xc                         ; 0056fc10
    CALL engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780 ; 0056fc15 | float * engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780(CDemonRenderer * this_ptr, float * output)
        ;   XREF to: 0048c780 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0056fc1a
    MOV EBP,dword ptr [0x032776b4]      ; 0056fc1d | int g_DynamicLightCount
    MOV dword ptr [ESP + 0x60],EDI      ; 0056fc23
    TEST EBP,EBP                        ; 0056fc27
    JZ 0x0056fd3b                       ; 0056fc29 | LAB_0056fd3b
        ;   XREF to: 0056fd3b (CONDITIONAL_JUMP)
    OR byte ptr [ESP + 0x60],0x1        ; 0056fc2f
        ;   Label: LAB_0056fc2f
    CMP dword ptr [0x03276f30],0x0      ; 0056fc34 | int g_ActiveLightCount
        ;   Label: LAB_0056fc34
    JZ 0x0056fc42                       ; 0056fc3b | LAB_0056fc42
        ;   XREF to: 0056fc42 (CONDITIONAL_JUMP)
    OR byte ptr [ESP + 0x60],0x22       ; 0056fc3d
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0056fc42
        ;   Label: LAB_0056fc42
    XOR EBX,EBX                         ; 0056fc49
    MOV ESI,dword ptr [EAX + 0x158cec]  ; 0056fc4b
    MOV dword ptr [ESP + 0x64],EBX      ; 0056fc51
    TEST ESI,ESI                        ; 0056fc55
    JLE 0x0056fc90                      ; 0056fc57 | LAB_0056fc90
        ;   XREF to: 0056fc90 (CONDITIONAL_JUMP)
    MOV EBP,EAX                         ; 0056fc59
    MOV EAX,[0x02db87d0]                ; 0056fc5b | int g_LocalHeroIndex
        ;   Label: LAB_0056fc5b
    MOV EBX,dword ptr [EBP + 0x158cf0]  ; 0056fc60
    CMP EBX,dword ptr [EAX*0x4 + 0x2db87c0] ; 0056fc66 | CHero *[4] g_HeroActors
    JNZ 0x0056fd52                      ; 0056fc6d | LAB_0056fd52
        ;   XREF to: 0056fd52 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0x64]      ; 0056fc73
        ;   Label: LAB_0056fc73
    MOV EDX,dword ptr [ESP + 0x8c]      ; 0056fc77
    ADD EBP,0x4                         ; 0056fc7e
    INC EDI                             ; 0056fc81
    MOV ECX,dword ptr [EDX + 0x158cec]  ; 0056fc82
    MOV dword ptr [ESP + 0x64],EDI      ; 0056fc88
    CMP EDI,ECX                         ; 0056fc8c
    JL 0x0056fc5b                       ; 0056fc8e | LAB_0056fc5b
        ;   XREF to: 0056fc5b (CONDITIONAL_JUMP)
    PUSH 0x56fba0                       ; 0056fc90
        ;   Label: LAB_0056fc90
    PUSH 0x8                            ; 0056fc95
    MOV EBX,dword ptr [0x03342b4c]      ; 0056fc97 | undefined4 DAT_03342b4c
    PUSH EBX                            ; 0056fc9d
    PUSH 0x3342b50                      ; 0056fc9e | undefined4 DAT_03342b50
    CALL crt_stdlib.c_qsort_FUN_005fdf38 ; 0056fca3 | void crt_stdlib.c_qsort_FUN_005fdf38(void * base, SIZE_T num, SIZE_T size, QSORT_COMPARATOR compar)
        ;   XREF to: 005fdf38 (UNCONDITIONAL_CALL)
    MOV EBX,dword ptr [0x02db87d0]      ; 0056fca8 | int g_LocalHeroIndex
    SHL EBX,0x2                         ; 0056fcae
    MOV ESI,dword ptr [EBX + 0x2db87c0] ; 0056fcb1 | CHero *[4] g_HeroActors
    ADD ESP,0x10                        ; 0056fcb7
    TEST ESI,ESI                        ; 0056fcba
    JZ 0x0056ff30                       ; 0056fcbc | LAB_0056ff30
        ;   XREF to: 0056ff30 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x8c]      ; 0056fcc2
    MOV EAX,ESI                         ; 0056fcc9
    MOV EBP,dword ptr [0x03342b4c]      ; 0056fccb | undefined4 DAT_03342b4c
    XOR EAX,ESI                         ; 0056fcd1
    MOV dword ptr [EDX + 0x15f6e8],ESI  ; 0056fcd3
    TEST EBP,EBP                        ; 0056fcd9
    JLE 0x0056fd00                      ; 0056fcdb | LAB_0056fd00
        ;   XREF to: 0056fd00 (CONDITIONAL_JUMP)
    XOR ECX,ECX                         ; 0056fcdd
    ADD EDX,0x4                         ; 0056fcdf
        ;   Label: LAB_0056fcdf
    MOV EBX,dword ptr [ECX + 0x3342b50] ; 0056fce2 | undefined4 DAT_03342b50 | DAT_03342b58
    INC EAX                             ; 0056fce8
    MOV dword ptr [EDX + 0x15f6e8],EBX  ; 0056fce9
    MOV EBX,dword ptr [0x03342b4c]      ; 0056fcef | undefined4 DAT_03342b4c
    ADD ECX,0x8                         ; 0056fcf5
    CMP EAX,EBX                         ; 0056fcf8
    JL 0x0056fcdf                       ; 0056fcfa | LAB_0056fcdf
        ;   XREF to: 0056fcdf (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 0056fcfc
    MOV EAX,[0x03342b4c]                ; 0056fd00 | undefined4 DAT_03342b4c
        ;   Label: LAB_0056fd00
    MOV EDX,dword ptr [ESP + 0x8c]      ; 0056fd05
    INC EAX                             ; 0056fd0c
    MOV dword ptr [EDX + 0x15f6e4],EAX  ; 0056fd0d
        ;   Label: LAB_0056fd0d
    MOV EAX,[0x0067b654]                ; 0056fd13 | CGame g_CGameInstance | CGame * g_CGamePtr
    CMP dword ptr [EAX + 0x20c],0x0     ; 0056fd18 | DAT_02d81ca8
    JNZ 0x0056ff81                      ; 0056fd1f | LAB_0056ff81
        ;   XREF to: 0056ff81 (CONDITIONAL_JUMP)
    ADD ESP,0x78                        ; 0056fd25
    POP EBP                             ; 0056fd28
    POP EDI                             ; 0056fd29
    POP ESI                             ; 0056fd2a
    POP EBX                             ; 0056fd2b
    RET                                 ; 0056fd2c
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 0056fd2d | int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   Label: LAB_0056fd2d
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x5c],EAX      ; 0056fd32
    JMP 0x0056fbe9                      ; 0056fd36 | LAB_0056fbe9
        ;   XREF to: 0056fbe9 (UNCONDITIONAL_JUMP)
    MOV EAX,[0x0067b654]                ; 0056fd3b | CGame * g_CGamePtr
        ;   Label: LAB_0056fd3b
    CMP dword ptr [EAX + 0x240],0x0     ; 0056fd40 | g_CGameInstance.block_auto_save
    JNZ 0x0056fc2f                      ; 0056fd47 | LAB_0056fc2f
        ;   XREF to: 0056fc2f (CONDITIONAL_JUMP)
    JMP 0x0056fc34                      ; 0056fd4d | LAB_0056fc34
        ;   XREF to: 0056fc34 (UNCONDITIONAL_JUMP)
    MOV EAX,[0x0067d550]                ; 0056fd52 | CDemonMission * g_CDemonMissionPtr
        ;   Label: LAB_0056fd52
    CMP dword ptr [EAX + 0x4],0x0       ; 0056fd57 | DAT_02f33744
    JZ 0x0056fd6a                       ; 0056fd5b | LAB_0056fd6a
        ;   XREF to: 0056fd6a (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x148],0x0     ; 0056fd5d
    JNZ 0x0056fc73                      ; 0056fd64 | LAB_0056fc73
        ;   XREF to: 0056fc73 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0x90]      ; 0056fd6a
        ;   Label: LAB_0056fd6a
    CMP EDI,-0x1                        ; 0056fd71
    JNZ 0x0056fd7c                      ; 0056fd74 | LAB_0056fd7c
        ;   XREF to: 0056fd7c (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x140],EDI     ; 0056fd76
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0056fd7c
        ;   Label: LAB_0056fd7c
    PUSH EAX                            ; 0056fd83
    LEA EDI,[EBX + 0x128]               ; 0056fd84
    CALL core_set.cpp_CDemonSet_isCameraPanning_FUN_00571320 ; 0056fd8a | int core_set.cpp_CDemonSet_isCameraPanning_FUN_00571320(CDemonSet * this_ptr)
        ;   XREF to: 00571320 (UNCONDITIONAL_CALL)
    LEA ESI,[EBX + 0x20]                ; 0056fd8f
    LEA ECX,[EBX + 0x134]               ; 0056fd92
    ADD ESP,0x4                         ; 0056fd98
    LEA EDX,[EBX + 0x30]                ; 0056fd9b
    TEST EAX,EAX                        ; 0056fd9e
    JZ 0x0056febe                       ; 0056fda0 | LAB_0056febe
        ;   XREF to: 0056febe (CONDITIONAL_JUMP)
    FLD float ptr [ESI]                 ; 0056fda6
    FCOMP float ptr [EDI]               ; 0056fda8
    FNSTSW AX                           ; 0056fdaa
    SAHF                                ; 0056fdac
    JZ 0x0056fe63                       ; 0056fdad | LAB_0056fe63
        ;   XREF to: 0056fe63 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x144],0x1     ; 0056fdb3
        ;   Label: LAB_0056fdb3
    MOV EAX,ESP                         ; 0056fdbd
        ;   Label: LAB_0056fdbd
    PUSH EAX                            ; 0056fdbf
    MOV EDX,dword ptr [EBX + 0x154]     ; 0056fdc0
    PUSH EBX                            ; 0056fdc6
    CALL dword ptr [EDX + 0x14]         ; 0056fdc7
    LEA EDX,[EAX + 0xc]                 ; 0056fdca
    FLD float ptr [EAX]                 ; 0056fdcd
    FADD float ptr [EDX]                ; 0056fdcf
    ADD ESP,0x8                         ; 0056fdd1
    FST float ptr [ESP + 0x3c]          ; 0056fdd4
    FLD float ptr [EAX + 0x4]           ; 0056fdd8
    FADD float ptr [EDX + 0x4]          ; 0056fddb
    FXCH                                ; 0056fdde
    FLD float ptr [0x0064600f]          ; 0056fde0 | float FLOAT_0064600f
    FXCH                                ; 0056fde6
    FMUL ST1                            ; 0056fde8
    FXCH ST2                            ; 0056fdea
    FST float ptr [ESP + 0x40]          ; 0056fdec
    FMUL ST1                            ; 0056fdf0
    FLD float ptr [EAX + 0x8]           ; 0056fdf2
    FADD float ptr [EDX + 0x8]          ; 0056fdf5
    LEA EAX,[ESP + 0x30]                ; 0056fdf8
    FST float ptr [ESP + 0x44]          ; 0056fdfc
    FMULP ST2                           ; 0056fe00
    PUSH EAX                            ; 0056fe02
    LEA EAX,[ESP + 0x4c]                ; 0056fe03
    FXCH ST2                            ; 0056fe07
    FSTP float ptr [ESP + 0x34]         ; 0056fe09
    PUSH EAX                            ; 0056fe0d
    FXCH                                ; 0056fe0e
    FSTP float ptr [ESP + 0x3c]         ; 0056fe10
    PUSH EBX                            ; 0056fe14
    FSTP float ptr [ESP + 0x44]         ; 0056fe15
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0056fe19 | CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0056fe1e
    FLD float ptr [ESP + 0x18]          ; 0056fe21
    FSUB float ptr [ESP + 0x48]         ; 0056fe25
    FMUL ST0                            ; 0056fe29
    FLD float ptr [ESP + 0x1c]          ; 0056fe2b
    FSUB float ptr [ESP + 0x4c]         ; 0056fe2f
    FMUL ST0                            ; 0056fe33
    MOV EAX,[0x03342b4c]                ; 0056fe35 | undefined4 DAT_03342b4c
    FLD float ptr [ESP + 0x20]          ; 0056fe3a
    INC EAX                             ; 0056fe3e
    FXCH                                ; 0056fe3f
    FADDP ST2,ST0                       ; 0056fe41
    FSUB float ptr [ESP + 0x50]         ; 0056fe43
    FMUL ST0                            ; 0056fe47
    MOV dword ptr [EAX*0x8 + 0x3342b48],EBX ; 0056fe49 | undefined4 DAT_03342b50
    FADDP                               ; 0056fe50
    MOV [0x03342b4c],EAX                ; 0056fe52 | undefined4 DAT_03342b4c
    FSTP float ptr [EAX*0x8 + 0x3342b4c] ; 0056fe57 | undefined4 DAT_03342b54
    JMP 0x0056fc73                      ; 0056fe5e | LAB_0056fc73
        ;   XREF to: 0056fc73 (UNCONDITIONAL_JUMP)
    FLD float ptr [ESI + 0x4]           ; 0056fe63
        ;   Label: LAB_0056fe63
    FCOMP float ptr [EDI + 0x4]         ; 0056fe66
    FNSTSW AX                           ; 0056fe69
    SAHF                                ; 0056fe6b
    JNZ 0x0056fdb3                      ; 0056fe6c | LAB_0056fdb3
        ;   XREF to: 0056fdb3 (CONDITIONAL_JUMP)
    FLD float ptr [ESI + 0x8]           ; 0056fe72
    FCOMP float ptr [EDI + 0x8]         ; 0056fe75
    FNSTSW AX                           ; 0056fe78
    SAHF                                ; 0056fe7a
    JNZ 0x0056fdb3                      ; 0056fe7b | LAB_0056fdb3
        ;   XREF to: 0056fdb3 (CONDITIONAL_JUMP)
    FLD float ptr [EDX]                 ; 0056fe81
    FCOMP float ptr [ECX]               ; 0056fe83
    FNSTSW AX                           ; 0056fe85
    SAHF                                ; 0056fe87
    JNZ 0x0056fdb3                      ; 0056fe88 | LAB_0056fdb3
        ;   XREF to: 0056fdb3 (CONDITIONAL_JUMP)
    FLD float ptr [EDX + 0x4]           ; 0056fe8e
    FCOMP float ptr [ECX + 0x4]         ; 0056fe91
    FNSTSW AX                           ; 0056fe94
    SAHF                                ; 0056fe96
    JNZ 0x0056fdb3                      ; 0056fe97 | LAB_0056fdb3
        ;   XREF to: 0056fdb3 (CONDITIONAL_JUMP)
    FLD float ptr [EDX + 0x8]           ; 0056fe9d
    FCOMP float ptr [ECX + 0x8]         ; 0056fea0
    FNSTSW AX                           ; 0056fea3
    SAHF                                ; 0056fea5
    JNZ 0x0056fdb3                      ; 0056fea6 | LAB_0056fdb3
        ;   XREF to: 0056fdb3 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x144],0x0     ; 0056feac
    JZ 0x0056fc73                       ; 0056feb3 | LAB_0056fc73
        ;   XREF to: 0056fc73 (CONDITIONAL_JUMP)
    JMP 0x0056fdbd                      ; 0056feb9 | LAB_0056fdbd
        ;   XREF to: 0056fdbd (UNCONDITIONAL_JUMP)
    FLD float ptr [ESI]                 ; 0056febe
        ;   Label: LAB_0056febe
    FCOMP float ptr [EDI]               ; 0056fec0
    FNSTSW AX                           ; 0056fec2
    SAHF                                ; 0056fec4
    JZ 0x0056fee9                       ; 0056fec5 | LAB_0056fee9
        ;   XREF to: 0056fee9 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x90]      ; 0056fec7
        ;   Label: LAB_0056fec7
    OR dword ptr [EBX + 0x140],EAX      ; 0056fece
    MOV ESI,dword ptr [ESP + 0x60]      ; 0056fed4
        ;   Label: LAB_0056fed4
    TEST dword ptr [EBX + 0x140],ESI    ; 0056fed8
    JZ 0x0056fc73                       ; 0056fede | LAB_0056fc73
        ;   XREF to: 0056fc73 (CONDITIONAL_JUMP)
    JMP 0x0056fdbd                      ; 0056fee4 | LAB_0056fdbd
        ;   XREF to: 0056fdbd (UNCONDITIONAL_JUMP)
    FLD float ptr [ESI + 0x4]           ; 0056fee9
        ;   Label: LAB_0056fee9
    FCOMP float ptr [EDI + 0x4]         ; 0056feec
    FNSTSW AX                           ; 0056feef
    SAHF                                ; 0056fef1
    JNZ 0x0056fec7                      ; 0056fef2 | LAB_0056fec7
        ;   XREF to: 0056fec7 (CONDITIONAL_JUMP)
    FLD float ptr [ESI + 0x8]           ; 0056fef4
    FCOMP float ptr [EDI + 0x8]         ; 0056fef7
    FNSTSW AX                           ; 0056fefa
    SAHF                                ; 0056fefc
    JNZ 0x0056fec7                      ; 0056fefd | LAB_0056fec7
        ;   XREF to: 0056fec7 (CONDITIONAL_JUMP)
    FLD float ptr [EDX]                 ; 0056feff
    FCOMP float ptr [ECX]               ; 0056ff01
    FNSTSW AX                           ; 0056ff03
    SAHF                                ; 0056ff05
    JNZ 0x0056fec7                      ; 0056ff06 | LAB_0056fec7
        ;   XREF to: 0056fec7 (CONDITIONAL_JUMP)
    FLD float ptr [EDX + 0x4]           ; 0056ff08
    FCOMP float ptr [ECX + 0x4]         ; 0056ff0b
    FNSTSW AX                           ; 0056ff0e
    SAHF                                ; 0056ff10
    JNZ 0x0056fec7                      ; 0056ff11 | LAB_0056fec7
        ;   XREF to: 0056fec7 (CONDITIONAL_JUMP)
    FLD float ptr [EDX + 0x8]           ; 0056ff13
    FCOMP float ptr [ECX + 0x8]         ; 0056ff16
    FNSTSW AX                           ; 0056ff19
    SAHF                                ; 0056ff1b
    JNZ 0x0056fec7                      ; 0056ff1c | LAB_0056fec7
        ;   XREF to: 0056fec7 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x60]      ; 0056ff1e
    TEST dword ptr [EBX + 0x140],ECX    ; 0056ff22
    JZ 0x0056fc73                       ; 0056ff28 | LAB_0056fc73
        ;   XREF to: 0056fc73 (CONDITIONAL_JUMP)
    JMP 0x0056fed4                      ; 0056ff2e | LAB_0056fed4
        ;   XREF to: 0056fed4 (UNCONDITIONAL_JUMP)
    MOV EDI,dword ptr [0x03342b4c]      ; 0056ff30 | undefined4 DAT_03342b4c
        ;   Label: LAB_0056ff30
    XOR EBX,EBX                         ; 0056ff36
    TEST EDI,EDI                        ; 0056ff38
    JLE 0x0056ff70                      ; 0056ff3a | LAB_0056ff70
        ;   XREF to: 0056ff70 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x8c]      ; 0056ff3c
    XOR EAX,EAX                         ; 0056ff43
    ADD EDX,0x4                         ; 0056ff45
        ;   Label: LAB_0056ff45
    MOV ECX,dword ptr [EAX + 0x3342b50] ; 0056ff48 | undefined4 DAT_03342b50 | DAT_03342b58
    INC EBX                             ; 0056ff4e
    MOV dword ptr [EDX + 0x15f6e4],ECX  ; 0056ff4f
    MOV ECX,dword ptr [0x03342b4c]      ; 0056ff55 | undefined4 DAT_03342b4c
    ADD EAX,0x8                         ; 0056ff5b
    CMP EBX,ECX                         ; 0056ff5e
    JL 0x0056ff45                       ; 0056ff60 | LAB_0056ff45
        ;   XREF to: 0056ff45 (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 0056ff62
    LEA EDX,[EDX]                       ; 0056ff68
    MOV EAX,EAX                         ; 0056ff6e
    MOV EDX,dword ptr [ESP + 0x8c]      ; 0056ff70
        ;   Label: LAB_0056ff70
    MOV EAX,[0x03342b4c]                ; 0056ff77 | undefined4 DAT_03342b4c
    JMP 0x0056fd0d                      ; 0056ff7c | LAB_0056fd0d
        ;   XREF to: 0056fd0d (UNCONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0x5c]      ; 0056ff81
        ;   Label: LAB_0056ff81
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 0056ff85 | int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
    SUB EAX,EDI                         ; 0056ff8a
    MOV dword ptr [ESP + 0x74],EAX      ; 0056ff8c
    FILD dword ptr [ESP + 0x74]         ; 0056ff90
    FMUL double ptr [0x00646013]        ; 0056ff94 | double DOUBLE_00646013
    MOV EAX,[0x0067b654]                ; 0056ff9a | CGame * g_CGamePtr
    FMUL double ptr [0x0064601b]        ; 0056ff9f | double DOUBLE_0064601b
    FLD float ptr [EAX + 0x264]         ; 0056ffa5 | g_CGameInstance.delta_time_float
    FXCH                                ; 0056ffab
    FMUL double ptr [0x00646023]        ; 0056ffad | double DOUBLE_00646023
    FDIVRP                              ; 0056ffb3
    SUB ESP,0x8                         ; 0056ffb5
    MOV EBP,dword ptr [0x03342b4c]      ; 0056ffb8 | undefined4 DAT_03342b4c
    FSTP double ptr [ESP]               ; 0056ffbe
    PUSH EBP                            ; 0056ffc1
    PUSH 0x645feb                       ; 0056ffc2 | = "buildDispList %d items : %3.2f ms\n" | s_buildDispList_d_items_3__00645feb = buildDispList %d items : %3.2f ms

    MOV EAX,[0x0066e8e0]                ; 0056ffc7 | CConsole g_ConsolePtr | CConsole * g_CConsolePtr
    PUSH EAX                            ; 0056ffcc | CConsole g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 0056ffcd | void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0056ffd2
    ADD ESP,0x78                        ; 0056ffd5
    POP EBP                             ; 0056ffd8
    POP EDI                             ; 0056ffd9
    POP ESI                             ; 0056ffda
    POP EBX                             ; 0056ffdb
    RET                                 ; 0056ffdc


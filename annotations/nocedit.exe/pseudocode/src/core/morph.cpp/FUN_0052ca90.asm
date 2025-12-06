; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_morph.cpp_FUN_0052ca90()
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_morph.cpp_FUN_0052bcb0 at 0052c4c0
;
; Referenced Globals:
;   double DOUBLE_0063a537 = 2
;   double DOUBLE_0063a53f = 0.333333333333333
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   CGame* g_CGamePtr = 02d81a9c
;   CKeys* g_CKeysPtr = 02dcd7d4
;   CSpotView* g_CSpotViewPtr = 03f6b9e0
;   CDemonRenderer g_CDemonRendererInstance
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.delta_time_float
;   void* g_CKeysPtr
;   CSpotView g_CSpotViewInstance
;   CVector3f g_ZeroVector
;
; Called Functions:
;   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
;   core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
;   core_morph.cpp_CMorphModel_FUN_0052bae0
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_fillRectColor_FUN_00403170
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   shape_spotview.cpp_CSpotView_FUN_005b9620
;   shape_spotview.cpp_CSpotView_FUN_005b9670
;   shape_spotview.cpp_CSpotView_FUN_005b9a20
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearZBuffer_FUN_005b3ed4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052ca90
        ;   Label: core_morph.cpp_FUN_0052ca90
    PUSH ESI                            ; 0052ca91
    PUSH EDI                            ; 0052ca92
    PUSH EBP                            ; 0052ca93
    MOV EBP,ESP                         ; 0052ca94
    SUB ESP,0x8                         ; 0052ca96
    AND ESP,0xfffffff8                  ; 0052ca99
    MOV ESI,dword ptr [EBP + 0x14]      ; 0052ca9c
    PUSH 0x1f                           ; 0052ca9f
    MOV ECX,dword ptr [0x0068416c]      ; 0052caa1 | CSpotView g_CSpotViewInstance | CSpotView * g_CSpotViewPtr
    XOR EDX,EDX                         ; 0052caa7
    PUSH ECX                            ; 0052caa9 | CSpotView g_CSpotViewInstance
    MOV dword ptr [ESP + 0xc],EDX       ; 0052caaa
    CALL shape_spotview.cpp_CSpotView_FUN_005b9620 ; 0052caae | void shape_spotview.cpp_CSpotView_FUN_005b9620(CSpotView * this_ptr)
        ;   XREF to: 005b9620 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0052cab3
    MOV EBX,dword ptr [0x0067b654]      ; 0052cab6 | CGame g_CGameInstance | CGame * g_CGamePtr
    PUSH EBX                            ; 0052cabc | CGame g_CGameInstance
    CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80 ; 0052cabd | void core_game.cpp_CGame_saveClockTime_FUN_004d7d80(CGame * n1, CGame * n2)
        ;   XREF to: 004d7d80 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0052cac2
    FLD float ptr [ESP + 0x4]           ; 0052cac5
        ;   Label: LAB_0052cac5
    FLDZ                                ; 0052cac9
    FCOMPP                              ; 0052cacb
    FNSTSW AX                           ; 0052cacd
    SAHF                                ; 0052cacf
    JA 0x0052cbf2                       ; 0052cad0 | LAB_0052cbf2
        ;   XREF to: 0052cbf2 (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x4]           ; 0052cad6
        ;   Label: LAB_0052cad6
    FLD1                                ; 0052cada
    FCOMPP                              ; 0052cadc
    FNSTSW AX                           ; 0052cade
    SAHF                                ; 0052cae0
    JNC 0x0052caeb                      ; 0052cae1 | LAB_0052caeb
        ;   XREF to: 0052caeb (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x4],0x3f800000 ; 0052cae3
    MOV EAX,[0x00679398]                ; 0052caeb | int g_WindowHeight
        ;   Label: LAB_0052caeb
    PUSH 0x4                            ; 0052caf0
    DEC EAX                             ; 0052caf2
    PUSH EAX                            ; 0052caf3
    MOV EAX,[0x00679394]                ; 0052caf4 | int g_WindowWidth
    DEC EAX                             ; 0052caf9
    PUSH EAX                            ; 0052cafa
    PUSH 0x0                            ; 0052cafb
    PUSH 0x0                            ; 0052cafd
    CALL engine_2d.c_fillRectColor_FUN_00403170 ; 0052caff | void engine_2d.c_fillRectColor_FUN_00403170(int x1, int y1, int x2, int y2, ...)
        ;   XREF to: 00403170 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0052cb04
    CALL wincore_windll.cpp_clearZBuffer_FUN_005b3ed4 ; 0052cb07 | void wincore_windll.cpp_clearZBuffer_FUN_005b3ed4()
        ;   XREF to: 005b3ed4 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x0068416c]      ; 0052cb0c | CSpotView g_CSpotViewInstance | CSpotView * g_CSpotViewPtr
    PUSH EDX                            ; 0052cb12 | CSpotView g_CSpotViewInstance
    CALL shape_spotview.cpp_CSpotView_FUN_005b9a20 ; 0052cb13 | void shape_spotview.cpp_CSpotView_FUN_005b9a20(CSpotView * this_ptr)
        ;   XREF to: 005b9a20 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0052cb18
    PUSH 0x3f87558                      ; 0052cb1b | CVector3f g_ZeroVector
    MOV ECX,dword ptr [0x006703ec]      ; 0052cb20 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH ECX                            ; 0052cb26 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 0052cb27 | void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0052cb2c
    PUSH dword ptr [ESP + 0x4]          ; 0052cb2f
    PUSH ESI                            ; 0052cb33
    CALL core_morph.cpp_CMorphModel_FUN_0052bae0 ; 0052cb34 | void core_morph.cpp_CMorphModel_FUN_0052bae0(CMorphModel * this_ptr)
        ;   XREF to: 0052bae0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0052cb39
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0052cb3c | void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)
    MOV EBX,dword ptr [0x0067b654]      ; 0052cb41 | CGame g_CGameInstance | CGame * g_CGamePtr
    PUSH EBX                            ; 0052cb47 | CGame g_CGameInstance
    CALL core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90 ; 0052cb48 | void core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90(CGame * this_ptr)
        ;   XREF to: 004d7d90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0052cb4d
    PUSH 0x1f                           ; 0052cb50
    MOV EDI,dword ptr [0x0068416c]      ; 0052cb52 | CSpotView * g_CSpotViewPtr
    PUSH EDI                            ; 0052cb58 | CSpotView g_CSpotViewInstance
    CALL shape_spotview.cpp_CSpotView_FUN_005b9670 ; 0052cb59 | void shape_spotview.cpp_CSpotView_FUN_005b9670(CSpotView * this_ptr)
        ;   XREF to: 005b9670 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0052cb5e
    MOV EAX,[0x0067cf44]                ; 0052cb61 | CKeys * g_CKeysPtr
    PUSH 0x1                            ; 0052cb66
    MOV EDX,dword ptr [EAX]             ; 0052cb68 | void * g_CKeysPtr
    PUSH EAX                            ; 0052cb6a | void * g_CKeysPtr
    CALL dword ptr [EDX + 0x4]          ; 0052cb6b
    ADD ESP,0x8                         ; 0052cb6e
    TEST EAX,EAX                        ; 0052cb71
    JNZ 0x0052cbfd                      ; 0052cb73 | LAB_0052cbfd
        ;   XREF to: 0052cbfd (CONDITIONAL_JUMP)
    MOV EAX,[0x0067b654]                ; 0052cb79 | CGame * g_CGamePtr
    PUSH 0x38                           ; 0052cb7e
    FLD float ptr [EAX + 0x264]         ; 0052cb80 | g_CGameInstance.delta_time_float
    MOV EAX,[0x0067cf44]                ; 0052cb86 | CKeys * g_CKeysPtr
    FMUL double ptr [0x0063a537]        ; 0052cb8b | double DOUBLE_0063a537
    PUSH EAX                            ; 0052cb91 | void * g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 0052cb92 | void * g_CKeysPtr
    FSTP float ptr [ESP + 0x8]          ; 0052cb94
    CALL dword ptr [EDX]                ; 0052cb98
    ADD ESP,0x8                         ; 0052cb9a
    TEST EAX,EAX                        ; 0052cb9d
    JZ 0x0052cbad                       ; 0052cb9f | LAB_0052cbad
        ;   XREF to: 0052cbad (CONDITIONAL_JUMP)
    FLD float ptr [ESP]                 ; 0052cba1
    FMUL double ptr [0x0063a53f]        ; 0052cba4 | double DOUBLE_0063a53f
    FSTP float ptr [ESP]                ; 0052cbaa
    PUSH 0x33                           ; 0052cbad
        ;   Label: LAB_0052cbad
    MOV EAX,[0x0067cf44]                ; 0052cbaf | CKeys * g_CKeysPtr
    PUSH EAX                            ; 0052cbb4 | void * g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 0052cbb5 | void * g_CKeysPtr
    CALL dword ptr [EDX]                ; 0052cbb7
    ADD ESP,0x8                         ; 0052cbb9
    TEST EAX,EAX                        ; 0052cbbc
    JZ 0x0052cbcb                       ; 0052cbbe | LAB_0052cbcb
        ;   XREF to: 0052cbcb (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x4]           ; 0052cbc0
    FSUB float ptr [ESP]                ; 0052cbc4
    FSTP float ptr [ESP + 0x4]          ; 0052cbc7
    PUSH 0x34                           ; 0052cbcb
        ;   Label: LAB_0052cbcb
    MOV EAX,[0x0067cf44]                ; 0052cbcd | CKeys * g_CKeysPtr
    PUSH EAX                            ; 0052cbd2 | void * g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 0052cbd3 | void * g_CKeysPtr
    CALL dword ptr [EDX]                ; 0052cbd5
    ADD ESP,0x8                         ; 0052cbd7
    TEST EAX,EAX                        ; 0052cbda
    JZ 0x0052cac5                       ; 0052cbdc | LAB_0052cac5
        ;   XREF to: 0052cac5 (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x4]           ; 0052cbe2
    FADD float ptr [ESP]                ; 0052cbe6
    FSTP float ptr [ESP + 0x4]          ; 0052cbe9
    JMP 0x0052cac5                      ; 0052cbed | LAB_0052cac5
        ;   XREF to: 0052cac5 (UNCONDITIONAL_JUMP)
    XOR EDI,EDI                         ; 0052cbf2
        ;   Label: LAB_0052cbf2
    MOV dword ptr [ESP + 0x4],EDI       ; 0052cbf4
    JMP 0x0052cad6                      ; 0052cbf8 | LAB_0052cad6
        ;   XREF to: 0052cad6 (UNCONDITIONAL_JUMP)
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0052cbfd | void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   Label: LAB_0052cbfd
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)
    MOV ESP,EBP                         ; 0052cc02
    POP EBP                             ; 0052cc04
    POP EDI                             ; 0052cc05
    POP ESI                             ; 0052cc06
    POP EBX                             ; 0052cc07
    RET                                 ; 0052cc08


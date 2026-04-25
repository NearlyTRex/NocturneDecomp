; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorph_previewMorph_FUN_0052ca90(CMorph *this_ptr,CDeformableModelInstance *model_ptr)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
; CDeformableModelInstance * Stack[0x8]:4   model_ptr
; Local Variables:
; float            Stack[-0x18]:4  fStack_18
; float            Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_morph.cpp_CMorph_editMorph_FUN_0052bcb0 at 0052c4c0
;
; Referenced Globals:
;   double DOUBLE_0063a537 = 2
;   double DOUBLE_0063a53f = 0.333333333333333
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   CGame* g_CGamePtr = 02d81a9c
;   CKeys* g_CKeysPtr = 02dcd7d4
;   CSpotView* g_CSpotViewPtr = 03f6b9e0
;   CDemonRenderer g_CDemonRendererInstance
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.delta_time_float
;   CKeys g_CKeysInstance
;   CSpotView g_CSpotViewInstance
;   UVector3 g_ZeroVector
;
; Called Functions:
;   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
;   core_game.cpp_CGame_updateDT_FUN_004d7d90
;   core_morph.cpp_CMorph_render_FUN_0052bae0
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_fillRectColor_FUN_00403170
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   shape_spotview.cpp_CSpotView_applyCamera_FUN_005b9a20
;   shape_spotview.cpp_CSpotView_handleInput_FUN_005b9670
;   shape_spotview.cpp_CSpotView_reset_FUN_005b9620
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearZBufferNative_FUN_005b3ed4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052ca90
        ;   Label: core_morph.cpp_CMorph_previewMorph_FUN_0052ca90
    PUSH ESI                            ; 0052ca91
    PUSH EDI                            ; 0052ca92
    PUSH EBP                            ; 0052ca93
    MOV EBP,ESP                         ; 0052ca94
    SUB ESP,0x8                         ; 0052ca96
    AND ESP,0xfffffff8                  ; 0052ca99
    MOV ESI,dword ptr [EBP + 0x14]      ; 0052ca9c
    PUSH 0x1f                           ; 0052ca9f
    MOV ECX,dword ptr [0x0068416c]      ; 0052caa1 | g_CSpotViewInstance | g_CSpotViewPtr
    XOR EDX,EDX                         ; 0052caa7
    PUSH ECX                            ; 0052caa9 | g_CSpotViewInstance
    MOV dword ptr [ESP + 0xc],EDX       ; 0052caaa
    CALL shape_spotview.cpp_CSpotView_reset_FUN_005b9620 ; 0052caae
        ;   XREF to: 005b9620 (UNCONDITIONAL_CALL)  ; void shape_spotview.cpp_CSpotView_reset_FUN_005b9620(CSpotView * this_ptr, uint control_flags)
    ADD ESP,0x8                         ; 0052cab3
    MOV EBX,dword ptr [0x0067b654]      ; 0052cab6 | g_CGameInstance | g_CGamePtr
    PUSH EBX                            ; 0052cabc | g_CGameInstance
    CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80 ; 0052cabd
        ;   XREF to: 004d7d80 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_saveClockTime_FUN_004d7d80(CGame * this_ptr)
    ADD ESP,0x4                         ; 0052cac2
    FLD float ptr [ESP + 0x4]           ; 0052cac5
        ;   Label: LAB_0052cac5
    FLDZ                                ; 0052cac9
    FCOMPP                              ; 0052cacb
    FNSTSW AX                           ; 0052cacd
    SAHF                                ; 0052cacf
    JA 0x0052cbf2                       ; 0052cad0
        ;   XREF to: 0052cbf2 (CONDITIONAL_JUMP)  ; LAB_0052cbf2
    FLD float ptr [ESP + 0x4]           ; 0052cad6
        ;   Label: LAB_0052cad6
    FLD1                                ; 0052cada
    FCOMPP                              ; 0052cadc
    FNSTSW AX                           ; 0052cade
    SAHF                                ; 0052cae0
    JNC 0x0052caeb                      ; 0052cae1
        ;   XREF to: 0052caeb (CONDITIONAL_JUMP)  ; LAB_0052caeb
    MOV dword ptr [ESP + 0x4],0x3f800000 ; 0052cae3
    MOV EAX,[0x00679398]                ; 0052caeb | g_WindowHeight
        ;   Label: LAB_0052caeb
    PUSH 0x4                            ; 0052caf0
    DEC EAX                             ; 0052caf2
    PUSH EAX                            ; 0052caf3
    MOV EAX,[0x00679394]                ; 0052caf4 | g_WindowWidth
    DEC EAX                             ; 0052caf9
    PUSH EAX                            ; 0052cafa
    PUSH 0x0                            ; 0052cafb
    PUSH 0x0                            ; 0052cafd
    CALL engine_2d.c_fillRectColor_FUN_00403170 ; 0052caff
        ;   XREF to: 00403170 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_00403170(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 0052cb04
    CALL wincore_windll.cpp_clearZBufferNative_FUN_005b3ed4 ; 0052cb07
        ;   XREF to: 005b3ed4 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearZBufferNative_FUN_005b3ed4()
    MOV EDX,dword ptr [0x0068416c]      ; 0052cb0c | g_CSpotViewInstance | g_CSpotViewPtr
    PUSH EDX                            ; 0052cb12 | g_CSpotViewInstance
    CALL shape_spotview.cpp_CSpotView_applyCamera_FUN_005b9a20 ; 0052cb13
        ;   XREF to: 005b9a20 (UNCONDITIONAL_CALL)  ; void shape_spotview.cpp_CSpotView_applyCamera_FUN_005b9a20(CSpotView * this_ptr)
    ADD ESP,0x4                         ; 0052cb18
    PUSH 0x3f87558                      ; 0052cb1b | g_ZeroVector
    MOV ECX,dword ptr [0x006703ec]      ; 0052cb20 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH ECX                            ; 0052cb26 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 0052cb27
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0052cb2c
    PUSH dword ptr [ESP + 0x4]          ; 0052cb2f
    PUSH ESI                            ; 0052cb33
    CALL core_morph.cpp_CMorph_render_FUN_0052bae0 ; 0052cb34
        ;   XREF to: 0052bae0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_render_FUN_0052bae0(CMorph * this_ptr, float morph_t)
    ADD ESP,0x8                         ; 0052cb39
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0052cb3c
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    MOV EBX,dword ptr [0x0067b654]      ; 0052cb41 | g_CGameInstance | g_CGamePtr
    PUSH EBX                            ; 0052cb47 | g_CGameInstance
    CALL core_game.cpp_CGame_updateDT_FUN_004d7d90 ; 0052cb48
        ;   XREF to: 004d7d90 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_updateDT_FUN_004d7d90(CGame * this_ptr)
    ADD ESP,0x4                         ; 0052cb4d
    PUSH 0x1f                           ; 0052cb50
    MOV EDI,dword ptr [0x0068416c]      ; 0052cb52 | g_CSpotViewPtr
    PUSH EDI                            ; 0052cb58 | g_CSpotViewInstance
    CALL shape_spotview.cpp_CSpotView_handleInput_FUN_005b9670 ; 0052cb59
        ;   XREF to: 005b9670 (UNCONDITIONAL_CALL)  ; void shape_spotview.cpp_CSpotView_handleInput_FUN_005b9670(CSpotView * this_ptr, uint control_flags)
    ADD ESP,0x8                         ; 0052cb5e
    MOV EAX,[0x0067cf44]                ; 0052cb61 | g_CKeysPtr
    PUSH 0x1                            ; 0052cb66
    MOV EDX,dword ptr [EAX]             ; 0052cb68 | g_CKeysInstance
    PUSH EAX                            ; 0052cb6a | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0052cb6b
    ADD ESP,0x8                         ; 0052cb6e
    TEST EAX,EAX                        ; 0052cb71
    JNZ 0x0052cbfd                      ; 0052cb73
        ;   XREF to: 0052cbfd (CONDITIONAL_JUMP)  ; LAB_0052cbfd
    MOV EAX,[0x0067b654]                ; 0052cb79 | g_CGamePtr
    PUSH 0x38                           ; 0052cb7e
    FLD float ptr [EAX + 0x264]         ; 0052cb80 | g_CGameInstance.delta_time_float
    MOV EAX,[0x0067cf44]                ; 0052cb86 | g_CKeysPtr
    FMUL double ptr [0x0063a537]        ; 0052cb8b | DOUBLE_0063a537
    PUSH EAX                            ; 0052cb91 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0052cb92 | g_CKeysInstance
    FSTP float ptr [ESP + 0x8]          ; 0052cb94
    CALL dword ptr [EDX]                ; 0052cb98
    ADD ESP,0x8                         ; 0052cb9a
    TEST EAX,EAX                        ; 0052cb9d
    JZ 0x0052cbad                       ; 0052cb9f
        ;   XREF to: 0052cbad (CONDITIONAL_JUMP)  ; LAB_0052cbad
    FLD float ptr [ESP]                 ; 0052cba1
    FMUL double ptr [0x0063a53f]        ; 0052cba4 | DOUBLE_0063a53f
    FSTP float ptr [ESP]                ; 0052cbaa
    PUSH 0x33                           ; 0052cbad
        ;   Label: LAB_0052cbad
    MOV EAX,[0x0067cf44]                ; 0052cbaf | g_CKeysPtr
    PUSH EAX                            ; 0052cbb4 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0052cbb5 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 0052cbb7
    ADD ESP,0x8                         ; 0052cbb9
    TEST EAX,EAX                        ; 0052cbbc
    JZ 0x0052cbcb                       ; 0052cbbe
        ;   XREF to: 0052cbcb (CONDITIONAL_JUMP)  ; LAB_0052cbcb
    FLD float ptr [ESP + 0x4]           ; 0052cbc0
    FSUB float ptr [ESP]                ; 0052cbc4
    FSTP float ptr [ESP + 0x4]          ; 0052cbc7
    PUSH 0x34                           ; 0052cbcb
        ;   Label: LAB_0052cbcb
    MOV EAX,[0x0067cf44]                ; 0052cbcd | g_CKeysPtr
    PUSH EAX                            ; 0052cbd2 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0052cbd3 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 0052cbd5
    ADD ESP,0x8                         ; 0052cbd7
    TEST EAX,EAX                        ; 0052cbda
    JZ 0x0052cac5                       ; 0052cbdc
        ;   XREF to: 0052cac5 (CONDITIONAL_JUMP)  ; LAB_0052cac5
    FLD float ptr [ESP + 0x4]           ; 0052cbe2
    FADD float ptr [ESP]                ; 0052cbe6
    FSTP float ptr [ESP + 0x4]          ; 0052cbe9
    JMP 0x0052cac5                      ; 0052cbed
        ;   XREF to: 0052cac5 (UNCONDITIONAL_JUMP)  ; LAB_0052cac5
    XOR EDI,EDI                         ; 0052cbf2
        ;   Label: LAB_0052cbf2
    MOV dword ptr [ESP + 0x4],EDI       ; 0052cbf4
    JMP 0x0052cad6                      ; 0052cbf8
        ;   XREF to: 0052cad6 (UNCONDITIONAL_JUMP)  ; LAB_0052cad6
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0052cbfd
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   Label: LAB_0052cbfd
    MOV ESP,EBP                         ; 0052cc02
    POP EBP                             ; 0052cc04
    POP EDI                             ; 0052cc05
    POP ESI                             ; 0052cc06
    POP EBX                             ; 0052cc07
    RET                                 ; 0052cc08


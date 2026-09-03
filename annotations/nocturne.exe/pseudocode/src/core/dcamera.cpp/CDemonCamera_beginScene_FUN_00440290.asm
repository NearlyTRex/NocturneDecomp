; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_beginScene_FUN_00440290(CDemonCamera *this_ptr,int skip_clear_buffers)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   skip_clear_buffers
;
; XREF[4]:
;   core_set.cpp_CDemonSet_FUN_0050aba0 at 0050acb9
;   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_00507f80 at 0050803f
;   core_set.cpp_CDemonSet_renderScene_FUN_00509a80 at 00509b0a
;   core_set.cpp_CDemonSet_setCameraView_FUN_005088f0 at 00508b07
;
; Referenced Globals:
;   void* PTR_caseD_3_0044028c = 00440316
;   TerminatedCString s_Attack_0057b6a3
;   TerminatedCString s_Sustain_0057b6ad
;   TerminatedCString s_Decay_0057b6b8
;   TerminatedCString s_core_dcamera_cpp_0057b6c1
;   TerminatedCString s_CDemonCamera_beginScene_0057b6d5
;   CConsole* g_CConsole_PTR_005ad350 = 0077ad0c
;   undefined4 DAT_005ad444
;   undefined4 DAT_005ad448
;   undefined4 DAT_005ad44c
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   CConsole g_CConsole_0077ad0c
;   undefined4 DAT_012ceb58
;   undefined4 DAT_012ceb5c
;   undefined4 DAT_012ceb60
;   ... and 13 more
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_00440240
;   core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_00440fe0
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   engine_console.cpp_CConsole_printf_FUN_0043ac60
;   engine_drender.cpp_CDemonRenderer_pushViewport_FUN_00460e40
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700
;   engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_00460c00
;   engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_004607b0
;   engine_special.cpp_beginScene_FUN_00532340
;   engine_special.cpp_clear_FUN_005329a0
;   engine_special.cpp_clearScreen_FUN_0052ee70
;   engine_special.cpp_clearZBuffer_FUN_00532b50
;   engine_special.cpp_clearZBufferNative_FUN_0052eed4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00440290
        ;   Label: core_dcamera.cpp_CDemonCamera_beginScene_FUN_00440290
    PUSH ESI                            ; 00440291
    PUSH EDI                            ; 00440292
    PUSH EBP                            ; 00440293
    MOV ESI,dword ptr [ESP + 0x14]      ; 00440294
    MOV EDI,dword ptr [ESP + 0x18]      ; 00440298
    MOV EAX,[0x005ad44c]                ; 0044029c | DAT_005ad44c
    XOR EBX,EBX                         ; 004402a1
    CMP EAX,0x3                         ; 004402a3
    JA 0x00440316                       ; 004402a6
        ;   XREF to: 00440316 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x440280]  ; 004402a8 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EBP,dword ptr [0x012ceb60]      ; 004402af | DAT_012ceb60
        ;   Label: caseD_0
    ADD EBP,dword ptr [0x01bd1d80]      ; 004402b5 | DAT_01bd1d80
    MOV EDX,dword ptr [0x012ceb5c]      ; 004402bb | DAT_012ceb5c
    MOV dword ptr [0x012ceb60],EBP      ; 004402c1 | DAT_012ceb60
    CMP EBP,EDX                         ; 004402c7
    JLE 0x004402e6                      ; 004402c9
        ;   XREF to: 004402e6 (CONDITIONAL_JUMP)  ; LAB_004402e6
    MOV ECX,0x1                         ; 004402cb
    MOV EAX,[0x005ad448]                ; 004402d0 | DAT_005ad448
    MOV dword ptr [0x012ceb60],EDX      ; 004402d5 | DAT_012ceb60
    MOV dword ptr [0x005ad44c],ECX      ; 004402db | DAT_005ad44c
    MOV [0x012ceb58],EAX                ; 004402e1 | DAT_012ceb58
    MOV EBP,dword ptr [0x012ceb5c]      ; 004402e6 | DAT_012ceb5c
        ;   Label: LAB_004402e6
    TEST EBP,EBP                        ; 004402ec
    JZ 0x00440303                       ; 004402ee
        ;   XREF to: 00440303 (CONDITIONAL_JUMP)  ; LAB_00440303
    MOV EDX,dword ptr [0x012ceb60]      ; 004402f0 | DAT_012ceb60
    MOV EAX,[0x005ad444]                ; 004402f6 | DAT_005ad444
    MOV EBX,EBP                         ; 004402fb
    IMUL EDX                            ; 004402fd
    IDIV EBX                            ; 004402ff
    MOV EBX,EAX                         ; 00440301
    PUSH 0x57b6a3                       ; 00440303 | = "Attack : "
        ;   Label: LAB_00440303
    MOV EAX,[0x005ad350]                ; 00440308 | g_CConsole_PTR_005ad350
    PUSH EAX                            ; 0044030d | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 0044030e
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
        ;   Label: LAB_0044030e
    ADD ESP,0x8                         ; 00440313
    MOV EDX,dword ptr [0x01bd1d80]      ; 00440316 | DAT_01bd1d80
        ;   Label: caseD_3
    MOV EAX,EBX                         ; 0044031c
    IMUL EDX                            ; 0044031e
    SHRD EAX,EDX,0x10                   ; 00440320
    MOV EDX,dword ptr [0x012ceb6c]      ; 00440324 | DAT_012ceb6c
    ADD EDX,EAX                         ; 0044032a
    MOV dword ptr [0x012ceb6c],EDX      ; 0044032c | DAT_012ceb6c
    CMP EDX,0xffff                      ; 00440332
    JLE 0x00440387                      ; 00440338
        ;   XREF to: 00440387 (CONDITIONAL_JUMP)  ; LAB_00440387
    MOV EAX,[0x01bd1d80]                ; 0044033a | DAT_01bd1d80
    MOV EDX,dword ptr [0x012ceb70]      ; 0044033f | DAT_012ceb70
    AND EAX,0x1                         ; 00440345
    XOR EBX,EBX                         ; 00440348
    MOV [0x012ceb70],EAX                ; 0044034a | DAT_012ceb70
    MOV EAX,[0x01bd1d80]                ; 0044034f | DAT_01bd1d80
    MOV dword ptr [0x012ceb6c],EBX      ; 00440354 | DAT_012ceb6c
    AND EAX,0x2                         ; 0044035a
    MOV EBX,dword ptr [0x012ceb74]      ; 0044035d | DAT_012ceb74
    SAR EAX,0x1                         ; 00440363
    MOV EBP,dword ptr [0x012ceb70]      ; 00440365 | DAT_012ceb70
    MOV [0x012ceb74],EAX                ; 0044036b | DAT_012ceb74
    CMP EDX,EBP                         ; 00440370
    JNZ 0x00440387                      ; 00440372
        ;   XREF to: 00440387 (CONDITIONAL_JUMP)  ; LAB_00440387
    CMP EBX,EAX                         ; 00440374
    JNZ 0x00440387                      ; 00440376
        ;   XREF to: 00440387 (CONDITIONAL_JUMP)  ; LAB_00440387
    TEST EAX,EAX                        ; 00440378
    SETZ AL                             ; 0044037a
    AND EAX,0xff                        ; 0044037d
    MOV [0x012ceb74],EAX                ; 00440382 | DAT_012ceb74
    CMP dword ptr [ESI + 0x140],0x1e0   ; 00440387
        ;   Label: LAB_00440387
    JGE 0x004405a8                      ; 00440391
        ;   XREF to: 004405a8 (CONDITIONAL_JUMP)  ; LAB_004405a8
    XOR EBP,EBP                         ; 00440397
        ;   Label: LAB_00440397
    MOV dword ptr [0x012ceb70],EBP      ; 00440399 | DAT_012ceb70
    MOV dword ptr [0x012ceb74],EBP      ; 0044039f | DAT_012ceb74
    CMP dword ptr [ESI + 0x11e4],0x0    ; 004403a5
        ;   Label: LAB_004403a5
    JZ 0x004405ba                       ; 004403ac
        ;   XREF to: 004405ba (CONDITIONAL_JUMP)  ; LAB_004405ba
    MOV ECX,0x57b6c1                    ; 004403b2 | = "..\\core\\dcamera.cpp"
    MOV EBX,0x2f3                       ; 004403b7
    PUSH 0x57b6d5                       ; 004403bc | = "CDemonCamera::beginScene - Scene alre..."
    MOV dword ptr [0x01cc4800],ECX      ; 004403c1 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EBX      ; 004403c7 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 004403cd
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 004403d2
    PUSH EDI                            ; 004403d5
        ;   Label: LAB_004403d5
    PUSH ESI                            ; 004403d6
    CALL core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_00440240 ; 004403d7
        ;   XREF to: 00440240 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_00440240(CDemonCamera * this_ptr, int skip_clear_buffers)
    MOV EAX,dword ptr [ESI + 0x140]     ; 004403dc
    ADD ESP,0x8                         ; 004403e2
    DEC EAX                             ; 004403e5
    PUSH EAX                            ; 004403e6
    MOV EAX,dword ptr [ESI + 0x13c]     ; 004403e7
    DEC EAX                             ; 004403ed
    PUSH EAX                            ; 004403ee
    MOV EBP,dword ptr [ESI + 0x148]     ; 004403ef
    PUSH EBP                            ; 004403f5
    MOV EAX,dword ptr [ESI + 0x144]     ; 004403f6
    PUSH EAX                            ; 004403fc
    MOV EDX,dword ptr [0x005ae704]      ; 004403fd | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 00440403 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_pushViewport_FUN_00460e40 ; 00440404
        ;   XREF to: 00460e40 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_pushViewport_FUN_00460e40(CDemonRenderer * this_ptr, int x, int y, int width, ...)
    MOV EDX,dword ptr [0x01c00c50]      ; 00440409 | g_Projection.center_x_fixed
    ADD ESP,0x14                        ; 0044040f
    MOV EAX,dword ptr [ESI + 0x144]     ; 00440412
    MOV EBX,dword ptr [ESI + 0x144]     ; 00440418
    MOV ECX,dword ptr [ESI + 0x13c]     ; 0044041e
    MOV EBP,dword ptr [ESI + 0x140]     ; 00440424
    MOV dword ptr [ESI + 0x1d0],0x0     ; 0044042a
    ADD EBX,ECX                         ; 00440434
    MOV dword ptr [ESI + 0x11d4],EAX    ; 00440436
    MOV ECX,dword ptr [0x01c00c54]      ; 0044043c | g_Projection.center_y_fixed
    MOV EAX,dword ptr [ESI + 0x148]     ; 00440442
    DEC EBX                             ; 00440448
    MOV dword ptr [ESI + 0x11d8],EAX    ; 00440449
    MOV EAX,[0x012ceb70]                ; 0044044f | DAT_012ceb70
    MOV dword ptr [ESI + 0x11dc],EBX    ; 00440454
    SHL EAX,0x10                        ; 0044045a
    MOV EBX,dword ptr [ESI + 0x148]     ; 0044045d
    ADD EDX,EAX                         ; 00440463
    MOV EAX,[0x012ceb74]                ; 00440465 | DAT_012ceb74
    ADD EBX,EBP                         ; 0044046a
    SHL EAX,0x10                        ; 0044046c
    DEC EBX                             ; 0044046f
    SUB ECX,EAX                         ; 00440470
    LEA EAX,[ESI + 0x104]               ; 00440472
    MOV dword ptr [ESI + 0x11e0],EBX    ; 00440478
    PUSH EAX                            ; 0044047e
    MOV EBX,dword ptr [0x005ae704]      ; 0044047f | g_CDemonRenderer_PTR_005ae704
    MOV dword ptr [ESI + 0x168],EDI     ; 00440485
    PUSH EBX                            ; 0044048b | DAT_01b4d738
    MOV dword ptr [0x01c00c50],EDX      ; 0044048c | g_Projection.center_x_fixed
    MOV dword ptr [0x01c00c54],ECX      ; 00440492 | g_Projection.center_y_fixed
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700 ; 00440498
        ;   XREF to: 00460700 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700(CDemonRenderer * this_ptr, CVector3f * point_ptr)
    ADD ESP,0x8                         ; 0044049d
    MOV EBP,dword ptr [0x005ae704]      ; 004404a0 | g_CDemonRenderer_PTR_005ae704
    PUSH dword ptr [ESI + 0x138]        ; 004404a6
    PUSH EBP                            ; 004404ac | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_00460c00 ; 004404ad
        ;   XREF to: 00460c00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_00460c00(CDemonRenderer * this_ptr, float field_of_view)
    ADD ESP,0x8                         ; 004404b2
    LEA EAX,[ESI + 0x110]               ; 004404b5
    PUSH EAX                            ; 004404bb
    MOV EAX,[0x005ae704]                ; 004404bc | g_CDemonRenderer_PTR_005ae704
    PUSH EAX                            ; 004404c1 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_004607b0 ; 004404c2
        ;   XREF to: 004607b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_004607b0(CDemonRenderer * this_ptr, CMatrix3x3f * transform_matrix)
    ADD ESP,0x8                         ; 004404c7
    TEST EDI,EDI                        ; 004404ca
    JNZ 0x004404f9                      ; 004404cc
        ;   XREF to: 004404f9 (CONDITIONAL_JUMP)  ; LAB_004404f9
    CMP dword ptr [0x02dc9d60],0x0      ; 004404ce | g_UseDirect3D
    JZ 0x004404dc                       ; 004404d5
        ;   XREF to: 004404dc (CONDITIONAL_JUMP)  ; LAB_004404dc
    CALL engine_special.cpp_beginScene_FUN_00532340 ; 004404d7
        ;   XREF to: 00532340 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_beginScene_FUN_00532340()
    CALL engine_special.cpp_clearScreen_FUN_0052ee70 ; 004404dc
        ;   XREF to: 0052ee70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0052ee70()
        ;   Label: LAB_004404dc
    CALL engine_special.cpp_clearZBufferNative_FUN_0052eed4 ; 004404e1
        ;   XREF to: 0052eed4 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearZBufferNative_FUN_0052eed4()
    CMP dword ptr [0x01c02594],0x0      ; 004404e6 | g_UseExternalRenderer
    JZ 0x004404f9                       ; 004404ed
        ;   XREF to: 004404f9 (CONDITIONAL_JUMP)  ; LAB_004404f9
    CALL engine_special.cpp_clear_FUN_005329a0 ; 004404ef
        ;   XREF to: 005329a0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_clear_FUN_005329a0()
    CALL engine_special.cpp_clearZBuffer_FUN_00532b50 ; 004404f4
        ;   XREF to: 00532b50 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_clearZBuffer_FUN_00532b50()
    PUSH ESI                            ; 004404f9
        ;   Label: LAB_004404f9
    CALL core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_00440fe0 ; 004404fa
        ;   XREF to: 00440fe0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_00440fe0(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 004404ff
    POP EBP                             ; 00440502
    POP EDI                             ; 00440503
    POP ESI                             ; 00440504
    POP EBX                             ; 00440505
    RET                                 ; 00440506
    MOV EBX,dword ptr [0x012ceb58]      ; 00440507 | DAT_012ceb58
        ;   Label: caseD_1
    MOV EAX,[0x01bd1d80]                ; 0044050d | DAT_01bd1d80
    SUB EBX,EAX                         ; 00440512
    MOV dword ptr [0x012ceb58],EBX      ; 00440514 | DAT_012ceb58
    TEST EBX,EBX                        ; 0044051a
    JGE 0x0044053a                      ; 0044051c
        ;   XREF to: 0044053a (CONDITIONAL_JUMP)  ; LAB_0044053a
    XOR EAX,EAX                         ; 0044051e
    MOV EDX,0x2                         ; 00440520
    MOV [0x012ceb58],EAX                ; 00440525 | DAT_012ceb58
    MOV EAX,[0x012ceb64]                ; 0044052a | DAT_012ceb64
    MOV dword ptr [0x005ad44c],EDX      ; 0044052f | DAT_005ad44c
    MOV [0x012ceb68],EAX                ; 00440535 | DAT_012ceb68
    PUSH 0x57b6ad                       ; 0044053a | = "Sustain : "
        ;   Label: LAB_0044053a
    MOV ECX,dword ptr [0x005ad350]      ; 0044053f | g_CConsole_PTR_005ad350
    PUSH ECX                            ; 00440545 | g_CConsole_0077ad0c
    MOV EBX,dword ptr [0x005ad444]      ; 00440546 | DAT_005ad444
    JMP 0x0044030e                      ; 0044054c
        ;   XREF to: 0044030e (UNCONDITIONAL_JUMP)  ; LAB_0044030e
    MOV EDX,dword ptr [0x012ceb68]      ; 00440551 | DAT_012ceb68
        ;   Label: caseD_2
    MOV EAX,[0x01bd1d80]                ; 00440557 | DAT_01bd1d80
    SUB EDX,EAX                         ; 0044055c
    MOV dword ptr [0x012ceb68],EDX      ; 0044055e | DAT_012ceb68
    TEST EDX,EDX                        ; 00440564
    JL 0x00440596                       ; 00440566
        ;   XREF to: 00440596 (CONDITIONAL_JUMP)  ; LAB_00440596
    MOV EDX,dword ptr [0x012ceb64]      ; 00440568 | DAT_012ceb64
        ;   Label: LAB_00440568
    TEST EDX,EDX                        ; 0044056e
    JZ 0x00440585                       ; 00440570
        ;   XREF to: 00440585 (CONDITIONAL_JUMP)  ; LAB_00440585
    MOV EAX,[0x005ad444]                ; 00440572 | DAT_005ad444
    MOV EBX,EDX                         ; 00440577
    MOV EDX,dword ptr [0x012ceb68]      ; 00440579 | DAT_012ceb68
    IMUL EDX                            ; 0044057f
    IDIV EBX                            ; 00440581
    MOV EBX,EAX                         ; 00440583
    PUSH 0x57b6b8                       ; 00440585 | = "Decay : "
        ;   Label: LAB_00440585
    MOV ECX,dword ptr [0x005ad350]      ; 0044058a | g_CConsole_PTR_005ad350
    PUSH ECX                            ; 00440590 | g_CConsole_0077ad0c
    JMP 0x0044030e                      ; 00440591
        ;   XREF to: 0044030e (UNCONDITIONAL_JUMP)  ; LAB_0044030e
    MOV EAX,0x3                         ; 00440596
        ;   Label: LAB_00440596
    MOV dword ptr [0x012ceb68],EBX      ; 0044059b | DAT_012ceb68
    MOV [0x005ad44c],EAX                ; 004405a1 | DAT_005ad44c
    JMP 0x00440568                      ; 004405a6
        ;   XREF to: 00440568 (UNCONDITIONAL_JUMP)  ; LAB_00440568
    CMP dword ptr [0x005ad44c],0x3      ; 004405a8 | DAT_005ad44c
        ;   Label: LAB_004405a8
    JZ 0x00440397                       ; 004405af
        ;   XREF to: 00440397 (CONDITIONAL_JUMP)  ; LAB_00440397
    JMP 0x004403a5                      ; 004405b5
        ;   XREF to: 004403a5 (UNCONDITIONAL_JUMP)  ; LAB_004403a5
    MOV dword ptr [ESI + 0x11e4],0x1    ; 004405ba
        ;   Label: LAB_004405ba
    JMP 0x004403d5                      ; 004405c4
        ;   XREF to: 004403d5 (UNCONDITIONAL_JUMP)  ; LAB_004403d5


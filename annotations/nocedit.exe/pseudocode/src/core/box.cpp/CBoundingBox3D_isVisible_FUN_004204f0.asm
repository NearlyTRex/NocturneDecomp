; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D *this_ptr)
;
; Parameters:
; CBoundingBox3D * Stack[0x4]:4   this_ptr
; Local Variables:
; SProjectedVertex[2] Stack[-0x74]:48  local_74
; CVector3i        Stack[-0x44]:12  local_44
; float            Stack[-0x38]:4  local_38
; float            Stack[-0x34]:4  local_34
; float            Stack[-0x30]:4  local_30
; float            Stack[-0x2c]:4  local_2c
; float            Stack[-0x28]:4  local_28
; float            Stack[-0x24]:4  local_24
; CVector3f        Stack[-0x20]:12  local_20
; float            Stack[-0x14]:4  local_14
; float            Stack[-0x10]:4  local_10
; float            Stack[-0xc]:4  local_c
;
; XREF[79]:
;   core_ammo.cpp_CAmmo_renderOpaque_FUN_00410e80 at 00410ea3
;   core_ammobox.cpp_CAmmoBox_renderOpaque_FUN_00411820 at 00411847
;   core_anvil.cpp_CAnvil_renderOpaque_FUN_00411ec0 at 00411f15
;   core_backgnd.cpp_CBackgroundActor_renderBackground_FUN_00412860 at 00412899
;   core_backgnd.cpp_CBackgroundActor_renderOpaque_FUN_004128d0 at 00412907
;   core_baron.cpp_CBaron_renderTransparent_FUN_00413ae0 at 00413bf3
;   core_barrier.cpp_CBarrier_renderTransparent_FUN_00414240 at 0041428d
;   core_bat.cpp_CBat_renderOpaque_FUN_00414bf0 at 00414c13
;   core_batman.cpp_CBatman_renderOpaque_FUN_004173b0 at 00417433
;   core_battery.cpp_CBattery_renderOpaque_FUN_00417f80 at 00417fc2
;   ... and 69 more
;
; Referenced Globals:
;   float FLOAT_006165e7 = 0.5
;   float g_BoundingBoxWorldToIntegerScale = 256
;   float FLOAT_0065b168 = 0.00390625
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   int g_StoredX
;   int g_StoredY
;   int g_StoredZ
;   CDemonCamera* g_CurrentSceneCamera
;   CDemonRenderer g_CDemonRendererInstance
;   int g_PerspectiveReciprocal
;   CDemonCamera g_CDemonCameraInstance
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_isVisibleWithCamera_FUN_00420680
;   core_box.cpp_CBoundingBox3D_isVisibleWithShadow_FUN_00420320
;   core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_004537d0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004204f0
        ;   Label: core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
    PUSH ESI                            ; 004204f1
    SUB ESP,0x6c                        ; 004204f2
    MOV EBX,dword ptr [ESP + 0x78]      ; 004204f5
    PUSH EBX                            ; 004204f9
    CALL core_box.cpp_CBoundingBox3D_isVisibleWithCamera_FUN_00420680 ; 004204fa
        ;   XREF to: 00420680 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisibleWithCamera_FUN_00420680(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 004204ff
    TEST EAX,EAX                        ; 00420502
    JNZ 0x0042050c                      ; 00420504
        ;   XREF to: 0042050c (CONDITIONAL_JUMP)  ; LAB_0042050c
    ADD ESP,0x6c                        ; 00420506
    POP ESI                             ; 00420509
    POP EBX                             ; 0042050a
    RET                                 ; 0042050b
    MOV EDX,dword ptr [0x006703ec]      ; 0042050c | g_CDemonRendererInstance | g_CDemonRendererPtr2
        ;   Label: LAB_0042050c
    PUSH EDX                            ; 00420512 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 00420513
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00420518
    TEST EAX,EAX                        ; 0042051b
    JNZ 0x00420667                      ; 0042051d
        ;   XREF to: 00420667 (CONDITIONAL_JUMP)  ; LAB_00420667
    LEA EAX,[EBX + 0xc]                 ; 00420523
    FLD float ptr [EBX]                 ; 00420526
    FADD float ptr [EAX]                ; 00420528
    FST float ptr [ESP + 0x48]          ; 0042052a
    FLD float ptr [EBX + 0x4]           ; 0042052e
    FADD float ptr [EAX + 0x4]          ; 00420531
    FXCH                                ; 00420534
    FLD float ptr [0x006165e7]          ; 00420536 | FLOAT_006165e7
    FXCH                                ; 0042053c
    FMUL ST1                            ; 0042053e
    FXCH ST2                            ; 00420540
    FST float ptr [ESP + 0x4c]          ; 00420542
    FLD float ptr [EBX + 0x8]           ; 00420546
    FADD float ptr [EAX + 0x8]          ; 00420549
    FXCH                                ; 0042054c
    FMUL ST2                            ; 0042054e
    FXCH                                ; 00420550
    FST float ptr [ESP + 0x50]          ; 00420552
    FMULP ST2                           ; 00420556
    LEA EBX,[ESP + 0x3c]                ; 00420558
    FXCH ST2                            ; 0042055c
    FSTP float ptr [ESP + 0x3c]         ; 0042055e
    FXCH                                ; 00420562
    FSTP float ptr [ESP + 0x40]         ; 00420564
    LEA EAX,[ESP + 0x60]                ; 00420568
    FSTP float ptr [ESP + 0x44]         ; 0042056c
    CMP EAX,EBX                         ; 00420570
    JZ 0x0042058c                       ; 00420572
        ;   XREF to: 0042058c (CONDITIONAL_JUMP)  ; LAB_0042058c
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00420574
    MOV dword ptr [ESP + 0x60],EAX      ; 00420578
    MOV EAX,dword ptr [ESP + 0x40]      ; 0042057c
    MOV dword ptr [ESP + 0x64],EAX      ; 00420580
    MOV EAX,dword ptr [ESP + 0x44]      ; 00420584
    MOV dword ptr [ESP + 0x68],EAX      ; 00420588
    MOV EAX,0x772a88                    ; 0042058c | g_StoredX
        ;   Label: LAB_0042058c
    LEA EBX,[ESP + 0x54]                ; 00420591
    FILD dword ptr [EAX]                ; 00420595 | g_StoredX
    FMUL float ptr [0x0065b168]         ; 00420597 | FLOAT_0065b168
    FSTP float ptr [EBX]                ; 0042059d
    FILD dword ptr [EAX + 0x4]          ; 0042059f | g_StoredY
    FMUL float ptr [0x0065b168]         ; 004205a2 | FLOAT_0065b168
    FSTP float ptr [EBX + 0x4]          ; 004205a8
    FILD dword ptr [EAX + 0x8]          ; 004205ab | g_StoredZ
    FMUL float ptr [0x0065b168]         ; 004205ae | FLOAT_0065b168
    FSTP float ptr [EBX + 0x8]          ; 004205b4
    LEA EBX,[ESP + 0x30]                ; 004205b7
    LEA EAX,[ESP + 0x60]                ; 004205bb
    FLD float ptr [EAX]                 ; 004205bf
    FMUL float ptr [0x0065b160]         ; 004205c1 | g_BoundingBoxWorldToIntegerScale
    FISTP dword ptr [EBX]               ; 004205c7
    FLD float ptr [EAX + 0x4]           ; 004205c9
    FMUL float ptr [0x0065b160]         ; 004205cc | g_BoundingBoxWorldToIntegerScale
    FISTP dword ptr [EBX + 0x4]         ; 004205d2
    FLD float ptr [EAX + 0x8]           ; 004205d5
    FMUL float ptr [0x0065b160]         ; 004205d8 | g_BoundingBoxWorldToIntegerScale
    FISTP dword ptr [EBX + 0x8]         ; 004205de
    LEA EAX,[ESP + 0x30]                ; 004205e1
    PUSH EAX                            ; 004205e5
    LEA EAX,[ESP + 0x4]                 ; 004205e6
    PUSH EAX                            ; 004205ea
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004205eb
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004205f0
    MOV ECX,dword ptr [0x00823a74]      ; 004205f3 | g_CurrentSceneCamera
    FLD float ptr [ESP + 0x54]          ; 004205f9
    FLD float ptr [ESP + 0x58]          ; 004205fd
    FLD float ptr [ESP + 0x5c]          ; 00420601
    FXCH ST2                            ; 00420605
    FADD float ptr [ESP + 0x60]         ; 00420607
    FXCH                                ; 0042060b
    FADD float ptr [ESP + 0x64]         ; 0042060d
    FXCH ST2                            ; 00420611
    FADD float ptr [ESP + 0x68]         ; 00420613
    FXCH                                ; 00420617
    FSTP float ptr [ESP + 0x54]         ; 00420619
    FXCH                                ; 0042061d
    FSTP float ptr [ESP + 0x58]         ; 0042061f
    FSTP float ptr [ESP + 0x5c]         ; 00420623
    TEST ECX,ECX                        ; 00420627
    JZ 0x00420656                       ; 00420629
        ;   XREF to: 00420656 (CONDITIONAL_JUMP)  ; LAB_00420656
    MOV EAX,ESP                         ; 0042062b
    PUSH EAX                            ; 0042062d
    LEA EAX,[ESP + 0x58]                ; 0042062e
    PUSH EAX                            ; 00420632
    PUSH 0x32758e4                      ; 00420633 | g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_004537d0 ; 00420638
        ;   XREF to: 004537d0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_004537d0(CDemonCamera * this_ptr, CVector3f * position, SProjectedVertex * projected_vertex)
    MOV ESI,dword ptr [0x02d051f4]      ; 0042063d | g_PerspectiveReciprocal
    ADD ESP,0xc                         ; 00420643
    CMP ESI,0xfde8                      ; 00420646
    JLE 0x0042065c                      ; 0042064c
        ;   XREF to: 0042065c (CONDITIONAL_JUMP)  ; LAB_0042065c
    XOR EAX,EAX                         ; 0042064e
    ADD ESP,0x6c                        ; 00420650
    POP ESI                             ; 00420653
    POP EBX                             ; 00420654
    RET                                 ; 00420655
    MOV dword ptr [0x02d051f4],ECX      ; 00420656 | g_PerspectiveReciprocal
        ;   Label: LAB_00420656
    MOV EAX,0x1                         ; 0042065c
        ;   Label: LAB_0042065c
    ADD ESP,0x6c                        ; 00420661
    POP ESI                             ; 00420664
    POP EBX                             ; 00420665
    RET                                 ; 00420666
    PUSH EBX                            ; 00420667
        ;   Label: LAB_00420667
    CALL core_box.cpp_CBoundingBox3D_isVisibleWithShadow_FUN_00420320 ; 00420668
        ;   XREF to: 00420320 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisibleWithShadow_FUN_00420320(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 0042066d
    TEST EAX,EAX                        ; 00420670
    JNZ 0x0042065c                      ; 00420672
        ;   XREF to: 0042065c (CONDITIONAL_JUMP)  ; LAB_0042065c
    ADD ESP,0x6c                        ; 00420674
    POP ESI                             ; 00420677
    POP EBX                             ; 00420678
    RET                                 ; 00420679


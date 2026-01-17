; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float core_box.cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840(CBoundingBox3D * this_ptr)
;
; Parameters:
; CBoundingBox3D * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 at 0059777f
;   core_skeleton.cpp_CDeformableModel_selectLOD_FUN_0059ce40 at 0059ce72
;   shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990 at 0051dcce
;   shape_meshlod.cpp_CLodMesh_previewLodGeneration_FUN_0051d520 at 0051d763
;
; Referenced Globals:
;   float g_BoundingBoxCenterScaleFactor = 0.5
;   double g_BoundingBoxFixedPointScaleFactor1 = 0.00390625
;   float g_BoundingBoxWorldToIntegerScale = 256
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   int g_ProjectionScale = 0x10000
;   CDemonRenderer g_CDemonRendererInstance
;   int g_ViewportCenterYFixed
;
; Called Functions:
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00420840
        ;   Label: core_box.cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840
    PUSH ESI                            ; 00420841
    PUSH EBP                            ; 00420842
    MOV EBP,ESP                         ; 00420843
    SUB ESP,0x30                        ; 00420845
    AND ESP,0xfffffff8                  ; 00420848
    MOV ESI,dword ptr [EBP + 0x10]      ; 0042084b
    LEA EAX,[ESI + 0xc]                 ; 0042084e
    FLD float ptr [ESI]                 ; 00420851
    FADD float ptr [EAX]                ; 00420853
    FST float ptr [ESP]                 ; 00420855
    FLD float ptr [ESI + 0x4]           ; 00420858
    FADD float ptr [EAX + 0x4]          ; 0042085b
    FXCH                                ; 0042085e
    FLD float ptr [0x006165eb]          ; 00420860 | g_BoundingBoxCenterScaleFactor
    FXCH                                ; 00420866
    FMUL ST1                            ; 00420868
    FXCH ST2                            ; 0042086a
    FST float ptr [ESP + 0x4]           ; 0042086c
    FLD float ptr [ESI + 0x8]           ; 00420870
    FADD float ptr [EAX + 0x8]          ; 00420873
    FXCH                                ; 00420876
    FMUL ST2                            ; 00420878
    FXCH                                ; 0042087a
    FST float ptr [ESP + 0x8]           ; 0042087c
    FMULP ST2                           ; 00420880
    LEA EBX,[ESP + 0xc]                 ; 00420882
    MOV EDX,dword ptr [0x006703ec]      ; 00420886 | g_CDemonRendererInstance | g_CDemonRendererPtr
    FXCH ST2                            ; 0042088c
    FSTP float ptr [ESP + 0x18]         ; 0042088e
    FXCH                                ; 00420892
    FSTP float ptr [ESP + 0x1c]         ; 00420894
    LEA EAX,[ESP + 0x18]                ; 00420898
    FSTP float ptr [ESP + 0x20]         ; 0042089c
    FLD float ptr [EAX]                 ; 004208a0
    FMUL float ptr [0x0065b160]         ; 004208a2 | g_BoundingBoxWorldToIntegerScale
    FISTP dword ptr [EBX]               ; 004208a8
    FLD float ptr [EAX + 0x4]           ; 004208aa
    FMUL float ptr [0x0065b160]         ; 004208ad | g_BoundingBoxWorldToIntegerScale
    FISTP dword ptr [EBX + 0x4]         ; 004208b3
    FLD float ptr [EAX + 0x8]           ; 004208b6
    FMUL float ptr [0x0065b160]         ; 004208b9 | g_BoundingBoxWorldToIntegerScale
    FISTP dword ptr [EBX + 0x8]         ; 004208bf
    LEA EAX,[ESP + 0xc]                 ; 004208c2
    PUSH EAX                            ; 004208c6
    MOV EAX,dword ptr [EDX]             ; 004208c7 | g_CDemonRendererInstance
    ADD EAX,0xea5d0                     ; 004208c9
    PUSH EAX                            ; 004208ce
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004208cf
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x006703ec]                ; 004208d4 | g_CDemonRendererPtr
    MOV EAX,dword ptr [EAX]             ; 004208d9 | g_CDemonRendererInstance
    MOV EAX,dword ptr [EAX + 0xea5d8]   ; 004208db
    ADD ESP,0x8                         ; 004208e1
    TEST EAX,EAX                        ; 004208e4
    JLE 0x00420926                      ; 004208e6
        ;   XREF to: 00420926 (CONDITIONAL_JUMP)  ; LAB_00420926
    FLD float ptr [ESI + 0x10]          ; 004208e8
    FSUB float ptr [ESI + 0x4]          ; 004208eb
    MOV dword ptr [ESP + 0x2c],EAX      ; 004208ee
    FILD dword ptr [ESP + 0x2c]         ; 004208f2
    FMUL double ptr [0x006165ef]        ; 004208f6 | g_BoundingBoxFixedPointScaleFactor1
    FDIVP                               ; 004208fc
    FILD dword ptr [0x02d0254c]         ; 004208fe | g_ViewportCenterYFixed
    FMULP                               ; 00420904
    FILD dword ptr [0x006793c0]         ; 00420906 | g_ProjectionScale
    FDIVP                               ; 0042090c
    FABS                                ; 0042090e
    FSTP float ptr [ESP + 0x24]         ; 00420910
    MOV EAX,dword ptr [ESP + 0x24]      ; 00420914
    MOV dword ptr [ESP + 0x28],EAX      ; 00420918
    MOV EAX,dword ptr [ESP + 0x28]      ; 0042091c
    MOV ESP,EBP                         ; 00420920
    POP EBP                             ; 00420922
    POP ESI                             ; 00420923
    POP EBX                             ; 00420924
    RET                                 ; 00420925
    MOV dword ptr [ESP + 0x28],0x47c34f80 ; 00420926
        ;   Label: LAB_00420926
    MOV EAX,dword ptr [ESP + 0x28]      ; 0042092e
    MOV ESP,EBP                         ; 00420932
    POP EBP                             ; 00420934
    POP ESI                             ; 00420935
    POP EBX                             ; 00420936
    RET                                 ; 00420937


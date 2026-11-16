; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_setdir_cpp_calculateActorVisibility_FUN_00559730(CDemonActor *actor,CVector3i *bounding_box_vertices,SMRGLHeaderPrimitive *primitives,int thumb_index,C3DSCamera *camera,float radius)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   actor
; CVector3i *      Stack[0x8]:4   bounding_box_vertices
; SMRGLHeaderPrimitive * Stack[0xc]:4   primitives
; int              Stack[0x10]:4   thumb_index
; C3DSCamera *     Stack[0x14]:4   camera
; float            Stack[0x18]:4   radius
;
; Referenced Globals:
;   undefined4 DAT_005f0fcd
;   undefined4 DAT_005f0fd5
;   undefined4 DAT_00605120
;   undefined4 DAT_00605138
;   undefined4 DAT_0060513c
;   undefined4 DAT_00612560
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 DAT_0268ece8
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_box.cpp_CBoundingBox3D_getCorner_FUN_00420570
;   core_setutil.cpp_C3DSCamera_testSphereInFrustum_FUN_0055c6f0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
;   engine_drender.cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_00481db0
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
;   engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80
;   engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0
;   engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_004839b0
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80
;   engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00483530
;   engine_matrix.c_projectTransformedPoint_FUN_00507b50
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00559730
        ;   Label: core_setdir.cpp_calculateActorVisibility_FUN_00559730
    PUSH ESI                            ; 00559731
    PUSH EDI                            ; 00559732
    PUSH EBP                            ; 00559733
    MOV EBP,ESP                         ; 00559734
    SUB ESP,0xd8                        ; 00559736
    AND ESP,0xfffffff8                  ; 0055973c
    MOV EAX,dword ptr [EBP + 0x24]      ; 0055973f
    MOV EDX,dword ptr [EAX + 0x1a0]     ; 00559742
    TEST EDX,EDX                        ; 00559748
    JZ 0x0055979f                       ; 0055974a
        ;   XREF to: 0055979f (CONDITIONAL_JUMP)  ; LAB_0055979f
    LEA ESI,[EAX + 0x100]               ; 0055974c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00559752
    FLD float ptr [ESI]                 ; 00559755
    FSUB float ptr [EBX + 0x20]         ; 00559757
    FMUL ST0                            ; 0055975a
    FLD float ptr [ESI + 0x4]           ; 0055975c
    FSUB float ptr [EBX + 0x24]         ; 0055975f
    FMUL ST0                            ; 00559762
    FLD float ptr [ESI + 0x8]           ; 00559764
    FXCH                                ; 00559767
    FADDP ST2,ST0                       ; 00559769
    FSUB float ptr [EBX + 0x28]         ; 0055976b
    FMUL ST0                            ; 0055976e
    FLD float ptr [0x00605138]          ; 00559770 | DAT_00605138
    FMUL ST0                            ; 00559776
    FXCH                                ; 00559778
    FADDP ST2,ST0                       ; 0055977a
    ADD EBX,0x20                        ; 0055977c
    FXCH                                ; 0055977f
    FCOMPP                              ; 00559781
    FNSTSW AX                           ; 00559783
    SAHF                                ; 00559785
    JBE 0x005597a8                      ; 00559786
        ;   XREF to: 005597a8 (CONDITIONAL_JUMP)  ; LAB_005597a8
    XOR EBX,EBX                         ; 00559788
    MOV dword ptr [ESP + 0x94],EBX      ; 0055978a
    MOV EAX,dword ptr [ESP + 0x94]      ; 00559791
        ;   Label: LAB_00559791
    MOV ESP,EBP                         ; 00559798
    POP EBP                             ; 0055979a
    POP EDI                             ; 0055979b
    POP ESI                             ; 0055979c
    POP EBX                             ; 0055979d
    RET                                 ; 0055979e
    MOV dword ptr [ESP + 0x94],EDX      ; 0055979f
        ;   Label: LAB_0055979f
    JMP 0x00559791                      ; 005597a6
        ;   XREF to: 00559791 (UNCONDITIONAL_JUMP)  ; LAB_00559791
    PUSH dword ptr [EBP + 0x28]         ; 005597a8
        ;   Label: LAB_005597a8
    PUSH EBX                            ; 005597ab
    MOV EDI,dword ptr [EBP + 0x24]      ; 005597ac
    PUSH EDI                            ; 005597af
    CALL core_setutil.cpp_C3DSCamera_testSphereInFrustum_FUN_0055c6f0 ; 005597b0
        ;   XREF to: 0055c6f0 (UNCONDITIONAL_CALL)  ; int core_setutil.cpp_C3DSCamera_testSphereInFrustum_FUN_0055c6f0(C3DSCamera * this_ptr, CVector3f * world_position, float radius)
    ADD ESP,0xc                         ; 005597b5
    TEST EAX,EAX                        ; 005597b8
    JNZ 0x005597d1                      ; 005597ba
        ;   XREF to: 005597d1 (CONDITIONAL_JUMP)  ; LAB_005597d1
    MOV dword ptr [ESP + 0x94],EAX      ; 005597bc
    MOV EAX,dword ptr [ESP + 0x94]      ; 005597c3
    MOV ESP,EBP                         ; 005597ca
    POP EBP                             ; 005597cc
    POP EDI                             ; 005597cd
    POP ESI                             ; 005597ce
    POP EBX                             ; 005597cf
    RET                                 ; 005597d0
    PUSH ESI                            ; 005597d1
        ;   Label: LAB_005597d1
    MOV EDX,dword ptr [0x00612560]      ; 005597d2 | DAT_00612560
    PUSH EDX                            ; 005597d8
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0 ; 005597d9
        ;   XREF to: 004834b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0(CDemonRenderer * this_ptr, CVector3f * point_ptr)
    ADD ESP,0x8                         ; 005597de
    MOV ECX,dword ptr [0x00612560]      ; 005597e1 | DAT_00612560
    PUSH dword ptr [EDI + 0x144]        ; 005597e7
    PUSH ECX                            ; 005597ed
    CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_004839b0 ; 005597ee
        ;   XREF to: 004839b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_004839b0(CDemonRenderer * this_ptr, float field_of_view)
    ADD ESP,0x8                         ; 005597f3
    LEA EAX,[EDI + 0x10c]               ; 005597f6
    PUSH EAX                            ; 005597fc
    MOV ESI,dword ptr [0x00612560]      ; 005597fd | DAT_00612560
    PUSH ESI                            ; 00559803
    CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00483530 ; 00559804
        ;   XREF to: 00483530 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00483530(CDemonRenderer * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00559809
    MOV EDI,0x800000ff                  ; 0055980c
    PUSH EBX                            ; 00559811
    MOV EDX,dword ptr [0x00612560]      ; 00559812 | DAT_00612560
    XOR EAX,EAX                         ; 00559818
    PUSH EDX                            ; 0055981a
    MOV dword ptr [ESP + 0xb4],EDI      ; 0055981b
    MOV dword ptr [ESP + 0xa8],EAX      ; 00559822
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 00559829
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0055982e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00559831
    MOV EAX,dword ptr [EAX + 0x30]      ; 00559834
    MOV dword ptr [ESP + 0x44],EAX      ; 00559837
    MOV EAX,dword ptr [EBP + 0x14]      ; 0055983b
    MOV EAX,dword ptr [EAX + 0x38]      ; 0055983e
    MOV dword ptr [ESP + 0x4c],EAX      ; 00559841
    MOV EAX,dword ptr [EBP + 0x24]      ; 00559845
    MOV EAX,dword ptr [EAX + 0x110]     ; 00559848
    PUSH 0x0                            ; 0055984e
    MOV dword ptr [ESP + 0x4c],EAX      ; 00559850
    LEA EAX,[ESP + 0x48]                ; 00559854
    PUSH EAX                            ; 00559858
    MOV ECX,dword ptr [0x00612560]      ; 00559859 | DAT_00612560
    PUSH ECX                            ; 0055985f
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 00559860
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 00559865
    XOR ESI,ESI                         ; 00559868
    MOV EDI,dword ptr [EBP + 0x18]      ; 0055986a
    MOV EAX,[0x00612560]                ; 0055986d | DAT_00612560
        ;   Label: LAB_0055986d
    MOV EAX,dword ptr [EAX]             ; 00559872
    PUSH EDI                            ; 00559874
    ADD EAX,ESI                         ; 00559875
    PUSH EAX                            ; 00559877
    CALL engine_special.cpp_transformAndProjectPoint_FUN_00580173 ; 00559878
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x00612560]                ; 0055987d | DAT_00612560
    ADD ESI,0x30                        ; 00559882
    ADD ESP,0x8                         ; 00559885
    MOV EAX,dword ptr [EAX]             ; 00559888
    ADD EDI,0xc                         ; 0055988a
    MOV ECX,dword ptr [ESP + 0xac]      ; 0055988d
    MOV EDX,dword ptr [ESI + EAX*0x1 + -0x20] ; 00559894
    MOV EBX,dword ptr [ESP + 0xa0]      ; 00559898
    AND ECX,EDX                         ; 0055989f
    OR EBX,EDX                          ; 005598a1
    MOV dword ptr [ESP + 0xac],ECX      ; 005598a3
    MOV dword ptr [ESP + 0xa0],EBX      ; 005598aa
    CMP ESI,0x180                       ; 005598b1
    JNZ 0x0055986d                      ; 005598b7
        ;   XREF to: 0055986d (CONDITIONAL_JUMP)  ; LAB_0055986d
    TEST byte ptr [ESP + 0xaf],0x80     ; 005598b9
    JZ 0x005598d1                       ; 005598c1
        ;   XREF to: 005598d1 (CONDITIONAL_JUMP)  ; LAB_005598d1
    TEST byte ptr [ESP + 0xac],0xff     ; 005598c3
    JNZ 0x00559d6f                      ; 005598cb
        ;   XREF to: 00559d6f (CONDITIONAL_JUMP)  ; LAB_00559d6f
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005598d1
        ;   Label: LAB_005598d1
    XOR ESI,ESI                         ; 005598d4
    XOR EDX,EDX                         ; 005598d6
    LEA ECX,[EAX + 0x1b0]               ; 005598d8
    MOV dword ptr [ESP + 0xc0],ESI      ; 005598de
    MOV EBX,dword ptr [ESP + 0xc0]      ; 005598e5
        ;   Label: LAB_005598e5
    MOV dword ptr [ESP + EDX*0x1 + 0x2c],EAX ; 005598ec
    ADD EDX,0x4                         ; 005598f0
    INC EBX                             ; 005598f3
    ADD EAX,0x48                        ; 005598f4
    MOV dword ptr [ESP + 0xc0],EBX      ; 005598f7
    CMP EAX,ECX                         ; 005598fe
    JNZ 0x005598e5                      ; 00559900
        ;   XREF to: 005598e5 (CONDITIONAL_JUMP)  ; LAB_005598e5
    MOV ESI,dword ptr [EBP + 0x14]      ; 00559902
    PUSH ESI                            ; 00559905
    XOR EDI,EDI                         ; 00559906
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 00559908
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0055990d
    MOV ESI,dword ptr [0x00612560]      ; 00559910 | DAT_00612560
        ;   Label: LAB_00559910
    MOV ESI,dword ptr [ESI]             ; 00559916
    ADD ESI,EDI                         ; 00559918
    MOV EAX,dword ptr [ESI + 0x8]       ; 0055991a
    TEST EAX,EAX                        ; 0055991d
    JLE 0x0055994e                      ; 0055991f
        ;   XREF to: 0055994e (CONDITIONAL_JUMP)  ; LAB_0055994e
    LEA ECX,[EAX + 0x80]                ; 00559921
    MOV EBX,EAX                         ; 00559927
    MOV EDX,ECX                         ; 00559929
    MOV EAX,dword ptr [ESI]             ; 0055992b
    IMUL EDX                            ; 0055992d
    IDIV EBX                            ; 0055992f
    MOV dword ptr [ESI],EAX             ; 00559931
    MOV EDX,ECX                         ; 00559933
    MOV EBX,dword ptr [ESI + 0x8]       ; 00559935
    MOV EAX,dword ptr [ESI + 0x4]       ; 00559938
    IMUL EDX                            ; 0055993b
    IDIV EBX                            ; 0055993d
    MOV dword ptr [ESI + 0x4],EAX       ; 0055993f
    PUSH ESI                            ; 00559942
    MOV dword ptr [ESI + 0x8],ECX       ; 00559943
    CALL engine_matrix.c_projectTransformedPoint_FUN_00507b50 ; 00559946
        ;   XREF to: 00507b50 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_projectTransformedPoint_FUN_00507b50(SProjectedVertex * point)
    ADD ESP,0x4                         ; 0055994b
    ADD EDI,0x30                        ; 0055994e
        ;   Label: LAB_0055994e
    CMP EDI,0x180                       ; 00559951
    JNZ 0x00559910                      ; 00559957
        ;   XREF to: 00559910 (CONDITIONAL_JUMP)  ; LAB_00559910
    MOV EDX,0x3f800000                  ; 00559959
    XOR EAX,EAX                         ; 0055995e
    MOV dword ptr [ESP],EDX             ; 00559960
    MOV EDX,dword ptr [0x00612560]      ; 00559963 | DAT_00612560
        ;   Label: LAB_00559963
    MOV EDX,dword ptr [EDX]             ; 00559969
    ADD EDX,EAX                         ; 0055996b
    TEST byte ptr [EDX + 0x13],0x80     ; 0055996d
    JZ 0x00559989                       ; 00559971
        ;   XREF to: 00559989 (CONDITIONAL_JUMP)  ; LAB_00559989
    CMP dword ptr [EDX + 0x8],0x0       ; 00559973
    JLE 0x00559d92                      ; 00559977
        ;   XREF to: 00559d92 (CONDITIONAL_JUMP)  ; LAB_00559d92
    FLD float ptr [ESP]                 ; 0055997d
    FMUL double ptr [0x005f0fcd]        ; 00559980 | DAT_005f0fcd
    FSTP float ptr [ESP]                ; 00559986
        ;   Label: LAB_00559986
    ADD EAX,0x30                        ; 00559989
        ;   Label: LAB_00559989
    CMP EAX,0x180                       ; 0055998c
    JNZ 0x00559963                      ; 00559991
        ;   XREF to: 00559963 (CONDITIONAL_JUMP)  ; LAB_00559963
    XOR EBX,EBX                         ; 00559993
    MOV EDI,dword ptr [0x0268ece8]      ; 00559995 | DAT_0268ece8
    MOV dword ptr [ESP + 0xbc],EBX      ; 0055999b
    MOV dword ptr [ESP + 0xa8],EBX      ; 005599a2
    TEST EDI,EDI                        ; 005599a9
    JLE 0x00559bb8                      ; 005599ab
        ;   XREF to: 00559bb8 (CONDITIONAL_JUMP)  ; LAB_00559bb8
    FLD float ptr [0x0060513c]          ; 005599b1 | DAT_0060513c
    FLD ST0                             ; 005599b7
    MOV EDX,dword ptr [EBP + 0x20]      ; 005599b9
    FMULP                               ; 005599bc
    LEA EAX,[EDX*0x4 + 0x0]             ; 005599be
    MOV dword ptr [ESP + 0xb8],EBX      ; 005599c5
    SUB EAX,EDX                         ; 005599cc
    MOV EDX,0x20b28f4                   ; 005599ce
    SHL EAX,0xc                         ; 005599d3
    FSTP float ptr [ESP + 0x98]         ; 005599d6
    ADD EDX,EAX                         ; 005599dd
    MOV EAX,dword ptr [EBP + 0x24]      ; 005599df
    MOV dword ptr [ESP + 0x9c],EDX      ; 005599e2
    ADD EAX,0x100                       ; 005599e9
    MOV EDX,0x2690c2c                   ; 005599ee
    MOV dword ptr [ESP + 0xb0],EAX      ; 005599f3
    MOV dword ptr [ESP + 0xb4],EDX      ; 005599fa
    MOV EAX,dword ptr [ESP + 0xb8]      ; 00559a01
        ;   Label: LAB_00559a01
    MOV EAX,dword ptr [EAX + 0x268ecec] ; 00559a08
    MOV EDX,dword ptr [ESP + 0xb0]      ; 00559a0e
    FLD float ptr [EAX + 0x20]          ; 00559a15
    FSUB float ptr [EDX]                ; 00559a18
    FMUL ST0                            ; 00559a1a
    FLD float ptr [EAX + 0x24]          ; 00559a1c
    FSUB float ptr [EDX + 0x4]          ; 00559a1f
    FMUL ST0                            ; 00559a22
    FLD float ptr [EAX + 0x28]          ; 00559a24
    FXCH                                ; 00559a27
    FADDP ST2,ST0                       ; 00559a29
    FSUB float ptr [EDX + 0x8]          ; 00559a2b
    FMUL ST0                            ; 00559a2e
    FADDP                               ; 00559a30
    MOV dword ptr [ESP + 0xc4],EAX      ; 00559a32
    FCOMP float ptr [ESP + 0x98]        ; 00559a39
    FNSTSW AX                           ; 00559a40
    SAHF                                ; 00559a42
    JA 0x00559b79                       ; 00559a43
        ;   XREF to: 00559b79 (CONDITIONAL_JUMP)  ; LAB_00559b79
    MOV ECX,dword ptr [ESP + 0xc4]      ; 00559a49
    PUSH ECX                            ; 00559a50
    MOV EBX,0x800000ff                  ; 00559a51
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 00559a56
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00559a5b
    XOR ESI,ESI                         ; 00559a5e
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00559a60
    MOV dword ptr [ESP + 0x90],EBX      ; 00559a67
    MOV dword ptr [ESP + 0xc8],ESI      ; 00559a6e
    MOV dword ptr [ESP + 0x8c],EAX      ; 00559a75
    MOV EAX,0x180                       ; 00559a7c
    MOV dword ptr [ESP + 0xcc],ESI      ; 00559a81
    MOV dword ptr [ESP + 0xd0],EAX      ; 00559a88
    MOV EBX,dword ptr [ESP + 0xcc]      ; 00559a8f
        ;   Label: LAB_00559a8f
    PUSH EBX                            ; 00559a96
    MOV ESI,dword ptr [ESP + 0x90]      ; 00559a97
    LEA EDI,[ESP + 0x60]                ; 00559a9e
    PUSH ESI                            ; 00559aa2
    LEA ESI,[ESP + 0x58]                ; 00559aa3
    LEA EBX,[ESP + 0x70]                ; 00559aa7
    CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_00420570 ; 00559aab
        ;   XREF to: 00420570 (UNCONDITIONAL_CALL)  ; CVector3f * core_box.cpp_CBoundingBox3D_getCorner_FUN_00420570(CBoundingBox3D * this_ptr, uint corner_index, CVector3f * out_point)
    LEA ESI,[ESP + 0x58]                ; 00559ab0
    LEA EAX,[ESP + 0x64]                ; 00559ab4
    ADD ESP,0x8                         ; 00559ab8
    MOV EDX,dword ptr [0x00612560]      ; 00559abb | DAT_00612560
    MOVSD ES:EDI,ESI                    ; 00559ac1
    MOVSD ES:EDI,ESI                    ; 00559ac2
    MOVSD ES:EDI,ESI                    ; 00559ac3
    FLD float ptr [EAX]                 ; 00559ac4
    FMUL float ptr [0x00605120]         ; 00559ac6 | DAT_00605120
    FISTP dword ptr [EBX]               ; 00559acc
    FLD float ptr [EAX + 0x4]           ; 00559ace
    FMUL float ptr [0x00605120]         ; 00559ad1 | DAT_00605120
    FISTP dword ptr [EBX + 0x4]         ; 00559ad7
    FLD float ptr [EAX + 0x8]           ; 00559ada
    FMUL float ptr [0x00605120]         ; 00559add | DAT_00605120
    FISTP dword ptr [EBX + 0x8]         ; 00559ae3
    LEA EAX,[ESP + 0x68]                ; 00559ae6
    MOV EDI,dword ptr [ESP + 0xd0]      ; 00559aea
    PUSH EAX                            ; 00559af1
    MOV EAX,dword ptr [EDX]             ; 00559af2
    ADD EAX,EDI                         ; 00559af4
    PUSH EAX                            ; 00559af6
    CALL engine_special.cpp_transformAndProjectPoint_FUN_00580173 ; 00559af7
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x00612560]                ; 00559afc | DAT_00612560
    ADD ESP,0x8                         ; 00559b01
    MOV EAX,dword ptr [EAX]             ; 00559b04
    MOV ECX,dword ptr [ESP + 0x90]      ; 00559b06
    ADD EAX,EDI                         ; 00559b0d
    MOV EBX,dword ptr [ESP + 0xc8]      ; 00559b0f
    LEA ESI,[EDI + 0x30]                ; 00559b16
    MOV EDX,dword ptr [EAX + 0x10]      ; 00559b19
    MOV EDI,dword ptr [ESP + 0xcc]      ; 00559b1c
    MOV dword ptr [ESP + 0xd0],ESI      ; 00559b23
    AND ECX,EDX                         ; 00559b2a
    OR EBX,EDX                          ; 00559b2c
    MOV dword ptr [ESP + 0x90],ECX      ; 00559b2e
    INC EDI                             ; 00559b35
    MOV dword ptr [ESP + 0xc8],EBX      ; 00559b36
    MOV dword ptr [ESP + 0xcc],EDI      ; 00559b3d
    CMP EDI,0x8                         ; 00559b44
    JL 0x00559a8f                       ; 00559b47
        ;   XREF to: 00559a8f (CONDITIONAL_JUMP)  ; LAB_00559a8f
    MOV EDX,dword ptr [ESP + 0xc4]      ; 00559b4d
    PUSH EDX                            ; 00559b54
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 00559b55
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00559b5a
    TEST byte ptr [ESP + 0x93],0x80     ; 00559b5d
    JZ 0x00559da0                       ; 00559b65
        ;   XREF to: 00559da0 (CONDITIONAL_JUMP)  ; LAB_00559da0
    TEST byte ptr [ESP + 0x90],0xff     ; 00559b6b
    JZ 0x00559da0                       ; 00559b73
        ;   XREF to: 00559da0 (CONDITIONAL_JUMP)  ; LAB_00559da0
    MOV EAX,dword ptr [ESP + 0xb8]      ; 00559b79
        ;   Label: LAB_00559b79
    MOV EDX,dword ptr [ESP + 0xb4]      ; 00559b80
    MOV ECX,dword ptr [ESP + 0xbc]      ; 00559b87
    MOV EBX,dword ptr [0x0268ece8]      ; 00559b8e | DAT_0268ece8
    ADD EAX,0x4                         ; 00559b94
    ADD EDX,0x18                        ; 00559b97
    INC ECX                             ; 00559b9a
    MOV dword ptr [ESP + 0xb8],EAX      ; 00559b9b
    MOV dword ptr [ESP + 0xb4],EDX      ; 00559ba2
    MOV dword ptr [ESP + 0xbc],ECX      ; 00559ba9
    CMP ECX,EBX                         ; 00559bb0
    JL 0x00559a01                       ; 00559bb2
        ;   XREF to: 00559a01 (CONDITIONAL_JUMP)  ; LAB_00559a01
    PUSH 0x0                            ; 00559bb8
        ;   Label: LAB_00559bb8
    MOV ESI,dword ptr [0x00612560]      ; 00559bba | DAT_00612560
    PUSH ESI                            ; 00559bc0
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80 ; 00559bc1
        ;   XREF to: 00483d80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 00559bc6
    CMP dword ptr [ESP + 0xa8],0x0      ; 00559bc9
    JNZ 0x00559c10                      ; 00559bd1
        ;   XREF to: 00559c10 (CONDITIONAL_JUMP)  ; LAB_00559c10
    MOV EDX,dword ptr [EBP + 0x20]      ; 00559bd3
    LEA EAX,[EDX*0x4 + 0x0]             ; 00559bd6
    SUB EAX,EDX                         ; 00559bdd
    MOV EDX,0x20b28f4                   ; 00559bdf
    SHL EAX,0xc                         ; 00559be4
    ADD EDX,EAX                         ; 00559be7
    XOR EAX,EAX                         ; 00559be9
    MOV dword ptr [EAX + 0x1c4480c],EDX ; 00559beb
        ;   Label: LAB_00559beb
    ADD EAX,0x4                         ; 00559bf1
    ADD EDX,0x100                       ; 00559bf4
    CMP EAX,0xc0                        ; 00559bfa
    JNZ 0x00559beb                      ; 00559bff
        ;   XREF to: 00559beb (CONDITIONAL_JUMP)  ; LAB_00559beb
    LEA EAX,[EAX]                       ; 00559c01
    LEA EDX,[EDX]                       ; 00559c07
    LEA EAX,[EAX]                       ; 00559c0d
    PUSH 0x1                            ; 00559c10
        ;   Label: LAB_00559c10
    MOV EDX,dword ptr [0x00612560]      ; 00559c12 | DAT_00612560
    PUSH EDX                            ; 00559c18
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80 ; 00559c19
        ;   XREF to: 00483d80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 00559c1e
    TEST byte ptr [ESP + 0xa3],0x80     ; 00559c21
    SETNZ AL                            ; 00559c29
    AND EAX,0xff                        ; 00559c2c
    PUSH EAX                            ; 00559c31
    MOV ECX,dword ptr [0x00612560]      ; 00559c32 | DAT_00612560
    PUSH ECX                            ; 00559c38
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20 ; 00559c39
        ;   XREF to: 00483e20 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00559c3e
    XOR EBX,EBX                         ; 00559c41
    MOV ESI,dword ptr [ESP + 0xc0]      ; 00559c43
    MOV dword ptr [ESP + 0xa4],EBX      ; 00559c4a
    TEST ESI,ESI                        ; 00559c51
    JLE 0x00559c90                      ; 00559c53
        ;   XREF to: 00559c90 (CONDITIONAL_JUMP)  ; LAB_00559c90
    SHL ESI,0x2                         ; 00559c55
    MOV EDI,dword ptr [ESP + EBX*0x1 + 0x2c] ; 00559c58
        ;   Label: LAB_00559c58
    PUSH EDI                            ; 00559c5c
    MOV EAX,[0x00612560]                ; 00559c5d | DAT_00612560
    PUSH EAX                            ; 00559c62
    CALL engine_drender.cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_00481db0 ; 00559c63
        ;   XREF to: 00481db0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_00481db0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 00559c68
    MOV EDX,dword ptr [ESP + 0xa4]      ; 00559c6b
    ADD EDX,EAX                         ; 00559c72
    ADD EBX,0x4                         ; 00559c74
    MOV dword ptr [ESP + 0xa4],EDX      ; 00559c77
    CMP EBX,ESI                         ; 00559c7e
    JL 0x00559c58                       ; 00559c80
        ;   XREF to: 00559c58 (CONDITIONAL_JUMP)  ; LAB_00559c58
    LEA EAX,[EAX]                       ; 00559c82
    LEA EDX,[EDX]                       ; 00559c88
    MOV EAX,EAX                         ; 00559c8e
    MOV EAX,[0x0061d95c]                ; 00559c90 | g_CGamePtr
        ;   Label: LAB_00559c90
    CMP dword ptr [EAX + 0x204],0x0     ; 00559c95
    JZ 0x00559d20                       ; 00559c9c
        ;   XREF to: 00559d20 (CONDITIONAL_JUMP)  ; LAB_00559d20
    MOV EDX,dword ptr [EBP + 0x20]      ; 00559ca2
    LEA EAX,[EDX*0x4 + 0x0]             ; 00559ca5
    SUB EAX,EDX                         ; 00559cac
    MOV EDX,0x23a08f4                   ; 00559cae
    SHL EAX,0xc                         ; 00559cb3
    XOR EBX,EBX                         ; 00559cb6
    ADD EDX,EAX                         ; 00559cb8
    MOV ECX,0x100                       ; 00559cba
        ;   Label: LAB_00559cba
    MOV EDI,EDX                         ; 00559cbf
    MOV ESI,dword ptr [EBX + 0x1c4480c] ; 00559cc1
    ADD EBX,0x4                         ; 00559cc7
    PUSH EDI                            ; 00559cca
    MOV EAX,ECX                         ; 00559ccb
    SHR ECX,0x2                         ; 00559ccd
    MOVSD.REP ES:EDI,ESI                ; 00559cd0
    MOV CL,AL                           ; 00559cd2
    AND CL,0x3                          ; 00559cd4
    MOVSB.REP ES:EDI,ESI                ; 00559cd7
    POP EDI                             ; 00559cd9
    MOV dword ptr [EBX + 0x1c44808],EDX ; 00559cda
    ADD EDX,0x100                       ; 00559ce0
    CMP EBX,0xc0                        ; 00559ce6
    JNZ 0x00559cba                      ; 00559cec
        ;   XREF to: 00559cba (CONDITIONAL_JUMP)  ; LAB_00559cba
    MOV ESI,dword ptr [ESP + 0xc0]      ; 00559cee
    XOR EBX,EBX                         ; 00559cf5
    TEST ESI,ESI                        ; 00559cf7
    JLE 0x00559d20                      ; 00559cf9
        ;   XREF to: 00559d20 (CONDITIONAL_JUMP)  ; LAB_00559d20
    MOV ESI,dword ptr [EBP + 0x1c]      ; 00559cfb
    PUSH ESI                            ; 00559cfe
        ;   Label: LAB_00559cfe
    MOV EDI,dword ptr [0x00612560]      ; 00559cff | DAT_00612560
    PUSH EDI                            ; 00559d05
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00 ; 00559d06
        ;   XREF to: 00481c00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 00559d0b
    INC EBX                             ; 00559d0e
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00559d0f
    ADD ESI,0x48                        ; 00559d16
    CMP EBX,EAX                         ; 00559d19
    JL 0x00559cfe                       ; 00559d1b
        ;   XREF to: 00559cfe (CONDITIONAL_JUMP)  ; LAB_00559cfe
    LEA EAX,[EAX]                       ; 00559d1d
    PUSH 0x1                            ; 00559d20
        ;   Label: LAB_00559d20
    MOV EDX,dword ptr [0x00612560]      ; 00559d22 | DAT_00612560
    PUSH EDX                            ; 00559d28
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20 ; 00559d29
        ;   XREF to: 00483e20 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00559d2e
    PUSH 0x0                            ; 00559d31
    MOV ECX,dword ptr [0x00612560]      ; 00559d33 | DAT_00612560
    PUSH ECX                            ; 00559d39
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80 ; 00559d3a
        ;   XREF to: 00483d80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 00559d3f
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00559d42
    MOV dword ptr [ESP + 0xd4],EAX      ; 00559d49
    FILD dword ptr [ESP + 0xd4]         ; 00559d50
    FMUL float ptr [ESP]                ; 00559d57
    FSTP float ptr [ESP + 0x94]         ; 00559d5a
    MOV EAX,dword ptr [ESP + 0x94]      ; 00559d61
    MOV ESP,EBP                         ; 00559d68
    POP EBP                             ; 00559d6a
    POP EDI                             ; 00559d6b
    POP ESI                             ; 00559d6c
    POP EBX                             ; 00559d6d
    RET                                 ; 00559d6e
    MOV EDI,dword ptr [EBP + 0x14]      ; 00559d6f
        ;   Label: LAB_00559d6f
    PUSH EDI                            ; 00559d72
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 00559d73
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00559d78
    XOR EAX,EAX                         ; 00559d7b
    MOV dword ptr [ESP + 0x94],EAX      ; 00559d7d
    MOV EAX,dword ptr [ESP + 0x94]      ; 00559d84
    MOV ESP,EBP                         ; 00559d8b
    POP EBP                             ; 00559d8d
    POP EDI                             ; 00559d8e
    POP ESI                             ; 00559d8f
    POP EBX                             ; 00559d90
    RET                                 ; 00559d91
    FLD float ptr [ESP]                 ; 00559d92
        ;   Label: LAB_00559d92
    FMUL double ptr [0x005f0fd5]        ; 00559d95 | DAT_005f0fd5
    JMP 0x00559986                      ; 00559d9b
        ;   XREF to: 00559986 (UNCONDITIONAL_JUMP)  ; LAB_00559986
    CMP dword ptr [ESP + 0xa8],0x0      ; 00559da0
        ;   Label: LAB_00559da0
    JNZ 0x00559e02                      ; 00559da8
        ;   XREF to: 00559e02 (CONDITIONAL_JUMP)  ; LAB_00559e02
    MOV ECX,0x3000                      ; 00559daa
    MOV ESI,dword ptr [ESP + 0x9c]      ; 00559daf
    MOV EDI,0x20af8ec                   ; 00559db6
    MOV EBX,0x1                         ; 00559dbb
    PUSH EDI                            ; 00559dc0
    MOV EAX,ECX                         ; 00559dc1
    SHR ECX,0x2                         ; 00559dc3
    MOVSD.REP ES:EDI,ESI                ; 00559dc6
    MOV CL,AL                           ; 00559dc8
    AND CL,0x3                          ; 00559dca
    MOVSB.REP ES:EDI,ESI                ; 00559dcd
    POP EDI                             ; 00559dcf
    MOV EDX,EDI                         ; 00559dd0
    MOV dword ptr [ESP + 0xa8],EBX      ; 00559dd2
    XOR EAX,EAX                         ; 00559dd9
    MOV dword ptr [EAX + 0x1c4480c],EDX ; 00559ddb
        ;   Label: LAB_00559ddb
    ADD EAX,0x4                         ; 00559de1
    ADD EDX,0x100                       ; 00559de4
    CMP EAX,0xc0                        ; 00559dea
    JNZ 0x00559ddb                      ; 00559def
        ;   XREF to: 00559ddb (CONDITIONAL_JUMP)  ; LAB_00559ddb
    PUSH 0x1                            ; 00559df1
    MOV ESI,dword ptr [0x00612560]      ; 00559df3 | DAT_00612560
    PUSH ESI                            ; 00559df9
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80 ; 00559dfa
        ;   XREF to: 00483d80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 00559dff
    MOV EDI,0x4                         ; 00559e02
        ;   Label: LAB_00559e02
    MOV AH,byte ptr [ESP + 0xcb]        ; 00559e07
    MOV dword ptr [ESP + 0x8],EDI       ; 00559e0e
    TEST AH,0x80                        ; 00559e12
    SETNZ AL                            ; 00559e15
    AND EAX,0xff                        ; 00559e18
    PUSH EAX                            ; 00559e1d
    MOV EAX,[0x00612560]                ; 00559e1e | DAT_00612560
    PUSH EAX                            ; 00559e23
    MOV EBX,0xe                         ; 00559e24
    MOV ESI,0xa                         ; 00559e29
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20 ; 00559e2e
        ;   XREF to: 00483e20 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(CDemonRenderer * this_ptr, int enabled)
    MOV EDX,0x8                         ; 00559e33
    MOV ECX,0xc                         ; 00559e38
    LEA EAX,[ESP + 0xc]                 ; 00559e3d
    ADD ESP,0x8                         ; 00559e41
    MOV EDI,dword ptr [0x00612560]      ; 00559e44 | DAT_00612560
    MOV dword ptr [ESP + 0x1c],EDX      ; 00559e4a
    PUSH EAX                            ; 00559e4e
    MOV dword ptr [ESP + 0x24],ECX      ; 00559e4f
    MOV dword ptr [ESP + 0x28],EBX      ; 00559e53
    PUSH EDI                            ; 00559e57
    MOV dword ptr [ESP + 0x30],ESI      ; 00559e58
    MOV EBX,0xd                         ; 00559e5c
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80 ; 00559e61
        ;   XREF to: 00481b80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    MOV EAX,0x9                         ; 00559e66
    MOV EDX,0xb                         ; 00559e6b
    ADD ESP,0x8                         ; 00559e70
    MOV ECX,0xf                         ; 00559e73
    MOV dword ptr [ESP + 0x1c],EAX      ; 00559e78
    LEA EAX,[ESP + 0x4]                 ; 00559e7c
    MOV EDI,0x8                         ; 00559e80
    PUSH EAX                            ; 00559e85
    MOV ESI,dword ptr [0x00612560]      ; 00559e86 | DAT_00612560
    MOV dword ptr [ESP + 0x24],EDX      ; 00559e8c
    PUSH ESI                            ; 00559e90
    MOV dword ptr [ESP + 0x2c],ECX      ; 00559e91
    MOV dword ptr [ESP + 0x30],EBX      ; 00559e95
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80 ; 00559e99
        ;   XREF to: 00481b80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    MOV EAX,0x9                         ; 00559e9e
    MOV ECX,0xc                         ; 00559ea3
    ADD ESP,0x8                         ; 00559ea8
    MOV ESI,0xa                         ; 00559eab
    MOV dword ptr [ESP + 0x20],EAX      ; 00559eb0
    LEA EAX,[ESP + 0x4]                 ; 00559eb4
    MOV dword ptr [ESP + 0x24],EBX      ; 00559eb8
    PUSH EAX                            ; 00559ebc
    MOV EBX,dword ptr [0x00612560]      ; 00559ebd | DAT_00612560
    MOV dword ptr [ESP + 0x20],EDI      ; 00559ec3
    PUSH EBX                            ; 00559ec7
    MOV dword ptr [ESP + 0x30],ECX      ; 00559ec8
    MOV EDI,0xe                         ; 00559ecc
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80 ; 00559ed1
        ;   XREF to: 00481b80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    MOV EAX,0xf                         ; 00559ed6
    MOV EDX,0xb                         ; 00559edb
    ADD ESP,0x8                         ; 00559ee0
    MOV EBX,0x8                         ; 00559ee3
    MOV dword ptr [ESP + 0x24],EAX      ; 00559ee8
    LEA EAX,[ESP + 0x4]                 ; 00559eec
    MOV ECX,dword ptr [0x00612560]      ; 00559ef0 | DAT_00612560
    PUSH EAX                            ; 00559ef6
    MOV dword ptr [ESP + 0x20],ESI      ; 00559ef7
    MOV dword ptr [ESP + 0x24],EDI      ; 00559efb
    PUSH ECX                            ; 00559eff
    MOV dword ptr [ESP + 0x30],EDX      ; 00559f00
    MOV EDI,0xb                         ; 00559f04
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80 ; 00559f09
        ;   XREF to: 00481b80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    MOV EAX,0x9                         ; 00559f0e
    ADD ESP,0x8                         ; 00559f13
    MOV EDX,dword ptr [0x00612560]      ; 00559f16 | DAT_00612560
    MOV dword ptr [ESP + 0x1c],EBX      ; 00559f1c
    MOV dword ptr [ESP + 0x28],EAX      ; 00559f20
    LEA EAX,[ESP + 0x4]                 ; 00559f24
    MOV dword ptr [ESP + 0x20],ESI      ; 00559f28
    PUSH EAX                            ; 00559f2c
    MOV dword ptr [ESP + 0x28],EDI      ; 00559f2d
    MOV EBX,0xd                         ; 00559f31
    PUSH EDX                            ; 00559f36
    MOV ESI,0xf                         ; 00559f37
    MOV EDI,0xe                         ; 00559f3c
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80 ; 00559f41
        ;   XREF to: 00481b80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    MOV ECX,0xc                         ; 00559f46
    ADD ESP,0x8                         ; 00559f4b
    LEA EAX,[ESP + 0x4]                 ; 00559f4e
    MOV dword ptr [ESP + 0x1c],ECX      ; 00559f52
    PUSH EAX                            ; 00559f56
    MOV EAX,[0x00612560]                ; 00559f57 | DAT_00612560
    MOV dword ptr [ESP + 0x24],EBX      ; 00559f5c
    PUSH EAX                            ; 00559f60
    MOV dword ptr [ESP + 0x2c],ESI      ; 00559f61
    MOV dword ptr [ESP + 0x30],EDI      ; 00559f65
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80 ; 00559f69
        ;   XREF to: 00481b80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00559f6e
    JMP 0x00559b79                      ; 00559f71
        ;   XREF to: 00559b79 (UNCONDITIONAL_JUMP)  ; LAB_00559b79


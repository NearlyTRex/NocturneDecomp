; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcube_cpp_CDemonCube_rotateVertices_FUN_00457650(CDemonCube *this_ptr,uint rendering_mode)
;
; Parameters:
; CDemonCube *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   rendering_mode
; Local Variables:
; CVector3i        Stack[-0x48]:12  local_48
; float            Stack[-0x3c]:4  local_3c
; float            Stack[-0x38]:4  local_38
; float            Stack[-0x34]:4  local_34
; uint             Stack[-0x30]:4  local_30
; uint             Stack[-0x2c]:4  local_2c
; uint             Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500 at 00497adb
;   core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_004990f0 at 0049913e
;
; Referenced Globals:
;   void* PTR_LAB_00457630 = 00457774
;   TerminatedCString s_core_dcube_cpp_0061a7dd
;   TerminatedCString s_CDemonCube_rotateVertici_0061a7ef
;   float g_CubeColorScaleFactor = 127
;   float g_CubeWorldToScreenScale = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CVector3f g_StaticColorVector
;   undefined4 g_StaticColorVector.y
;   undefined4 g_StaticColorVector.z
;   uchar g_ColorConstantsInitialized
;   CDemonRenderer g_CDemonRendererInstance
;   undefined4 DAT_02c6d590
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   UVector3 g_ZeroVector
;
; Called Functions:
;   core_dcube.cpp_buildAndRenderTrianglePrimitive_FUN_004566e0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
;   engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0048c970
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00457650
        ;   Label: core_dcube.cpp_CDemonCube_rotateVertices_FUN_00457650
    PUSH ESI                            ; 00457651
    PUSH EDI                            ; 00457652
    PUSH EBP                            ; 00457653
    MOV EBP,ESP                         ; 00457654
    SUB ESP,0x38                        ; 00457656
    PUSH 0x3f87558                      ; 00457659 | g_ZeroVector
    MOV EDX,dword ptr [0x006703ec]      ; 0045765e | g_CDemonRendererPtr2
    PUSH EDX                            ; 00457664 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 00457665
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045766a
    MOV ECX,dword ptr [EAX + 0x20]      ; 0045766d
    ADD ESP,0x8                         ; 00457670
    CMP ECX,0x4e20                      ; 00457673
    JG 0x0045785e                       ; 00457679
        ;   XREF to: 0045785e (CONDITIONAL_JUMP)  ; LAB_0045785e
    PUSH 0x1                            ; 0045767f
        ;   Label: LAB_0045767f
    MOV EAX,[0x006703ec]                ; 00457681 | g_CDemonRendererPtr2
    PUSH EAX                            ; 00457686 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0 ; 00457687
        ;   XREF to: 0048caa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0045768c
    PUSH 0x1                            ; 0045768f
    MOV EDX,dword ptr [0x006703ec]      ; 00457691 | g_CDemonRendererPtr2
    PUSH EDX                            ; 00457697 | g_CDemonRendererInstance
    MOV ESI,dword ptr [EBP + 0x14]      ; 00457698
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00 ; 0045769b
        ;   XREF to: 0048ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(CDemonRenderer * this_ptr, int state_flag)
    MOV EAX,dword ptr [EBP + 0x14]      ; 004576a0
    MOV EDI,dword ptr [0x006703ec]      ; 004576a3 | g_CDemonRendererPtr2
    ADD ESP,0x8                         ; 004576a9
    XOR ECX,ECX                         ; 004576ac
    MOV ESI,dword ptr [ESI + 0x24]      ; 004576ae
    MOV dword ptr [EBP + -0x10],ECX     ; 004576b1
    MOV dword ptr [EBP + -0xc],ECX      ; 004576b4
    MOV EDX,dword ptr [EAX + 0x20]      ; 004576b7
    MOV EDI,dword ptr [EDI]             ; 004576ba | g_CDemonRendererInstance
    TEST EDX,EDX                        ; 004576bc
    JLE 0x00457716                      ; 004576be
        ;   XREF to: 00457716 (CONDITIONAL_JUMP)  ; LAB_00457716
    LEA EBX,[EBP + -0x38]               ; 004576c0
        ;   Label: LAB_004576c0
    MOV EAX,ESI                         ; 004576c3
    FLD float ptr [EAX]                 ; 004576c5
    FMUL float ptr [0x0065c6b0]         ; 004576c7 | g_CubeWorldToScreenScale
    FISTP dword ptr [EBX]               ; 004576cd
    FLD float ptr [EAX + 0x4]           ; 004576cf
    FMUL float ptr [0x0065c6b0]         ; 004576d2 | g_CubeWorldToScreenScale
    FISTP dword ptr [EBX + 0x4]         ; 004576d8
    FLD float ptr [EAX + 0x8]           ; 004576db
    FMUL float ptr [0x0065c6b0]         ; 004576de | g_CubeWorldToScreenScale
    FISTP dword ptr [EBX + 0x8]         ; 004576e4
    LEA EAX,[EBP + -0x38]               ; 004576e7
    PUSH EAX                            ; 004576ea
    PUSH EDI                            ; 004576eb
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004576ec
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV DH,byte ptr [EDI + 0x13]        ; 004576f1
    ADD ESP,0x8                         ; 004576f4
    TEST DH,0x80                        ; 004576f7
    JNZ 0x004576ff                      ; 004576fa
        ;   XREF to: 004576ff (CONDITIONAL_JUMP)  ; LAB_004576ff
    INC dword ptr [EBP + -0x10]         ; 004576fc
    MOV ECX,dword ptr [EBP + -0xc]      ; 004576ff
        ;   Label: LAB_004576ff
    MOV EDX,dword ptr [EBP + 0x14]      ; 00457702
    ADD EDI,0x30                        ; 00457705
    ADD ESI,0xc                         ; 00457708
    INC ECX                             ; 0045770b
    MOV EBX,dword ptr [EDX + 0x20]      ; 0045770c
    MOV dword ptr [EBP + -0xc],ECX      ; 0045770f
    CMP ECX,EBX                         ; 00457712
    JL 0x004576c0                       ; 00457714
        ;   XREF to: 004576c0 (CONDITIONAL_JUMP)  ; LAB_004576c0
    MOV EDX,dword ptr [EBP + 0x14]      ; 00457716
        ;   Label: LAB_00457716
    MOV EAX,dword ptr [EBP + -0x10]     ; 00457719
    CMP EAX,dword ptr [EDX + 0x20]      ; 0045771c
    JNZ 0x00457737                      ; 0045771f
        ;   XREF to: 00457737 (CONDITIONAL_JUMP)  ; LAB_00457737
    MOV EAX,[0x006703ec]                ; 00457721 | g_CDemonRendererPtr2
    MOV EDX,dword ptr [EAX + 0x18]      ; 00457726 | DAT_02c6d590
    TEST EDX,EDX                        ; 00457729
    JNZ 0x00457737                      ; 0045772b
        ;   XREF to: 00457737 (CONDITIONAL_JUMP)  ; LAB_00457737
    PUSH EDX                            ; 0045772d
    PUSH EAX                            ; 0045772e | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0 ; 0045772f
        ;   XREF to: 0048caa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00457734
    MOV AH,byte ptr [0x015c42a0]        ; 00457737 | g_ColorConstantsInitialized
        ;   Label: LAB_00457737
    TEST AH,0x1                         ; 0045773d
    JZ 0x0045788c                       ; 00457740
        ;   XREF to: 0045788c (CONDITIONAL_JUMP)  ; LAB_0045788c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00457746
        ;   Label: LAB_00457746
    XOR ECX,ECX                         ; 00457749
    MOV EBX,dword ptr [EAX + 0x28]      ; 0045774b
    MOV dword ptr [EBP + -0x4],ECX      ; 0045774e
    TEST EBX,EBX                        ; 00457751
    JLE 0x00457836                      ; 00457753
        ;   XREF to: 00457836 (CONDITIONAL_JUMP)  ; LAB_00457836
    MOV EAX,dword ptr [EBP + 0x18]      ; 00457759
    SHL EAX,0x2                         ; 0045775c
    MOV dword ptr [EBP + -0x8],ECX      ; 0045775f
    MOV dword ptr [EBP + -0x14],EAX     ; 00457762
    CMP dword ptr [EBP + 0x18],0x4      ; 00457765
        ;   Label: LAB_00457765
    JA 0x00457774                       ; 00457769
        ;   XREF to: 00457774 (CONDITIONAL_JUMP)  ; LAB_00457774
    MOV EAX,dword ptr [EBP + -0x14]     ; 0045776b
    JMP dword ptr [EAX + 0x457630]      ; 0045776e | PTR_LAB_00457630
    MOV EAX,dword ptr [EBP + 0x14]      ; 00457774
        ;   Label: LAB_00457774
    MOV ESI,dword ptr [EBP + -0x8]      ; 00457777
    MOV EAX,dword ptr [EAX + 0x2c]      ; 0045777a
    ADD EAX,ESI                         ; 0045777d
    LEA EDX,[EAX + 0xc]                 ; 0045777f
    LEA EAX,[EBP + -0x2c]               ; 00457782
    CMP EAX,EDX                         ; 00457785
    JZ 0x0045779a                       ; 00457787
        ;   XREF to: 0045779a (CONDITIONAL_JUMP)  ; LAB_0045779a
    MOV EAX,dword ptr [EDX]             ; 00457789
    MOV dword ptr [EBP + -0x2c],EAX     ; 0045778b
    MOV EAX,dword ptr [EDX + 0x4]       ; 0045778e
    MOV dword ptr [EBP + -0x28],EAX     ; 00457791
    MOV EAX,dword ptr [EDX + 0x8]       ; 00457794
    MOV dword ptr [EBP + -0x24],EAX     ; 00457797
    FLD float ptr [0x0061a84a]          ; 0045779a | g_CubeColorScaleFactor
        ;   Label: LAB_0045779a
    FLD float ptr [EBP + -0x2c]         ; 004577a0
    FMUL ST1                            ; 004577a3
    FSTP float ptr [EBP + -0x2c]        ; 004577a5
    FLD float ptr [EBP + -0x28]         ; 004577a8
    FMUL ST1                            ; 004577ab
    FSTP float ptr [EBP + -0x28]        ; 004577ad
    FMUL float ptr [EBP + -0x24]        ; 004577b0
    FSTP float ptr [EBP + -0x24]        ; 004577b3
    LEA EAX,[EBP + 0xffffffd4]          ; 004577b6
    FLD float ptr [EAX]                 ; 004577bc
    FLD float ptr [EAX + 0x4]           ; 004577be
    FLD float ptr [EAX + 0x8]           ; 004577c1
    FISTP dword ptr [EBP + 0xffffffe8]  ; 004577c4
    FISTP dword ptr [EBP + 0xffffffe4]  ; 004577ca
    FISTP dword ptr [EBP + 0xffffffe0]  ; 004577d0
    MOV EAX,dword ptr [EBP + -0x18]     ; 004577d6
    AND EAX,0xff                        ; 004577d9
    PUSH EAX                            ; 004577de
    MOV EAX,dword ptr [EBP + -0x1c]     ; 004577df
    AND EAX,0xff                        ; 004577e2
    PUSH EAX                            ; 004577e7
    MOV EAX,dword ptr [EBP + -0x20]     ; 004577e8
    AND EAX,0xff                        ; 004577eb
    PUSH EAX                            ; 004577f0
    MOV EDI,dword ptr [0x006703ec]      ; 004577f1 | g_CDemonRendererPtr2
    PUSH EDI                            ; 004577f7 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0048c970 ; 004577f8
        ;   XREF to: 0048c970 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0048c970(CDemonRenderer * this_ptr, int red_component, int green_component, int blue_component)
    ADD ESP,0x10                        ; 004577fd
    MOV EAX,dword ptr [EBP + 0x14]      ; 00457800
        ;   Label: LAB_00457800
    MOV ECX,dword ptr [EBP + -0x8]      ; 00457803
    MOV EBX,dword ptr [EBP + -0x8]      ; 00457806
    MOV EDX,dword ptr [EAX + 0x24]      ; 00457809
    MOV EAX,dword ptr [EAX + 0x2c]      ; 0045780c
    PUSH EDX                            ; 0045780f
    ADD EAX,ECX                         ; 00457810
    MOV ESI,dword ptr [EBP + -0x4]      ; 00457812
    PUSH EAX                            ; 00457815
    ADD EBX,0x20                        ; 00457816
    INC ESI                             ; 00457819
    CALL core_dcube.cpp_buildAndRenderTrianglePrimitive_FUN_004566e0 ; 0045781a
        ;   XREF to: 004566e0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_buildAndRenderTrianglePrimitive_FUN_004566e0(CVector3f * * triangle_vertex_pointers, CVector3f * vertex_buffer)
    MOV EDX,dword ptr [EBP + 0x14]      ; 0045781f
    MOV dword ptr [EBP + -0x8],EBX      ; 00457822
    MOV dword ptr [EBP + -0x4],ESI      ; 00457825
    MOV EDI,dword ptr [EDX + 0x28]      ; 00457828
    ADD ESP,0x8                         ; 0045782b
    CMP ESI,EDI                         ; 0045782e
    JL 0x00457765                       ; 00457830
        ;   XREF to: 00457765 (CONDITIONAL_JUMP)  ; LAB_00457765
    PUSH 0x1                            ; 00457836
        ;   Label: LAB_00457836
    MOV EAX,[0x006703ec]                ; 00457838 | g_CDemonRendererPtr2
    PUSH EAX                            ; 0045783d | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0 ; 0045783e
        ;   XREF to: 0048caa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00457843
    PUSH 0x0                            ; 00457846
    MOV EDX,dword ptr [0x006703ec]      ; 00457848 | g_CDemonRendererPtr2
    PUSH EDX                            ; 0045784e | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00 ; 0045784f
        ;   XREF to: 0048ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 00457854
    MOV ESP,EBP                         ; 00457857
    POP EBP                             ; 00457859
    POP EDI                             ; 0045785a
    POP ESI                             ; 0045785b
    POP EBX                             ; 0045785c
    RET                                 ; 0045785d
    PUSH 0x4e20                         ; 0045785e
        ;   Label: LAB_0045785e
    PUSH ECX                            ; 00457863
    MOV EBX,0x61a7dd                    ; 00457864 | = "..\\core\\dcube.cpp"
    MOV ESI,0x7bb                       ; 00457869
    PUSH 0x61a7ef                       ; 0045786e | = "CDemonCube::rotateVerticies - tried t..."
    MOV dword ptr [0x02f0ca48],EBX      ; 00457873 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00457879 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0045787f
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 00457884
    JMP 0x0045767f                      ; 00457887
        ;   XREF to: 0045767f (UNCONDITIONAL_JUMP)  ; LAB_0045767f
    MOV EDI,0x3f13cd3a                  ; 0045788c
        ;   Label: LAB_0045788c
    MOV DL,AH                           ; 00457891
    MOV EAX,0xbf13cd3a                  ; 00457893
    OR DL,0x1                           ; 00457898
    MOV dword ptr [0x015c4294],EDI      ; 0045789b | g_StaticColorVector
    MOV dword ptr [0x015c429c],EDI      ; 004578a1 | g_StaticColorVector.z
    MOV [0x015c4298],EAX                ; 004578a7 | g_StaticColorVector.y
    MOV byte ptr [0x015c42a0],DL        ; 004578ac | g_ColorConstantsInitialized
    JMP 0x00457746                      ; 004578b2
        ;   XREF to: 00457746 (UNCONDITIONAL_JUMP)  ; LAB_00457746


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_moon_cpp_CMoon_render_FUN_004f9670(CMoon *this_ptr)
;
; Parameters:
; CMoon *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   core_menu.cpp_FUN_004e7dc0 at 004e7ddf
;   core_menu.cpp_FUN_004e85a0 at 004e869b
;   core_menu.cpp_FUN_004e8f80 at 004e9007
;   core_menu.cpp_FUN_004e94f0 at 004e957c
;   core_menu.cpp_FUN_004ea280 at 004ea30d
;   core_menu.cpp_showMainGameMenu_FUN_004ea4d0 at 004ea60a
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_00600774
;   undefined4 DAT_00600778
;   undefined4 DAT_0060077c
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_01bdd7e4
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.rendering_mode
;   undefined4 g_CDemonSetInstance.light_direction.x
;   undefined4 g_CDemonSetInstance.light_direction.y
;   undefined4 g_CDemonSetInstance.light_direction.z
;   undefined4 g_CDemonSetInstance.ambient_base_quick
;
; Called Functions:
;   core_set.cpp_CDemonSet_setFlatColor_FUN_0053b100
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90
;   engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046cc40
;   engine_matrix.c_FUN_0046d090
;   engine_special.cpp_clearScreen_FUN_00560d70
;   sound_sndmain.cpp_processAudio_FUN_00559120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f9670
        ;   Label: core_moon.cpp_CMoon_render_FUN_004f9670
    PUSH ESI                            ; 004f9671
    PUSH EDI                            ; 004f9672
    PUSH EBP                            ; 004f9673
    SUB ESP,0x40                        ; 004f9674
    MOV ESI,dword ptr [ESP + 0x54]      ; 004f9677
    CALL sound_sndmain.cpp_processAudio_FUN_00559120 ; 004f967b
        ;   XREF to: 00559120 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_processAudio_FUN_00559120()
    CALL engine_special.cpp_clearScreen_FUN_00560d70 ; 004f9680
        ;   XREF to: 00560d70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_00560d70()
    MOV EDX,0x3ee1f6a9                  ; 004f9685
    MOV ECX,0x3f290d17                  ; 004f968a
    MOV EBX,0xbf1b8a5d                  ; 004f968f
    MOV EDI,0xbe8f4c90                  ; 004f9694
    MOV EBP,0x3f3e9ec3                  ; 004f9699
    MOV EAX,0x3f1b2218                  ; 004f969e
    MOV dword ptr [ESP],EDX             ; 004f96a3
    MOV dword ptr [ESP + 0x4],ECX       ; 004f96a6
    MOV dword ptr [ESP + 0x8],EBX       ; 004f96aa
    MOV dword ptr [ESP + 0xc],EDI       ; 004f96ae
    MOV dword ptr [ESP + 0x10],EBP      ; 004f96b2
    MOV dword ptr [ESP + 0x14],EAX      ; 004f96b6
    MOV EDX,0x3f5a429e                  ; 004f96ba
    MOV ECX,0xbdc77681                  ; 004f96bf
    MOV EBX,0x3f037100                  ; 004f96c4
    MOV EDI,0x404a54de                  ; 004f96c9
    MOV EBP,0x40f41b09                  ; 004f96ce
    MOV EAX,0xc0e128b7                  ; 004f96d3
    MOV dword ptr [ESP + 0x18],EDX      ; 004f96d8
    MOV dword ptr [ESP + 0x30],EAX      ; 004f96dc
    LEA EAX,[ESP + 0x28]                ; 004f96e0
    MOV dword ptr [ESP + 0x1c],ECX      ; 004f96e4
    PUSH EAX                            ; 004f96e8
    MOV EDX,dword ptr [0x005f2afc]      ; 004f96e9 | DAT_005f2afc
    MOV dword ptr [ESP + 0x24],EBX      ; 004f96ef
    PUSH EDX                            ; 004f96f3 | DAT_01bdd7e4
    MOV dword ptr [ESP + 0x30],EDI      ; 004f96f4
    MOV dword ptr [ESP + 0x34],EBP      ; 004f96f8
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90 ; 004f96fc
        ;   XREF to: 0046cb90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90(CDemonRenderer * this_ptr, CVector3f * point_ptr)
    ADD ESP,0x8                         ; 004f9701
    MOV ECX,dword ptr [0x005f2afc]      ; 004f9704 | DAT_005f2afc
    PUSH 0x422c9ce4                     ; 004f970a
    PUSH ECX                            ; 004f970f | DAT_01bdd7e4
    CALL engine_matrix.c_FUN_0046d090   ; 004f9710
        ;   XREF to: 0046d090 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_0046d090()
    ADD ESP,0x8                         ; 004f9715
    MOV EAX,ESP                         ; 004f9718
    PUSH EAX                            ; 004f971a
    MOV EBX,dword ptr [0x005f2afc]      ; 004f971b | DAT_005f2afc
    PUSH EBX                            ; 004f9721 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046cc40 ; 004f9722
        ;   XREF to: 0046cc40 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046cc40(CDemonRenderer * this_ptr, CMatrix3x3f * transform_matrix)
    ADD ESP,0x8                         ; 004f9727
    LEA EAX,[ESP + 0x34]                ; 004f972a
    XOR EDI,EDI                         ; 004f972e
    PUSH EAX                            ; 004f9730
    MOV EDX,dword ptr [0x005f2afc]      ; 004f9731 | DAT_005f2afc
    MOV dword ptr [ESP + 0x38],EDI      ; 004f9737
    PUSH EDX                            ; 004f973b | DAT_01bdd7e4
    MOV dword ptr [ESP + 0x40],EDI      ; 004f973c
    MOV dword ptr [ESP + 0x44],EDI      ; 004f9740
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 004f9744
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004f9749
    MOV EAX,[0x00603b28]                ; 004f974c | g_CDemonSetPtr
    PUSH 0x10000                        ; 004f9751
    MOV dword ptr [EAX + 0x15ae84],0x1  ; 004f9756 | g_CDemonSetInstance.rendering_mode
    PUSH 0xc350                         ; 004f9760
    MOV dword ptr [EAX + 0x15ae88],0xffff6f78 ; 004f9765 | g_CDemonSetInstance.light_direction.x
    PUSH 0xc350                         ; 004f976f
    MOV dword ptr [EAX + 0x15ae8c],0xffff6f78 ; 004f9774 | g_CDemonSetInstance.light_direction.y
    PUSH EAX                            ; 004f977e | g_CDemonSetInstance
    MOV dword ptr [EAX + 0x15ae90],0x9088 ; 004f977f | g_CDemonSetInstance.light_direction.z
    CALL core_set.cpp_CDemonSet_setFlatColor_FUN_0053b100 ; 004f9789
        ;   XREF to: 0053b100 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setFlatColor_FUN_0053b100(CDemonSet * this_ptr, int light_scale, int color_scale, int fog_scale)
    MOV EAX,[0x00603b28]                ; 004f978e | g_CDemonSetPtr
    MOV ECX,dword ptr [0x00600774]      ; 004f9793 | DAT_00600774
    MOV EBX,dword ptr [0x00600778]      ; 004f9799 | DAT_00600778
    ADD ESP,0x10                        ; 004f979f
    INC ECX                             ; 004f97a2
    MOV dword ptr [EAX + 0x15ae94],0x1964 ; 004f97a3 | g_CDemonSetInstance.ambient_base_quick
    INC EBX                             ; 004f97ad
    MOV dword ptr [EAX + 0x15ae84],EDI  ; 004f97ae | g_CDemonSetInstance.rendering_mode
    MOV EDI,dword ptr [0x0060077c]      ; 004f97b4 | DAT_0060077c
    MOV dword ptr [0x00600774],ECX      ; 004f97ba | DAT_00600774
    INC EDI                             ; 004f97c0
    MOV dword ptr [0x00600778],EBX      ; 004f97c1 | DAT_00600778
    MOV dword ptr [0x0060077c],EDI      ; 004f97c7 | DAT_0060077c
    CMP ECX,0x3c                        ; 004f97cd
    JG 0x004f9969                       ; 004f97d0
        ;   XREF to: 004f9969 (CONDITIONAL_JUMP)  ; LAB_004f9969
    CMP dword ptr [0x00600778],0x2d     ; 004f97d6 | DAT_00600778
        ;   Label: LAB_004f97d6
    JLE 0x004f97e7                      ; 004f97dd
        ;   XREF to: 004f97e7 (CONDITIONAL_JUMP)  ; LAB_004f97e7
    XOR ECX,ECX                         ; 004f97df
    MOV dword ptr [0x00600778],ECX      ; 004f97e1 | DAT_00600778
    CMP dword ptr [0x0060077c],0x4b     ; 004f97e7 | DAT_0060077c
        ;   Label: LAB_004f97e7
    JLE 0x004f97f8                      ; 004f97ee
        ;   XREF to: 004f97f8 (CONDITIONAL_JUMP)  ; LAB_004f97f8
    XOR EDI,EDI                         ; 004f97f0
    MOV dword ptr [0x0060077c],EDI      ; 004f97f2 | DAT_0060077c
    MOV EBP,dword ptr [ESI + 0xad0]     ; 004f97f8
        ;   Label: LAB_004f97f8
    ADD EBP,0x2                         ; 004f97fe
    MOV dword ptr [ESI + 0xad0],EBP     ; 004f9801
    CMP EBP,0x27f                       ; 004f9807
    JLE 0x004f9819                      ; 004f980d
        ;   XREF to: 004f9819 (CONDITIONAL_JUMP)  ; LAB_004f9819
    MOV dword ptr [ESI + 0xad0],0xfffffd80 ; 004f980f
    MOV EDX,dword ptr [ESI + 0xad4]     ; 004f9819
        ;   Label: LAB_004f9819
    ADD EDX,0x2                         ; 004f981f
    MOV dword ptr [ESI + 0xad4],EDX     ; 004f9822
    CMP EDX,0x27f                       ; 004f9828
    JLE 0x004f983a                      ; 004f982e
        ;   XREF to: 004f983a (CONDITIONAL_JUMP)  ; LAB_004f983a
    MOV dword ptr [ESI + 0xad4],0xfffffd80 ; 004f9830
    MOV EBX,dword ptr [ESI + 0xad8]     ; 004f983a
        ;   Label: LAB_004f983a
    DEC EBX                             ; 004f9840
    MOV dword ptr [ESI + 0xad8],EBX     ; 004f9841
    CMP EBX,0xfffffe21                  ; 004f9847
    JGE 0x004f9859                      ; 004f984d
        ;   XREF to: 004f9859 (CONDITIONAL_JUMP)  ; LAB_004f9859
    MOV dword ptr [ESI + 0xad8],0x1df   ; 004f984f
    MOV EBP,dword ptr [ESI + 0xadc]     ; 004f9859
        ;   Label: LAB_004f9859
    DEC EBP                             ; 004f985f
    MOV dword ptr [ESI + 0xadc],EBP     ; 004f9860
    CMP EBP,0xfffffe21                  ; 004f9866
    JGE 0x004f9878                      ; 004f986c
        ;   XREF to: 004f9878 (CONDITIONAL_JUMP)  ; LAB_004f9878
    MOV dword ptr [ESI + 0xadc],0x1df   ; 004f986e
    CMP dword ptr [ESI + 0xae4],0x0     ; 004f9878
        ;   Label: LAB_004f9878
    JZ 0x004f9975                       ; 004f987f
        ;   XREF to: 004f9975 (CONDITIONAL_JUMP)  ; LAB_004f9975
    MOV EDI,dword ptr [ESI + 0xae0]     ; 004f9885
    ADD EDI,0x1f4                       ; 004f988b
    MOV dword ptr [ESI + 0xae0],EDI     ; 004f9891
    CMP EDI,0xffff                      ; 004f9897
    JLE 0x004f98b3                      ; 004f989d
        ;   XREF to: 004f98b3 (CONDITIONAL_JUMP)  ; LAB_004f98b3
    MOV dword ptr [ESI + 0xae0],0xffff  ; 004f989f
    MOV dword ptr [ESI + 0xae4],0x0     ; 004f98a9
    PUSH 0xffff                         ; 004f98b3
        ;   Label: LAB_004f98b3
    MOV EAX,dword ptr [ESI + 0xad8]     ; 004f98b8
    PUSH EAX                            ; 004f98be
    MOV EDX,dword ptr [ESI + 0xad0]     ; 004f98bf
    PUSH EDX                            ; 004f98c5
    PUSH 0x1d883a8                      ; 004f98c6
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0 ; 004f98cb
        ;   XREF to: 0040d6f0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004f98d0
    PUSH 0xffff                         ; 004f98d3
    MOV ECX,dword ptr [ESI + 0xad8]     ; 004f98d8
    PUSH ECX                            ; 004f98de
    MOV EBX,dword ptr [ESI + 0xad4]     ; 004f98df
    PUSH EBX                            ; 004f98e5
    PUSH 0x1d883a8                      ; 004f98e6
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0 ; 004f98eb
        ;   XREF to: 0040d6f0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004f98f0
    PUSH 0xffff                         ; 004f98f3
    MOV EDI,dword ptr [ESI + 0xadc]     ; 004f98f8
    PUSH EDI                            ; 004f98fe
    MOV EBP,dword ptr [ESI + 0xad0]     ; 004f98ff
    PUSH EBP                            ; 004f9905
    PUSH 0x1d883a8                      ; 004f9906
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0 ; 004f990b
        ;   XREF to: 0040d6f0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004f9910
    PUSH 0xffff                         ; 004f9913
    MOV EAX,dword ptr [ESI + 0xadc]     ; 004f9918
    PUSH EAX                            ; 004f991e
    MOV EDX,dword ptr [ESI + 0xad4]     ; 004f991f
    PUSH EDX                            ; 004f9925
    PUSH 0x1d883a8                      ; 004f9926
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0 ; 004f992b
        ;   XREF to: 0040d6f0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004f9930
    MOV ECX,dword ptr [ESI + 0xae0]     ; 004f9933
    PUSH ECX                            ; 004f9939
    PUSH 0x40                           ; 004f993a
    PUSH 0x40                           ; 004f993c
    PUSH 0x1d88628                      ; 004f993e
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0 ; 004f9943
        ;   XREF to: 0040d6f0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004f9948
    PUSH 0xffff                         ; 004f994b
    PUSH 0x0                            ; 004f9950
    PUSH 0x0                            ; 004f9952
    PUSH 0x1d88614                      ; 004f9954
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0 ; 004f9959
        ;   XREF to: 0040d6f0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004f995e
    ADD ESP,0x40                        ; 004f9961
    POP EBP                             ; 004f9964
    POP EDI                             ; 004f9965
    POP ESI                             ; 004f9966
    POP EBX                             ; 004f9967
    RET                                 ; 004f9968
    XOR EAX,EAX                         ; 004f9969
        ;   Label: LAB_004f9969
    MOV [0x00600774],EAX                ; 004f996b | DAT_00600774
    JMP 0x004f97d6                      ; 004f9970
        ;   XREF to: 004f97d6 (UNCONDITIONAL_JUMP)  ; LAB_004f97d6
    MOV ECX,dword ptr [ESI + 0xae0]     ; 004f9975
        ;   Label: LAB_004f9975
    SUB ECX,0x1f4                       ; 004f997b
    MOV dword ptr [ESI + 0xae0],ECX     ; 004f9981
    CMP ECX,0x1388                      ; 004f9987
    JGE 0x004f98b3                      ; 004f998d
        ;   XREF to: 004f98b3 (CONDITIONAL_JUMP)  ; LAB_004f98b3
    MOV dword ptr [ESI + 0xae0],0x1388  ; 004f9993
    MOV dword ptr [ESI + 0xae4],0x1     ; 004f999d
    JMP 0x004f98b3                      ; 004f99a7
        ;   XREF to: 004f98b3 (UNCONDITIONAL_JUMP)  ; LAB_004f98b3


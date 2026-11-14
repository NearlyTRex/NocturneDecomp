; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_moon_cpp_CMoon_render_FUN_00502510(CMoon *this_ptr)
;
; Parameters:
; CMoon *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   core_menu.cpp_FUN_004ebf10 at 004ec035
;   core_menu.cpp_FUN_004ecc70 at 004ecd15
;   core_menu.cpp_FUN_004ed260 at 004ed30a
;   core_menu.cpp_FUN_004ee1a0 at 004ee246
;   core_menu.cpp_calibrateGamepad_FUN_004eb490 at 004eb4af
;   core_menu.cpp_showMainGameMenu_FUN_004ee3f0 at 004ee52a
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_0061846c
;   undefined4 DAT_00618470
;   undefined4 DAT_00618474
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01d1cdc4
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.rendering_mode
;   undefined4 g_CDemonSetInstance.light_direction.x
;   undefined4 g_CDemonSetInstance.light_direction.y
;   undefined4 g_CDemonSetInstance.light_direction.z
;   undefined4 g_CDemonSetInstance.ambient_base_quick
;
; Called Functions:
;   core_set.cpp_CDemonSet_setFlatColor_FUN_005344c0
;   crt_math.c_round_FUN_005b7ff0
;   engine_3d.c_setBlendMode_FUN_00406df0
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046afb0
;   engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0046b4b0
;   engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046b060
;   engine_special.cpp_clearScreen_FUN_0055b1f0
;   sound_sndmain.cpp_processAudio_FUN_00553580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00502510
        ;   Label: core_moon.cpp_CMoon_render_FUN_00502510
    PUSH ESI                            ; 00502511
    PUSH EDI                            ; 00502512
    PUSH EBP                            ; 00502513
    SUB ESP,0x44                        ; 00502514
    CALL sound_sndmain.cpp_processAudio_FUN_00553580 ; 00502517
        ;   XREF to: 00553580 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_processAudio_FUN_00553580()
    CALL engine_special.cpp_clearScreen_FUN_0055b1f0 ; 0050251c
        ;   XREF to: 0055b1f0 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0055b1f0()
    MOV EDX,0x3ee1f6a9                  ; 00502521
    MOV ECX,0x3f290d17                  ; 00502526
    MOV EBX,0xbf1b8a5d                  ; 0050252b
    MOV ESI,0xbe8f4c90                  ; 00502530
    MOV EDI,0x3f3e9ec3                  ; 00502535
    MOV EBP,0x3f1b2218                  ; 0050253a
    MOV EAX,0x3f5a429e                  ; 0050253f
    MOV dword ptr [ESP],EDX             ; 00502544
    MOV dword ptr [ESP + 0x4],ECX       ; 00502547
    MOV dword ptr [ESP + 0x8],EBX       ; 0050254b
    MOV dword ptr [ESP + 0xc],ESI       ; 0050254f
    MOV dword ptr [ESP + 0x10],EDI      ; 00502553
    MOV dword ptr [ESP + 0x14],EBP      ; 00502557
    MOV dword ptr [ESP + 0x18],EAX      ; 0050255b
    MOV EDX,0xbdc77681                  ; 0050255f
    MOV ECX,0x3f037100                  ; 00502564
    MOV EBX,0x404a54de                  ; 00502569
    MOV ESI,0x40f41b09                  ; 0050256e
    MOV EDI,0xc0e128b7                  ; 00502573
    LEA EAX,[ESP + 0x28]                ; 00502578
    MOV EBP,dword ptr [0x0060b280]      ; 0050257c | DAT_0060b280
    MOV dword ptr [ESP + 0x1c],EDX      ; 00502582
    PUSH EAX                            ; 00502586
    MOV dword ptr [ESP + 0x24],ECX      ; 00502587
    MOV dword ptr [ESP + 0x2c],EBX      ; 0050258b
    PUSH EBP                            ; 0050258f | DAT_01ba5c50
    MOV dword ptr [ESP + 0x34],ESI      ; 00502590
    MOV dword ptr [ESP + 0x38],EDI      ; 00502594
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046afb0 ; 00502598
        ;   XREF to: 0046afb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046afb0(CDemonRenderer * this_ptr, CVector3f * point_ptr)
    ADD ESP,0x8                         ; 0050259d
    MOV EAX,[0x0060b280]                ; 005025a0 | DAT_0060b280
    PUSH 0x422c9ce4                     ; 005025a5
    PUSH EAX                            ; 005025aa | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0046b4b0 ; 005025ab
        ;   XREF to: 0046b4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0046b4b0(CDemonRenderer * this_ptr, float field_of_view)
    ADD ESP,0x8                         ; 005025b0
    MOV EAX,ESP                         ; 005025b3
    PUSH EAX                            ; 005025b5
    MOV EDX,dword ptr [0x0060b280]      ; 005025b6 | DAT_0060b280
    PUSH EDX                            ; 005025bc | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046b060 ; 005025bd
        ;   XREF to: 0046b060 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046b060(CDemonRenderer * this_ptr, CMatrix3x3f * transform_matrix)
    ADD ESP,0x8                         ; 005025c2
    LEA EAX,[ESP + 0x34]                ; 005025c5
    XOR ECX,ECX                         ; 005025c9
    PUSH EAX                            ; 005025cb
    MOV EDI,dword ptr [0x0060b280]      ; 005025cc | DAT_0060b280
    MOV dword ptr [ESP + 0x38],ECX      ; 005025d2
    PUSH EDI                            ; 005025d6 | DAT_01ba5c50
    MOV dword ptr [ESP + 0x40],ECX      ; 005025d7
    MOV dword ptr [ESP + 0x44],ECX      ; 005025db
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 005025df
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 005025e4
    MOV EAX,[0x0061b5a8]                ; 005025e7 | g_CDemonSetPtr
    PUSH 0x10000                        ; 005025ec
    MOV dword ptr [EAX + 0x15ae84],0x1  ; 005025f1 | g_CDemonSetInstance.rendering_mode
    PUSH 0xc350                         ; 005025fb
    MOV dword ptr [EAX + 0x15ae88],0xffff6f78 ; 00502600 | g_CDemonSetInstance.light_direction.x
    PUSH 0xc350                         ; 0050260a
    MOV dword ptr [EAX + 0x15ae8c],0xffff6f78 ; 0050260f | g_CDemonSetInstance.light_direction.y
    PUSH EAX                            ; 00502619 | g_CDemonSetInstance
    XOR EBX,EBX                         ; 0050261a
    MOV dword ptr [EAX + 0x15ae90],0x9088 ; 0050261c | g_CDemonSetInstance.light_direction.z
    CALL core_set.cpp_CDemonSet_setFlatColor_FUN_005344c0 ; 00502626
        ;   XREF to: 005344c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setFlatColor_FUN_005344c0(CDemonSet * this_ptr, int light_scale, int color_scale, int fog_scale)
    MOV EAX,[0x0061b5a8]                ; 0050262b | g_CDemonSetPtr
    MOV EBP,dword ptr [0x0061846c]      ; 00502630 | DAT_0061846c
    MOV EDX,dword ptr [0x00618474]      ; 00502636 | DAT_00618474
    ADD ESP,0x10                        ; 0050263c
    INC EBP                             ; 0050263f
    MOV dword ptr [EAX + 0x15ae94],0x1964 ; 00502640 | g_CDemonSetInstance.ambient_base_quick
    INC EDX                             ; 0050264a
    MOV dword ptr [EAX + 0x15ae84],EBX  ; 0050264b | g_CDemonSetInstance.rendering_mode
    MOV EAX,[0x00618470]                ; 00502651 | DAT_00618470
    MOV dword ptr [0x0061846c],EBP      ; 00502656 | DAT_0061846c
    INC EAX                             ; 0050265c
    MOV dword ptr [0x00618474],EDX      ; 0050265d | DAT_00618474
    MOV [0x00618470],EAX                ; 00502663 | DAT_00618470
    CMP EBP,0x3c                        ; 00502668
    JG 0x005026f1                       ; 0050266b
        ;   XREF to: 005026f1 (CONDITIONAL_JUMP)  ; LAB_005026f1
    CMP dword ptr [0x00618470],0x2d     ; 00502671 | DAT_00618470
        ;   Label: LAB_00502671
    JLE 0x00502682                      ; 00502678
        ;   XREF to: 00502682 (CONDITIONAL_JUMP)  ; LAB_00502682
    XOR EDI,EDI                         ; 0050267a
    MOV dword ptr [0x00618470],EDI      ; 0050267c | DAT_00618470
    CMP dword ptr [0x00618474],0x4b     ; 00502682 | DAT_00618474
        ;   Label: LAB_00502682
    JLE 0x00502692                      ; 00502689
        ;   XREF to: 00502692 (CONDITIONAL_JUMP)  ; LAB_00502692
    XOR EAX,EAX                         ; 0050268b
    MOV [0x00618474],EAX                ; 0050268d | DAT_00618474
    PUSH 0x1                            ; 00502692
        ;   Label: LAB_00502692
    CALL engine_3d.c_setBlendMode_FUN_00406df0 ; 00502694
        ;   XREF to: 00406df0 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setBlendMode_FUN_00406df0(int blend_mode)
    FLD float ptr [0x01d1cdc4]          ; 00502699 | DAT_01d1cdc4
    ADD ESP,0x4                         ; 0050269f
    CALL crt_math.c_round_FUN_005b7ff0  ; 005026a2
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x40]        ; 005026a7
    CMP dword ptr [ESP + 0x40],0x4a     ; 005026ab
    JLE 0x005026b8                      ; 005026b0
        ;   XREF to: 005026b8 (CONDITIONAL_JUMP)  ; LAB_005026b8
    XOR ECX,ECX                         ; 005026b2
    MOV dword ptr [ESP + 0x40],ECX      ; 005026b4
    MOV EDX,dword ptr [ESP + 0x40]      ; 005026b8
        ;   Label: LAB_005026b8
    LEA EAX,[EDX*0x4 + 0x0]             ; 005026bc
    PUSH 0xffff                         ; 005026c3
    ADD EAX,EDX                         ; 005026c8
    PUSH 0x0                            ; 005026ca
    SHL EAX,0x2                         ; 005026cc
    PUSH 0x0                            ; 005026cf
    ADD EAX,0x1d1c7cc                   ; 005026d1
    PUSH EAX                            ; 005026d6
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900 ; 005026d7
        ;   XREF to: 0040d900 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 005026dc
    PUSH 0x0                            ; 005026df
    CALL engine_3d.c_setBlendMode_FUN_00406df0 ; 005026e1
        ;   XREF to: 00406df0 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setBlendMode_FUN_00406df0(int blend_mode)
    ADD ESP,0x4                         ; 005026e6
    ADD ESP,0x44                        ; 005026e9
    POP EBP                             ; 005026ec
    POP EDI                             ; 005026ed
    POP ESI                             ; 005026ee
    POP EBX                             ; 005026ef
    RET                                 ; 005026f0
    MOV dword ptr [0x0061846c],EBX      ; 005026f1 | DAT_0061846c
        ;   Label: LAB_005026f1
    JMP 0x00502671                      ; 005026f7
        ;   XREF to: 00502671 (UNCONDITIONAL_JUMP)  ; LAB_00502671


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_00482170(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim,int render_flags)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
; int              Stack[0xc]:4   render_flags
;
; XREF[10]:
;   core_box.cpp_FUN_00421670 at 004218f7
;   core_charactr.cpp_CCharacter_renderCollision_FUN_0042ea10 at 0042ec38
;   core_fire.cpp_CExplosion_render_FUN_004b1870 at 004b1bd5
;   core_flame.cpp_CFlame_renderTransparent_FUN_004b8100 at 004b8a25
;   core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004e7c60 at 004e7c71
;   core_inv.cpp_drawItemIconBackground_FUN_004fa930 at 004faaa2
;   core_inv.cpp_drawWeaponIconBackground_FUN_004fa770 at 004fa8e2
;   core_level.cpp_CLevelLoader_update_FUN_004fe9c0 at 004fedc7
;   core_marquee.cpp_CMarquee_renderLightBulb_FUN_00506c90 at 00506e07
;   core_menu.cpp_renderAudioSpectrumBar_FUN_00509c90 at 00509de7
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4f02c
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00482170
        ;   Label: engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_00482170
    PUSH ESI                            ; 00482171
    PUSH EDI                            ; 00482172
    PUSH EBP                            ; 00482173
    MOV EBX,dword ptr [ESP + 0x14]      ; 00482174
    MOV EDI,dword ptr [ESP + 0x18]      ; 00482178
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0048217c
    CMP ESI,-0x1                        ; 00482180
    JNZ 0x0048218a                      ; 00482183
        ;   XREF to: 0048218a (CONDITIONAL_JUMP)  ; LAB_0048218a
    MOV ESI,0x2cd                       ; 00482185
    CMP dword ptr [EBX + 0xc],0x0       ; 0048218a
        ;   Label: LAB_0048218a
    JNZ 0x004821c5                      ; 0048218e
        ;   XREF to: 004821c5 (CONDITIONAL_JUMP)  ; LAB_004821c5
    CMP dword ptr [EBX + 0x4],0x0       ; 00482190
        ;   Label: LAB_00482190
    JZ 0x004821d7                       ; 00482194
        ;   XREF to: 004821d7 (CONDITIONAL_JUMP)  ; LAB_004821d7
    XOR EBP,EBP                         ; 00482196
    MOV ESI,0x486e26                    ; 00482198
    MOV dword ptr [0x01c51d14],EBP      ; 0048219d | DAT_01c51d14
    MOV dword ptr [0x01c51d18],EBP      ; 004821a3 | DAT_01c51d18
    MOV dword ptr [0x01c4f02c],ESI      ; 004821a9 | DAT_01c4f02c
    LEA EAX,[EDI + 0x18]                ; 004821af
        ;   Label: LAB_004821af
    PUSH EAX                            ; 004821b2
    MOV EDX,dword ptr [EDI + 0x4]       ; 004821b3
    PUSH EDX                            ; 004821b6
    PUSH EBX                            ; 004821b7
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0 ; 004821b8
        ;   XREF to: 00481aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 004821bd
    POP EBP                             ; 004821c0
        ;   Label: LAB_004821c0
    POP EDI                             ; 004821c1
    POP ESI                             ; 004821c2
    POP EBX                             ; 004821c3
    RET                                 ; 004821c4
    LEA EAX,[EDI + 0x8]                 ; 004821c5
        ;   Label: LAB_004821c5
    PUSH EAX                            ; 004821c8
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 004821c9
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 004821ce
    TEST EAX,EAX                        ; 004821d1
    JZ 0x004821c0                       ; 004821d3
        ;   XREF to: 004821c0 (CONDITIONAL_JUMP)  ; LAB_004821c0
    JMP 0x00482190                      ; 004821d5
        ;   XREF to: 00482190 (UNCONDITIONAL_JUMP)  ; LAB_00482190
    CMP dword ptr [0x0061b4a0],0x20     ; 004821d7 | DAT_0061b4a0
        ;   Label: LAB_004821d7
    JNZ 0x004821fd                      ; 004821de
        ;   XREF to: 004821fd (CONDITIONAL_JUMP)  ; LAB_004821fd
    MOV dword ptr [0x01c4f02c],0x57de01 ; 004821e0 | DAT_01c4f02c
    MOV ECX,0x6                         ; 004821ea
        ;   Label: LAB_004821ea
    MOV dword ptr [0x01c51d14],ESI      ; 004821ef | DAT_01c51d14
    MOV dword ptr [0x01c51d18],ECX      ; 004821f5 | DAT_01c51d18
    JMP 0x004821af                      ; 004821fb
        ;   XREF to: 004821af (UNCONDITIONAL_JUMP)  ; LAB_004821af
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 004821fd | DAT_01c4f02c
        ;   Label: LAB_004821fd
    JMP 0x004821ea                      ; 00482207
        ;   XREF to: 004821ea (UNCONDITIONAL_JUMP)  ; LAB_004821ea


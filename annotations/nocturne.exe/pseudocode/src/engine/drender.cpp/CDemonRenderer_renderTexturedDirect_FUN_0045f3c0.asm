; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim,int render_flags)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
; int              Stack[0xc]:4   render_flags
;
; XREF[10]:
;   core_box.cpp_CBoundingBox3D_render_FUN_0041dcc0 at 0041df34
;   core_charactr.cpp_CCharacter_renderCollision_FUN_00425cc0 at 00425e98
;   core_fire.cpp_CExplosion_render_FUN_00486fe0 at 0048732d
;   core_flame.cpp_CFlame_renderTransparent_FUN_0048d5d0 at 0048de91
;   core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004b1df0 at 004b1e01
;   core_inv.cpp_drawItemIconBackground_FUN_004c1f90 at 004c2102
;   core_inv.cpp_drawWeaponIconBackground_FUN_004c1dd0 at 004c1f42
;   core_level.cpp_CLevelLoader_update_FUN_004c59e0 at 004c5dd8
;   core_marquee.cpp_CMarquee_renderLightBulb_FUN_004cc440 at 004cc5b7
;   core_menu.cpp_renderAudioSpectrumBar_FUN_004cf2b0 at 004cf407
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01c00c7c
;   undefined4 DAT_01c039a0
;   undefined4 DAT_01c039a4
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045f3c0
        ;   Label: engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0
    PUSH ESI                            ; 0045f3c1
    PUSH EDI                            ; 0045f3c2
    PUSH EBP                            ; 0045f3c3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0045f3c4
    MOV EDI,dword ptr [ESP + 0x18]      ; 0045f3c8
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0045f3cc
    CMP ESI,-0x1                        ; 0045f3d0
    JNZ 0x0045f3da                      ; 0045f3d3
        ;   XREF to: 0045f3da (CONDITIONAL_JUMP)  ; LAB_0045f3da
    MOV ESI,0x2cd                       ; 0045f3d5
    CMP dword ptr [EBX + 0xc],0x0       ; 0045f3da
        ;   Label: LAB_0045f3da
    JNZ 0x0045f415                      ; 0045f3de
        ;   XREF to: 0045f415 (CONDITIONAL_JUMP)  ; LAB_0045f415
    CMP dword ptr [EBX + 0x4],0x0       ; 0045f3e0
        ;   Label: LAB_0045f3e0
    JZ 0x0045f427                       ; 0045f3e4
        ;   XREF to: 0045f427 (CONDITIONAL_JUMP)  ; LAB_0045f427
    XOR EBP,EBP                         ; 0045f3e6
    MOV ESI,0x463a79                    ; 0045f3e8
    MOV dword ptr [0x01c039a0],EBP      ; 0045f3ed | DAT_01c039a0
    MOV dword ptr [0x01c039a4],EBP      ; 0045f3f3 | DAT_01c039a4
    MOV dword ptr [0x01c00c7c],ESI      ; 0045f3f9 | DAT_01c00c7c
    LEA EAX,[EDI + 0x18]                ; 0045f3ff
        ;   Label: LAB_0045f3ff
    PUSH EAX                            ; 0045f402
    MOV EDX,dword ptr [EDI + 0x4]       ; 0045f403
    PUSH EDX                            ; 0045f406
    PUSH EBX                            ; 0045f407
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80 ; 0045f408
        ;   XREF to: 0045ed80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0045f40d
    POP EBP                             ; 0045f410
        ;   Label: LAB_0045f410
    POP EDI                             ; 0045f411
    POP ESI                             ; 0045f412
    POP EBX                             ; 0045f413
    RET                                 ; 0045f414
    LEA EAX,[EDI + 0x8]                 ; 0045f415
        ;   Label: LAB_0045f415
    PUSH EAX                            ; 0045f418
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 0045f419
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00404610(SClipPlane * plane)
    ADD ESP,0x4                         ; 0045f41e
    TEST EAX,EAX                        ; 0045f421
    JZ 0x0045f410                       ; 0045f423
        ;   XREF to: 0045f410 (CONDITIONAL_JUMP)  ; LAB_0045f410
    JMP 0x0045f3e0                      ; 0045f425
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_JUMP)  ; LAB_0045f3e0
    CMP dword ptr [0x005b7624],0x20     ; 0045f427 | DAT_005b7624
        ;   Label: LAB_0045f427
    JNZ 0x0045f44d                      ; 0045f42e
        ;   XREF to: 0045f44d (CONDITIONAL_JUMP)  ; LAB_0045f44d
    MOV dword ptr [0x01c00c7c],0x52f031 ; 0045f430 | DAT_01c00c7c
    MOV ECX,0x6                         ; 0045f43a
        ;   Label: LAB_0045f43a
    MOV dword ptr [0x01c039a0],ESI      ; 0045f43f | DAT_01c039a0
    MOV dword ptr [0x01c039a4],ECX      ; 0045f445 | DAT_01c039a4
    JMP 0x0045f3ff                      ; 0045f44b
        ;   XREF to: 0045f3ff (UNCONDITIONAL_JUMP)  ; LAB_0045f3ff
    MOV dword ptr [0x01c00c7c],0x52f823 ; 0045f44d | DAT_01c00c7c
        ;   Label: LAB_0045f44d
    JMP 0x0045f43a                      ; 0045f457
        ;   XREF to: 0045f43a (UNCONDITIONAL_JUMP)  ; LAB_0045f43a


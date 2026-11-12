; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim,int render_flags)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
; int              Stack[0xc]:4   render_flags
;
; XREF[8]:
;   core_box.cpp_CBoundingBox3D_render_FUN_0041e9b0 at 0041ec37
;   core_charactr.cpp_FUN_0042d9f0 at 0042dc18
;   core_fire.cpp_FUN_0049c8e0 at 0049cc57
;   core_flame.cpp_CFlame_renderTransparent_FUN_004a6090 at 004a69b5
;   core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004d05f0 at 004d0601
;   core_inv.cpp_drawItemIconBackground_FUN_004dd5b0 at 004dd722
;   core_inv.cpp_drawWeaponIconBackground_FUN_004dd3f0 at 004dd562
;   core_menu.cpp_renderAudioSpectrumBar_FUN_004e76d0 at 004e7827
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c6b5cc
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046b850
        ;   Label: engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850
    PUSH ESI                            ; 0046b851
    PUSH EDI                            ; 0046b852
    PUSH EBP                            ; 0046b853
    MOV EBX,dword ptr [ESP + 0x14]      ; 0046b854
    MOV EDI,dword ptr [ESP + 0x18]      ; 0046b858
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0046b85c
    CMP ESI,-0x1                        ; 0046b860
    JNZ 0x0046b86a                      ; 0046b863
        ;   XREF to: 0046b86a (CONDITIONAL_JUMP)  ; LAB_0046b86a
    MOV ESI,0x2cd                       ; 0046b865
    CMP dword ptr [EBX + 0xc],0x0       ; 0046b86a
        ;   Label: LAB_0046b86a
    JNZ 0x0046b8a5                      ; 0046b86e
        ;   XREF to: 0046b8a5 (CONDITIONAL_JUMP)  ; LAB_0046b8a5
    CMP dword ptr [EBX + 0x4],0x0       ; 0046b870
        ;   Label: LAB_0046b870
    JZ 0x0046b8b7                       ; 0046b874
        ;   XREF to: 0046b8b7 (CONDITIONAL_JUMP)  ; LAB_0046b8b7
    XOR EBP,EBP                         ; 0046b876
    MOV ESI,0x46f9a6                    ; 0046b878
    MOV dword ptr [0x01c6e2b4],EBP      ; 0046b87d | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EBP      ; 0046b883 | DAT_01c6e2b8
    MOV dword ptr [0x01c6b5cc],ESI      ; 0046b889 | DAT_01c6b5cc
    LEA EAX,[EDI + 0x18]                ; 0046b88f
        ;   Label: LAB_0046b88f
    PUSH EAX                            ; 0046b892
    MOV EDX,dword ptr [EDI + 0x4]       ; 0046b893
    PUSH EDX                            ; 0046b896
    PUSH EBX                            ; 0046b897
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160 ; 0046b898
        ;   XREF to: 0046b160 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0046b89d
    POP EBP                             ; 0046b8a0
        ;   Label: LAB_0046b8a0
    POP EDI                             ; 0046b8a1
    POP ESI                             ; 0046b8a2
    POP EBX                             ; 0046b8a3
    RET                                 ; 0046b8a4
    LEA EAX,[EDI + 0x8]                 ; 0046b8a5
        ;   Label: LAB_0046b8a5
    PUSH EAX                            ; 0046b8a8
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 0046b8a9
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 0046b8ae
    TEST EAX,EAX                        ; 0046b8b1
    JZ 0x0046b8a0                       ; 0046b8b3
        ;   XREF to: 0046b8a0 (CONDITIONAL_JUMP)  ; LAB_0046b8a0
    JMP 0x0046b870                      ; 0046b8b5
        ;   XREF to: 0046b870 (UNCONDITIONAL_JUMP)  ; LAB_0046b870
    CMP dword ptr [0x005fba20],0x20     ; 0046b8b7 | DAT_005fba20
        ;   Label: LAB_0046b8b7
    JNZ 0x0046b8dd                      ; 0046b8be
        ;   XREF to: 0046b8dd (CONDITIONAL_JUMP)  ; LAB_0046b8dd
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 0046b8c0 | DAT_01c6b5cc
    MOV ECX,0x6                         ; 0046b8ca
        ;   Label: LAB_0046b8ca
    MOV dword ptr [0x01c6e2b4],ESI      ; 0046b8cf | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],ECX      ; 0046b8d5 | DAT_01c6e2b8
    JMP 0x0046b88f                      ; 0046b8db
        ;   XREF to: 0046b88f (UNCONDITIONAL_JUMP)  ; LAB_0046b88f
    MOV dword ptr [0x01c6b5cc],0x561713 ; 0046b8dd | DAT_01c6b5cc
        ;   Label: LAB_0046b8dd
    JMP 0x0046b8ca                      ; 0046b8e7
        ;   XREF to: 0046b8ca (UNCONDITIONAL_JUMP)  ; LAB_0046b8ca


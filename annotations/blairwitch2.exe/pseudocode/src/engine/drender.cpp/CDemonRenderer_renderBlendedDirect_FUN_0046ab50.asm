; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
;
; XREF[13]:
;   core_chain.cpp_CChain_renderTransparent_FUN_005b56c0 at 005b5a3a
;   core_fire.cpp_CBulletHole_render_FUN_00493dd0 at 00494026
;   core_fire.cpp_CCrater_render_FUN_00499a00 at 00499c0a
;   core_fire.cpp_CGlassParticle_render_FUN_00497050 at 00497230
;   core_fire.cpp_CLightningBolt_render_FUN_0049abd0 at 0049af1a
;   core_fire.cpp_CSmokeParticle_render_FUN_00493710 at 00493a1f
;   core_fire.cpp_CTrail_render_FUN_0049b380 at 0049b631
;   core_gore.cpp_FUN_004c7580 at 004c7912
;   core_gore.cpp_FUN_004c8010 at 004c837b
;   core_gore.cpp_FUN_004c88a0 at 004c8ba6
;   ... and 3 more
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403970
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046ab50
        ;   Label: engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50
    PUSH ESI                            ; 0046ab51
    PUSH EDI                            ; 0046ab52
    PUSH EBP                            ; 0046ab53
    MOV EBP,dword ptr [ESP + 0x14]      ; 0046ab54
    MOV ESI,dword ptr [ESP + 0x18]      ; 0046ab58
    CMP dword ptr [EBP + 0xc],0x0       ; 0046ab5c
    JNZ 0x0046abd1                      ; 0046ab60
        ;   XREF to: 0046abd1 (CONDITIONAL_JUMP)  ; LAB_0046abd1
    MOV ECX,0xffffffff                  ; 0046ab66
        ;   Label: LAB_0046ab66
    MOV EBX,dword ptr [ESI + 0x4]       ; 0046ab6b
    XOR EDX,EDX                         ; 0046ab6e
    TEST EBX,EBX                        ; 0046ab70
    JLE 0x0046ab90                      ; 0046ab72
        ;   XREF to: 0046ab90 (CONDITIONAL_JUMP)  ; LAB_0046ab90
    MOV EAX,ESI                         ; 0046ab74
    MOV EDI,dword ptr [EBP]             ; 0046ab76
    MOV EBX,dword ptr [EAX + 0x18]      ; 0046ab79
        ;   Label: LAB_0046ab79
    IMUL EBX,EBX,0x30                   ; 0046ab7c
    INC EDX                             ; 0046ab7f
    AND ECX,dword ptr [EDI + EBX*0x1 + 0x10] ; 0046ab80
    MOV EBX,dword ptr [ESI + 0x4]       ; 0046ab84
    ADD EAX,0x4                         ; 0046ab87
    CMP EDX,EBX                         ; 0046ab8a
    JL 0x0046ab79                       ; 0046ab8c
        ;   XREF to: 0046ab79 (CONDITIONAL_JUMP)  ; LAB_0046ab79
    MOV EAX,EAX                         ; 0046ab8e
    TEST ECX,0x80000000                 ; 0046ab90
        ;   Label: LAB_0046ab90
    JZ 0x0046ab9d                       ; 0046ab96
        ;   XREF to: 0046ab9d (CONDITIONAL_JUMP)  ; LAB_0046ab9d
    TEST CL,0x1f                        ; 0046ab98
    JNZ 0x0046abcc                      ; 0046ab9b
        ;   XREF to: 0046abcc (CONDITIONAL_JUMP)  ; LAB_0046abcc
    CMP dword ptr [EBP + 0x4],0x0       ; 0046ab9d
        ;   Label: LAB_0046ab9d
    JZ 0x0046abe3                       ; 0046aba1
        ;   XREF to: 0046abe3 (CONDITIONAL_JUMP)  ; LAB_0046abe3
    XOR EDX,EDX                         ; 0046aba3
    MOV EAX,0x46e936                    ; 0046aba5
    MOV dword ptr [0x01c38b54],EDX      ; 0046abaa | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EDX      ; 0046abb0 | DAT_01c38b58
    MOV [0x01c35e6c],EAX                ; 0046abb6 | DAT_01c35e6c
    LEA EAX,[ESI + 0x18]                ; 0046abbb
        ;   Label: LAB_0046abbb
    PUSH EAX                            ; 0046abbe
    MOV EBX,dword ptr [ESI + 0x4]       ; 0046abbf
    PUSH EBX                            ; 0046abc2
    PUSH EBP                            ; 0046abc3
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590 ; 0046abc4
        ;   XREF to: 00469590 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0046abc9
    POP EBP                             ; 0046abcc
        ;   Label: LAB_0046abcc
    POP EDI                             ; 0046abcd
    POP ESI                             ; 0046abce
    POP EBX                             ; 0046abcf
    RET                                 ; 0046abd0
    LEA EAX,[ESI + 0x8]                 ; 0046abd1
        ;   Label: LAB_0046abd1
    PUSH EAX                            ; 0046abd4
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 0046abd5
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403970(SClipPlane * plane)
    ADD ESP,0x4                         ; 0046abda
    TEST EAX,EAX                        ; 0046abdd
    JZ 0x0046abcc                       ; 0046abdf
        ;   XREF to: 0046abcc (CONDITIONAL_JUMP)  ; LAB_0046abcc
    JMP 0x0046ab66                      ; 0046abe1
        ;   XREF to: 0046ab66 (UNCONDITIONAL_JUMP)  ; LAB_0046ab66
    CMP dword ptr [0x006141c0],0x20     ; 0046abe3 | DAT_006141c0
        ;   Label: LAB_0046abe3
    JNZ 0x0046ac0e                      ; 0046abea
        ;   XREF to: 0046ac0e (CONDITIONAL_JUMP)  ; LAB_0046ac0e
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 0046abec | DAT_01c35e6c
    MOV EDI,0x6                         ; 0046abf6
        ;   Label: LAB_0046abf6
    MOV EBX,0x267                       ; 0046abfb
    MOV dword ptr [0x01c38b58],EDI      ; 0046ac00 | DAT_01c38b58
    MOV dword ptr [0x01c38b54],EBX      ; 0046ac06 | DAT_01c38b54
    JMP 0x0046abbb                      ; 0046ac0c
        ;   XREF to: 0046abbb (UNCONDITIONAL_JUMP)  ; LAB_0046abbb
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 0046ac0e | DAT_01c35e6c
        ;   Label: LAB_0046ac0e
    JMP 0x0046abf6                      ; 0046ac18
        ;   XREF to: 0046abf6 (UNCONDITIONAL_JUMP)  ; LAB_0046abf6


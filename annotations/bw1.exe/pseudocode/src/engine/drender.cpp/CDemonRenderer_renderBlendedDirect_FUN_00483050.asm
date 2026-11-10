; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
;
; XREF[13]:
;   core_chain.cpp_CChain_renderTransparent_FUN_00436600 at 0043697a
;   core_fire.cpp_CBulletHole_render_FUN_004ac770 at 004ac9c6
;   core_fire.cpp_CCrater_render_FUN_004b23a0 at 004b25aa
;   core_fire.cpp_CGlassParticle_render_FUN_004af9f0 at 004afbd0
;   core_fire.cpp_CLightningBolt_render_FUN_004b3570 at 004b38ba
;   core_fire.cpp_CSmokeParticle_render_FUN_004ac0b0 at 004ac3bf
;   core_fire.cpp_CTrail_render_FUN_004b3d20 at 004b3fd1
;   core_gore.cpp_CBloodPool_render_FUN_004e5180 at 004e542f
;   core_gore.cpp_CBloodSplat_render_FUN_004e49a0 at 004e4c8c
;   core_gore.cpp_CFootstep_render_FUN_004e5860 at 004e5a41
;   ... and 3 more
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

    PUSH EBX                            ; 00483050
        ;   Label: engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050
    PUSH ESI                            ; 00483051
    PUSH EDI                            ; 00483052
    PUSH EBP                            ; 00483053
    MOV EBP,dword ptr [ESP + 0x14]      ; 00483054
    MOV ESI,dword ptr [ESP + 0x18]      ; 00483058
    CMP dword ptr [EBP + 0xc],0x0       ; 0048305c
    JNZ 0x004830d1                      ; 00483060
        ;   XREF to: 004830d1 (CONDITIONAL_JUMP)  ; LAB_004830d1
    MOV ECX,0xffffffff                  ; 00483066
        ;   Label: LAB_00483066
    MOV EBX,dword ptr [ESI + 0x4]       ; 0048306b
    XOR EDX,EDX                         ; 0048306e
    TEST EBX,EBX                        ; 00483070
    JLE 0x00483090                      ; 00483072
        ;   XREF to: 00483090 (CONDITIONAL_JUMP)  ; LAB_00483090
    MOV EAX,ESI                         ; 00483074
    MOV EDI,dword ptr [EBP]             ; 00483076
    MOV EBX,dword ptr [EAX + 0x18]      ; 00483079
        ;   Label: LAB_00483079
    IMUL EBX,EBX,0x30                   ; 0048307c
    INC EDX                             ; 0048307f
    AND ECX,dword ptr [EDI + EBX*0x1 + 0x10] ; 00483080
    MOV EBX,dword ptr [ESI + 0x4]       ; 00483084
    ADD EAX,0x4                         ; 00483087
    CMP EDX,EBX                         ; 0048308a
    JL 0x00483079                       ; 0048308c
        ;   XREF to: 00483079 (CONDITIONAL_JUMP)  ; LAB_00483079
    MOV EAX,EAX                         ; 0048308e
    TEST ECX,0x80000000                 ; 00483090
        ;   Label: LAB_00483090
    JZ 0x0048309d                       ; 00483096
        ;   XREF to: 0048309d (CONDITIONAL_JUMP)  ; LAB_0048309d
    TEST CL,0x1f                        ; 00483098
    JNZ 0x004830cc                      ; 0048309b
        ;   XREF to: 004830cc (CONDITIONAL_JUMP)  ; LAB_004830cc
    CMP dword ptr [EBP + 0x4],0x0       ; 0048309d
        ;   Label: LAB_0048309d
    JZ 0x004830e3                       ; 004830a1
        ;   XREF to: 004830e3 (CONDITIONAL_JUMP)  ; LAB_004830e3
    XOR EDX,EDX                         ; 004830a3
    MOV EAX,0x486e26                    ; 004830a5
    MOV dword ptr [0x01c51d14],EDX      ; 004830aa | DAT_01c51d14
    MOV dword ptr [0x01c51d18],EDX      ; 004830b0 | DAT_01c51d18
    MOV [0x01c4f02c],EAX                ; 004830b6 | DAT_01c4f02c
    LEA EAX,[ESI + 0x18]                ; 004830bb
        ;   Label: LAB_004830bb
    PUSH EAX                            ; 004830be
    MOV EBX,dword ptr [ESI + 0x4]       ; 004830bf
    PUSH EBX                            ; 004830c2
    PUSH EBP                            ; 004830c3
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0 ; 004830c4
        ;   XREF to: 00481aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 004830c9
    POP EBP                             ; 004830cc
        ;   Label: LAB_004830cc
    POP EDI                             ; 004830cd
    POP ESI                             ; 004830ce
    POP EBX                             ; 004830cf
    RET                                 ; 004830d0
    LEA EAX,[ESI + 0x8]                 ; 004830d1
        ;   Label: LAB_004830d1
    PUSH EAX                            ; 004830d4
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 004830d5
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 004830da
    TEST EAX,EAX                        ; 004830dd
    JZ 0x004830cc                       ; 004830df
        ;   XREF to: 004830cc (CONDITIONAL_JUMP)  ; LAB_004830cc
    JMP 0x00483066                      ; 004830e1
        ;   XREF to: 00483066 (UNCONDITIONAL_JUMP)  ; LAB_00483066
    CMP dword ptr [0x0061b4a0],0x20     ; 004830e3 | DAT_0061b4a0
        ;   Label: LAB_004830e3
    JNZ 0x0048310e                      ; 004830ea
        ;   XREF to: 0048310e (CONDITIONAL_JUMP)  ; LAB_0048310e
    MOV dword ptr [0x01c4f02c],0x57de01 ; 004830ec | DAT_01c4f02c
    MOV EDI,0x6                         ; 004830f6
        ;   Label: LAB_004830f6
    MOV EBX,0x267                       ; 004830fb
    MOV dword ptr [0x01c51d18],EDI      ; 00483100 | DAT_01c51d18
    MOV dword ptr [0x01c51d14],EBX      ; 00483106 | DAT_01c51d14
    JMP 0x004830bb                      ; 0048310c
        ;   XREF to: 004830bb (UNCONDITIONAL_JUMP)  ; LAB_004830bb
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 0048310e | DAT_01c4f02c
        ;   Label: LAB_0048310e
    JMP 0x004830f6                      ; 00483118
        ;   XREF to: 004830f6 (UNCONDITIONAL_JUMP)  ; LAB_004830f6


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_manpuz_cpp_CMansionPuzzleCircle_renderOpaque_FUN_005090d0(CMansionPuzzleCircle *this_ptr)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   float FLOAT_00660d70 = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CDemonRenderer g_CDemonRendererInstance
;   CDemonMission g_CDemonMissionInstance
;   undefined4 DAT_02f33744
;   CVector3f g_ZeroVector
;   undefined4 g_ZeroVector.y
;   undefined4 g_ZeroVector.z
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_manpuz.cpp_CMansionPuzzleCircle_FUN_00509bf0
;   core_manpuz.cpp_CMansionPuzzleCircle_FUN_00509c60
;   core_manpuz.cpp_CMansionPuzzleCircle_FUN_00509d50
;   core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050a1f0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005090d0
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_renderOpaque_FUN_005090d0
    PUSH EDI                            ; 005090d1
    SUB ESP,0x24                        ; 005090d2
    MOV ESI,dword ptr [ESP + 0x30]      ; 005090d5
    PUSH ESI                            ; 005090d9
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 005090da
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 005090df
    MOV EDX,ESP                         ; 005090e2
    PUSH EDX                            ; 005090e4
    MOV EAX,dword ptr [ESI + 0x154]     ; 005090e5
    PUSH ESI                            ; 005090eb
    CALL dword ptr [EAX + 0x14]         ; 005090ec
    ADD ESP,0x8                         ; 005090ef
    PUSH EAX                            ; 005090f2
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 005090f3
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 005090f8
    MOV EDI,EAX                         ; 005090fb
    TEST EAX,EAX                        ; 005090fd
    JNZ 0x00509112                      ; 005090ff
        ;   XREF to: 00509112 (CONDITIONAL_JUMP)  ; LAB_00509112
    PUSH ESI                            ; 00509101
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 00509102
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00509107
    MOV EAX,EDI                         ; 0050910a
    ADD ESP,0x24                        ; 0050910c
    POP EDI                             ; 0050910f
    POP ESI                             ; 00509110
    RET                                 ; 00509111
    PUSH EBX                            ; 00509112
        ;   Label: LAB_00509112
    LEA EBX,[ESP + 0x1c]                ; 00509113
    MOV EAX,0x3f87558                   ; 00509117 | g_ZeroVector
    MOV EDX,dword ptr [0x006703ec]      ; 0050911c | g_CDemonRendererInstance | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 00509122 | g_ZeroVector
    FMUL float ptr [0x00660d70]         ; 00509124 | FLOAT_00660d70
    FISTP dword ptr [EBX]               ; 0050912a
    FLD float ptr [EAX + 0x4]           ; 0050912c | g_ZeroVector.y
    FMUL float ptr [0x00660d70]         ; 0050912f | FLOAT_00660d70
    FISTP dword ptr [EBX + 0x4]         ; 00509135
    FLD float ptr [EAX + 0x8]           ; 00509138 | g_ZeroVector.z
    FMUL float ptr [0x00660d70]         ; 0050913b | FLOAT_00660d70
    FISTP dword ptr [EBX + 0x8]         ; 00509141
    LEA EAX,[ESP + 0x1c]                ; 00509144
    PUSH EAX                            ; 00509148
    MOV EAX,dword ptr [EDX]             ; 00509149 | g_CDemonRendererInstance
    ADD EAX,0xbb80                      ; 0050914b
    PUSH EAX                            ; 00509150
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00509151
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00509156
    XOR EBX,EBX                         ; 00509159
    PUSH EBX                            ; 0050915b
        ;   Label: LAB_0050915b
    PUSH ESI                            ; 0050915c
    CALL core_manpuz.cpp_CMansionPuzzleCircle_FUN_00509bf0 ; 0050915d
        ;   XREF to: 00509bf0 (UNCONDITIONAL_CALL)  ; void core_manpuz.cpp_CMansionPuzzleCircle_FUN_00509bf0(CMansionPuzzleCircle * this_ptr)
    ADD ESP,0x8                         ; 00509162
    PUSH EBX                            ; 00509165
    PUSH ESI                            ; 00509166
    CALL core_manpuz.cpp_CMansionPuzzleCircle_FUN_00509d50 ; 00509167
        ;   XREF to: 00509d50 (UNCONDITIONAL_CALL)  ; void core_manpuz.cpp_CMansionPuzzleCircle_FUN_00509d50(CMansionPuzzleCircle * this_ptr)
    INC EBX                             ; 0050916c
    ADD ESP,0x8                         ; 0050916d
    CMP EBX,0xc                         ; 00509170
    JL 0x0050915b                       ; 00509173
        ;   XREF to: 0050915b (CONDITIONAL_JUMP)  ; LAB_0050915b
    MOV EAX,[0x0067d550]                ; 00509175 | g_CDemonMissionInstance | g_CDemonMissionPtr
    CMP dword ptr [EAX + 0x4],0x0       ; 0050917a | DAT_02f33744
    JNZ 0x005091a4                      ; 0050917e
        ;   XREF to: 005091a4 (CONDITIONAL_JUMP)  ; LAB_005091a4
    XOR EBX,EBX                         ; 00509180
        ;   Label: LAB_00509180
    PUSH EBX                            ; 00509182
        ;   Label: LAB_00509182
    PUSH ESI                            ; 00509183
    CALL core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050a1f0 ; 00509184
        ;   XREF to: 0050a1f0 (UNCONDITIONAL_CALL)  ; void core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050a1f0(CMansionPuzzleCircle * this_ptr)
    INC EBX                             ; 00509189
    ADD ESP,0x8                         ; 0050918a
    CMP EBX,0x2                         ; 0050918d
    JL 0x00509182                       ; 00509190
        ;   XREF to: 00509182 (CONDITIONAL_JUMP)  ; LAB_00509182
    POP EBX                             ; 00509192
    PUSH ESI                            ; 00509193
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 00509194
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00509199
    MOV EAX,EDI                         ; 0050919c
    ADD ESP,0x24                        ; 0050919e
    POP EDI                             ; 005091a1
    POP ESI                             ; 005091a2
    RET                                 ; 005091a3
    MOV ECX,dword ptr [0x006703ec]      ; 005091a4 | g_CDemonRendererInstance | g_CDemonRendererPtr2
        ;   Label: LAB_005091a4
    PUSH ECX                            ; 005091aa | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 005091ab
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 005091b0
    TEST EAX,EAX                        ; 005091b3
    JNZ 0x00509180                      ; 005091b5
        ;   XREF to: 00509180 (CONDITIONAL_JUMP)  ; LAB_00509180
    XOR EBX,EBX                         ; 005091b7
    PUSH EBX                            ; 005091b9
        ;   Label: LAB_005091b9
    PUSH ESI                            ; 005091ba
    CALL core_manpuz.cpp_CMansionPuzzleCircle_FUN_00509c60 ; 005091bb
        ;   XREF to: 00509c60 (UNCONDITIONAL_CALL)  ; void core_manpuz.cpp_CMansionPuzzleCircle_FUN_00509c60(CMansionPuzzleCircle * this_ptr)
    INC EBX                             ; 005091c0
    ADD ESP,0x8                         ; 005091c1
    CMP EBX,0xc                         ; 005091c4
    JL 0x005091b9                       ; 005091c7
        ;   XREF to: 005091b9 (CONDITIONAL_JUMP)  ; LAB_005091b9
    JMP 0x00509180                      ; 005091c9
        ;   XREF to: 00509180 (UNCONDITIONAL_JUMP)  ; LAB_00509180


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_bodypart_cpp_CBodyPart_renderTransparent_FUN_00419280(CBodyPart *this_ptr)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_01bc120c
;   undefined4 g_CDemonSetInstance.disable_directional_lighting
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00418e50
;   core_flame.cpp_CFlame_renderTransparent_FUN_004b8100
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00419280
        ;   Label: core_bodypart.cpp_CBodyPart_renderTransparent_FUN_00419280
    PUSH EBP                            ; 00419281
    MOV EDI,dword ptr [ESP + 0xc]       ; 00419282
    CMP dword ptr [EDI + 0xf30],0x0     ; 00419286
    JZ 0x00419340                       ; 0041928d
        ;   XREF to: 00419340 (CONDITIONAL_JUMP)  ; LAB_00419340
    CMP dword ptr [EDI + 0x158],0x1     ; 00419293
    JLE 0x004192a9                      ; 0041929a
        ;   XREF to: 004192a9 (CONDITIONAL_JUMP)  ; LAB_004192a9
    CMP dword ptr [EDI + 0x74c],0x0     ; 0041929c
    JZ 0x00419340                       ; 004192a3
        ;   XREF to: 00419340 (CONDITIONAL_JUMP)  ; LAB_00419340
    PUSH EBX                            ; 004192a9
        ;   Label: LAB_004192a9
    CMP dword ptr [EDI + 0xcb4],0x0     ; 004192aa
    JZ 0x00419309                       ; 004192b1
        ;   XREF to: 00419309 (CONDITIONAL_JUMP)  ; LAB_00419309
    MOV EBX,dword ptr [0x00622c18]      ; 004192b3 | g_CDemonSetPtr
    MOV EAX,dword ptr [EDI + 0xcb0]     ; 004192b9
    PUSH EDI                            ; 004192bf
    MOV dword ptr [EBX + 0x15ac98],EAX  ; 004192c0 | g_CDemonSetInstance.disable_directional_lighting
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 004192c6
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004192cb
    MOV EBP,dword ptr [EDI + 0xcc0]     ; 004192ce
    PUSH EBP                            ; 004192d4
    MOV EAX,[0x00612560]                ; 004192d5 | DAT_00612560
    PUSH EAX                            ; 004192da | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0 ; 004192db
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004192e0
    PUSH 0x2e7                          ; 004192e3
    PUSH EDI                            ; 004192e8
    CALL core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00418e50 ; 004192e9
        ;   XREF to: 00418e50 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00418e50(CBodyPart * this_ptr, int render_flags)
    ADD ESP,0x8                         ; 004192ee
    PUSH EDI                            ; 004192f1
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 004192f2
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    MOV EAX,[0x00622c18]                ; 004192f7 | g_CDemonSetPtr
    ADD ESP,0x4                         ; 004192fc
    MOV dword ptr [EAX + 0x15ac98],0x0  ; 004192ff | g_CDemonSetInstance.disable_directional_lighting
    MOV EDX,dword ptr [EDI + 0x74c]     ; 00419309
        ;   Label: LAB_00419309
    XOR EBX,EBX                         ; 0041930f
    TEST EDX,EDX                        ; 00419311
    JLE 0x00419337                      ; 00419313
        ;   XREF to: 00419337 (CONDITIONAL_JUMP)  ; LAB_00419337
    PUSH ESI                            ; 00419315
    LEA ESI,[EDI + 0x75c]               ; 00419316
    PUSH ESI                            ; 0041931c
        ;   Label: LAB_0041931c
    CALL core_flame.cpp_CFlame_renderTransparent_FUN_004b8100 ; 0041931d
        ;   XREF to: 004b8100 (UNCONDITIONAL_CALL)  ; int core_flame.cpp_CFlame_renderTransparent_FUN_004b8100(CFlame * this_ptr)
    INC EBX                             ; 00419322
    ADD ESP,0x4                         ; 00419323
    MOV ECX,dword ptr [EDI + 0x74c]     ; 00419326
    ADD ESI,0x2b0                       ; 0041932c
    CMP EBX,ECX                         ; 00419332
    JL 0x0041931c                       ; 00419334
        ;   XREF to: 0041931c (CONDITIONAL_JUMP)  ; LAB_0041931c
    POP ESI                             ; 00419336
    MOV EAX,0x1                         ; 00419337
        ;   Label: LAB_00419337
    POP EBX                             ; 0041933c
    POP EBP                             ; 0041933d
    POP EDI                             ; 0041933e
    RET                                 ; 0041933f
    XOR EAX,EAX                         ; 00419340
        ;   Label: LAB_00419340
    POP EBP                             ; 00419342
    POP EDI                             ; 00419343
    RET                                 ; 00419344


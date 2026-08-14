; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_bodypart_cpp_CBodyPart_renderTransparent_FUN_00419740(CBodyPart *this_ptr)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonRenderer g_CDemonRendererInstance
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.disable_directional_lighting
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00419340
;   core_flame.cpp_CFlame_renderTransparent_FUN_004ca110
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00419740
        ;   Label: core_bodypart.cpp_CBodyPart_renderTransparent_FUN_00419740
    PUSH EBP                            ; 00419741
    MOV EDI,dword ptr [ESP + 0xc]       ; 00419742
    CMP dword ptr [EDI + 0xf2c],0x0     ; 00419746
    JZ 0x00419800                       ; 0041974d
        ;   XREF to: 00419800 (CONDITIONAL_JUMP)  ; LAB_00419800
    CMP dword ptr [EDI + 0x158],0x1     ; 00419753
    JLE 0x00419769                      ; 0041975a
        ;   XREF to: 00419769 (CONDITIONAL_JUMP)  ; LAB_00419769
    CMP dword ptr [EDI + 0x74c],0x0     ; 0041975c
    JZ 0x00419800                       ; 00419763
        ;   XREF to: 00419800 (CONDITIONAL_JUMP)  ; LAB_00419800
    PUSH EBX                            ; 00419769
        ;   Label: LAB_00419769
    CMP dword ptr [EDI + 0xcb4],0x0     ; 0041976a
    JZ 0x004197c9                       ; 00419771
        ;   XREF to: 004197c9 (CONDITIONAL_JUMP)  ; LAB_004197c9
    MOV EBX,dword ptr [0x006810c8]      ; 00419773 | g_CDemonSetInstance | g_CDemonSetPtr
    MOV EAX,dword ptr [EDI + 0xcb0]     ; 00419779
    PUSH EDI                            ; 0041977f
    MOV dword ptr [EBX + 0x15ac88],EAX  ; 00419780 | g_CDemonSetInstance.disable_directional_lighting
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 00419786
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0041978b
    MOV EBP,dword ptr [EDI + 0xcc0]     ; 0041978e
    PUSH EBP                            ; 00419794
    MOV EAX,[0x006703ec]                ; 00419795 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EAX                            ; 0041979a | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 0041979b
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004197a0
    PUSH 0x2e7                          ; 004197a3
    PUSH EDI                            ; 004197a8
    CALL core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00419340 ; 004197a9
        ;   XREF to: 00419340 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00419340(CBodyPart * this_ptr, int render_flags)
    ADD ESP,0x8                         ; 004197ae
    PUSH EDI                            ; 004197b1
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 004197b2
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    MOV EAX,[0x006810c8]                ; 004197b7 | g_CDemonSetInstance | g_CDemonSetPtr
    ADD ESP,0x4                         ; 004197bc
    MOV dword ptr [EAX + 0x15ac88],0x0  ; 004197bf | g_CDemonSetInstance.disable_directional_lighting
    MOV EDX,dword ptr [EDI + 0x74c]     ; 004197c9
        ;   Label: LAB_004197c9
    XOR EBX,EBX                         ; 004197cf
    TEST EDX,EDX                        ; 004197d1
    JLE 0x004197f7                      ; 004197d3
        ;   XREF to: 004197f7 (CONDITIONAL_JUMP)  ; LAB_004197f7
    PUSH ESI                            ; 004197d5
    LEA ESI,[EDI + 0x75c]               ; 004197d6
    PUSH ESI                            ; 004197dc
        ;   Label: LAB_004197dc
    CALL core_flame.cpp_CFlame_renderTransparent_FUN_004ca110 ; 004197dd
        ;   XREF to: 004ca110 (UNCONDITIONAL_CALL)  ; int core_flame.cpp_CFlame_renderTransparent_FUN_004ca110(CFlame * this_ptr)
    INC EBX                             ; 004197e2
    ADD ESP,0x4                         ; 004197e3
    MOV ECX,dword ptr [EDI + 0x74c]     ; 004197e6
    ADD ESI,0x2b0                       ; 004197ec
    CMP EBX,ECX                         ; 004197f2
    JL 0x004197dc                       ; 004197f4
        ;   XREF to: 004197dc (CONDITIONAL_JUMP)  ; LAB_004197dc
    POP ESI                             ; 004197f6
    MOV EAX,0x1                         ; 004197f7
        ;   Label: LAB_004197f7
    POP EBX                             ; 004197fc
    POP EBP                             ; 004197fd
    POP EDI                             ; 004197fe
    RET                                 ; 004197ff
    XOR EAX,EAX                         ; 00419800
        ;   Label: LAB_00419800
    POP EBP                             ; 00419802
    POP EDI                             ; 00419803
    RET                                 ; 00419804


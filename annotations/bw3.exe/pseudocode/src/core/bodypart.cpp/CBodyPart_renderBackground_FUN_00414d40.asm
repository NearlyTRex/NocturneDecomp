; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_CBodyPart_renderBackground_FUN_00414d40(CBodyPart *this_ptr,int layer_flag)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   layer_flag
;
; Referenced Globals:
;   TerminatedCString s_s_going_into_background_005b6b10
;   CConsole* g_CConsolePtr = 007f7ea4
;   undefined4 DAT_005f2afc
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01bdd7e4
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.disable_directional_lighting
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0
;   core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00414a60
;   core_box.cpp_FUN_0041daf0
;   engine_console.cpp_FUN_00441ff0
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540
;   engine_matrix.c_pop_FUN_0046d080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414d40
        ;   Label: core_bodypart.cpp_CBodyPart_renderBackground_FUN_00414d40
    PUSH EBP                            ; 00414d41
    SUB ESP,0x30                        ; 00414d42
    MOV EBX,dword ptr [ESP + 0x3c]      ; 00414d45
    CMP dword ptr [EBX + 0xcc8],0x0     ; 00414d49
    JNZ 0x00414e33                      ; 00414d50
        ;   XREF to: 00414e33 (CONDITIONAL_JUMP)  ; LAB_00414e33
    CMP dword ptr [EBX + 0x158],0x0     ; 00414d56
    JNZ 0x00414d89                      ; 00414d5d
        ;   XREF to: 00414d89 (CONDITIONAL_JUMP)  ; LAB_00414d89
    CMP dword ptr [ESP + 0x40],0x0      ; 00414d5f
    JZ 0x00414d7c                       ; 00414d64
        ;   XREF to: 00414d7c (CONDITIONAL_JUMP)  ; LAB_00414d7c
    CMP dword ptr [EBX + 0xf2c],0x0     ; 00414d66
    JNZ 0x00414d7c                      ; 00414d6d
        ;   XREF to: 00414d7c (CONDITIONAL_JUMP)  ; LAB_00414d7c
    CMP dword ptr [EBX + 0xf24],0x0     ; 00414d6f
    JZ 0x00414e39                       ; 00414d76
        ;   XREF to: 00414e39 (CONDITIONAL_JUMP)  ; LAB_00414e39
    CMP dword ptr [EBX + 0x158],0x0     ; 00414d7c
        ;   Label: LAB_00414d7c
    JZ 0x00414e33                       ; 00414d83
        ;   XREF to: 00414e33 (CONDITIONAL_JUMP)  ; LAB_00414e33
    CMP dword ptr [EBX + 0x158],0x1     ; 00414d89
        ;   Label: LAB_00414d89
    JNZ 0x00414d9f                      ; 00414d90
        ;   XREF to: 00414d9f (CONDITIONAL_JUMP)  ; LAB_00414d9f
    CMP dword ptr [EBX + 0xf24],0x0     ; 00414d92
    JNZ 0x00414e33                      ; 00414d99
        ;   XREF to: 00414e33 (CONDITIONAL_JUMP)  ; LAB_00414e33
    PUSH EDI                            ; 00414d9f
        ;   Label: LAB_00414d9f
    PUSH ESI                            ; 00414da0
    PUSH EBX                            ; 00414da1
    MOV dword ptr [EBX + 0x158],0x2     ; 00414da2
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0 ; 00414dac
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00414db1
    MOV EAX,[0x00603b28]                ; 00414db4 | g_CDemonSetPtr
    MOV ESI,dword ptr [EBX + 0xcb0]     ; 00414db9
    PUSH 0x0                            ; 00414dbf
    MOV dword ptr [EAX + 0x15ac98],ESI  ; 00414dc1 | g_CDemonSetInstance.disable_directional_lighting
    PUSH EBX                            ; 00414dc7
    MOV EAX,dword ptr [EBX + 0x154]     ; 00414dc8
    LEA ESI,[ESP + 0x28]                ; 00414dce
    LEA EDI,[ESP + 0x10]                ; 00414dd2
    CALL dword ptr [EAX + 0x1c]         ; 00414dd6
    MOV ECX,0x6                         ; 00414dd9
    ADD ESP,0x4                         ; 00414dde
    LEA EAX,[ESP + 0xc]                 ; 00414de1
    LEA ESI,[ESP + 0x24]                ; 00414de5
    PUSH EAX                            ; 00414de9
    MOVSD.REP ES:EDI,ESI                ; 00414dea
    CALL core_box.cpp_FUN_0041daf0      ; 00414dec
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 00414df1
    MOV ESI,EAX                         ; 00414df4
    TEST EAX,EAX                        ; 00414df6
    JZ 0x00414e0e                       ; 00414df8
        ;   XREF to: 00414e0e (CONDITIONAL_JUMP)  ; LAB_00414e0e
    CMP dword ptr [EBX + 0xcb4],0x0     ; 00414dfa
    JNZ 0x00414e71                      ; 00414e01
        ;   XREF to: 00414e71 (CONDITIONAL_JUMP)  ; LAB_00414e71
    PUSH -0x1                           ; 00414e03
        ;   Label: LAB_00414e03
    PUSH EBX                            ; 00414e05
    CALL core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00414a60 ; 00414e06
        ;   XREF to: 00414a60 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00414a60(CBodyPart * this_ptr, int render_flags)
    ADD ESP,0x8                         ; 00414e0b
    MOV EAX,[0x005f2afc]                ; 00414e0e | DAT_005f2afc
        ;   Label: LAB_00414e0e
    PUSH EAX                            ; 00414e13 | DAT_01bdd7e4
    CALL engine_matrix.c_pop_FUN_0046d080 ; 00414e14
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046d080()
    MOV EAX,[0x00603b28]                ; 00414e19 | g_CDemonSetPtr | g_CDemonSetInstance
    MOV dword ptr [EAX + 0x15ac98],0x0  ; 00414e1e | g_CDemonSetInstance.disable_directional_lighting
    ADD ESP,0x4                         ; 00414e28
    MOV dword ptr [EBX + 0xf30],ESI     ; 00414e2b
    POP ESI                             ; 00414e31
    POP EDI                             ; 00414e32
    ADD ESP,0x30                        ; 00414e33
        ;   Label: LAB_00414e33
    POP EBP                             ; 00414e36
    POP EBX                             ; 00414e37
    RET                                 ; 00414e38
    PUSH EBX                            ; 00414e39
        ;   Label: LAB_00414e39
    MOV EAX,dword ptr [EBX + 0x154]     ; 00414e3a
    CALL dword ptr [EAX + 0x74]         ; 00414e40
    ADD ESP,0x4                         ; 00414e43
    TEST EAX,EAX                        ; 00414e46
    JNZ 0x00414d7c                      ; 00414e48
        ;   XREF to: 00414d7c (CONDITIONAL_JUMP)  ; LAB_00414d7c
    PUSH EBX                            ; 00414e4e
    PUSH 0x5b6b10                       ; 00414e4f | = "%s going into background\n"
    MOV EAX,[0x005f1690]                ; 00414e54 | g_CConsolePtr
    PUSH EAX                            ; 00414e59 | g_CConsoleInstance
    MOV dword ptr [EBX + 0x158],0x1     ; 00414e5a
    CALL engine_console.cpp_FUN_00441ff0 ; 00414e64
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0xc                         ; 00414e69
    JMP 0x00414d7c                      ; 00414e6c
        ;   XREF to: 00414d7c (UNCONDITIONAL_JUMP)  ; LAB_00414d7c
    MOV EBP,dword ptr [0x005f2afc]      ; 00414e71 | DAT_005f2afc
        ;   Label: LAB_00414e71
    PUSH EBP                            ; 00414e77 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540 ; 00414e78
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00414e7d
    TEST EAX,EAX                        ; 00414e80
    JNZ 0x00414e03                      ; 00414e82
        ;   XREF to: 00414e03 (CONDITIONAL_JUMP)  ; LAB_00414e03
    JMP 0x00414e0e                      ; 00414e88
        ;   XREF to: 00414e0e (UNCONDITIONAL_JUMP)  ; LAB_00414e0e


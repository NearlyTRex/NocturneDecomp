; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_CBodyPart_renderBackground_FUN_00419130(CBodyPart *this_ptr,int layer_flag)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   layer_flag
;
; Referenced Globals:
;   TerminatedCString s_s_going_into_background_005d4367
;   CConsole* g_CConsolePtr = 007db5f0
;   undefined4 DAT_00612560
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01bc120c
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.disable_directional_lighting
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00418e50
;   core_box.cpp_FUN_004207b0
;   engine_console.cpp_CConsole_printf_FUN_00445430
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60
;   engine_drender.cpp_pop_FUN_004839a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00419130
        ;   Label: core_bodypart.cpp_CBodyPart_renderBackground_FUN_00419130
    PUSH EBP                            ; 00419131
    SUB ESP,0x30                        ; 00419132
    MOV EBX,dword ptr [ESP + 0x3c]      ; 00419135
    CMP dword ptr [EBX + 0xcc8],0x0     ; 00419139
    JNZ 0x00419223                      ; 00419140
        ;   XREF to: 00419223 (CONDITIONAL_JUMP)  ; LAB_00419223
    CMP dword ptr [EBX + 0x158],0x0     ; 00419146
    JNZ 0x00419179                      ; 0041914d
        ;   XREF to: 00419179 (CONDITIONAL_JUMP)  ; LAB_00419179
    CMP dword ptr [ESP + 0x40],0x0      ; 0041914f
    JZ 0x0041916c                       ; 00419154
        ;   XREF to: 0041916c (CONDITIONAL_JUMP)  ; LAB_0041916c
    CMP dword ptr [EBX + 0xf2c],0x0     ; 00419156
    JNZ 0x0041916c                      ; 0041915d
        ;   XREF to: 0041916c (CONDITIONAL_JUMP)  ; LAB_0041916c
    CMP dword ptr [EBX + 0xf24],0x0     ; 0041915f
    JZ 0x00419229                       ; 00419166
        ;   XREF to: 00419229 (CONDITIONAL_JUMP)  ; LAB_00419229
    CMP dword ptr [EBX + 0x158],0x0     ; 0041916c
        ;   Label: LAB_0041916c
    JZ 0x00419223                       ; 00419173
        ;   XREF to: 00419223 (CONDITIONAL_JUMP)  ; LAB_00419223
    CMP dword ptr [EBX + 0x158],0x1     ; 00419179
        ;   Label: LAB_00419179
    JNZ 0x0041918f                      ; 00419180
        ;   XREF to: 0041918f (CONDITIONAL_JUMP)  ; LAB_0041918f
    CMP dword ptr [EBX + 0xf24],0x0     ; 00419182
    JNZ 0x00419223                      ; 00419189
        ;   XREF to: 00419223 (CONDITIONAL_JUMP)  ; LAB_00419223
    PUSH EDI                            ; 0041918f
        ;   Label: LAB_0041918f
    PUSH ESI                            ; 00419190
    PUSH EBX                            ; 00419191
    MOV dword ptr [EBX + 0x158],0x2     ; 00419192
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 0041919c
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004191a1
    MOV EAX,[0x00622c18]                ; 004191a4 | g_CDemonSetPtr
    MOV ESI,dword ptr [EBX + 0xcb0]     ; 004191a9
    PUSH 0x0                            ; 004191af
    MOV dword ptr [EAX + 0x15ac98],ESI  ; 004191b1 | g_CDemonSetInstance.disable_directional_lighting
    PUSH EBX                            ; 004191b7
    MOV EAX,dword ptr [EBX + 0x154]     ; 004191b8
    LEA ESI,[ESP + 0x28]                ; 004191be
    LEA EDI,[ESP + 0x10]                ; 004191c2
    CALL dword ptr [EAX + 0x1c]         ; 004191c6
    MOV ECX,0x6                         ; 004191c9
    ADD ESP,0x4                         ; 004191ce
    LEA EAX,[ESP + 0xc]                 ; 004191d1
    LEA ESI,[ESP + 0x24]                ; 004191d5
    PUSH EAX                            ; 004191d9
    MOVSD.REP ES:EDI,ESI                ; 004191da
    CALL core_box.cpp_FUN_004207b0      ; 004191dc
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 004191e1
    MOV ESI,EAX                         ; 004191e4
    TEST EAX,EAX                        ; 004191e6
    JZ 0x004191fe                       ; 004191e8
        ;   XREF to: 004191fe (CONDITIONAL_JUMP)  ; LAB_004191fe
    CMP dword ptr [EBX + 0xcb4],0x0     ; 004191ea
    JNZ 0x00419261                      ; 004191f1
        ;   XREF to: 00419261 (CONDITIONAL_JUMP)  ; LAB_00419261
    PUSH -0x1                           ; 004191f3
        ;   Label: LAB_004191f3
    PUSH EBX                            ; 004191f5
    CALL core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00418e50 ; 004191f6
        ;   XREF to: 00418e50 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00418e50(CBodyPart * this_ptr, int render_flags)
    ADD ESP,0x8                         ; 004191fb
    MOV EAX,[0x00612560]                ; 004191fe | DAT_00612560
        ;   Label: LAB_004191fe
    PUSH EAX                            ; 00419203 | DAT_01bc120c
    CALL engine_drender.cpp_pop_FUN_004839a0 ; 00419204
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_004839a0()
    MOV EAX,[0x00622c18]                ; 00419209 | g_CDemonSetPtr | g_CDemonSetInstance
    MOV dword ptr [EAX + 0x15ac98],0x0  ; 0041920e | g_CDemonSetInstance.disable_directional_lighting
    ADD ESP,0x4                         ; 00419218
    MOV dword ptr [EBX + 0xf30],ESI     ; 0041921b
    POP ESI                             ; 00419221
    POP EDI                             ; 00419222
    ADD ESP,0x30                        ; 00419223
        ;   Label: LAB_00419223
    POP EBP                             ; 00419226
    POP EBX                             ; 00419227
    RET                                 ; 00419228
    PUSH EBX                            ; 00419229
        ;   Label: LAB_00419229
    MOV EAX,dword ptr [EBX + 0x154]     ; 0041922a
    CALL dword ptr [EAX + 0x74]         ; 00419230
    ADD ESP,0x4                         ; 00419233
    TEST EAX,EAX                        ; 00419236
    JNZ 0x0041916c                      ; 00419238
        ;   XREF to: 0041916c (CONDITIONAL_JUMP)  ; LAB_0041916c
    PUSH EBX                            ; 0041923e
    PUSH 0x5d4367                       ; 0041923f | = "%s going into background\n"
    MOV EAX,[0x00611100]                ; 00419244 | g_CConsolePtr
    PUSH EAX                            ; 00419249 | g_CConsoleInstance
    MOV dword ptr [EBX + 0x158],0x1     ; 0041924a
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 00419254
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 00419259
    JMP 0x0041916c                      ; 0041925c
        ;   XREF to: 0041916c (UNCONDITIONAL_JUMP)  ; LAB_0041916c
    MOV EBP,dword ptr [0x00612560]      ; 00419261 | DAT_00612560
        ;   Label: LAB_00419261
    PUSH EBP                            ; 00419267 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 00419268
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0041926d
    TEST EAX,EAX                        ; 00419270
    JNZ 0x004191f3                      ; 00419272
        ;   XREF to: 004191f3 (CONDITIONAL_JUMP)  ; LAB_004191f3
    JMP 0x004191fe                      ; 00419278
        ;   XREF to: 004191fe (UNCONDITIONAL_JUMP)  ; LAB_004191fe


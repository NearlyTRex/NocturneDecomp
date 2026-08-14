; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_CBodyPart_renderBackground_FUN_00416300(CBodyPart *this_ptr,int layer_flag)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   layer_flag
; Local Variables:
; undefined        Stack[-0x20]:1  local_20
;
; Referenced Globals:
;   TerminatedCString s_s_going_into_background_00578f60
;   CConsole* g_CConsole_PTR_005ad350 = 0077ad0c
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   CConsole g_CConsole_0077ad0c
;   undefined4 DAT_01b4d738
;   CDemonSet g_CDemonSet_01e57284
;   undefined4 g_CDemonSet_01e57284.disable_directional_lighting
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00416030
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   engine_console.cpp_CConsole_printf_FUN_0043ac60
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00416300
        ;   Label: core_bodypart.cpp_CBodyPart_renderBackground_FUN_00416300
    PUSH EBP                            ; 00416301
    SUB ESP,0x18                        ; 00416302
    MOV EBX,dword ptr [ESP + 0x24]      ; 00416305
    CMP dword ptr [EBX + 0x150],0x0     ; 00416309
    JNZ 0x0041633c                      ; 00416310
        ;   XREF to: 0041633c (CONDITIONAL_JUMP)  ; LAB_0041633c
    CMP dword ptr [ESP + 0x28],0x0      ; 00416312
    JZ 0x0041632f                       ; 00416317
        ;   XREF to: 0041632f (CONDITIONAL_JUMP)  ; LAB_0041632f
    CMP dword ptr [EBX + 0xf10],0x0     ; 00416319
    JNZ 0x0041632f                      ; 00416320
        ;   XREF to: 0041632f (CONDITIONAL_JUMP)  ; LAB_0041632f
    CMP dword ptr [EBX + 0xf08],0x0     ; 00416322
    JZ 0x004163d8                       ; 00416329
        ;   XREF to: 004163d8 (CONDITIONAL_JUMP)  ; LAB_004163d8
    CMP dword ptr [EBX + 0x150],0x0     ; 0041632f
        ;   Label: LAB_0041632f
    JZ 0x004163d2                       ; 00416336
        ;   XREF to: 004163d2 (CONDITIONAL_JUMP)  ; LAB_004163d2
    CMP dword ptr [EBX + 0x150],0x1     ; 0041633c
        ;   Label: LAB_0041633c
    JNZ 0x00416352                      ; 00416343
        ;   XREF to: 00416352 (CONDITIONAL_JUMP)  ; LAB_00416352
    CMP dword ptr [EBX + 0xf08],0x0     ; 00416345
    JNZ 0x004163d2                      ; 0041634c
        ;   XREF to: 004163d2 (CONDITIONAL_JUMP)  ; LAB_004163d2
    PUSH ESI                            ; 00416352
        ;   Label: LAB_00416352
    PUSH EBX                            ; 00416353
    MOV dword ptr [EBX + 0x150],0x2     ; 00416354
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 0041635e
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00416363
    MOV EAX,[0x005be368]                ; 00416366 | g_CDemonSet_PTR_005be368
    MOV EDX,dword ptr [EBX + 0xc98]     ; 0041636b
    PUSH 0x0                            ; 00416371
    MOV dword ptr [EAX + 0x15a8a0],EDX  ; 00416373 | g_CDemonSet_01e57284.disable_directional_lighting
    LEA EAX,[ESP + 0x8]                 ; 00416379
    PUSH EAX                            ; 0041637d
    MOV EDX,dword ptr [EBX + 0x14c]     ; 0041637e
    PUSH EBX                            ; 00416384
    CALL dword ptr [EDX + 0x14]         ; 00416385
    ADD ESP,0x8                         ; 00416388
    PUSH EAX                            ; 0041638b
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 0041638c
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x8                         ; 00416391
    MOV ESI,EAX                         ; 00416394
    TEST EAX,EAX                        ; 00416396
    JZ 0x004163ae                       ; 00416398
        ;   XREF to: 004163ae (CONDITIONAL_JUMP)  ; LAB_004163ae
    CMP dword ptr [EBX + 0xc9c],0x0     ; 0041639a
    JNZ 0x00416411                      ; 004163a1
        ;   XREF to: 00416411 (CONDITIONAL_JUMP)  ; LAB_00416411
    PUSH -0x1                           ; 004163a3
        ;   Label: LAB_004163a3
    PUSH EBX                            ; 004163a5
    CALL core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00416030 ; 004163a6
        ;   XREF to: 00416030 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00416030(CBodyPart * this_ptr, int render_flags)
    ADD ESP,0x8                         ; 004163ab
    MOV EAX,[0x005ae704]                ; 004163ae | g_CDemonRenderer_PTR_005ae704
        ;   Label: LAB_004163ae
    PUSH EAX                            ; 004163b3 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 004163b4
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0(CDemonRenderer * this_ptr)
    MOV EAX,[0x005be368]                ; 004163b9 | g_CDemonSet_PTR_005be368 | g_CDemonSet_01e57284
    MOV dword ptr [EAX + 0x15a8a0],0x0  ; 004163be | g_CDemonSet_01e57284.disable_directional_lighting
    ADD ESP,0x4                         ; 004163c8
    MOV dword ptr [EBX + 0xf14],ESI     ; 004163cb
    POP ESI                             ; 004163d1
    ADD ESP,0x18                        ; 004163d2
        ;   Label: LAB_004163d2
    POP EBP                             ; 004163d5
    POP EBX                             ; 004163d6
    RET                                 ; 004163d7
    PUSH EBX                            ; 004163d8
        ;   Label: LAB_004163d8
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004163d9
    CALL dword ptr [EAX + 0x6c]         ; 004163df
    ADD ESP,0x4                         ; 004163e2
    TEST EAX,EAX                        ; 004163e5
    JNZ 0x0041632f                      ; 004163e7
        ;   XREF to: 0041632f (CONDITIONAL_JUMP)  ; LAB_0041632f
    PUSH EBX                            ; 004163ed
    PUSH 0x578f60                       ; 004163ee | = "%s going into background\n"
    MOV EBP,dword ptr [0x005ad350]      ; 004163f3 | g_CConsole_PTR_005ad350
    PUSH EBP                            ; 004163f9 | g_CConsole_0077ad0c
    MOV dword ptr [EBX + 0x150],0x1     ; 004163fa
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 00416404
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 00416409
    JMP 0x0041632f                      ; 0041640c
        ;   XREF to: 0041632f (UNCONDITIONAL_JUMP)  ; LAB_0041632f
    MOV EBP,dword ptr [0x005ae704]      ; 00416411 | g_CDemonRenderer_PTR_005ae704
        ;   Label: LAB_00416411
    PUSH EBP                            ; 00416417 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 00416418
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0041641d
    TEST EAX,EAX                        ; 00416420
    JNZ 0x004163a3                      ; 00416422
        ;   XREF to: 004163a3 (CONDITIONAL_JUMP)  ; LAB_004163a3
    JMP 0x004163ae                      ; 00416428
        ;   XREF to: 004163ae (UNCONDITIONAL_JUMP)  ; LAB_004163ae


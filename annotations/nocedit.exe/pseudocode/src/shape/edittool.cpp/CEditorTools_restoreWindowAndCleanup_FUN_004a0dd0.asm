; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools *this_ptr)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
;
; XREF[36]:
;   core_course.cpp_CCourse_FUN_00442bc0 at 00442ce2
;   core_course.cpp_CCourse_FUN_00442d70 at 00442e54
;   core_dmodel.cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0 at 0047b4c3
;   core_dmodel.cpp_CKeyFramedModel_weldAndRemoveUnusedVertices_FUN_0047ada0 at 0047b04c
;   core_dtrace.cpp_CDemonRaytrace_consolidateTriList_FUN_00494450 at 004945e9
;   core_dtrace.cpp_CDemonRaytrace_crunch_FUN_00495310 at 00495829
;   core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0 at 00494d73
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004db400
;   core_menu.cpp_adjustMouseSensitivity_FUN_005107c0 at 005109fc
;   core_msnedit.cpp_CDemonMission_FUN_0053eb40 at 0053ec23
;   ... and 26 more
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   int g_BitsPerPixel = 0x8
;   void*[1200] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;   int g_UseExternalRenderer
;
; Called Functions:
;   shape_edittool.cpp_CEditorTools_popWindowState_FUN_004a0ea0
;   shape_edittool.cpp_paintWindowBackground_FUN_0049e590
;   wincore_windll.cpp_lockFrame_FUN_005b7210
;   wincore_windll.cpp_unlockFrame_FUN_005b7250
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004a0dd0
        ;   Label: shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
    SUB ESP,0x12c0                      ; 004a0dd1
    CALL shape_edittool.cpp_paintWindowBackground_FUN_0049e590 ; 004a0dd7
        ;   XREF to: 0049e590 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_paintWindowBackground_FUN_0049e590()
    CMP dword ptr [0x02d03e94],0x0      ; 004a0ddc | g_UseExternalRenderer
    JZ 0x004a0e79                       ; 004a0de3
        ;   XREF to: 004a0e79 (CONDITIONAL_JUMP)  ; LAB_004a0e79
    PUSH ESI                            ; 004a0de9
    PUSH EBX                            ; 004a0dea
    MOV ECX,dword ptr [0x00679398]      ; 004a0deb | g_WindowHeight
    TEST ECX,ECX                        ; 004a0df1
    JLE 0x004a0e10                      ; 004a0df3
        ;   XREF to: 004a0e10 (CONDITIONAL_JUMP)  ; LAB_004a0e10
    LEA EBX,[ECX*0x4 + 0x0]             ; 004a0df5
    XOR EAX,EAX                         ; 004a0dfc
    ADD EAX,0x4                         ; 004a0dfe
        ;   Label: LAB_004a0dfe
    MOV EDX,dword ptr [EAX + 0x2cf6a98] ; 004a0e01 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    MOV dword ptr [ESP + EAX*0x1 + 0x4],EDX ; 004a0e07
    CMP EAX,EBX                         ; 004a0e0b
    JL 0x004a0dfe                       ; 004a0e0d
        ;   XREF to: 004a0dfe (CONDITIONAL_JUMP)  ; LAB_004a0dfe
    NOP                                 ; 004a0e0f
    CALL wincore_windll.cpp_lockFrame_FUN_005b7210 ; 004a0e10
        ;   XREF to: 005b7210 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_lockFrame_FUN_005b7210()
        ;   Label: LAB_004a0e10
    MOV EDX,dword ptr [0x00679394]      ; 004a0e15 | g_WindowWidth
    MOV EBX,dword ptr [0x0067939c]      ; 004a0e1b | g_BitsPerPixel
    IMUL EDX,EBX                        ; 004a0e21
    MOV EAX,EDX                         ; 004a0e24
    SAR EDX,0x1f                        ; 004a0e26
    SHL EDX,0x3                         ; 004a0e29
    SBB EAX,EDX                         ; 004a0e2c
    SAR EAX,0x3                         ; 004a0e2e
    MOV ESI,dword ptr [0x00679398]      ; 004a0e31 | g_WindowHeight
    XOR EBX,EBX                         ; 004a0e37
    MOV EBP,EAX                         ; 004a0e39
    TEST ESI,ESI                        ; 004a0e3b
    JLE 0x004a0e6d                      ; 004a0e3d
        ;   XREF to: 004a0e6d (CONDITIONAL_JUMP)  ; LAB_004a0e6d
    PUSH EDI                            ; 004a0e3f
    XOR EDX,EDX                         ; 004a0e40
    MOV ECX,EBP                         ; 004a0e42
        ;   Label: LAB_004a0e42
    MOV ESI,dword ptr [ESP + EDX*0x1 + 0xc] ; 004a0e44
    MOV EDI,dword ptr [EDX + 0x2cf6a9c] ; 004a0e48 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    PUSH EDI                            ; 004a0e4e
    MOV EAX,ECX                         ; 004a0e4f
    SHR ECX,0x2                         ; 004a0e51
    MOVSD.REP ES:EDI,ESI                ; 004a0e54
    MOV CL,AL                           ; 004a0e56
    AND CL,0x3                          ; 004a0e58
    MOVSB.REP ES:EDI,ESI                ; 004a0e5b
    POP EDI                             ; 004a0e5d
    INC EBX                             ; 004a0e5e
    MOV EDI,dword ptr [0x00679398]      ; 004a0e5f | g_WindowHeight
    ADD EDX,0x4                         ; 004a0e65
    CMP EBX,EDI                         ; 004a0e68
    JL 0x004a0e42                       ; 004a0e6a
        ;   XREF to: 004a0e42 (CONDITIONAL_JUMP)  ; LAB_004a0e42
    POP EDI                             ; 004a0e6c
    PUSH 0x1                            ; 004a0e6d
        ;   Label: LAB_004a0e6d
    CALL wincore_windll.cpp_unlockFrame_FUN_005b7250 ; 004a0e6f
        ;   XREF to: 005b7250 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_unlockFrame_FUN_005b7250(int clear_lock_flag)
    ADD ESP,0x4                         ; 004a0e74
    POP EBX                             ; 004a0e77
    POP ESI                             ; 004a0e78
    MOV EBP,dword ptr [ESP + 0x12c8]    ; 004a0e79
        ;   Label: LAB_004a0e79
    PUSH EBP                            ; 004a0e80
    CALL shape_edittool.cpp_CEditorTools_popWindowState_FUN_004a0ea0 ; 004a0e81
        ;   XREF to: 004a0ea0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_popWindowState_FUN_004a0ea0(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 004a0e86
    ADD ESP,0x12c0                      ; 004a0e89
    POP EBP                             ; 004a0e8f
    RET                                 ; 004a0e90


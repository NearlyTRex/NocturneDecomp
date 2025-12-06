; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_004a6b70(CEdCheck * this_ptr)
;
; Parameters:
; CEdCheck *       Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   shape_edittool.cpp_CEdCheck_calculateSpacing_FUN_004a6be0 at 004a6be5
;   shape_edittool.cpp_CEdCheck_render_FUN_004a6c00 at 004a6c2f
;   shape_edittool.cpp_CEdCheck_setupWithText_FUN_004a6a60 at 004a6ae8
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;
; Called Functions:
;   shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_004a6bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a6b70
        ;   Label: shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_004a6b70
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a6b71
    PUSH EDX                            ; 004a6b75
    CALL shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_004a6bb0 ; 004a6b76 | int shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_004a6bb0(CEdCheck * this_ptr)
        ;   XREF to: 004a6bb0 (UNCONDITIONAL_CALL)
    IMUL EAX,dword ptr [0x00679394]     ; 004a6b7b | int g_WindowWidth
    LEA EDX,[EAX*0x4 + 0x0]             ; 004a6b82
    SUB EDX,EAX                         ; 004a6b89
    MOV EAX,EDX                         ; 004a6b8b
    SAR EDX,0x1f                        ; 004a6b8d
    SHL EDX,0x2                         ; 004a6b90
    SBB EAX,EDX                         ; 004a6b93
    SAR EAX,0x2                         ; 004a6b95
    MOV EDX,EAX                         ; 004a6b98
    MOV EBX,dword ptr [0x00679398]      ; 004a6b9a | int g_WindowHeight
    SAR EDX,0x1f                        ; 004a6ba0
    ADD ESP,0x4                         ; 004a6ba3
    IDIV EBX                            ; 004a6ba6
    POP EBX                             ; 004a6ba8
    RET                                 ; 004a6ba9


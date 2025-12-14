; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int wincore_windll.cpp_restoreVideoModeX_FUN_005b7ede(void)
;
;
; Referenced Globals:
;   APIDLL_restoreVideoModeX* g_APIDLL_restoreVideoModeX
;   int g_VideoModeXBPP
;
; *****************************************************************************

section .text

    MOV EAX,EAX                         ; 005b7ede
        ;   Label: wincore_windll.cpp_restoreVideoModeX_FUN_005b7ede
    CMP dword ptr [0x03f6b938],0x0      ; 005b7ee0 | g_APIDLL_restoreVideoModeX
    JZ 0x005b7ef2                       ; 005b7ee7
        ;   XREF to: 005b7ef2 (CONDITIONAL_JUMP)  ; LAB_005b7ef2
    CMP dword ptr [0x03f6b9a0],0x0      ; 005b7ee9 | g_VideoModeXBPP
    JNZ 0x005b7ef5                      ; 005b7ef0
        ;   XREF to: 005b7ef5 (CONDITIONAL_JUMP)  ; LAB_005b7ef5
    XOR EAX,EAX                         ; 005b7ef2
        ;   Label: LAB_005b7ef2
    RET                                 ; 005b7ef4
    PUSH EBX                            ; 005b7ef5
        ;   Label: LAB_005b7ef5
    CALL dword ptr [0x03f6b938]         ; 005b7ef6 | g_APIDLL_restoreVideoModeX
    XOR EBX,EBX                         ; 005b7efc
    MOV EAX,0x1                         ; 005b7efe
    MOV dword ptr [0x03f6b9a0],EBX      ; 005b7f03 | g_VideoModeXBPP
    POP EBX                             ; 005b7f09
    RET                                 ; 005b7f0a


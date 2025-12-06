; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_cloth.cpp_FUN_0043c6b0()
;
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;
; Called Functions:
;   engine_2d.c_plotPixel_FUN_00401140
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0043c6b0
        ;   Label: core_cloth.cpp_FUN_0043c6b0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0043c6b4
    TEST EAX,EAX                        ; 0043c6b8
    JL 0x0043c6d0                       ; 0043c6ba | LAB_0043c6d0
        ;   XREF to: 0043c6d0 (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x00679394]      ; 0043c6bc | int g_WindowWidth
    JGE 0x0043c6d0                      ; 0043c6c2 | LAB_0043c6d0
        ;   XREF to: 0043c6d0 (CONDITIONAL_JUMP)
    TEST EDX,EDX                        ; 0043c6c4
    JL 0x0043c6d0                       ; 0043c6c6 | LAB_0043c6d0
        ;   XREF to: 0043c6d0 (CONDITIONAL_JUMP)
    CMP EDX,dword ptr [0x00679398]      ; 0043c6c8 | int g_WindowHeight
    JL 0x0043c6d1                       ; 0043c6ce | LAB_0043c6d1
        ;   XREF to: 0043c6d1 (CONDITIONAL_JUMP)
    RET                                 ; 0043c6d0
        ;   Label: LAB_0043c6d0
    PUSH EDX                            ; 0043c6d1
        ;   Label: LAB_0043c6d1
    PUSH EAX                            ; 0043c6d2
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 0043c6d3 | void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0043c6d8
    RET                                 ; 0043c6db


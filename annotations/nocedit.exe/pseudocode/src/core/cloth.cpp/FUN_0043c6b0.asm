; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_cloth_cpp_FUN_0043c6b0(void)
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
    JL 0x0043c6d0                       ; 0043c6ba
        ;   XREF to: 0043c6d0 (CONDITIONAL_JUMP)  ; LAB_0043c6d0
    CMP EAX,dword ptr [0x00679394]      ; 0043c6bc | g_WindowWidth
    JGE 0x0043c6d0                      ; 0043c6c2
        ;   XREF to: 0043c6d0 (CONDITIONAL_JUMP)  ; LAB_0043c6d0
    TEST EDX,EDX                        ; 0043c6c4
    JL 0x0043c6d0                       ; 0043c6c6
        ;   XREF to: 0043c6d0 (CONDITIONAL_JUMP)  ; LAB_0043c6d0
    CMP EDX,dword ptr [0x00679398]      ; 0043c6c8 | g_WindowHeight
    JL 0x0043c6d1                       ; 0043c6ce
        ;   XREF to: 0043c6d1 (CONDITIONAL_JUMP)  ; LAB_0043c6d1
    RET                                 ; 0043c6d0
        ;   Label: LAB_0043c6d0
    PUSH EDX                            ; 0043c6d1
        ;   Label: LAB_0043c6d1
    PUSH EAX                            ; 0043c6d2
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 0043c6d3
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 0043c6d8
    RET                                 ; 0043c6db


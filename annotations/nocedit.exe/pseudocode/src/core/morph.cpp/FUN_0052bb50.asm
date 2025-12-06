; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_morph.cpp_FUN_0052bb50()
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

    MOV EAX,dword ptr [ESP + 0x4]       ; 0052bb50
        ;   Label: core_morph.cpp_FUN_0052bb50
    MOV EDX,dword ptr [ESP + 0x8]       ; 0052bb54
    TEST EAX,EAX                        ; 0052bb58
    JL 0x0052bb70                       ; 0052bb5a | LAB_0052bb70
        ;   XREF to: 0052bb70 (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x00679394]      ; 0052bb5c | int g_WindowWidth
    JGE 0x0052bb70                      ; 0052bb62 | LAB_0052bb70
        ;   XREF to: 0052bb70 (CONDITIONAL_JUMP)
    TEST EDX,EDX                        ; 0052bb64
    JL 0x0052bb70                       ; 0052bb66 | LAB_0052bb70
        ;   XREF to: 0052bb70 (CONDITIONAL_JUMP)
    CMP EDX,dword ptr [0x00679398]      ; 0052bb68 | int g_WindowHeight
    JL 0x0052bb71                       ; 0052bb6e | LAB_0052bb71
        ;   XREF to: 0052bb71 (CONDITIONAL_JUMP)
    RET                                 ; 0052bb70
        ;   Label: LAB_0052bb70
    PUSH EDX                            ; 0052bb71
        ;   Label: LAB_0052bb71
    PUSH EAX                            ; 0052bb72
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 0052bb73 | void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0052bb78
    RET                                 ; 0052bb7b


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_dracbrid.cpp_FUN_00486e70()
;
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_init_FUN_00486ee0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00486e70
        ;   Label: core_dracbrid.cpp_FUN_00486e70
    MOV EBX,dword ptr [ESP + 0x8]       ; 00486e71
    MOV EAX,[0x00679398]                ; 00486e75 | g_WindowHeight
    PUSH 0x0                            ; 00486e7a
    DEC EAX                             ; 00486e7c
    PUSH EAX                            ; 00486e7d
    MOV EAX,[0x00679394]                ; 00486e7e | g_WindowWidth
    DEC EAX                             ; 00486e83
    PUSH EAX                            ; 00486e84
    PUSH 0x0                            ; 00486e85
    PUSH 0x0                            ; 00486e87
    PUSH EBX                            ; 00486e89
    CALL cockpit_drawsurf.cpp_CDrawSurface_init_FUN_00486ee0 ; 00486e8a
        ;   XREF to: 00486ee0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_init_FUN_00486ee0(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x18                        ; 00486e8f
    MOV EAX,EBX                         ; 00486e92
    POP EBX                             ; 00486e94
    RET                                 ; 00486e95


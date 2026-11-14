; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDrawSurface * core_dracbrid_cpp_FUN_00465d00(void)
;
;
; Referenced Globals:
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_init_FUN_00465d70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00465d00
        ;   Label: core_dracbrid.cpp_FUN_00465d00
    MOV EBX,dword ptr [ESP + 0x8]       ; 00465d01
    MOV EAX,[0x006141bc]                ; 00465d05 | DAT_006141bc
    PUSH 0x0                            ; 00465d0a
    DEC EAX                             ; 00465d0c
    PUSH EAX                            ; 00465d0d
    MOV EAX,[0x006141b8]                ; 00465d0e | DAT_006141b8
    DEC EAX                             ; 00465d13
    PUSH EAX                            ; 00465d14
    PUSH 0x0                            ; 00465d15
    PUSH 0x0                            ; 00465d17
    PUSH EBX                            ; 00465d19
    CALL cockpit_drawsurf.cpp_CDrawSurface_init_FUN_00465d70 ; 00465d1a
        ;   XREF to: 00465d70 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_init_FUN_00465d70(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x18                        ; 00465d1f
    MOV EAX,EBX                         ; 00465d22
    POP EBX                             ; 00465d24
    RET                                 ; 00465d25


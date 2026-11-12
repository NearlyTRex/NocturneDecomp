; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDrawSurface * core_dracbrid_cpp_FUN_0047e20e(CDrawSurface *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_init_FUN_0047e280
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 0047e20e
        ;   Label: core_dracbrid.cpp_FUN_0047e20e
    PUSH EBX                            ; 0047e210
    MOV EBX,dword ptr [ESP + 0x8]       ; 0047e211
    MOV EAX,[0x0061b49c]                ; 0047e215 | DAT_0061b49c
    PUSH 0x0                            ; 0047e21a
    DEC EAX                             ; 0047e21c
    PUSH EAX                            ; 0047e21d
    MOV EAX,[0x0061b498]                ; 0047e21e | DAT_0061b498
    DEC EAX                             ; 0047e223
    PUSH EAX                            ; 0047e224
    PUSH 0x0                            ; 0047e225
    PUSH 0x0                            ; 0047e227
    PUSH EBX                            ; 0047e229
    CALL cockpit_drawsurf.cpp_CDrawSurface_init_FUN_0047e280 ; 0047e22a
        ;   XREF to: 0047e280 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_init_FUN_0047e280(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x18                        ; 0047e22f
    MOV EAX,EBX                         ; 0047e232
    POP EBX                             ; 0047e234
    RET                                 ; 0047e235


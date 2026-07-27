; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_0045d2b0(int *param_1)
;
;
; XREF[2]:
;   cockpit_drawsurf.cpp_FUN_0045e370 at 0045e427
;   core_script.cpp_FUN_004fe9d0 at 004fea25
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_fillRectangle_FUN_0045d110
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0045d2b0
        ;   Label: cockpit_drawsurf.cpp_FUN_0045d2b0
    MOV EAX,dword ptr [EDX + 0x4]       ; 0045d2b4
    DEC EAX                             ; 0045d2b7
    PUSH EAX                            ; 0045d2b8
    MOV EAX,dword ptr [EDX]             ; 0045d2b9
    DEC EAX                             ; 0045d2bb
    PUSH EAX                            ; 0045d2bc
    PUSH 0x0                            ; 0045d2bd
    PUSH 0x0                            ; 0045d2bf
    PUSH EDX                            ; 0045d2c1
    CALL cockpit_drawsurf.cpp_CDrawSurface_fillRectangle_FUN_0045d110 ; 0045d2c2
        ;   XREF to: 0045d110 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_fillRectangle_FUN_0045d110()
    ADD ESP,0x14                        ; 0045d2c7
    RET                                 ; 0045d2ca


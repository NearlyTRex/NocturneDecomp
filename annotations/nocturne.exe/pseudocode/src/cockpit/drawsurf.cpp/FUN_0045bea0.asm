; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_0045bea0(undefined4 param_1,int param_2,int param_3,int param_4)
;
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_0045e370 at 0045e4b8
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0045bd50
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x10]      ; 0045bea0
        ;   Label: cockpit_drawsurf.cpp_FUN_0045bea0
    MOV EAX,dword ptr [ESP + 0xc]       ; 0045bea4
    PUSH EDX                            ; 0045bea8
    SUB EAX,EDX                         ; 0045bea9
    PUSH EAX                            ; 0045beab
    MOV EAX,dword ptr [ESP + 0x10]      ; 0045beac
    ADD EAX,EDX                         ; 0045beb0
    PUSH EAX                            ; 0045beb2
    MOV EDX,dword ptr [ESP + 0x10]      ; 0045beb3
    PUSH EDX                            ; 0045beb7
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0045bd50 ; 0045beb8
        ;   XREF to: 0045bd50 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0045bd50()
    ADD ESP,0x10                        ; 0045bebd
    RET                                 ; 0045bec0


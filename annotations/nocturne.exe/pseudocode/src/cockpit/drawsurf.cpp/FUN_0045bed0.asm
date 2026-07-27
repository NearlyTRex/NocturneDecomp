; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_0045bed0(undefined4 param_1,int param_2,int param_3,int param_4)
;
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_0045e370 at 0045e4ce
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0045bd50
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x10]      ; 0045bed0
        ;   Label: cockpit_drawsurf.cpp_FUN_0045bed0
    MOV EAX,dword ptr [ESP + 0xc]       ; 0045bed4
    PUSH EDX                            ; 0045bed8
    SUB EAX,EDX                         ; 0045bed9
    PUSH EAX                            ; 0045bedb
    MOV EAX,dword ptr [ESP + 0x10]      ; 0045bedc
    SUB EAX,EDX                         ; 0045bee0
    PUSH EAX                            ; 0045bee2
    MOV EDX,dword ptr [ESP + 0x10]      ; 0045bee3
    PUSH EDX                            ; 0045bee7
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0045bd50 ; 0045bee8
        ;   XREF to: 0045bd50 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0045bd50()
    ADD ESP,0x10                        ; 0045beed
    RET                                 ; 0045bef0


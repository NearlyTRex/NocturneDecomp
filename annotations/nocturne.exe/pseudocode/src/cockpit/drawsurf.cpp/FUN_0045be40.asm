; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_0045be40(undefined4 param_1,int param_2,int param_3,int param_4)
;
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_0045e370 at 0045e48f
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0045bd50
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x10]      ; 0045be40
        ;   Label: cockpit_drawsurf.cpp_FUN_0045be40
    MOV EAX,dword ptr [ESP + 0xc]       ; 0045be44
    PUSH EDX                            ; 0045be48
    ADD EAX,EDX                         ; 0045be49
    PUSH EAX                            ; 0045be4b
    MOV EAX,dword ptr [ESP + 0x10]      ; 0045be4c
    ADD EAX,EDX                         ; 0045be50
    PUSH EAX                            ; 0045be52
    MOV EDX,dword ptr [ESP + 0x10]      ; 0045be53
    PUSH EDX                            ; 0045be57
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0045bd50 ; 0045be58
        ;   XREF to: 0045bd50 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0045bd50()
    ADD ESP,0x10                        ; 0045be5d
    RET                                 ; 0045be60


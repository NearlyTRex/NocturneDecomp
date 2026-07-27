; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_0045cfd0(int *param_1)
;
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_0045e370 at 0045ecbe
;
; Called Functions:
;   cockpit_drawsurf.cpp_FUN_0045cde0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0045cfd0
        ;   Label: cockpit_drawsurf.cpp_FUN_0045cfd0
    MOV EAX,dword ptr [EDX + 0x4]       ; 0045cfd4
    DEC EAX                             ; 0045cfd7
    PUSH EAX                            ; 0045cfd8
    MOV EAX,dword ptr [EDX]             ; 0045cfd9
    DEC EAX                             ; 0045cfdb
    PUSH EAX                            ; 0045cfdc
    PUSH 0x0                            ; 0045cfdd
    PUSH 0x0                            ; 0045cfdf
    PUSH EDX                            ; 0045cfe1
    CALL cockpit_drawsurf.cpp_FUN_0045cde0 ; 0045cfe2
        ;   XREF to: 0045cde0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0045cde0()
    ADD ESP,0x14                        ; 0045cfe7
    RET                                 ; 0045cfea


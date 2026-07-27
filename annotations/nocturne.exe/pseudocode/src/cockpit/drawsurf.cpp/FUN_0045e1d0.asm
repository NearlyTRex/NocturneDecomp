; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_0045e1d0(void)
;
;
; Called Functions:
;   cockpit_drawsurf.cpp_FUN_0045e1a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045e1d0
        ;   Label: cockpit_drawsurf.cpp_FUN_0045e1d0
    MOV EDX,dword ptr [ESP + 0xc]       ; 0045e1d1
    PUSH EDX                            ; 0045e1d5
    MOV ECX,dword ptr [ESP + 0x14]      ; 0045e1d6
    PUSH ECX                            ; 0045e1da
    MOV EBX,dword ptr [ESP + 0x10]      ; 0045e1db
    PUSH EBX                            ; 0045e1df
    CALL cockpit_drawsurf.cpp_FUN_0045e1a0 ; 0045e1e0
        ;   XREF to: 0045e1a0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0045e1a0()
    ADD ESP,0xc                         ; 0045e1e5
    POP EBX                             ; 0045e1e8
    RET                                 ; 0045e1e9


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_0045de40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[3]:
;   cockpit_drawsurf.cpp_FUN_0045de70 at 0045de8c
;   cockpit_drawsurf.cpp_FUN_0045dea0 at 0045df03
;   cockpit_drawsurf.cpp_FUN_0045e0f0 at 0045e106
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045de40
        ;   Label: cockpit_drawsurf.cpp_FUN_0045de40
    PUSH ESI                            ; 0045de41
    PUSH EDI                            ; 0045de42
    PUSH 0x5                            ; 0045de43
    PUSH 0x0                            ; 0045de45
    MOV EDX,dword ptr [ESP + 0x28]      ; 0045de47
    PUSH EDX                            ; 0045de4b
    MOV ECX,dword ptr [ESP + 0x28]      ; 0045de4c
    PUSH ECX                            ; 0045de50
    MOV EBX,dword ptr [ESP + 0x28]      ; 0045de51
    PUSH EBX                            ; 0045de55
    MOV ESI,dword ptr [ESP + 0x28]      ; 0045de56
    PUSH ESI                            ; 0045de5a
    MOV EDI,dword ptr [ESP + 0x28]      ; 0045de5b
    PUSH EDI                            ; 0045de5f
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760 ; 0045de60
        ;   XREF to: 0045d760 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760()
    ADD ESP,0x1c                        ; 0045de65
    POP EDI                             ; 0045de68
    POP ESI                             ; 0045de69
    POP EBX                             ; 0045de6a
    RET                                 ; 0045de6b


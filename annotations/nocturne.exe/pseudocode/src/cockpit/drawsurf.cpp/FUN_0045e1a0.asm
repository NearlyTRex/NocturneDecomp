; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_0045e1a0(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[2]:
;   cockpit_drawsurf.cpp_FUN_0045e1d0 at 0045e1e0
;   cockpit_drawsurf.cpp_FUN_0045e1f0 at 0045e241
;
; Called Functions:
;   cockpit_drawsurf.cpp_FUN_0045df20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045e1a0
        ;   Label: cockpit_drawsurf.cpp_FUN_0045e1a0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0045e1a1
    MOV EAX,dword ptr [EDX + 0x4]       ; 0045e1a5
    DEC EAX                             ; 0045e1a8
    PUSH EAX                            ; 0045e1a9
    PUSH 0x0                            ; 0045e1aa
    MOV ECX,dword ptr [ESP + 0x18]      ; 0045e1ac
    PUSH ECX                            ; 0045e1b0
    MOV EBX,dword ptr [ESP + 0x18]      ; 0045e1b1
    PUSH EBX                            ; 0045e1b5
    PUSH EDX                            ; 0045e1b6
    CALL cockpit_drawsurf.cpp_FUN_0045df20 ; 0045e1b7
        ;   XREF to: 0045df20 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0045df20()
    ADD ESP,0x14                        ; 0045e1bc
    POP EBX                             ; 0045e1bf
    RET                                 ; 0045e1c0


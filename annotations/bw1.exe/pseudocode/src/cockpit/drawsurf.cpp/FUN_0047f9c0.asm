; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_0047f9c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; Referenced Globals:
;   undefined4 DAT_00612550
;   undefined4 DAT_00612554
;
; Called Functions:
;   cockpit_drawsurf.cpp_FUN_0047fb20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047f9c0
        ;   Label: cockpit_drawsurf.cpp_FUN_0047f9c0
    PUSH ESI                            ; 0047f9c1
    PUSH EDI                            ; 0047f9c2
    PUSH EBP                            ; 0047f9c3
    SUB ESP,0x4                         ; 0047f9c4
    MOV EDX,0x1                         ; 0047f9c7
    MOV ESI,dword ptr [ESP + 0x28]      ; 0047f9cc
    MOV EDI,dword ptr [ESP + 0x24]      ; 0047f9d0
    PUSH ESI                            ; 0047f9d4
    MOV EBP,dword ptr [ESP + 0x24]      ; 0047f9d5
    MOV EAX,[0x00612554]                ; 0047f9d9 | DAT_00612554
    PUSH EDI                            ; 0047f9de
    MOV EBX,dword ptr [0x00612550]      ; 0047f9df | DAT_00612550
    MOV dword ptr [ESP + 0x8],EAX       ; 0047f9e5
    PUSH EBP                            ; 0047f9e9
    MOV EAX,dword ptr [ESP + 0x28]      ; 0047f9ea
    MOV dword ptr [0x00612550],EDX      ; 0047f9ee | DAT_00612550
    PUSH EAX                            ; 0047f9f4
    MOV EDX,dword ptr [ESP + 0x28]      ; 0047f9f5
    XOR ECX,ECX                         ; 0047f9f9
    PUSH EDX                            ; 0047f9fb
    MOV dword ptr [0x00612554],ECX      ; 0047f9fc | DAT_00612554
    CALL cockpit_drawsurf.cpp_FUN_0047fb20 ; 0047fa02
        ;   XREF to: 0047fb20 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0047fb20()
    ADD ESP,0x14                        ; 0047fa07
    MOV EAX,dword ptr [ESP]             ; 0047fa0a
    MOV dword ptr [0x00612550],EBX      ; 0047fa0d | DAT_00612550
    MOV [0x00612554],EAX                ; 0047fa13 | DAT_00612554
    ADD ESP,0x4                         ; 0047fa18
    POP EBP                             ; 0047fa1b
    POP EDI                             ; 0047fa1c
    POP ESI                             ; 0047fa1d
    POP EBX                             ; 0047fa1e
    RET                                 ; 0047fa1f


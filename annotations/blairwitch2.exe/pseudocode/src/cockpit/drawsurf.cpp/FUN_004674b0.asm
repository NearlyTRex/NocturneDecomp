; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_004674b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; Referenced Globals:
;   undefined4 DAT_0060b270
;   undefined4 DAT_0060b274
;
; Called Functions:
;   cockpit_drawsurf.cpp_FUN_00467610
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004674b0
        ;   Label: cockpit_drawsurf.cpp_FUN_004674b0
    PUSH ESI                            ; 004674b1
    PUSH EDI                            ; 004674b2
    PUSH EBP                            ; 004674b3
    SUB ESP,0x4                         ; 004674b4
    MOV EDX,0x1                         ; 004674b7
    MOV ESI,dword ptr [ESP + 0x28]      ; 004674bc
    MOV EDI,dword ptr [ESP + 0x24]      ; 004674c0
    PUSH ESI                            ; 004674c4
    MOV EBP,dword ptr [ESP + 0x24]      ; 004674c5
    MOV EAX,[0x0060b274]                ; 004674c9 | DAT_0060b274
    PUSH EDI                            ; 004674ce
    MOV EBX,dword ptr [0x0060b270]      ; 004674cf | DAT_0060b270
    MOV dword ptr [ESP + 0x8],EAX       ; 004674d5
    PUSH EBP                            ; 004674d9
    MOV EAX,dword ptr [ESP + 0x28]      ; 004674da
    MOV dword ptr [0x0060b270],EDX      ; 004674de | DAT_0060b270
    PUSH EAX                            ; 004674e4
    MOV EDX,dword ptr [ESP + 0x28]      ; 004674e5
    XOR ECX,ECX                         ; 004674e9
    PUSH EDX                            ; 004674eb
    MOV dword ptr [0x0060b274],ECX      ; 004674ec | DAT_0060b274
    CALL cockpit_drawsurf.cpp_FUN_00467610 ; 004674f2
        ;   XREF to: 00467610 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_00467610()
    ADD ESP,0x14                        ; 004674f7
    MOV EAX,dword ptr [ESP]             ; 004674fa
    MOV dword ptr [0x0060b270],EBX      ; 004674fd | DAT_0060b270
    MOV [0x0060b274],EAX                ; 00467503 | DAT_0060b274
    ADD ESP,0x4                         ; 00467508
    POP EBP                             ; 0046750b
    POP EDI                             ; 0046750c
    POP ESI                             ; 0046750d
    POP EBX                             ; 0046750e
    RET                                 ; 0046750f


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_0045b480(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[1]:
;   FUN_004fe9d0 at 004fea0e
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_init_FUN_0045b4c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045b480
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_0045b480
    PUSH ESI                            ; 0045b481
    PUSH EDI                            ; 0045b482
    PUSH EBP                            ; 0045b483
    MOV EBX,dword ptr [ESP + 0x14]      ; 0045b484
    MOV EDX,dword ptr [ESP + 0x28]      ; 0045b488
    PUSH EDX                            ; 0045b48c
    MOV ECX,dword ptr [ESP + 0x28]      ; 0045b48d
    PUSH ECX                            ; 0045b491
    MOV ESI,dword ptr [ESP + 0x28]      ; 0045b492
    PUSH ESI                            ; 0045b496
    MOV EDI,dword ptr [ESP + 0x28]      ; 0045b497
    PUSH EDI                            ; 0045b49b
    MOV EBP,dword ptr [ESP + 0x28]      ; 0045b49c
    PUSH EBP                            ; 0045b4a0
    PUSH EBX                            ; 0045b4a1
    CALL cockpit_drawsurf.cpp_CDrawSurface_init_FUN_0045b4c0 ; 0045b4a2
        ;   XREF to: 0045b4c0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_init_FUN_0045b4c0()
    ADD ESP,0x18                        ; 0045b4a7
    MOV EAX,EBX                         ; 0045b4aa
    POP EBP                             ; 0045b4ac
    POP EDI                             ; 0045b4ad
    POP ESI                             ; 0045b4ae
    POP EBX                             ; 0045b4af
    RET                                 ; 0045b4b0


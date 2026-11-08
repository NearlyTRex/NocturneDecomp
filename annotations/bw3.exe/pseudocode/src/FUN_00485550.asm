; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00485550(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004832b0 at 004832f3
;
; Called Functions:
;   FUN_00485570
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00485550
        ;   Label: FUN_00485550
    MOV EBX,dword ptr [ESP + 0x8]       ; 00485551
    PUSH EBX                            ; 00485555
    CALL FUN_00485570                   ; 00485556
        ;   XREF to: 00485570 (UNCONDITIONAL_CALL)  ; undefined FUN_00485570()
    ADD ESP,0x4                         ; 0048555b
    MOV EAX,EBX                         ; 0048555e
    POP EBX                             ; 00485560
    RET                                 ; 00485561


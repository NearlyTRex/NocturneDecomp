; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0059c8b0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;
; *****************************************************************************

section .text

    MOV EDX,0x5f839b                    ; 0059c8b0
        ;   Label: FUN_0059c8b0
    MOV ECX,0x104                       ; 0059c8b5
    PUSH 0x5f83b2                       ; 0059c8ba
    MOV dword ptr [0x01d1d400],EDX      ; 0059c8bf | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0059c8c5 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0059c8cb
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0059c8d0
    MOV EAX,dword ptr [ESP + 0x4]       ; 0059c8d3
    RET                                 ; 0059c8d7


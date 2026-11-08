; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00485c50(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005ff48c
;   undefined4 DAT_005ff490
;
; Called Functions:
;   FUN_004a0410
;   FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00485c50
        ;   Label: FUN_00485c50
    MOV EDX,dword ptr [ESP + 0x8]       ; 00485c51
    PUSH EDX                            ; 00485c55
    CALL FUN_004a0410                   ; 00485c56
        ;   XREF to: 004a0410 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0410()
    ADD ESP,0x4                         ; 00485c5b
    PUSH 0x5db619                       ; 00485c5e
    MOV EBX,EAX                         ; 00485c63
    ADD EAX,0x158                       ; 00485c65
    PUSH EAX                            ; 00485c6a
    MOV dword ptr [EAX + -0x4],0x5ff4a4 ; 00485c6b
    CALL FUN_00569f50                   ; 00485c72
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f50()
    MOV dword ptr [EBX + 0x2fec],0x3f400000 ; 00485c77
    FLD float ptr [0x005ff48c]          ; 00485c81 | DAT_005ff48c
    MOV dword ptr [EBX + 0x2ff0],0x3fc00000 ; 00485c87
    FLD float ptr [0x005ff490]          ; 00485c91 | DAT_005ff490
    MOV dword ptr [EBX + 0x27a0],0x1    ; 00485c97
    ADD ESP,0x8                         ; 00485ca1
    MOV dword ptr [EBX + 0x2538],0x42960000 ; 00485ca4
    MOV EAX,EBX                         ; 00485cae
    FXCH                                ; 00485cb0
    FSTP float ptr [EBX + 0x2ff4]       ; 00485cb2
    FSTP float ptr [EBX + 0x2ff8]       ; 00485cb8
    POP EBX                             ; 00485cbe
    RET                                 ; 00485cbf


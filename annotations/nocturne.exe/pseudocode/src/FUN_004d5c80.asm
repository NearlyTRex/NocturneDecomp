; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004d5c80(int param_1,int *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00589507
;   undefined4 DAT_0058950f
;
; Called Functions:
;   FUN_004e1660
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 004d5c80
        ;   Label: FUN_004d5c80
    MOV EDX,dword ptr [ESP + 0xc]       ; 004d5c83
    MOV EAX,dword ptr [ESP + 0x10]      ; 004d5c87
    FLD float ptr [EDX + 0x2398]        ; 004d5c8b
    MOV ECX,dword ptr [EAX]             ; 004d5c91
    FSTP float ptr [EAX + 0x18]         ; 004d5c93
    MOV dword ptr [EAX + 0x1c],0x3f800000 ; 004d5c96
    CMP ECX,0x1                         ; 004d5c9d
    JZ 0x004d5cc6                       ; 004d5ca0
        ;   XREF to: 004d5cc6 (CONDITIONAL_JUMP)  ; LAB_004d5cc6
    MOV dword ptr [EAX + 0x14],0x40000000 ; 004d5ca2
    LEA EAX,[EDX + 0x150]               ; 004d5ca9
        ;   Label: LAB_004d5ca9
    PUSH EAX                            ; 004d5caf
    CALL FUN_004e1660                   ; 004d5cb0
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004d5cb5
    ADD ESP,0x4                         ; 004d5cb8
    CMP EAX,0xc                         ; 004d5cbb
    JNZ 0x004d5cf1                      ; 004d5cbe
        ;   XREF to: 004d5cf1 (CONDITIONAL_JUMP)  ; LAB_004d5cf1
    XOR EAX,EAX                         ; 004d5cc0
    ADD ESP,0x8                         ; 004d5cc2
    RET                                 ; 004d5cc5
    FLD float ptr [EAX + 0x1c]          ; 004d5cc6
        ;   Label: LAB_004d5cc6
    FLD float ptr [EAX + 0x18]          ; 004d5cc9
    MOV dword ptr [EAX + 0x14],0xbdcccccd ; 004d5ccc
    FLD ST1                             ; 004d5cd3
    FXCH                                ; 004d5cd5
    FADD float ptr [0x0058950f]         ; 004d5cd7 | DAT_0058950f
    FXCH                                ; 004d5cdd
    FMUL double ptr [0x00589507]        ; 004d5cdf | DAT_00589507
    FXCH                                ; 004d5ce5
    FSTP float ptr [EAX + 0x18]         ; 004d5ce7
    FSTP ST1                            ; 004d5cea
    FSTP float ptr [EAX + 0x1c]         ; 004d5cec
    JMP 0x004d5ca9                      ; 004d5cef
        ;   XREF to: 004d5ca9 (UNCONDITIONAL_JUMP)  ; LAB_004d5ca9
    MOV EAX,0x2                         ; 004d5cf1
        ;   Label: LAB_004d5cf1
    ADD ESP,0x8                         ; 004d5cf6
    RET                                 ; 004d5cf9


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004e0210(int param_1)
;
;
; Called Functions:
;   FUN_0044fd20
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e0210
        ;   Label: FUN_004e0210
    ADD EAX,0x2b4                       ; 004e0214
    PUSH EAX                            ; 004e0219
    CALL FUN_0044fd20                   ; 004e021a
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd20()
    MOV EDX,dword ptr [EAX + 0x110]     ; 004e021f
    ADD ESP,0x4                         ; 004e0225
    CMP EDX,0x1                         ; 004e0228
    JGE 0x004e0230                      ; 004e022b
        ;   XREF to: 004e0230 (CONDITIONAL_JUMP)  ; LAB_004e0230
    XOR EAX,EAX                         ; 004e022d
    RET                                 ; 004e022f
    MOV EAX,0x1                         ; 004e0230
        ;   Label: LAB_004e0230
    RET                                 ; 004e0235


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00454c20(undefined4 param_1,float param_2,float param_3,float param_4,float param_5)
;
;
; XREF[1]:
;   FUN_00555ab0 at 00555ac5
;
; Referenced Globals:
;   undefined4 DAT_005d7a7f
;   undefined4 DAT_00611224
;   undefined4 DAT_00611228
;   undefined4 DAT_0061122c
;   undefined4 DAT_01342200
;   undefined4 DAT_01342204
;   undefined4 DAT_01342208
;   undefined4 DAT_0134220c
;   undefined4 DAT_01342210
;
; Called Functions:
;   FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00454c20
        ;   Label: FUN_00454c20
    FLD double ptr [0x005d7a7f]         ; 00454c21 | DAT_005d7a7f
    FLD float ptr [ESP + 0xc]           ; 00454c27
    FMUL ST1                            ; 00454c2b
    FLD float ptr [ESP + 0x14]          ; 00454c2d
    FMUL ST2                            ; 00454c31
    FLD float ptr [ESP + 0x10]          ; 00454c33
    FMUL ST3                            ; 00454c37
    FLD float ptr [ESP + 0x18]          ; 00454c39
    XOR EDX,EDX                         ; 00454c3d
    FMULP ST4                           ; 00454c3f
    MOV dword ptr [0x01342208],EDX      ; 00454c41 | DAT_01342208
    FXCH ST2                            ; 00454c47
    CALL FUN_005c03a0                   ; 00454c49
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH                                ; 00454c4e
    CALL FUN_005c03a0                   ; 00454c50
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH ST2                            ; 00454c55
    CALL FUN_005c03a0                   ; 00454c57
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH ST3                            ; 00454c5c
    CALL FUN_005c03a0                   ; 00454c5e
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH ST2                            ; 00454c63
    FISTP dword ptr [0x00611228]        ; 00454c65 | DAT_00611228
    FXCH ST2                            ; 00454c6b
    FISTP dword ptr [0x01342204]        ; 00454c6d | DAT_01342204
    FISTP dword ptr [0x0134220c]        ; 00454c73 | DAT_0134220c
    MOV EBX,dword ptr [0x01342204]      ; 00454c79 | DAT_01342204
    FISTP dword ptr [0x00611224]        ; 00454c7f | DAT_00611224
    TEST EBX,EBX                        ; 00454c85
    JNZ 0x00454c9c                      ; 00454c87
        ;   XREF to: 00454c9c (CONDITIONAL_JUMP)  ; LAB_00454c9c
    MOV EAX,[0x00611228]                ; 00454c89 | DAT_00611228
    MOV EDX,0x1                         ; 00454c8e
    MOV [0x01342200],EAX                ; 00454c93 | DAT_01342200
    TEST EAX,EAX                        ; 00454c98
    JZ 0x00454ca4                       ; 00454c9a
        ;   XREF to: 00454ca4 (CONDITIONAL_JUMP)  ; LAB_00454ca4
    MOV dword ptr [0x0061122c],EDX      ; 00454c9c | DAT_0061122c
        ;   Label: LAB_00454c9c
    POP EBX                             ; 00454ca2
    RET                                 ; 00454ca3
    MOV EAX,[0x0134220c]                ; 00454ca4 | DAT_0134220c
        ;   Label: LAB_00454ca4
    MOV EDX,0x2                         ; 00454ca9
    MOV [0x01342210],EAX                ; 00454cae | DAT_01342210
    MOV dword ptr [0x0061122c],EDX      ; 00454cb3 | DAT_0061122c
    POP EBX                             ; 00454cb9
    RET                                 ; 00454cba


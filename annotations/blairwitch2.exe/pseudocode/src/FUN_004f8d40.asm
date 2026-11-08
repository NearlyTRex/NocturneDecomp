; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f8d40(float param_1,float param_2,float param_3,float param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_005ddfe8
;   undefined4 DAT_01c37788
;   undefined4 DAT_01d09860
;   undefined4 DAT_01d098e4
;   undefined4 DAT_01d098e8
;   undefined4 DAT_01d098ec
;   undefined4 DAT_01d0d2d8
;   undefined4 DAT_01d0d2dc
;   undefined4 DAT_01d0d2e0
;   undefined4 DAT_01d0d2e4
;   undefined4 DAT_0264bc78
;
; Called Functions:
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 004f8d40
        ;   Label: FUN_004f8d40
    MOV EAX,dword ptr [ESP + 0x18]      ; 004f8d43
    MOV [0x01d0d2d8],EAX                ; 004f8d47 | DAT_01d0d2d8
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004f8d4c
    MOV [0x01d0d2dc],EAX                ; 004f8d50 | DAT_01d0d2dc
    MOV EAX,dword ptr [ESP + 0x20]      ; 004f8d55
    FLD float ptr [0x01d09860]          ; 004f8d59 | DAT_01d09860
    MOV [0x01d0d2e0],EAX                ; 004f8d5f | DAT_01d0d2e0
    FCOMP float ptr [ESP + 0x14]        ; 004f8d64
    FNSTSW AX                           ; 004f8d68
    SAHF                                ; 004f8d6a
    JZ 0x004f8d89                       ; 004f8d6b
        ;   XREF to: 004f8d89 (CONDITIONAL_JUMP)  ; LAB_004f8d89
    MOV EAX,dword ptr [ESP + 0x14]      ; 004f8d6d
    MOV EDX,dword ptr [0x0264bc78]      ; 004f8d71 | DAT_0264bc78
    MOV [0x01d09860],EAX                ; 004f8d77 | DAT_01d09860
    TEST EDX,EDX                        ; 004f8d7c
    JZ 0x004f8d89                       ; 004f8d7e
        ;   XREF to: 004f8d89 (CONDITIONAL_JUMP)  ; LAB_004f8d89
    CMP dword ptr [0x01c37788],0x0      ; 004f8d80 | DAT_01c37788
    JNZ 0x004f8dfc                      ; 004f8d87
        ;   XREF to: 004f8dfc (CONDITIONAL_JUMP)  ; LAB_004f8dfc
    FLD float ptr [0x005ddfe8]          ; 004f8d89 | DAT_005ddfe8
        ;   Label: LAB_004f8d89
    FLD float ptr [ESP + 0x18]          ; 004f8d8f
    FMUL ST1                            ; 004f8d93
    FLD float ptr [ESP + 0x1c]          ; 004f8d95
    FMUL ST2                            ; 004f8d99
    FLD float ptr [ESP + 0x20]          ; 004f8d9b
    FMUL ST3                            ; 004f8d9f
    FLD float ptr [ESP + 0x14]          ; 004f8da1
    FMULP ST4                           ; 004f8da5
    FXCH ST2                            ; 004f8da7
    CALL FUN_005b7ff0                   ; 004f8da9
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH                                ; 004f8dae
    CALL FUN_005b7ff0                   ; 004f8db0
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH ST3                            ; 004f8db5
    CALL FUN_005b7ff0                   ; 004f8db7
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH                                ; 004f8dbc
    FISTP dword ptr [ESP]               ; 004f8dbe
    FISTP dword ptr [ESP + 0xc]         ; 004f8dc1
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f8dc5
    MOV EDX,dword ptr [ESP]             ; 004f8dc9
    SHL EAX,0x18                        ; 004f8dcc
    SHL EDX,0x10                        ; 004f8dcf
    FXCH                                ; 004f8dd2
    FISTP dword ptr [ESP + 0x4]         ; 004f8dd4
    OR EDX,EAX                          ; 004f8dd8
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f8dda
    CALL FUN_005b7ff0                   ; 004f8dde
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    SHL EAX,0x8                         ; 004f8de3
    FISTP dword ptr [ESP + 0x8]         ; 004f8de6
    OR EAX,EDX                          ; 004f8dea
    MOV EDX,dword ptr [ESP + 0x8]       ; 004f8dec
    OR EDX,EAX                          ; 004f8df0
    MOV dword ptr [0x01d0d2e4],EDX      ; 004f8df2 | DAT_01d0d2e4
    ADD ESP,0x10                        ; 004f8df8
    RET                                 ; 004f8dfb
    PUSH EAX                            ; 004f8dfc
        ;   Label: LAB_004f8dfc
    PUSH dword ptr [0x01d098ec]         ; 004f8dfd | DAT_01d098ec
    PUSH dword ptr [0x01d098e8]         ; 004f8e03 | DAT_01d098e8
    PUSH dword ptr [0x01d098e4]         ; 004f8e09 | DAT_01d098e4
    CALL dword ptr [0x0264bc78]         ; 004f8e0f | DAT_0264bc78
    ADD ESP,0x10                        ; 004f8e15
    JMP 0x004f8d89                      ; 004f8e18
        ;   XREF to: 004f8d89 (UNCONDITIONAL_JUMP)  ; LAB_004f8d89


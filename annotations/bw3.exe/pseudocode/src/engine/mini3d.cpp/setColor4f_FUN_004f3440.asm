; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_setColor4f_FUN_004f3440(float alpha,float red,float green,float blue)
;
; Parameters:
; float            Stack[0x4]:4   alpha
; float            Stack[0x8]:4   red
; float            Stack[0xc]:4   green
; float            Stack[0x10]:4   blue
;
; Referenced Globals:
;   undefined4 DAT_005c8331
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_01d76c40
;   undefined4 DAT_01d76cc8
;   undefined4 DAT_01d76ccc
;   undefined4 DAT_01d76cd0
;   undefined4 DAT_01d7a6b8
;   undefined4 DAT_01d7a6bc
;   undefined4 DAT_01d7a6c0
;   undefined4 DAT_01d7a6c4
;   undefined4 DAT_02cf60a4
;
; Called Functions:
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 004f3440
        ;   Label: engine_mini3d.cpp_setColor4f_FUN_004f3440
    MOV EAX,dword ptr [ESP + 0x18]      ; 004f3443
    MOV [0x01d7a6b8],EAX                ; 004f3447 | DAT_01d7a6b8
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004f344c
    MOV [0x01d7a6bc],EAX                ; 004f3450 | DAT_01d7a6bc
    MOV EAX,dword ptr [ESP + 0x20]      ; 004f3455
    FLD float ptr [0x01d76c40]          ; 004f3459 | DAT_01d76c40
    MOV [0x01d7a6c0],EAX                ; 004f345f | DAT_01d7a6c0
    FCOMP float ptr [ESP + 0x14]        ; 004f3464
    FNSTSW AX                           ; 004f3468
    SAHF                                ; 004f346a
    JZ 0x004f3489                       ; 004f346b
        ;   XREF to: 004f3489 (CONDITIONAL_JUMP)  ; LAB_004f3489
    MOV EAX,dword ptr [ESP + 0x14]      ; 004f346d
    MOV EDX,dword ptr [0x02cf60a4]      ; 004f3471 | DAT_02cf60a4
    MOV [0x01d76c40],EAX                ; 004f3477 | DAT_01d76c40
    TEST EDX,EDX                        ; 004f347c
    JZ 0x004f3489                       ; 004f347e
        ;   XREF to: 004f3489 (CONDITIONAL_JUMP)  ; LAB_004f3489
    CMP dword ptr [0x01c6cee8],0x0      ; 004f3480 | DAT_01c6cee8
    JNZ 0x004f34fc                      ; 004f3487
        ;   XREF to: 004f34fc (CONDITIONAL_JUMP)  ; LAB_004f34fc
    FLD float ptr [0x005c8331]          ; 004f3489 | DAT_005c8331
        ;   Label: LAB_004f3489
    FLD float ptr [ESP + 0x18]          ; 004f348f
    FMUL ST1                            ; 004f3493
    FLD float ptr [ESP + 0x1c]          ; 004f3495
    FMUL ST2                            ; 004f3499
    FLD float ptr [ESP + 0x20]          ; 004f349b
    FMUL ST3                            ; 004f349f
    FLD float ptr [ESP + 0x14]          ; 004f34a1
    FMULP ST4                           ; 004f34a5
    FXCH ST2                            ; 004f34a7
    CALL crt_math.c_round_FUN_005a3120  ; 004f34a9
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 004f34ae
    CALL crt_math.c_round_FUN_005a3120  ; 004f34b0
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST3                            ; 004f34b5
    CALL crt_math.c_round_FUN_005a3120  ; 004f34b7
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 004f34bc
    FISTP dword ptr [ESP]               ; 004f34be
    FISTP dword ptr [ESP + 0xc]         ; 004f34c1
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f34c5
    MOV EDX,dword ptr [ESP]             ; 004f34c9
    SHL EAX,0x18                        ; 004f34cc
    SHL EDX,0x10                        ; 004f34cf
    FXCH                                ; 004f34d2
    FISTP dword ptr [ESP + 0x4]         ; 004f34d4
    OR EDX,EAX                          ; 004f34d8
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f34da
    CALL crt_math.c_round_FUN_005a3120  ; 004f34de
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    SHL EAX,0x8                         ; 004f34e3
    FISTP dword ptr [ESP + 0x8]         ; 004f34e6
    OR EAX,EDX                          ; 004f34ea
    MOV EDX,dword ptr [ESP + 0x8]       ; 004f34ec
    OR EDX,EAX                          ; 004f34f0
    MOV dword ptr [0x01d7a6c4],EDX      ; 004f34f2 | DAT_01d7a6c4
    ADD ESP,0x10                        ; 004f34f8
    RET                                 ; 004f34fb
    PUSH EAX                            ; 004f34fc
        ;   Label: LAB_004f34fc
    PUSH dword ptr [0x01d76cd0]         ; 004f34fd | DAT_01d76cd0
    PUSH dword ptr [0x01d76ccc]         ; 004f3503 | DAT_01d76ccc
    PUSH dword ptr [0x01d76cc8]         ; 004f3509 | DAT_01d76cc8
    CALL dword ptr [0x02cf60a4]         ; 004f350f | DAT_02cf60a4
    ADD ESP,0x10                        ; 004f3515
    JMP 0x004f3489                      ; 004f3518
        ;   XREF to: 004f3489 (UNCONDITIONAL_JUMP)  ; LAB_004f3489


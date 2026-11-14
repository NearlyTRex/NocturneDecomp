; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_setColor3f_FUN_004f33a0(float red,float green,float blue)
;
; Parameters:
; float            Stack[0x4]:4   red
; float            Stack[0x8]:4   green
; float            Stack[0xc]:4   blue
;
; Referenced Globals:
;   undefined4 DAT_005c832d
;   undefined4 DAT_01d76c40
;   undefined4 DAT_01d7a6b8
;   undefined4 DAT_01d7a6bc
;   undefined4 DAT_01d7a6c0
;   undefined4 DAT_01d7a6c4
;
; Called Functions:
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 004f33a0
        ;   Label: engine_mini3d.cpp_setColor3f_FUN_004f33a0
    FLD float ptr [0x005c832d]          ; 004f33a3 | DAT_005c832d
    FLD float ptr [ESP + 0x14]          ; 004f33a9
    FMUL ST1                            ; 004f33ad
    FLD float ptr [ESP + 0x18]          ; 004f33af
    FMUL ST2                            ; 004f33b3
    FLD float ptr [ESP + 0x1c]          ; 004f33b5
    FMUL ST3                            ; 004f33b9
    FLD float ptr [0x01d76c40]          ; 004f33bb | DAT_01d76c40
    MOV EAX,dword ptr [ESP + 0x14]      ; 004f33c1
    FMULP ST4                           ; 004f33c5
    MOV [0x01d7a6b8],EAX                ; 004f33c7 | DAT_01d7a6b8
    FXCH ST2                            ; 004f33cc
    CALL crt_math.c_round_FUN_005a3120  ; 004f33ce
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 004f33d3
    CALL crt_math.c_round_FUN_005a3120  ; 004f33d5
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST3                            ; 004f33da
    CALL crt_math.c_round_FUN_005a3120  ; 004f33dc
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    MOV EAX,dword ptr [ESP + 0x18]      ; 004f33e1
    FXCH                                ; 004f33e5
    FISTP dword ptr [ESP]               ; 004f33e7
    FISTP dword ptr [ESP + 0xc]         ; 004f33ea
    MOV [0x01d7a6bc],EAX                ; 004f33ee | DAT_01d7a6bc
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004f33f3
    MOV EDX,dword ptr [ESP + 0xc]       ; 004f33f7
    MOV [0x01d7a6c0],EAX                ; 004f33fb | DAT_01d7a6c0
    MOV EAX,dword ptr [ESP]             ; 004f3400
    SHL EDX,0x18                        ; 004f3403
    SHL EAX,0x10                        ; 004f3406
    FXCH                                ; 004f3409
    FISTP dword ptr [ESP + 0x4]         ; 004f340b
    OR EDX,EAX                          ; 004f340f
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f3411
    CALL crt_math.c_round_FUN_005a3120  ; 004f3415
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    SHL EAX,0x8                         ; 004f341a
    FISTP dword ptr [ESP + 0x8]         ; 004f341d
    OR EAX,EDX                          ; 004f3421
    MOV EDX,dword ptr [ESP + 0x8]       ; 004f3423
    OR EDX,EAX                          ; 004f3427
    MOV dword ptr [0x01d7a6c4],EDX      ; 004f3429 | DAT_01d7a6c4
    ADD ESP,0x10                        ; 004f342f
    RET                                 ; 004f3432


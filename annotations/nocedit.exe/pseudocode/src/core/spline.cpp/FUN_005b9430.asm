; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown int core_spline_cpp_FUN_005b9430(void)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b9430
        ;   Label: core_spline.cpp_FUN_005b9430
    PUSH ESI                            ; 005b9431
    PUSH EDI                            ; 005b9432
    PUSH EBP                            ; 005b9433
    MOV EBP,ESP                         ; 005b9434
    SUB ESP,0xc                         ; 005b9436
    MOV EAX,dword ptr [EBP + 0x14]      ; 005b9439
    MOV EDX,dword ptr [EBP + 0x18]      ; 005b943c
    MOV dword ptr [EBP + -0x4],EDX      ; 005b943f
    FILD dword ptr [EBP + -0x4]         ; 005b9442
    MOV EDX,dword ptr [EBP + 0x1c]      ; 005b9445
    FMUL float ptr [EAX + 0x10]         ; 005b9448
    MOV dword ptr [EBP + -0x4],EDX      ; 005b944b
    FILD dword ptr [EBP + -0x4]         ; 005b944e
    FMUL float ptr [EAX + 0x14]         ; 005b9451
    MOV EDX,dword ptr [EBP + 0x20]      ; 005b9454
    FADDP                               ; 005b9457
    MOV dword ptr [EBP + -0x4],EDX      ; 005b9459
    FILD dword ptr [EBP + -0x4]         ; 005b945c
    FMUL float ptr [EAX + 0x18]         ; 005b945f
    MOV EDX,dword ptr [EBP + 0x24]      ; 005b9462
    FADDP                               ; 005b9465
    MOV dword ptr [EBP + -0x4],EDX      ; 005b9467
    FILD dword ptr [EBP + -0x4]         ; 005b946a
    FMUL float ptr [EAX + 0x1c]         ; 005b946d
    FADDP                               ; 005b9470
    FSTP float ptr [EBP + -0xc]         ; 005b9472
    FLD float ptr [EBP + 0xfffffff4]    ; 005b9475
    FISTP dword ptr [EBP + 0xfffffff8]  ; 005b947b
    MOV EAX,dword ptr [EBP + -0x8]      ; 005b9481
    MOV ESP,EBP                         ; 005b9484
    POP EBP                             ; 005b9486
    POP EDI                             ; 005b9487
    POP ESI                             ; 005b9488
    POP EBX                             ; 005b9489
    RET                                 ; 005b948a


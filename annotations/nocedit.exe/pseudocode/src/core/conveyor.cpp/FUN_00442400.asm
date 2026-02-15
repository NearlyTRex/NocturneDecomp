; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_conveyor_cpp_FUN_00442400(void)
;
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined4       Stack[-0x10]:4  local_10
;
; Called Functions:
;   crt_math.c_floor_FUN_005feb90
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00442400
        ;   Label: core_conveyor.cpp_FUN_00442400
    MOV EBP,ESP                         ; 00442401
    SUB ESP,0x10                        ; 00442403
    AND ESP,0xfffffff8                  ; 00442406
    FLD float ptr [EBP + 0x8]           ; 00442409
    FLDZ                                ; 0044240c
    FXCH                                ; 0044240e
    FSTP double ptr [ESP]               ; 00442410
    FCOMP double ptr [ESP]              ; 00442413
    FNSTSW AX                           ; 00442416
    SAHF                                ; 00442418
    JBE 0x00442461                      ; 00442419
        ;   XREF to: 00442461 (CONDITIONAL_JUMP)  ; LAB_00442461
    FLD float ptr [EBP + 0x8]           ; 0044241b
    FCHS                                ; 0044241e
    FDIV float ptr [EBP + 0xc]          ; 00442420
    SUB ESP,0x8                         ; 00442423
    FSTP double ptr [ESP]               ; 00442426
    CALL crt_math.c_floor_FUN_005feb90  ; 00442429
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x10],EAX      ; 0044242e
    MOV dword ptr [ESP + 0x14],EDX      ; 00442432
    FLD double ptr [ESP + 0x10]         ; 00442436
    ADD ESP,0x8                         ; 0044243a
    FMUL float ptr [EBP + 0xc]          ; 0044243d
    FADD double ptr [ESP]               ; 00442440
    FST float ptr [EBP + 0x8]           ; 00442443
    FLDZ                                ; 00442446
    FCOMPP                              ; 00442448
    FNSTSW AX                           ; 0044244a
    SAHF                                ; 0044244c
    JA 0x00442456                       ; 0044244d
        ;   XREF to: 00442456 (CONDITIONAL_JUMP)  ; LAB_00442456
    MOV EAX,dword ptr [EBP + 0x8]       ; 0044244f
        ;   Label: LAB_0044244f
    MOV ESP,EBP                         ; 00442452
    POP EBP                             ; 00442454
    RET                                 ; 00442455
    FLD float ptr [EBP + 0x8]           ; 00442456
        ;   Label: LAB_00442456
    FADD float ptr [EBP + 0xc]          ; 00442459
    FSTP float ptr [EBP + 0x8]          ; 0044245c
    JMP 0x0044244f                      ; 0044245f
        ;   XREF to: 0044244f (UNCONDITIONAL_JUMP)  ; LAB_0044244f
    FLD float ptr [EBP + 0x8]           ; 00442461
        ;   Label: LAB_00442461
    FDIV float ptr [EBP + 0xc]          ; 00442464
    SUB ESP,0x8                         ; 00442467
    FSTP double ptr [ESP]               ; 0044246a
    CALL crt_math.c_floor_FUN_005feb90  ; 0044246d
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x10],EAX      ; 00442472
    MOV dword ptr [ESP + 0x14],EDX      ; 00442476
    FLD double ptr [ESP + 0x10]         ; 0044247a
    ADD ESP,0x8                         ; 0044247e
    FMUL float ptr [EBP + 0xc]          ; 00442481
    FSUBR double ptr [ESP]              ; 00442484
    FSTP float ptr [EBP + 0x8]          ; 00442487
    MOV EAX,dword ptr [EBP + 0x8]       ; 0044248a
    MOV ESP,EBP                         ; 0044248d
    POP EBP                             ; 0044248f
    RET                                 ; 00442490


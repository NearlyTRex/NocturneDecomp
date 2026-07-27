; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_course_cpp_fmodfPositive_FUN_0043b510(float param_1,float param_2)
;
;
; Called Functions:
;   crt_math.c_floor_FUN_005648c0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0043b510
        ;   Label: core_course.cpp_fmodfPositive_FUN_0043b510
    MOV EBP,ESP                         ; 0043b511
    SUB ESP,0x10                        ; 0043b513
    AND ESP,0xfffffff8                  ; 0043b516
    FLD float ptr [EBP + 0x8]           ; 0043b519
    FLDZ                                ; 0043b51c
    FXCH                                ; 0043b51e
    FSTP double ptr [ESP]               ; 0043b520
    FCOMP double ptr [ESP]              ; 0043b523
    FNSTSW AX                           ; 0043b526
    SAHF                                ; 0043b528
    JBE 0x0043b571                      ; 0043b529
        ;   XREF to: 0043b571 (CONDITIONAL_JUMP)  ; LAB_0043b571
    FLD float ptr [EBP + 0x8]           ; 0043b52b
    FCHS                                ; 0043b52e
    FDIV float ptr [EBP + 0xc]          ; 0043b530
    SUB ESP,0x8                         ; 0043b533
    FSTP double ptr [ESP]               ; 0043b536
    CALL crt_math.c_floor_FUN_005648c0  ; 0043b539
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_floor_FUN_005648c0()
    MOV dword ptr [ESP + 0x10],EAX      ; 0043b53e
    MOV dword ptr [ESP + 0x14],EDX      ; 0043b542
    FLD double ptr [ESP + 0x10]         ; 0043b546
    ADD ESP,0x8                         ; 0043b54a
    FMUL float ptr [EBP + 0xc]          ; 0043b54d
    FADD double ptr [ESP]               ; 0043b550
    FST float ptr [EBP + 0x8]           ; 0043b553
    FLDZ                                ; 0043b556
    FCOMPP                              ; 0043b558
    FNSTSW AX                           ; 0043b55a
    SAHF                                ; 0043b55c
    JA 0x0043b566                       ; 0043b55d
        ;   XREF to: 0043b566 (CONDITIONAL_JUMP)  ; LAB_0043b566
    MOV EAX,dword ptr [EBP + 0x8]       ; 0043b55f
        ;   Label: LAB_0043b55f
    MOV ESP,EBP                         ; 0043b562
    POP EBP                             ; 0043b564
    RET                                 ; 0043b565
    FLD float ptr [EBP + 0x8]           ; 0043b566
        ;   Label: LAB_0043b566
    FADD float ptr [EBP + 0xc]          ; 0043b569
    FSTP float ptr [EBP + 0x8]          ; 0043b56c
    JMP 0x0043b55f                      ; 0043b56f
        ;   XREF to: 0043b55f (UNCONDITIONAL_JUMP)  ; LAB_0043b55f
    FLD float ptr [EBP + 0x8]           ; 0043b571
        ;   Label: LAB_0043b571
    FDIV float ptr [EBP + 0xc]          ; 0043b574
    SUB ESP,0x8                         ; 0043b577
    FSTP double ptr [ESP]               ; 0043b57a
    CALL crt_math.c_floor_FUN_005648c0  ; 0043b57d
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_floor_FUN_005648c0()
    MOV dword ptr [ESP + 0x10],EAX      ; 0043b582
    MOV dword ptr [ESP + 0x14],EDX      ; 0043b586
    FLD double ptr [ESP + 0x10]         ; 0043b58a
    ADD ESP,0x8                         ; 0043b58e
    FMUL float ptr [EBP + 0xc]          ; 0043b591
    FSUBR double ptr [ESP]              ; 0043b594
    FSTP float ptr [EBP + 0x8]          ; 0043b597
    MOV EAX,dword ptr [EBP + 0x8]       ; 0043b59a
    MOV ESP,EBP                         ; 0043b59d
    POP EBP                             ; 0043b59f
    RET                                 ; 0043b5a0


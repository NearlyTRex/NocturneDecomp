; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_fire_cpp_safeAcos_FUN_00482630(float value)
;
; Parameters:
; float            Stack[0x4]:4   value
;
; Referenced Globals:
;   double DOUBLE_00581064 = -1
;
; Called Functions:
;   crt_math.c_acos_FUN_00565ca4
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00482630
        ;   Label: core_fire.cpp_safeAcos_FUN_00482630
    MOV EBP,ESP                         ; 00482631
    SUB ESP,0xc                         ; 00482633
    AND ESP,0xfffffff8                  ; 00482636
    FLD float ptr [EBP + 0x8]           ; 00482639
    FST double ptr [ESP]                ; 0048263c
    FCOMP double ptr [0x00581064]       ; 0048263f | DOUBLE_00581064
    FNSTSW AX                           ; 00482645
    SAHF                                ; 00482647
    JBE 0x00482662                      ; 00482648
        ;   XREF to: 00482662 (CONDITIONAL_JUMP)  ; LAB_00482662
    FLD1                                ; 0048264a
    FCOMP double ptr [ESP]              ; 0048264c
    FNSTSW AX                           ; 0048264f
    SAHF                                ; 00482651
    JA 0x0048266c                       ; 00482652
        ;   XREF to: 0048266c (CONDITIONAL_JUMP)  ; LAB_0048266c
    XOR EDX,EDX                         ; 00482654
    MOV dword ptr [ESP + 0x8],EDX       ; 00482656
    MOV EAX,dword ptr [ESP + 0x8]       ; 0048265a
        ;   Label: LAB_0048265a
    MOV ESP,EBP                         ; 0048265e
    POP EBP                             ; 00482660
    RET                                 ; 00482661
    MOV dword ptr [ESP + 0x8],0x40490fdb ; 00482662
        ;   Label: LAB_00482662
    JMP 0x0048265a                      ; 0048266a
        ;   XREF to: 0048265a (UNCONDITIONAL_JUMP)  ; LAB_0048265a
    FLD double ptr [ESP]                ; 0048266c
        ;   Label: LAB_0048266c
    CALL crt_math.c_acos_FUN_00565ca4   ; 0048266f
        ;   XREF to: 00565ca4 (UNCONDITIONAL_CALL)  ; double crt_math.c_acos_FUN_00565ca4(double x)
    FSTP float ptr [ESP + 0x8]          ; 00482674
    MOV EAX,dword ptr [ESP + 0x8]       ; 00482678
    MOV ESP,EBP                         ; 0048267c
    POP EBP                             ; 0048267e
    RET                                 ; 0048267f


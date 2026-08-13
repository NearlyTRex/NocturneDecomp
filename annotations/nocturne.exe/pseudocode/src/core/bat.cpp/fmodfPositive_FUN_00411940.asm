; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_bat_cpp_fmodfPositive_FUN_00411940(float value,float modulus)
;
; Parameters:
; float            Stack[0x4]:4   value
; float            Stack[0x8]:4   modulus
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined8       Stack[-0x10]:8  local_10
;
; Called Functions:
;   crt_math.c_floor_FUN_005648c0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00411940
        ;   Label: core_bat.cpp_fmodfPositive_FUN_00411940
    MOV EBP,ESP                         ; 00411941
    SUB ESP,0x10                        ; 00411943
    AND ESP,0xfffffff8                  ; 00411946
    FLD float ptr [EBP + 0x8]           ; 00411949
    FLDZ                                ; 0041194c
    FXCH                                ; 0041194e
    FSTP double ptr [ESP]               ; 00411950
    FCOMP double ptr [ESP]              ; 00411953
    FNSTSW AX                           ; 00411956
    SAHF                                ; 00411958
    JBE 0x004119a1                      ; 00411959
        ;   XREF to: 004119a1 (CONDITIONAL_JUMP)  ; LAB_004119a1
    FLD float ptr [EBP + 0x8]           ; 0041195b
    FCHS                                ; 0041195e
    FDIV float ptr [EBP + 0xc]          ; 00411960
    SUB ESP,0x8                         ; 00411963
    FSTP double ptr [ESP]               ; 00411966
    CALL crt_math.c_floor_FUN_005648c0  ; 00411969
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005648c0(double input_value)
    MOV dword ptr [ESP + 0x10],EAX      ; 0041196e
    MOV dword ptr [ESP + 0x14],EDX      ; 00411972
    FLD double ptr [ESP + 0x10]         ; 00411976
    ADD ESP,0x8                         ; 0041197a
    FMUL float ptr [EBP + 0xc]          ; 0041197d
    FADD double ptr [ESP]               ; 00411980
    FST float ptr [EBP + 0x8]           ; 00411983
    FLDZ                                ; 00411986
    FCOMPP                              ; 00411988
    FNSTSW AX                           ; 0041198a
    SAHF                                ; 0041198c
    JA 0x00411996                       ; 0041198d
        ;   XREF to: 00411996 (CONDITIONAL_JUMP)  ; LAB_00411996
    MOV EAX,dword ptr [EBP + 0x8]       ; 0041198f
        ;   Label: LAB_0041198f
    MOV ESP,EBP                         ; 00411992
    POP EBP                             ; 00411994
    RET                                 ; 00411995
    FLD float ptr [EBP + 0x8]           ; 00411996
        ;   Label: LAB_00411996
    FADD float ptr [EBP + 0xc]          ; 00411999
    FSTP float ptr [EBP + 0x8]          ; 0041199c
    JMP 0x0041198f                      ; 0041199f
        ;   XREF to: 0041198f (UNCONDITIONAL_JUMP)  ; LAB_0041198f
    FLD float ptr [EBP + 0x8]           ; 004119a1
        ;   Label: LAB_004119a1
    FDIV float ptr [EBP + 0xc]          ; 004119a4
    SUB ESP,0x8                         ; 004119a7
    FSTP double ptr [ESP]               ; 004119aa
    CALL crt_math.c_floor_FUN_005648c0  ; 004119ad
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005648c0(double input_value)
    MOV dword ptr [ESP + 0x10],EAX      ; 004119b2
    MOV dword ptr [ESP + 0x14],EDX      ; 004119b6
    FLD double ptr [ESP + 0x10]         ; 004119ba
    ADD ESP,0x8                         ; 004119be
    FMUL float ptr [EBP + 0xc]          ; 004119c1
    FSUBR double ptr [ESP]              ; 004119c4
    FSTP float ptr [EBP + 0x8]          ; 004119c7
    MOV EAX,dword ptr [EBP + 0x8]       ; 004119ca
    MOV ESP,EBP                         ; 004119cd
    POP EBP                             ; 004119cf
    RET                                 ; 004119d0


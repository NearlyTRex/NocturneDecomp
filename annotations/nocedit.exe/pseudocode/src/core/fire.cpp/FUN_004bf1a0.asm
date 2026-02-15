; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_fire_cpp_FUN_004bf1a0(void)
;
; Local Variables:
; undefined8       Stack[-0x10]:8  local_10
; undefined4       Stack[-0x8]:4  local_8
;
; Referenced Globals:
;   double DOUBLE_00629bfb = -1
;
; Called Functions:
;   crt_math.c_acos_FUN_00600162
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004bf1a0
        ;   Label: core_fire.cpp_FUN_004bf1a0
    MOV EBP,ESP                         ; 004bf1a1
    SUB ESP,0xc                         ; 004bf1a3
    AND ESP,0xfffffff8                  ; 004bf1a6
    FLD float ptr [EBP + 0x8]           ; 004bf1a9
    FST double ptr [ESP]                ; 004bf1ac
    FCOMP double ptr [0x00629bfb]       ; 004bf1af | DOUBLE_00629bfb
    FNSTSW AX                           ; 004bf1b5
    SAHF                                ; 004bf1b7
    JBE 0x004bf1d2                      ; 004bf1b8
        ;   XREF to: 004bf1d2 (CONDITIONAL_JUMP)  ; LAB_004bf1d2
    FLD1                                ; 004bf1ba
    FCOMP double ptr [ESP]              ; 004bf1bc
    FNSTSW AX                           ; 004bf1bf
    SAHF                                ; 004bf1c1
    JA 0x004bf1dc                       ; 004bf1c2
        ;   XREF to: 004bf1dc (CONDITIONAL_JUMP)  ; LAB_004bf1dc
    XOR EDX,EDX                         ; 004bf1c4
    MOV dword ptr [ESP + 0x8],EDX       ; 004bf1c6
    MOV EAX,dword ptr [ESP + 0x8]       ; 004bf1ca
        ;   Label: LAB_004bf1ca
    MOV ESP,EBP                         ; 004bf1ce
    POP EBP                             ; 004bf1d0
    RET                                 ; 004bf1d1
    MOV dword ptr [ESP + 0x8],0x40490fdb ; 004bf1d2
        ;   Label: LAB_004bf1d2
    JMP 0x004bf1ca                      ; 004bf1da
        ;   XREF to: 004bf1ca (UNCONDITIONAL_JUMP)  ; LAB_004bf1ca
    FLD double ptr [ESP]                ; 004bf1dc
        ;   Label: LAB_004bf1dc
    CALL crt_math.c_acos_FUN_00600162   ; 004bf1df
        ;   XREF to: 00600162 (UNCONDITIONAL_CALL)  ; double crt_math.c_acos_FUN_00600162(double x)
    FSTP float ptr [ESP + 0x8]          ; 004bf1e4
    MOV EAX,dword ptr [ESP + 0x8]       ; 004bf1e8
    MOV ESP,EBP                         ; 004bf1ec
    POP EBP                             ; 004bf1ee
    RET                                 ; 004bf1ef


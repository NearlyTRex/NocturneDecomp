; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_superopt_cpp_FUN_005d85a0(void)
;
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined8       Stack[-0x10]:8  local_10
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005d85a0
        ;   Label: shape_superopt.cpp_FUN_005d85a0
    PUSH EBP                            ; 005d85a1
    MOV EBP,ESP                         ; 005d85a2
    SUB ESP,0x18                        ; 005d85a4
    AND ESP,0xfffffff8                  ; 005d85a7
    MOV ECX,dword ptr [EBP + 0xc]       ; 005d85aa
    MOV EDX,dword ptr [EBP + 0x10]      ; 005d85ad
    MOV EAX,ESI                         ; 005d85b0
    FLD double ptr [ECX + 0x8]          ; 005d85b2
    FLD double ptr [ECX + 0x10]         ; 005d85b5
    FLD double ptr [ECX]                ; 005d85b8
    MOV EDI,ESI                         ; 005d85ba
    MOV ECX,0x6                         ; 005d85bc
    MOV ESI,ESP                         ; 005d85c1
    FADD double ptr [EDX]               ; 005d85c3
    FXCH ST2                            ; 005d85c5
    FADD double ptr [EDX + 0x8]         ; 005d85c7
    FXCH                                ; 005d85ca
    FADD double ptr [EDX + 0x10]        ; 005d85cc
    FXCH                                ; 005d85cf
    FSTP double ptr [ESP + 0x8]         ; 005d85d1
    FSTP double ptr [ESP + 0x10]        ; 005d85d5
    FSTP double ptr [ESP]               ; 005d85d9
    MOVSD.REP ES:EDI,ESI                ; 005d85dc
    MOV ESP,EBP                         ; 005d85de
    POP EBP                             ; 005d85e0
    POP EDI                             ; 005d85e1
    RET                                 ; 005d85e2


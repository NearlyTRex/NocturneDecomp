; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void shape_superopt_cpp_FUN_005d85f0(void)
;
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined8       Stack[-0x10]:8  local_10
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005d85f0
        ;   Label: shape_superopt.cpp_FUN_005d85f0
    PUSH EBP                            ; 005d85f1
    MOV EBP,ESP                         ; 005d85f2
    SUB ESP,0x18                        ; 005d85f4
    AND ESP,0xfffffff8                  ; 005d85f7
    MOV ECX,dword ptr [EBP + 0xc]       ; 005d85fa
    MOV EDX,dword ptr [EBP + 0x10]      ; 005d85fd
    MOV EAX,ESI                         ; 005d8600
    FLD double ptr [ECX]                ; 005d8602
    FMUL double ptr [EDX]               ; 005d8604
    FLD double ptr [ECX + 0x8]          ; 005d8606
    FMUL double ptr [EDX + 0x8]         ; 005d8609
    FLD double ptr [ECX + 0x10]         ; 005d860c
    FMUL double ptr [EDX + 0x10]        ; 005d860f
    MOV EDI,ESI                         ; 005d8612
    MOV ECX,0x6                         ; 005d8614
    MOV ESI,ESP                         ; 005d8619
    FXCH                                ; 005d861b
    FSTP double ptr [ESP + 0x8]         ; 005d861d
    FSTP double ptr [ESP + 0x10]        ; 005d8621
    FSTP double ptr [ESP]               ; 005d8625
    MOVSD.REP ES:EDI,ESI                ; 005d8628
    MOV ESP,EBP                         ; 005d862a
    POP EBP                             ; 005d862c
    POP EDI                             ; 005d862d
    RET                                 ; 005d862e


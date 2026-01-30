; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_superopt_cpp_FUN_005d83d0(void)
;
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
; undefined8       Stack[-0x10]:8  local_10
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005d83d0
        ;   Label: shape_superopt.cpp_FUN_005d83d0
    PUSH EBP                            ; 005d83d1
    MOV EBP,ESP                         ; 005d83d2
    SUB ESP,0x10                        ; 005d83d4
    AND ESP,0xfffffff8                  ; 005d83d7
    MOV EDX,dword ptr [EBP + 0xc]       ; 005d83da
    MOV EAX,ESI                         ; 005d83dd
    FLD double ptr [EBP + 0x10]         ; 005d83df
    FLD double ptr [EDX]                ; 005d83e2
    FMUL ST1                            ; 005d83e4
    FLD double ptr [EDX + 0x8]          ; 005d83e6
    FMULP ST2                           ; 005d83e9
    MOV EDI,ESI                         ; 005d83eb
    MOV ESI,ESP                         ; 005d83ed
    FXCH                                ; 005d83ef
    FSTP double ptr [ESP + 0x8]         ; 005d83f1
    FSTP double ptr [ESP]               ; 005d83f5
    MOVSD ES:EDI,ESI                    ; 005d83f8
    MOVSD ES:EDI,ESI                    ; 005d83f9
    MOVSD ES:EDI,ESI                    ; 005d83fa
    MOVSD ES:EDI,ESI                    ; 005d83fb
    MOV ESP,EBP                         ; 005d83fc
    POP EBP                             ; 005d83fe
    POP EDI                             ; 005d83ff
    RET                                 ; 005d8400


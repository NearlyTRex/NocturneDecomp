; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CP3D * __stack2_esi shape_superopt_cpp_CP3D_add_FUN_005d8520(CP3D *this_ptr,CP3D *a,CP3D *b)
;
; Parameters:
; CP3D *           Stack[0x4]:4   this_ptr
; CP3D *           Stack[0x8]:4   a
; Local Variables:
; double           Stack[-0x20]:8  local_20
; double           Stack[-0x18]:8  local_18
; double           Stack[-0x10]:8  local_10
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005d8520
        ;   Label: shape_superopt.cpp_CP3D_add_FUN_005d8520
    PUSH EBP                            ; 005d8521
    MOV EBP,ESP                         ; 005d8522
    SUB ESP,0x18                        ; 005d8524
    AND ESP,0xfffffff8                  ; 005d8527
    MOV ECX,dword ptr [EBP + 0xc]       ; 005d852a
    MOV EDX,dword ptr [EBP + 0x10]      ; 005d852d
    MOV EAX,ESI                         ; 005d8530
    FLD double ptr [ECX + 0x8]          ; 005d8532
    FLD double ptr [ECX + 0x10]         ; 005d8535
    FLD double ptr [ECX]                ; 005d8538
    MOV EDI,ESI                         ; 005d853a
    MOV ECX,0x6                         ; 005d853c
    MOV ESI,ESP                         ; 005d8541
    FADD double ptr [EDX]               ; 005d8543
    FXCH ST2                            ; 005d8545
    FADD double ptr [EDX + 0x8]         ; 005d8547
    FXCH                                ; 005d854a
    FADD double ptr [EDX + 0x10]        ; 005d854c
    FXCH                                ; 005d854f
    FSTP double ptr [ESP + 0x8]         ; 005d8551
    FSTP double ptr [ESP + 0x10]        ; 005d8555
    FSTP double ptr [ESP]               ; 005d8559
    MOVSD.REP ES:EDI,ESI                ; 005d855c
    MOV ESP,EBP                         ; 005d855e
    POP EBP                             ; 005d8560
    POP EDI                             ; 005d8561
    RET                                 ; 005d8562


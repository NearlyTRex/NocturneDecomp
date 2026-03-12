; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CP3D * __stackdbl_esi shape_superopt_cpp_CP3D_scale_FUN_005d8630(CP3D *this_ptr,double scalar,CP3D *result)
;
; Parameters:
; CP3D *           Stack[0x4]:4   this_ptr
; double           Stack[0x8]:8   scalar
; Local Variables:
; double           Stack[-0x20]:8  local_20
; double           Stack[-0x18]:8  local_18
; double           Stack[-0x10]:8  local_10
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005d8630
        ;   Label: shape_superopt.cpp_CP3D_scale_FUN_005d8630
    PUSH EBP                            ; 005d8631
    MOV EBP,ESP                         ; 005d8632
    SUB ESP,0x18                        ; 005d8634
    AND ESP,0xfffffff8                  ; 005d8637
    MOV EDX,dword ptr [EBP + 0xc]       ; 005d863a
    MOV EAX,ESI                         ; 005d863d
    FLD double ptr [EBP + 0x10]         ; 005d863f
    FLD double ptr [EDX]                ; 005d8642
    FMUL ST1                            ; 005d8644
    FLD double ptr [EDX + 0x8]          ; 005d8646
    FMUL ST2                            ; 005d8649
    FLD double ptr [EDX + 0x10]         ; 005d864b
    FMULP ST3                           ; 005d864e
    MOV ECX,0x6                         ; 005d8650
    MOV EDI,ESI                         ; 005d8655
    MOV ESI,ESP                         ; 005d8657
    FSTP double ptr [ESP + 0x8]         ; 005d8659
    FXCH                                ; 005d865d
    FSTP double ptr [ESP + 0x10]        ; 005d865f
    FSTP double ptr [ESP]               ; 005d8663
    MOVSD.REP ES:EDI,ESI                ; 005d8666
    MOV ESP,EBP                         ; 005d8668
    POP EBP                             ; 005d866a
    POP EDI                             ; 005d866b
    RET                                 ; 005d866c


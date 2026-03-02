; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CP3D * __stack2_esi shape_superopt_cpp_CP3D_subtract_FUN_005d84d0(CP3D *this_ptr,CP3D *a,CP3D *b)
;
; Parameters:
; CP3D *           Stack[0x4]:4   this_ptr
; CP3D *           Stack[0x8]:4   a
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined8       Stack[-0x10]:8  local_10
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005d84d0
        ;   Label: shape_superopt.cpp_CP3D_subtract_FUN_005d84d0
    PUSH EBP                            ; 005d84d1
    MOV EBP,ESP                         ; 005d84d2
    SUB ESP,0x18                        ; 005d84d4
    AND ESP,0xfffffff8                  ; 005d84d7
    MOV ECX,dword ptr [EBP + 0xc]       ; 005d84da
    MOV EDX,dword ptr [EBP + 0x10]      ; 005d84dd
    MOV EAX,ESI                         ; 005d84e0
    FLD double ptr [ECX + 0x8]          ; 005d84e2
    FLD double ptr [ECX + 0x10]         ; 005d84e5
    FLD double ptr [ECX]                ; 005d84e8
    MOV EDI,ESI                         ; 005d84ea
    MOV ECX,0x6                         ; 005d84ec
    MOV ESI,ESP                         ; 005d84f1
    FSUB double ptr [EDX]               ; 005d84f3
    FXCH ST2                            ; 005d84f5
    FSUB double ptr [EDX + 0x8]         ; 005d84f7
    FXCH                                ; 005d84fa
    FSUB double ptr [EDX + 0x10]        ; 005d84fc
    FXCH                                ; 005d84ff
    FSTP double ptr [ESP + 0x8]         ; 005d8501
    FSTP double ptr [ESP + 0x10]        ; 005d8505
    FSTP double ptr [ESP]               ; 005d8509
    MOVSD.REP ES:EDI,ESI                ; 005d850c
    MOV ESP,EBP                         ; 005d850e
    POP EBP                             ; 005d8510
    POP EDI                             ; 005d8511
    RET                                 ; 005d8512


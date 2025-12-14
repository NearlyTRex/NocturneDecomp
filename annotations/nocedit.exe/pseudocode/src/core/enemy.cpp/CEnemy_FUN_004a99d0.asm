; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float * core_enemy.cpp_CEnemy_FUN_004a99d0(CEnemy * this_ptr)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   float FLOAT_006243aa = 0.5
;   double DOUBLE_006243b2 = 0.166666666666667
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a99d0
        ;   Label: core_enemy.cpp_CEnemy_FUN_004a99d0
    PUSH EBP                            ; 004a99d1
    MOV EBP,ESP                         ; 004a99d2
    SUB ESP,0x24                        ; 004a99d4
    AND ESP,0xfffffff8                  ; 004a99d7
    MOV ECX,dword ptr [EBP + 0xc]       ; 004a99da
    MOV EBX,dword ptr [EBP + 0x10]      ; 004a99dd
    MOV EAX,ESP                         ; 004a99e0
    PUSH EAX                            ; 004a99e2
    MOV EDX,dword ptr [ECX + 0x154]     ; 004a99e3
    PUSH ECX                            ; 004a99e9
    CALL dword ptr [EDX + 0x14]         ; 004a99ea
    ADD ESP,0x8                         ; 004a99ed
    FLD float ptr [ESP]                 ; 004a99f0
    FADD float ptr [ESP + 0xc]          ; 004a99f3
    FST float ptr [ESP + 0x18]          ; 004a99f7
    FLD float ptr [0x006243aa]          ; 004a99fb | FLOAT_006243aa
    FXCH                                ; 004a9a01
    FMUL ST1                            ; 004a9a03
    FLD float ptr [ESP + 0x8]           ; 004a9a05
    FLD float ptr [ESP + 0x4]           ; 004a9a09
    FADD float ptr [ESP + 0x10]         ; 004a9a0d
    FXCH                                ; 004a9a11
    FADD float ptr [ESP + 0x14]         ; 004a9a13
    FXCH                                ; 004a9a17
    FSTP float ptr [ESP + 0x1c]         ; 004a9a19
    FSTP float ptr [ESP + 0x20]         ; 004a9a1d
    FSTP float ptr [EBX]                ; 004a9a21
    FLD float ptr [ESP + 0x1c]          ; 004a9a23
    FMUL ST1                            ; 004a9a27
    FSTP float ptr [EBX + 0x4]          ; 004a9a29
    FMUL float ptr [ESP + 0x20]         ; 004a9a2c
    FSTP float ptr [EBX + 0x8]          ; 004a9a30
    FLD float ptr [ESP + 0x10]          ; 004a9a33
    FSUB float ptr [ESP + 0x4]          ; 004a9a37
    FMUL double ptr [0x006243b2]        ; 004a9a3b | DOUBLE_006243b2
    FSUBR float ptr [ESP + 0x10]        ; 004a9a41
    MOV EAX,EBX                         ; 004a9a45
    FSTP float ptr [EBX + 0x4]          ; 004a9a47
    MOV ESP,EBP                         ; 004a9a4a
    POP EBP                             ; 004a9a4c
    POP EBX                             ; 004a9a4d
    RET                                 ; 004a9a4e


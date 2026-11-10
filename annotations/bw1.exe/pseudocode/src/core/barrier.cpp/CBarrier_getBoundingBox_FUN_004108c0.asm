; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_barrier_cpp_CBarrier_getBoundingBox_FUN_004108c0(CBarrier *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CBarrier *       Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Referenced Globals:
;   undefined4 DAT_005d358a
;   undefined4 DAT_005d3592
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004108c0
        ;   Label: core_barrier.cpp_CBarrier_getBoundingBox_FUN_004108c0
    SUB ESP,0x18                        ; 004108c1
    MOV EDX,dword ptr [ESP + 0x20]      ; 004108c4
    MOV EAX,ESI                         ; 004108c8
    FLD double ptr [0x005d358a]         ; 004108ca | DAT_005d358a
    FLD float ptr [EDX + 0x158]         ; 004108d0
    FMUL ST1                            ; 004108d6
    FLD float ptr [EDX + 0x160]         ; 004108d8
    FMUL ST2                            ; 004108de
    FLD float ptr [EDX + 0x158]         ; 004108e0
    FCHS                                ; 004108e6
    FMUL ST3                            ; 004108e8
    FLD float ptr [EDX + 0x160]         ; 004108ea
    FCHS                                ; 004108f0
    FMULP ST4                           ; 004108f2
    FLD float ptr [EDX + 0x15c]         ; 004108f4
    MOV ECX,0xbdcccccd                  ; 004108fa
    MOV EDI,ESI                         ; 004108ff
    MOV ESI,ESP                         ; 00410901
    MOV dword ptr [ESP + 0x4],ECX       ; 00410903
    FADD double ptr [0x005d3592]        ; 00410907 | DAT_005d3592
    FXCH ST3                            ; 0041090d
    FSTP float ptr [ESP + 0xc]          ; 0041090f
    FXCH ST2                            ; 00410913
    FSTP float ptr [ESP + 0x10]         ; 00410915
    FSTP float ptr [ESP + 0x14]         ; 00410919
    MOV ECX,0x6                         ; 0041091d
    FXCH                                ; 00410922
    FSTP float ptr [ESP + 0x8]          ; 00410924
    FSTP float ptr [ESP]                ; 00410928
    MOVSD.REP ES:EDI,ESI                ; 0041092b
    ADD ESP,0x18                        ; 0041092d
    POP EDI                             ; 00410930
    RET                                 ; 00410931


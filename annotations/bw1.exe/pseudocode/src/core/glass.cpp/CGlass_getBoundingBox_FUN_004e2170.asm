; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_glass_cpp_CGlass_getBoundingBox_FUN_004e2170(CGlass *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Referenced Globals:
;   undefined4 DAT_005e3f2c
;   undefined4 DAT_005e3f34
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004e2170
        ;   Label: core_glass.cpp_CGlass_getBoundingBox_FUN_004e2170
    SUB ESP,0x18                        ; 004e2171
    MOV EDX,dword ptr [ESP + 0x20]      ; 004e2174
    MOV EAX,ESI                         ; 004e2178
    FLD double ptr [0x005e3f2c]         ; 004e217a | DAT_005e3f2c
    FLD float ptr [EDX + 0x158]         ; 004e2180
    FMUL ST1                            ; 004e2186
    FLD float ptr [EDX + 0x160]         ; 004e2188
    FMUL ST2                            ; 004e218e
    FLD float ptr [EDX + 0x158]         ; 004e2190
    FCHS                                ; 004e2196
    FMUL ST3                            ; 004e2198
    FLD float ptr [EDX + 0x160]         ; 004e219a
    FCHS                                ; 004e21a0
    FMULP ST4                           ; 004e21a2
    FLD float ptr [EDX + 0x15c]         ; 004e21a4
    MOV ECX,0xbdcccccd                  ; 004e21aa
    MOV EDI,ESI                         ; 004e21af
    MOV ESI,ESP                         ; 004e21b1
    MOV dword ptr [ESP + 0x4],ECX       ; 004e21b3
    FADD double ptr [0x005e3f34]        ; 004e21b7 | DAT_005e3f34
    FXCH ST3                            ; 004e21bd
    FSTP float ptr [ESP + 0xc]          ; 004e21bf
    FXCH ST2                            ; 004e21c3
    FSTP float ptr [ESP + 0x10]         ; 004e21c5
    FSTP float ptr [ESP + 0x14]         ; 004e21c9
    MOV ECX,0x6                         ; 004e21cd
    FXCH                                ; 004e21d2
    FSTP float ptr [ESP + 0x8]          ; 004e21d4
    FSTP float ptr [ESP]                ; 004e21d8
    MOVSD.REP ES:EDI,ESI                ; 004e21db
    ADD ESP,0x18                        ; 004e21dd
    POP EDI                             ; 004e21e0
    RET                                 ; 004e21e1


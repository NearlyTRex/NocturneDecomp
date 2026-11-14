; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_glass_cpp_CGlass_getBoundingBox_FUN_004cad00(CGlass *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Referenced Globals:
;   undefined4 DAT_005c4538
;   undefined4 DAT_005c4540
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004cad00
        ;   Label: core_glass.cpp_CGlass_getBoundingBox_FUN_004cad00
    SUB ESP,0x18                        ; 004cad01
    MOV EDX,dword ptr [ESP + 0x20]      ; 004cad04
    MOV EAX,ESI                         ; 004cad08
    FLD double ptr [0x005c4538]         ; 004cad0a | DAT_005c4538
    FLD float ptr [EDX + 0x158]         ; 004cad10
    FMUL ST1                            ; 004cad16
    FLD float ptr [EDX + 0x160]         ; 004cad18
    FMUL ST2                            ; 004cad1e
    FLD float ptr [EDX + 0x158]         ; 004cad20
    FCHS                                ; 004cad26
    FMUL ST3                            ; 004cad28
    FLD float ptr [EDX + 0x160]         ; 004cad2a
    FCHS                                ; 004cad30
    FMULP ST4                           ; 004cad32
    FLD float ptr [EDX + 0x15c]         ; 004cad34
    MOV ECX,0xbdcccccd                  ; 004cad3a
    MOV EDI,ESI                         ; 004cad3f
    MOV ESI,ESP                         ; 004cad41
    MOV dword ptr [ESP + 0x4],ECX       ; 004cad43
    FADD double ptr [0x005c4540]        ; 004cad47 | DAT_005c4540
    FXCH ST3                            ; 004cad4d
    FSTP float ptr [ESP + 0xc]          ; 004cad4f
    FXCH ST2                            ; 004cad53
    FSTP float ptr [ESP + 0x10]         ; 004cad55
    FSTP float ptr [ESP + 0x14]         ; 004cad59
    MOV ECX,0x6                         ; 004cad5d
    FXCH                                ; 004cad62
    FSTP float ptr [ESP + 0x8]          ; 004cad64
    FSTP float ptr [ESP]                ; 004cad68
    MOVSD.REP ES:EDI,ESI                ; 004cad6b
    ADD ESP,0x18                        ; 004cad6d
    POP EDI                             ; 004cad70
    RET                                 ; 004cad71


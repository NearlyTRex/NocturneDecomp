; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_glass_cpp_CGlass_getBoundingBox_FUN_004c5a00(CGlass *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Referenced Globals:
;   undefined4 DAT_005d9372
;   undefined4 DAT_005d937a
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004c5a00
        ;   Label: core_glass.cpp_CGlass_getBoundingBox_FUN_004c5a00
    SUB ESP,0x18                        ; 004c5a01
    MOV EDX,dword ptr [ESP + 0x20]      ; 004c5a04
    MOV EAX,ESI                         ; 004c5a08
    FLD double ptr [0x005d9372]         ; 004c5a0a | DAT_005d9372
    FLD float ptr [EDX + 0x2b4]         ; 004c5a10
    FMUL ST1                            ; 004c5a16
    FLD float ptr [EDX + 0x2bc]         ; 004c5a18
    FMUL ST2                            ; 004c5a1e
    FLD float ptr [EDX + 0x2b4]         ; 004c5a20
    FCHS                                ; 004c5a26
    FMUL ST3                            ; 004c5a28
    FLD float ptr [EDX + 0x2bc]         ; 004c5a2a
    FCHS                                ; 004c5a30
    FMULP ST4                           ; 004c5a32
    FLD float ptr [EDX + 0x2b8]         ; 004c5a34
    MOV ECX,0xbdcccccd                  ; 004c5a3a
    MOV EDI,ESI                         ; 004c5a3f
    MOV ESI,ESP                         ; 004c5a41
    MOV dword ptr [ESP + 0x4],ECX       ; 004c5a43
    FADD double ptr [0x005d937a]        ; 004c5a47 | DAT_005d937a
    FXCH ST3                            ; 004c5a4d
    FSTP float ptr [ESP + 0xc]          ; 004c5a4f
    FXCH ST2                            ; 004c5a53
    FSTP float ptr [ESP + 0x10]         ; 004c5a55
    FSTP float ptr [ESP + 0x14]         ; 004c5a59
    MOV ECX,0x6                         ; 004c5a5d
    FXCH                                ; 004c5a62
    FSTP float ptr [ESP + 0x8]          ; 004c5a64
    FSTP float ptr [ESP]                ; 004c5a68
    MOVSD.REP ES:EDI,ESI                ; 004c5a6b
    ADD ESP,0x18                        ; 004c5a6d
    POP EDI                             ; 004c5a70
    RET                                 ; 004c5a71


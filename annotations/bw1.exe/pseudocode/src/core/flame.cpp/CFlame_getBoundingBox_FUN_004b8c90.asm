; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_flame_cpp_CFlame_getBoundingBox_FUN_004b8c90(CFlame *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CFlame *         Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Referenced Globals:
;   undefined4 DAT_005df6e7
;   undefined4 DAT_005df6ef
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004b8c90
        ;   Label: core_flame.cpp_CFlame_getBoundingBox_FUN_004b8c90
    SUB ESP,0x18                        ; 004b8c91
    MOV EDX,dword ptr [ESP + 0x20]      ; 004b8c94
    MOV EAX,ESI                         ; 004b8c98
    FLD double ptr [0x005df6e7]         ; 004b8c9a | DAT_005df6e7
    FLD float ptr [EDX + 0x158]         ; 004b8ca0
    FMUL ST1                            ; 004b8ca6
    FLD float ptr [EDX + 0x160]         ; 004b8ca8
    FMUL ST2                            ; 004b8cae
    FLD float ptr [EDX + 0x158]         ; 004b8cb0
    FCHS                                ; 004b8cb6
    FMUL ST3                            ; 004b8cb8
    FLD float ptr [EDX + 0x160]         ; 004b8cba
    FCHS                                ; 004b8cc0
    FMULP ST4                           ; 004b8cc2
    FLD float ptr [EDX + 0x15c]         ; 004b8cc4
    MOV ECX,0xbdcccccd                  ; 004b8cca
    MOV EDI,ESI                         ; 004b8ccf
    MOV ESI,ESP                         ; 004b8cd1
    MOV dword ptr [ESP + 0x4],ECX       ; 004b8cd3
    FADD double ptr [0x005df6ef]        ; 004b8cd7 | DAT_005df6ef
    FXCH ST3                            ; 004b8cdd
    FSTP float ptr [ESP + 0xc]          ; 004b8cdf
    FXCH ST2                            ; 004b8ce3
    FSTP float ptr [ESP + 0x10]         ; 004b8ce5
    FSTP float ptr [ESP + 0x14]         ; 004b8ce9
    MOV ECX,0x6                         ; 004b8ced
    FXCH                                ; 004b8cf2
    FSTP float ptr [ESP + 0x8]          ; 004b8cf4
    FSTP float ptr [ESP]                ; 004b8cf8
    MOVSD.REP ES:EDI,ESI                ; 004b8cfb
    ADD ESP,0x18                        ; 004b8cfd
    POP EDI                             ; 004b8d00
    RET                                 ; 004b8d01


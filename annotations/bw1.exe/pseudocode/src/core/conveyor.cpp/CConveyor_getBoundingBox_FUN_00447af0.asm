; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_conveyor_cpp_CConveyor_getBoundingBox_FUN_00447af0(CConveyor *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CConveyor *      Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Referenced Globals:
;   undefined4 DAT_005d713e
;   undefined4 DAT_005d7146
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00447af0
        ;   Label: core_conveyor.cpp_CConveyor_getBoundingBox_FUN_00447af0
    SUB ESP,0x18                        ; 00447af1
    MOV EDX,dword ptr [ESP + 0x20]      ; 00447af4
    MOV EAX,ESI                         ; 00447af8
    FLD double ptr [0x005d713e]         ; 00447afa | DAT_005d713e
    FLD float ptr [EDX + 0x728]         ; 00447b00
    FMUL ST1                            ; 00447b06
    FLD float ptr [EDX + 0x730]         ; 00447b08
    FMUL ST2                            ; 00447b0e
    FLD float ptr [EDX + 0x728]         ; 00447b10
    FCHS                                ; 00447b16
    FMUL ST3                            ; 00447b18
    FLD float ptr [EDX + 0x730]         ; 00447b1a
    FCHS                                ; 00447b20
    FMULP ST4                           ; 00447b22
    FLD float ptr [EDX + 0x72c]         ; 00447b24
    MOV ECX,0xbdcccccd                  ; 00447b2a
    MOV EDI,ESI                         ; 00447b2f
    MOV ESI,ESP                         ; 00447b31
    MOV dword ptr [ESP + 0x4],ECX       ; 00447b33
    FADD double ptr [0x005d7146]        ; 00447b37 | DAT_005d7146
    FXCH ST3                            ; 00447b3d
    FSTP float ptr [ESP + 0xc]          ; 00447b3f
    FXCH ST2                            ; 00447b43
    FSTP float ptr [ESP + 0x10]         ; 00447b45
    FSTP float ptr [ESP + 0x14]         ; 00447b49
    MOV ECX,0x6                         ; 00447b4d
    FXCH                                ; 00447b52
    FSTP float ptr [ESP + 0x8]          ; 00447b54
    FSTP float ptr [ESP]                ; 00447b58
    MOVSD.REP ES:EDI,ESI                ; 00447b5b
    ADD ESP,0x18                        ; 00447b5d
    POP EDI                             ; 00447b60
    RET                                 ; 00447b61


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_wateract_cpp_CWaterActor_getBoundingBox_FUN_00578a70(CWaterActor *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CWaterActor *    Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Referenced Globals:
;   undefined4 DAT_005d7283
;   undefined4 DAT_005d728b
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00578a70
        ;   Label: core_wateract.cpp_CWaterActor_getBoundingBox_FUN_00578a70
    SUB ESP,0x18                        ; 00578a71
    MOV EDX,dword ptr [ESP + 0x20]      ; 00578a74
    MOV EAX,ESI                         ; 00578a78
    FLD double ptr [0x005d7283]         ; 00578a7a | DAT_005d7283
    FLD float ptr [EDX + 0x158]         ; 00578a80
    FMUL ST1                            ; 00578a86
    FLD float ptr [EDX + 0x160]         ; 00578a88
    FMUL ST2                            ; 00578a8e
    FLD float ptr [EDX + 0x158]         ; 00578a90
    FCHS                                ; 00578a96
    FMUL ST3                            ; 00578a98
    FLD float ptr [EDX + 0x160]         ; 00578a9a
    FCHS                                ; 00578aa0
    FMULP ST4                           ; 00578aa2
    FLD float ptr [EDX + 0x15c]         ; 00578aa4
    MOV ECX,0xbdcccccd                  ; 00578aaa
    MOV EDI,ESI                         ; 00578aaf
    MOV ESI,ESP                         ; 00578ab1
    MOV dword ptr [ESP + 0x4],ECX       ; 00578ab3
    FADD double ptr [0x005d728b]        ; 00578ab7 | DAT_005d728b
    FXCH ST3                            ; 00578abd
    FSTP float ptr [ESP + 0xc]          ; 00578abf
    FXCH ST2                            ; 00578ac3
    FSTP float ptr [ESP + 0x10]         ; 00578ac5
    FSTP float ptr [ESP + 0x14]         ; 00578ac9
    MOV ECX,0x6                         ; 00578acd
    FXCH                                ; 00578ad2
    FSTP float ptr [ESP + 0x8]          ; 00578ad4
    FSTP float ptr [ESP]                ; 00578ad8
    MOVSD.REP ES:EDI,ESI                ; 00578adb
    ADD ESP,0x18                        ; 00578add
    POP EDI                             ; 00578ae0
    RET                                 ; 00578ae1


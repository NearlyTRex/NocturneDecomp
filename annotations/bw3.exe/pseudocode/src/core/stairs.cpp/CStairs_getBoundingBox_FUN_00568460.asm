; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_stairs_cpp_CStairs_getBoundingBox_FUN_00568460(CStairs *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CStairs *        Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Referenced Globals:
;   undefined4 DAT_005d5c78
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00568460
        ;   Label: core_stairs.cpp_CStairs_getBoundingBox_FUN_00568460
    SUB ESP,0x1c                        ; 00568461
    MOV EDX,dword ptr [ESP + 0x24]      ; 00568464
    MOV EAX,ESI                         ; 00568468
    FLD double ptr [0x005d5c78]         ; 0056846a | DAT_005d5c78
    FLD float ptr [EDX + 0x160]         ; 00568470
    FMUL ST1                            ; 00568476
    FILD dword ptr [EDX + 0x16c]        ; 00568478
    FLD float ptr [EDX + 0x158]         ; 0056847e
    FMUL ST1                            ; 00568484
    FLD float ptr [EDX + 0x15c]         ; 00568486
    FMULP ST2                           ; 0056848c
    FLD float ptr [EDX + 0x160]         ; 0056848e
    FCHS                                ; 00568494
    FMULP ST4                           ; 00568496
    MOV EDI,ESI                         ; 00568498
    XOR ECX,ECX                         ; 0056849a
    MOV ESI,ESP                         ; 0056849c
    MOV dword ptr [ESP + 0x4],ECX       ; 0056849e
    MOV dword ptr [ESP + 0x8],ECX       ; 005684a2
    FXCH ST2                            ; 005684a6
    FSTP float ptr [ESP + 0xc]          ; 005684a8
    MOV ECX,0x6                         ; 005684ac
    FXCH                                ; 005684b1
    FSTP float ptr [ESP + 0x10]         ; 005684b3
    FSTP float ptr [ESP + 0x14]         ; 005684b7
    FSTP float ptr [ESP]                ; 005684bb
    MOVSD.REP ES:EDI,ESI                ; 005684be
    ADD ESP,0x1c                        ; 005684c0
    POP EDI                             ; 005684c3
    RET                                 ; 005684c4


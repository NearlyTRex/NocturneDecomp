; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_stairs_cpp_CStairs_getBoundingBox_FUN_00534860(CStairs *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CStairs *        Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Referenced Globals:
;   double DOUBLE_0059517a = 0.5
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00534860
        ;   Label: core_stairs.cpp_CStairs_getBoundingBox_FUN_00534860
    MOV EAX,dword ptr [ESP + 0x8]       ; 00534864
    FLD float ptr [EDX + 0x158]         ; 00534868
    FCHS                                ; 0053486e
    FLD double ptr [0x0059517a]         ; 00534870 | DOUBLE_0059517a
    FXCH                                ; 00534876
    FMUL ST1                            ; 00534878
    FSTP float ptr [EAX]                ; 0053487a
    FLD float ptr [EDX + 0x158]         ; 0053487c
    MOV dword ptr [EAX + 0x4],0x0       ; 00534882
    FMULP                               ; 00534889
    MOV dword ptr [EAX + 0x8],0x0       ; 0053488b
    FSTP float ptr [EAX + 0xc]          ; 00534892
    FILD dword ptr [EDX + 0x164]        ; 00534895
    FMUL float ptr [EDX + 0x150]        ; 0053489b
    FSTP float ptr [EAX + 0x10]         ; 005348a1
    FILD dword ptr [EDX + 0x164]        ; 005348a4
    FMUL float ptr [EDX + 0x154]        ; 005348aa
    FSTP float ptr [EAX + 0x14]         ; 005348b0
    RET                                 ; 005348b3


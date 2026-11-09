; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl core_xform_cpp_determinant_FUN_005927e0(float *param_1)
;
; Local Variables:
; undefined8       Stack[-0x8]:8  local_8
;
; XREF[1]:
;   core_xform.cpp_FUN_00592830 at 0059283d
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 005927e0
        ;   Label: core_xform.cpp_determinant_FUN_005927e0
    MOV EAX,dword ptr [ESP + 0xc]       ; 005927e3
    FLD float ptr [EAX + 0x10]          ; 005927e7
    FMUL float ptr [EAX + 0x28]         ; 005927ea
    FLD float ptr [EAX + 0x18]          ; 005927ed
    FMUL float ptr [EAX + 0x20]         ; 005927f0
    FSUBP                               ; 005927f3
    FMUL float ptr [EAX + 0x4]          ; 005927f5
    FLD float ptr [EAX + 0x14]          ; 005927f8
    FMUL float ptr [EAX + 0x28]         ; 005927fb
    FLD float ptr [EAX + 0x18]          ; 005927fe
    FMUL float ptr [EAX + 0x24]         ; 00592801
    FSUBP                               ; 00592804
    FMUL float ptr [EAX]                ; 00592806
    FSUBRP                              ; 00592808
    FLD float ptr [EAX + 0x10]          ; 0059280a
    FMUL float ptr [EAX + 0x24]         ; 0059280d
    FLD float ptr [EAX + 0x14]          ; 00592810
    FMUL float ptr [EAX + 0x20]         ; 00592813
    FSUBP                               ; 00592816
    FMUL float ptr [EAX + 0x8]          ; 00592818
    FADDP                               ; 0059281b
    FSTP double ptr [ESP]               ; 0059281d
    MOV EAX,dword ptr [ESP]             ; 00592820
    MOV EDX,dword ptr [ESP + 0x4]       ; 00592823
    ADD ESP,0x8                         ; 00592827
    RET                                 ; 0059282a


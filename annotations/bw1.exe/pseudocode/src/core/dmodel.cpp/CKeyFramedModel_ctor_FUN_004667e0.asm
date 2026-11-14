; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CKeyFramedModel * __cdecl core_dmodel_cpp_CKeyFramedModel_ctor_FUN_004667e0(CKeyFramedModel *this_ptr)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_cloth.cpp_CCloth_ctor_FUN_0043e5c0 at 0043e5c5
;   core_level.cpp_staticInit_FUN_004fe800 at 004fe812
;   core_moon.cpp_CMoon_ctor_FUN_00521bc0 at 00521bc8
;   core_set.cpp_staticInit_FUN_0054cec0 at 0054cf13
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004667e0
        ;   Label: core_dmodel.cpp_CKeyFramedModel_ctor_FUN_004667e0
    MOV dword ptr [EAX + 0x104],0x0     ; 004667e4
    MOV dword ptr [EAX + 0x10c],0x0     ; 004667ee
    MOV dword ptr [EAX + 0x108],0x0     ; 004667f8
    MOV dword ptr [EAX + 0x110],0x0     ; 00466802
    MOV dword ptr [EAX + 0x114],0x0     ; 0046680c
    MOV dword ptr [EAX + 0x118],0x0     ; 00466816
    MOV dword ptr [EAX + 0x11c],0x0     ; 00466820
    MOV dword ptr [EAX + 0x120],0x0     ; 0046682a
    MOV dword ptr [EAX + 0x244],0x0     ; 00466834
    MOV dword ptr [EAX + 0x350],0x0     ; 0046683e
    MOV dword ptr [EAX + 0x100],0x0     ; 00466848
    MOV dword ptr [EAX + 0x354],0x0     ; 00466852
    MOV dword ptr [EAX + 0x358],0x0     ; 0046685c
    MOV dword ptr [EAX + 0x35c],0x0     ; 00466866
    MOV dword ptr [EAX + 0x360],0x0     ; 00466870
    MOV byte ptr [EAX],0x0              ; 0046687a
    RET                                 ; 0046687d


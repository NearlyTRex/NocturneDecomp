; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CKeyFramedModel * __cdecl core_dmodel_cpp_CKeyFramedModel_ctor_FUN_0044dc10(CKeyFramedModel *this_ptr)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_level.cpp_staticInit_FUN_004e1440 at 004e1452
;   core_moon.cpp_CMoon_ctor_FUN_00502350 at 00502358
;   core_necklace.cpp_FUN_005adda0 at 005adda5
;   core_set.cpp_staticInit_FUN_0052bbe0 at 0052bc33
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0044dc10
        ;   Label: core_dmodel.cpp_CKeyFramedModel_ctor_FUN_0044dc10
    MOV dword ptr [EAX + 0x104],0x0     ; 0044dc14
    MOV dword ptr [EAX + 0x10c],0x0     ; 0044dc1e
    MOV dword ptr [EAX + 0x108],0x0     ; 0044dc28
    MOV dword ptr [EAX + 0x110],0x0     ; 0044dc32
    MOV dword ptr [EAX + 0x114],0x0     ; 0044dc3c
    MOV dword ptr [EAX + 0x118],0x0     ; 0044dc46
    MOV dword ptr [EAX + 0x11c],0x0     ; 0044dc50
    MOV dword ptr [EAX + 0x120],0x0     ; 0044dc5a
    MOV dword ptr [EAX + 0x244],0x0     ; 0044dc64
    MOV dword ptr [EAX + 0x350],0x0     ; 0044dc6e
    MOV dword ptr [EAX + 0x100],0x0     ; 0044dc78
    MOV dword ptr [EAX + 0x354],0x0     ; 0044dc82
    MOV dword ptr [EAX + 0x358],0x0     ; 0044dc8c
    MOV dword ptr [EAX + 0x35c],0x0     ; 0044dc96
    MOV dword ptr [EAX + 0x360],0x0     ; 0044dca0
    MOV byte ptr [EAX],0x0              ; 0044dcaa
    RET                                 ; 0044dcad


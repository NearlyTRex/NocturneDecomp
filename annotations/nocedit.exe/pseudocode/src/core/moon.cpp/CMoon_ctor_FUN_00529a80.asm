; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CMoon * __cdecl core_moon_cpp_CMoon_ctor_FUN_00529a80(CMoon *this_ptr)
;
; Parameters:
; CMoon *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_menu.cpp_staticInit_FUN_0050fdb0 at 0050fdd6
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00476cf0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00529a80
        ;   Label: core_moon.cpp_CMoon_ctor_FUN_00529a80
    ADD EAX,0x8                         ; 00529a84
    PUSH EAX                            ; 00529a87
    CALL core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00476cf0 ; 00529a88
        ;   XREF to: 00476cf0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00476cf0(CKeyFramedModel * this_ptr)
    SUB EAX,0x8                         ; 00529a8d
    MOV dword ptr [EAX + 0x4],0x0       ; 00529a90
    ADD ESP,0x4                         ; 00529a97
    MOV dword ptr [EAX],0x0             ; 00529a9a
    RET                                 ; 00529aa0


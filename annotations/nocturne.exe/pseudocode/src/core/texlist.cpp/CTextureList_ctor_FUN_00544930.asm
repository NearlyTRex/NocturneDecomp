; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_texlist_cpp_CTextureList_ctor_FUN_00544930(undefined4 *param_1)
;
;
; XREF[2]:
;   core_ground.cpp_CGround_init_FUN_004b13d0 at 004b1409
;   core_texlist.cpp_staticInit_FUN_00544910 at 00544915
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00544930
        ;   Label: core_texlist.cpp_CTextureList_ctor_FUN_00544930
    MOV dword ptr [EAX],0x0             ; 00544934
    RET                                 ; 0054493a


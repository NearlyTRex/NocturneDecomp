; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModel_FUN_00452f10(CKeyFramedModel *this_ptr)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
;
; XREF[7]:
;   core_dmodel.cpp_CKeyFramedModel_allocate_FUN_004533e0 at 004533e9
;   core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00452630 at 00452636
;   core_dmodel.cpp_CKeyFramedModel_load_FUN_00452650 at 00452659
;   core_dmodel.cpp_freeAllModels_FUN_00454460 at 0045446e
;   core_level.cpp_CLevelLoader_cleanup_FUN_004c5fa0 at 004c5fc7
;   core_moon.cpp_CMoon_free_FUN_004dea60 at 004dea88
;   core_set.cpp_CDemonSet_clear_FUN_00506ec0 at 00506ec7
;
; Called Functions:
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00452f10
        ;   Label: core_dmodel.cpp_CKeyFramedModel_FUN_00452f10
    PUSH ESI                            ; 00452f11
    PUSH EDI                            ; 00452f12
    PUSH EBP                            ; 00452f13
    MOV EBX,dword ptr [ESP + 0x14]      ; 00452f14
    MOV EDX,dword ptr [EBX + 0x10c]     ; 00452f18
    PUSH EDX                            ; 00452f1e
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00452f1f
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 00452f24
    MOV ECX,dword ptr [EBX + 0x108]     ; 00452f27
    PUSH ECX                            ; 00452f2d
    MOV dword ptr [EBX + 0x10c],0x0     ; 00452f2e
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00452f38
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 00452f3d
    MOV ESI,dword ptr [EBX + 0x114]     ; 00452f40
    PUSH ESI                            ; 00452f46
    MOV dword ptr [EBX + 0x108],0x0     ; 00452f47
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00452f51
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 00452f56
    MOV EDI,dword ptr [EBX + 0x118]     ; 00452f59
    PUSH EDI                            ; 00452f5f
    MOV dword ptr [EBX + 0x114],0x0     ; 00452f60
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00452f6a
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 00452f6f
    MOV EBP,dword ptr [EBX + 0x11c]     ; 00452f72
    PUSH EBP                            ; 00452f78
    MOV dword ptr [EBX + 0x118],0x0     ; 00452f79
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00452f83
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 00452f88
    MOV EAX,dword ptr [EBX + 0x350]     ; 00452f8b
    MOV dword ptr [EBX + 0x11c],0x0     ; 00452f91
    TEST EAX,EAX                        ; 00452f9b
    JNZ 0x00453012                      ; 00452f9d
        ;   XREF to: 00453012 (CONDITIONAL_JUMP)  ; LAB_00453012
    MOV EAX,dword ptr [EBX + 0x358]     ; 00452f9f
        ;   Label: LAB_00452f9f
    MOV dword ptr [EBX + 0x350],0x0     ; 00452fa5
    TEST EAX,EAX                        ; 00452faf
    JNZ 0x00453023                      ; 00452fb1
        ;   XREF to: 00453023 (CONDITIONAL_JUMP)  ; LAB_00453023
    MOV dword ptr [EBX + 0x104],0x0     ; 00452fb3
        ;   Label: LAB_00452fb3
    MOV dword ptr [EBX + 0x110],0x0     ; 00452fbd
    MOV dword ptr [EBX + 0x120],0x0     ; 00452fc7
    MOV dword ptr [EBX + 0x244],0x0     ; 00452fd1
    MOV dword ptr [EBX + 0x100],0x0     ; 00452fdb
    MOV dword ptr [EBX + 0x354],0x0     ; 00452fe5
    MOV dword ptr [EBX + 0x35c],0x0     ; 00452fef
    MOV dword ptr [EBX + 0x360],0x0     ; 00452ff9
    MOV dword ptr [EBX + 0x358],0x0     ; 00453003
    POP EBP                             ; 0045300d
    POP EDI                             ; 0045300e
    POP ESI                             ; 0045300f
    POP EBX                             ; 00453010
    RET                                 ; 00453011
    SUB EAX,0x4                         ; 00453012
        ;   Label: LAB_00453012
    PUSH EAX                            ; 00453015
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00453016
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 0045301b
    JMP 0x00452f9f                      ; 0045301e
        ;   XREF to: 00452f9f (UNCONDITIONAL_JUMP)  ; LAB_00452f9f
    SUB EAX,0x4                         ; 00453023
        ;   Label: LAB_00453023
    PUSH EAX                            ; 00453026
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00453027
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 0045302c
    JMP 0x00452fb3                      ; 0045302f
        ;   XREF to: 00452fb3 (UNCONDITIONAL_JUMP)  ; LAB_00452fb3


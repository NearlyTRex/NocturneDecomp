; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBodyPart * __cdecl core_bodypart_cpp_CBodyPart_ctor_FUN_00418b40(CBodyPart *this_ptr)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_bodypart.cpp_createBodyPart_FUN_00418940 at 00418a50
;   core_bodypart.cpp_factoryFuncBodyPart_FUN_00418b10 at 00418b23
;
; Referenced Globals:
;   CDemonActor_vtable g_CBodyPartVTable
;   WatcomTypeInfo g_SBodyPartModelTypeInfo
;   WatcomTypeInfo g_SBodyPartFireTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004085c0
;   core_box.cpp_CBox_ctor_FUN_0041da00
;   crt_memory.c___arrinit_FUN_005c0357
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00418b40
        ;   Label: core_bodypart.cpp_CBodyPart_ctor_FUN_00418b40
    PUSH EAX                            ; 00418b44
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004085c0 ; 00418b45
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004085c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00418b4a
    PUSH 0x5fcbb0                       ; 00418b4d | g_SBodyPartModelTypeInfo
    PUSH 0x3                            ; 00418b52
    ADD EAX,0x290                       ; 00418b54
    PUSH EAX                            ; 00418b59
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 00418b5a
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00418b5f
    PUSH 0x5fcbd0                       ; 00418b62 | g_SBodyPartFireTypeInfo
    PUSH 0x2                            ; 00418b67
    ADD EAX,0x4c0                       ; 00418b69
    PUSH EAX                            ; 00418b6e
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 00418b6f
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00418b74
    ADD EAX,0x580                       ; 00418b77
    PUSH EAX                            ; 00418b7c
    CALL core_box.cpp_CBox_ctor_FUN_0041da00 ; 00418b7d
        ;   XREF to: 0041da00 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_ctor_FUN_0041da00(CBox * this_ptr)
    SUB EAX,0xcd0                       ; 00418b82
    MOV dword ptr [EAX + 0x154],0x5fcad4 ; 00418b87 | g_CBodyPartVTable
    MOV dword ptr [EAX + 0xf2c],0x0     ; 00418b91
    MOV dword ptr [EAX + 0x174],0x0     ; 00418b9b
    MOV dword ptr [EAX + 0x178],0x0     ; 00418ba5
    MOV dword ptr [EAX + 0x17c],0x0     ; 00418baf
    MOV dword ptr [EAX + 0x180],0x0     ; 00418bb9
    MOV dword ptr [EAX + 0x184],0x0     ; 00418bc3
    MOV dword ptr [EAX + 0x188],0x0     ; 00418bcd
    MOV dword ptr [EAX + 0x18c],0x0     ; 00418bd7
    LEA EDX,[EAX + 0x280]               ; 00418be1
    MOV dword ptr [EAX + 0x158],0x0     ; 00418be7
    MOV dword ptr [EDX + 0x8],0x0       ; 00418bf1
    MOV ECX,dword ptr [EDX + 0x8]       ; 00418bf8
    MOV dword ptr [EDX + 0x4],ECX       ; 00418bfb
    MOV ECX,dword ptr [EDX + 0x4]       ; 00418bfe
    MOV dword ptr [EDX],ECX             ; 00418c01
    MOV dword ptr [EAX + 0x74c],0x0     ; 00418c03
    MOV dword ptr [EAX + 0x28c],0x0     ; 00418c0d
    MOV dword ptr [EAX + 0xcbc],0x40a00000 ; 00418c17
    MOV dword ptr [EAX + 0xcb8],0x0     ; 00418c21
    MOV dword ptr [EAX + 0xcc0],0xffff  ; 00418c2b
    MOV dword ptr [EAX + 0xf30],0x0     ; 00418c35
    MOV dword ptr [EAX + 0xcc4],0x0     ; 00418c3f
    MOV dword ptr [EAX + 0xcc8],0x0     ; 00418c49
    ADD ESP,0x4                         ; 00418c53
    MOV dword ptr [EAX + 0xccc],0x0     ; 00418c56
    RET                                 ; 00418c60


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CStairs * core_stairs.cpp_CStairs_ctor_FUN_005b9b70(CStairs * this_ptr)
;
; Parameters:
; CStairs *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_stairs.cpp_factoryFunc_FUN_005b9b30 at 005b9b4a
;
; Referenced Globals:
;   WatcomTypeInfo g_CDemonTriangleTypeInfo
;   CDemonActor_vtable g_CStairsVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005b9b70
        ;   Label: core_stairs.cpp_CStairs_ctor_FUN_005b9b70
    PUSH EAX                            ; 005b9b74
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 005b9b75
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005b9b7a
    PUSH 0x65c990                       ; 005b9b7d | g_CDemonTriangleTypeInfo
    PUSH 0x28                           ; 005b9b82
    ADD EAX,0x170                       ; 005b9b84
    PUSH EAX                            ; 005b9b89
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 005b9b8a
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    MOV dword ptr [EAX + -0x1c],0x6634d4 ; 005b9b8f | g_CStairsVTable
    MOV dword ptr [EAX + -0x18],0x3f800000 ; 005b9b96
    MOV dword ptr [EAX + -0x14],0x3f800000 ; 005b9b9d
    MOV dword ptr [EAX + -0x10],0x40400000 ; 005b9ba4
    MOV dword ptr [EAX + -0x4],0x5      ; 005b9bab
    MOV dword ptr [EAX + -0xc],0x3f000000 ; 005b9bb2
    MOV dword ptr [EAX + -0x8],0x3e99999a ; 005b9bb9
    ADD ESP,0xc                         ; 005b9bc0
    MOV dword ptr [EAX + 0x8c0],0x0     ; 005b9bc3
    SUB EAX,0x170                       ; 005b9bcd
    RET                                 ; 005b9bd2


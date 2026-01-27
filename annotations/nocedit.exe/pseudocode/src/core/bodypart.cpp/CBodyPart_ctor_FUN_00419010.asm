; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBodyPart * core_bodypart.cpp_CBodyPart_ctor_FUN_00419010(CBodyPart * this_ptr)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_bodypart.cpp_CreateBodyPart_FUN_00418e10 at 00418f19
;   core_bodypart.cpp_factoryFunc_FUN_00418fd0 at 00418fea
;
; Referenced Globals:
;   CDemonActor_vtable g_CBodyPartVTable
;   WatcomTypeInfo g_SBodyPartModelTypeInfo
;   WatcomTypeInfo g_SBodyPartFireTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;   core_box.cpp_CBox_ctor_FUN_0041dc50
;   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00419010
        ;   Label: core_bodypart.cpp_CBodyPart_ctor_FUN_00419010
    PUSH EAX                            ; 00419014
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 00419015
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0041901a
    PUSH 0x65aec0                       ; 0041901d | g_SBodyPartModelTypeInfo
    PUSH 0x3                            ; 00419022
    ADD EAX,0x290                       ; 00419024
    PUSH EAX                            ; 00419029
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 0041902a
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0041902f
    PUSH 0x65aee0                       ; 00419032 | g_SBodyPartFireTypeInfo
    PUSH 0x2                            ; 00419037
    ADD EAX,0x4c0                       ; 00419039
    PUSH EAX                            ; 0041903e
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 0041903f
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00419044
    ADD EAX,0x57c                       ; 00419047
    PUSH EAX                            ; 0041904c
    CALL core_box.cpp_CBox_ctor_FUN_0041dc50 ; 0041904d
        ;   XREF to: 0041dc50 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_ctor_FUN_0041dc50(CBox * this_ptr)
    SUB EAX,0xccc                       ; 00419052
    MOV dword ptr [EAX + 0x154],0x65add4 ; 00419057 | g_CBodyPartVTable
    MOV dword ptr [EAX + 0xf28],0x0     ; 00419061
    MOV dword ptr [EAX + 0x174],0x0     ; 0041906b
    MOV dword ptr [EAX + 0x178],0x0     ; 00419075
    MOV dword ptr [EAX + 0x17c],0x0     ; 0041907f
    MOV dword ptr [EAX + 0x180],0x0     ; 00419089
    MOV dword ptr [EAX + 0x184],0x0     ; 00419093
    MOV dword ptr [EAX + 0x188],0x0     ; 0041909d
    MOV dword ptr [EAX + 0x18c],0x0     ; 004190a7
    LEA EDX,[EAX + 0x280]               ; 004190b1
    MOV dword ptr [EAX + 0x158],0x0     ; 004190b7
    MOV dword ptr [EDX + 0x8],0x0       ; 004190c1
    MOV ECX,dword ptr [EDX + 0x8]       ; 004190c8
    MOV dword ptr [EDX + 0x4],ECX       ; 004190cb
    MOV ECX,dword ptr [EDX + 0x4]       ; 004190ce
    MOV dword ptr [EDX],ECX             ; 004190d1
    MOV dword ptr [EAX + 0x74c],0x0     ; 004190d3
    MOV dword ptr [EAX + 0x28c],0x0     ; 004190dd
    MOV dword ptr [EAX + 0xcbc],0x40a00000 ; 004190e7
    MOV dword ptr [EAX + 0xcb8],0x0     ; 004190f1
    MOV dword ptr [EAX + 0xcc0],0xffff  ; 004190fb
    MOV dword ptr [EAX + 0xf2c],0x0     ; 00419105
    MOV dword ptr [EAX + 0xcc4],0x0     ; 0041910f
    ADD ESP,0x4                         ; 00419119
    MOV dword ptr [EAX + 0xcc8],0x0     ; 0041911c
    RET                                 ; 00419126


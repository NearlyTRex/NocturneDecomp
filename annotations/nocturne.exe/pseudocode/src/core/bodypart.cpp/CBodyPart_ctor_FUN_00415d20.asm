; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBodyPart * __cdecl core_bodypart_cpp_CBodyPart_ctor_FUN_00415d20(CBodyPart *this_ptr)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_bodypart.cpp_createBodyPart_FUN_00415b30 at 00415c32
;   core_bodypart.cpp_factoryFunc_FUN_00415cf0 at 00415d03
;
; Referenced Globals:
;   CDemonActor_vtable g_CBodyPartVTable
;   WatcomTypeInfo g_SBodyPartModelTypeInfo_0059a820
;   WatcomTypeInfo g_SBodyPartFireTypeInfo_0059a840
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00409d30
;   core_box.cpp_CBox_ctor_FUN_0041a610
;   crt_memory.c___arrinit_FUN_005644a7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00415d20
        ;   Label: core_bodypart.cpp_CBodyPart_ctor_FUN_00415d20
    PUSH EAX                            ; 00415d24
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00409d30 ; 00415d25
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00409d30(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00415d2a
    PUSH 0x59a820                       ; 00415d2d | g_SBodyPartModelTypeInfo_0059a820
    PUSH 0x3                            ; 00415d32
    ADD EAX,0x288                       ; 00415d34
    PUSH EAX                            ; 00415d39
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 00415d3a
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00415d3f
    PUSH 0x59a840                       ; 00415d42 | g_SBodyPartFireTypeInfo_0059a840
    PUSH 0x2                            ; 00415d47
    ADD EAX,0x4c0                       ; 00415d49
    PUSH EAX                            ; 00415d4e
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 00415d4f
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00415d54
    ADD EAX,0x56c                       ; 00415d57
    PUSH EAX                            ; 00415d5c
    CALL core_box.cpp_CBox_ctor_FUN_0041a610 ; 00415d5d
        ;   XREF to: 0041a610 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_ctor_FUN_0041a610(CBox * this_ptr)
    SUB EAX,0xcb4                       ; 00415d62
    MOV dword ptr [EAX + 0x14c],0x59a744 ; 00415d67 | g_CBodyPartVTable
    MOV dword ptr [EAX + 0xf10],0x0     ; 00415d71
    MOV dword ptr [EAX + 0x16c],0x0     ; 00415d7b
    MOV dword ptr [EAX + 0x170],0x0     ; 00415d85
    MOV dword ptr [EAX + 0x174],0x0     ; 00415d8f
    MOV dword ptr [EAX + 0x178],0x0     ; 00415d99
    MOV dword ptr [EAX + 0x17c],0x0     ; 00415da3
    MOV dword ptr [EAX + 0x180],0x0     ; 00415dad
    MOV dword ptr [EAX + 0x184],0x0     ; 00415db7
    LEA EDX,[EAX + 0x278]               ; 00415dc1
    MOV dword ptr [EAX + 0x150],0x0     ; 00415dc7
    MOV dword ptr [EDX + 0x8],0x0       ; 00415dd1
    MOV ECX,dword ptr [EDX + 0x8]       ; 00415dd8
    MOV dword ptr [EDX + 0x4],ECX       ; 00415ddb
    MOV ECX,dword ptr [EDX + 0x4]       ; 00415dde
    MOV dword ptr [EDX],ECX             ; 00415de1
    MOV dword ptr [EAX + 0x744],0x0     ; 00415de3
    MOV dword ptr [EAX + 0x284],0x0     ; 00415ded
    MOV dword ptr [EAX + 0xca4],0x40a00000 ; 00415df7
    MOV dword ptr [EAX + 0xca0],0x0     ; 00415e01
    MOV dword ptr [EAX + 0xca8],0xffff  ; 00415e0b
    MOV dword ptr [EAX + 0xf14],0x0     ; 00415e15
    MOV dword ptr [EAX + 0xcac],0x0     ; 00415e1f
    ADD ESP,0x4                         ; 00415e29
    MOV dword ptr [EAX + 0xcb0],0x0     ; 00415e2c
    RET                                 ; 00415e36


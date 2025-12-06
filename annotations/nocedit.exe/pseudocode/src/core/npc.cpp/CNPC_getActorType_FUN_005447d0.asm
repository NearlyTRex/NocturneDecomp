; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_npc.cpp_CNPC_getActorType_FUN_005447d0(CNPC * this_ptr)
;
; Parameters:
; CNPC *           Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CNPCClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x2fd8ce0                   ; 005447d0 | CDemonActorType g_CNPCClassInfo
        ;   Label: core_npc.cpp_CNPC_getActorType_FUN_005447d0
    RET                                 ; 005447d5


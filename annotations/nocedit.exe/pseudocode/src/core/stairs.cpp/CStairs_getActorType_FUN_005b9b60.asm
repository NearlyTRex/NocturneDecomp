; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_stairs.cpp_CStairs_getActorType_FUN_005b9b60(CStairs * this_ptr)
;
; Parameters:
; CStairs *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CStairsClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x3f6ba24                   ; 005b9b60 | g_CStairsClassInfo
        ;   Label: core_stairs.cpp_CStairs_getActorType_FUN_005b9b60
    RET                                 ; 005b9b65


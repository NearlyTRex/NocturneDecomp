; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_trap.cpp_CTrap_getActorType_FUN_005de680(CTrap * this_ptr)
;
; Parameters:
; CTrap *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CTrapClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x3f873e0                   ; 005de680 | g_CTrapClassInfo
        ;   Label: core_trap.cpp_CTrap_getActorType_FUN_005de680
    RET                                 ; 005de685


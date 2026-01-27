; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_flamecan.cpp_CFlameCan_getActorType_FUN_004cb150(CFlameCan * this_ptr)
;
; Parameters:
; CFlameCan *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CFlameCanClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x2d7a700                   ; 004cb150 | g_CFlameCanClassInfo
        ;   Label: core_flamecan.cpp_CFlameCan_getActorType_FUN_004cb150
    RET                                 ; 004cb155


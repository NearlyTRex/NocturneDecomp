; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_health_cpp_CHealthItem_getActorType_FUN_004f1dc0(CHealthItem *this_ptr)
;
; Parameters:
; CHealthItem *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CHealthItemClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x2db8780                   ; 004f1dc0 | g_CHealthItemClassInfo
        ;   Label: core_health.cpp_CHealthItem_getActorType_FUN_004f1dc0
    RET                                 ; 004f1dc5


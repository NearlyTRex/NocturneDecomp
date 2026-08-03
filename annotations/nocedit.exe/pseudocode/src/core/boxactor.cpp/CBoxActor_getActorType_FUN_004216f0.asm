; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_boxactor_cpp_CBoxActor_getActorType_FUN_004216f0(CBoxActor *this_ptr)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBoxActorClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x8229b0                    ; 004216f0 | g_CBoxActorClassInfo
        ;   Label: core_boxactor.cpp_CBoxActor_getActorType_FUN_004216f0
    RET                                 ; 004216f5


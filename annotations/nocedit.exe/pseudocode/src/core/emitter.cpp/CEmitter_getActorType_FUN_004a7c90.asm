; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * __cdecl core_emitter_cpp_CEmitter_getActorType_FUN_004a7c90(CEmitter *this_ptr)
;
; Parameters:
; CEmitter *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CEmitterClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x2cf2b7c                   ; 004a7c90 | g_CEmitterClassInfo
        ;   Label: core_emitter.cpp_CEmitter_getActorType_FUN_004a7c90
    RET                                 ; 004a7c95


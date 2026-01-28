; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * __cdecl core_flies_cpp_CFlies_getActorType_FUN_004cbd50(CFlies *this_ptr)
;
; Parameters:
; CFlies *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CFliesClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x2d7a7c4                   ; 004cbd50 | g_CFliesClassInfo
        ;   Label: core_flies.cpp_CFlies_getActorType_FUN_004cbd50
    RET                                 ; 004cbd55


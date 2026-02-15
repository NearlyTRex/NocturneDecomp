; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_gasmask_cpp_CGasMask_getActorType_FUN_004e5cf0(CGasMask *this_ptr)
;
; Parameters:
; CGasMask *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CGasMaskClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x2d8326c                   ; 004e5cf0 | g_CGasMaskClassInfo
        ;   Label: core_gasmask.cpp_CGasMask_getActorType_FUN_004e5cf0
    RET                                 ; 004e5cf5


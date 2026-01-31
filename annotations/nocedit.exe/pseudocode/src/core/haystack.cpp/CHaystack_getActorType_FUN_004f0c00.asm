; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * __cdecl core_haystack_cpp_CHaystack_getActorType_FUN_004f0c00(CHaystack *this_ptr)
;
; Parameters:
; CHaystack *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CHaystackClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x2db8744                   ; 004f0c00 | g_CHaystackClassInfo
        ;   Label: core_haystack.cpp_CHaystack_getActorType_FUN_004f0c00
    RET                                 ; 004f0c05


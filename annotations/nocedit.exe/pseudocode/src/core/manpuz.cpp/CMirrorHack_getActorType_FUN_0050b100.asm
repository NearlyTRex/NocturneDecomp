; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * __cdecl core_manpuz_cpp_CMirrorHack_getActorType_FUN_0050b100(CMirrorHack *this_ptr)
;
; Parameters:
; CMirrorHack *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CMirrorHackClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x2f0cae0                   ; 0050b100 | g_CMirrorHackClassInfo
        ;   Label: core_manpuz.cpp_CMirrorHack_getActorType_FUN_0050b100
    RET                                 ; 0050b105


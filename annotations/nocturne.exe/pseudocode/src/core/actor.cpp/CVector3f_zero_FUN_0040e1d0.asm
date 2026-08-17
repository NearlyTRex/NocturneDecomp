; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CVector3f_zero_FUN_0040e1d0(CVector3f *this_ptr)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040e1d0
        ;   Label: core_actor.cpp_CVector3f_zero_FUN_0040e1d0
    MOV dword ptr [EAX + 0x8],0x0       ; 0040e1d4
    MOV EDX,dword ptr [EAX + 0x8]       ; 0040e1db
    MOV dword ptr [EAX + 0x4],EDX       ; 0040e1de
    MOV EDX,dword ptr [EAX + 0x4]       ; 0040e1e1
    MOV dword ptr [EAX],EDX             ; 0040e1e4
    RET                                 ; 0040e1e6


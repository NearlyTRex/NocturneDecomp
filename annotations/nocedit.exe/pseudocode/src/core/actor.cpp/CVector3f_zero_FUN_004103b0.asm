; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CVector3f_zero_FUN_004103b0(CVector3f *this_ptr)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004103b0
        ;   Label: core_actor.cpp_CVector3f_zero_FUN_004103b0
    MOV dword ptr [EAX + 0x8],0x0       ; 004103b4
    MOV EDX,dword ptr [EAX + 0x8]       ; 004103bb
    MOV dword ptr [EAX + 0x4],EDX       ; 004103be
    MOV EDX,dword ptr [EAX + 0x4]       ; 004103c1
    MOV dword ptr [EAX],EDX             ; 004103c4
    RET                                 ; 004103c6


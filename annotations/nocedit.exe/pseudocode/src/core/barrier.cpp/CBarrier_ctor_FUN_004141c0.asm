; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBarrier * core_barrier.cpp_CBarrier_ctor_FUN_004141c0(CBarrier * this_ptr)
;
; Parameters:
; CBarrier *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_barrier.cpp_constructor_FUN_00414180 at 0041419a
;
; Referenced Globals:
;   CDemonActor_vtable g_CBarrierVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004141c0
        ;   Label: core_barrier.cpp_CBarrier_ctor_FUN_004141c0
    PUSH EDX                            ; 004141c4
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 004141c5
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
    MOV dword ptr [EAX + 0x154],0x65a354 ; 004141ca | g_CBarrierVTable
    MOV dword ptr [EAX + 0x160],0x40a00000 ; 004141d4
    MOV byte ptr [EAX + 0x168],0x0      ; 004141de
    MOV dword ptr [EAX + 0x164],0x1     ; 004141e5
    ADD ESP,0x4                         ; 004141ef
    MOV EDX,dword ptr [EAX + 0x160]     ; 004141f2
    MOV dword ptr [EAX + 0x15c],EDX     ; 004141f8
    MOV EDX,dword ptr [EAX + 0x15c]     ; 004141fe
    MOV dword ptr [EAX + 0x158],EDX     ; 00414204
    RET                                 ; 0041420a


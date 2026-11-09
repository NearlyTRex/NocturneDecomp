; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_health_cpp_CHealthItem_onPickup_FUN_004cdfe0(CHealthItem *this_ptr,CDemonActor *owner)
;
; Parameters:
; CHealthItem *    Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   owner
;
; Called Functions:
;   core_actor.cpp_CDemonActor_onPickup_FUN_00409ec0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004cdfe0
        ;   Label: core_health.cpp_CHealthItem_onPickup_FUN_004cdfe0
    PUSH EDX                            ; 004cdfe4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004cdfe5
    PUSH ECX                            ; 004cdfe9
    CALL core_actor.cpp_CDemonActor_onPickup_FUN_00409ec0 ; 004cdfea
        ;   XREF to: 00409ec0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_onPickup_FUN_00409ec0(CDemonActor * this_ptr, CDemonActor * owner)
    ADD ESP,0x8                         ; 004cdfef
    RET                                 ; 004cdff2


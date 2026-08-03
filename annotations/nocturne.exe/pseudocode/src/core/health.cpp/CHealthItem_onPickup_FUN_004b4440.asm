; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_health_cpp_CHealthItem_onPickup_FUN_004b4440(CHealthItem *this_ptr,CDemonActor *owner)
;
; Parameters:
; CHealthItem *    Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   owner
;
; Called Functions:
;   core_actor.cpp_CDemonActor_onPickup_FUN_0040b1a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004b4440
        ;   Label: core_health.cpp_CHealthItem_onPickup_FUN_004b4440
    PUSH EDX                            ; 004b4444
    MOV ECX,dword ptr [ESP + 0x8]       ; 004b4445
    PUSH ECX                            ; 004b4449
    CALL core_actor.cpp_CDemonActor_onPickup_FUN_0040b1a0 ; 004b444a
        ;   XREF to: 0040b1a0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_onPickup_FUN_0040b1a0(CDemonActor * this_ptr, CDemonActor * owner)
    ADD ESP,0x8                         ; 004b444f
    RET                                 ; 004b4452


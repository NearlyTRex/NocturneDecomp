; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_health_cpp_CHealthItem_onPickup_FUN_004ea580(CHealthItem *this_ptr,CDemonActor *owner)
;
; Parameters:
; CHealthItem *    Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   owner
;
; Called Functions:
;   core_actor.cpp_FUN_00409d10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004ea580
        ;   Label: core_health.cpp_CHealthItem_onPickup_FUN_004ea580
    PUSH EDX                            ; 004ea584
    MOV ECX,dword ptr [ESP + 0x8]       ; 004ea585
    PUSH ECX                            ; 004ea589
    CALL core_actor.cpp_FUN_00409d10    ; 004ea58a
        ;   XREF to: 00409d10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00409d10(CDemonActor * this_ptr, CDemonActor * owner)
    ADD ESP,0x8                         ; 004ea58f
    RET                                 ; 004ea592


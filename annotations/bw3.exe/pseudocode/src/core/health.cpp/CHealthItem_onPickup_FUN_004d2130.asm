; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_health_cpp_CHealthItem_onPickup_FUN_004d2130(CHealthItem *this_ptr,CDemonActor *owner)
;
; Parameters:
; CHealthItem *    Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   owner
;
; Called Functions:
;   core_actor.cpp_FUN_00409d50
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004d2130
        ;   Label: core_health.cpp_CHealthItem_onPickup_FUN_004d2130
    PUSH EDX                            ; 004d2134
    MOV ECX,dword ptr [ESP + 0x8]       ; 004d2135
    PUSH ECX                            ; 004d2139
    CALL core_actor.cpp_FUN_00409d50    ; 004d213a
        ;   XREF to: 00409d50 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00409d50(CDemonActor * this_ptr, CDemonActor * owner)
    ADD ESP,0x8                         ; 004d213f
    RET                                 ; 004d2142


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gasmask_cpp_CGasMask_canPickup_FUN_004a8a80(CGasMask *this_ptr,CDemonActor *picker)
;
; Parameters:
; CGasMask *       Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; Referenced Globals:
;   TerminatedCString s_CHero_00584aad
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;
; *****************************************************************************

section .text

    PUSH 0x584aad                       ; 004a8a80 | = "CHero"
        ;   Label: core_gasmask.cpp_CGasMask_canPickup_FUN_004a8a80
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a8a85
    PUSH EDX                            ; 004a8a89
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004a8a8a
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004a8a8f
    TEST EAX,EAX                        ; 004a8a92
    JZ 0x004a8aa0                       ; 004a8a94
        ;   XREF to: 004a8aa0 (CONDITIONAL_JUMP)
    MOV EAX,0x2                         ; 004a8a96
    LEA EAX,[EAX]                       ; 004a8a9b
    MOV ECX,ECX                         ; 004a8a9e


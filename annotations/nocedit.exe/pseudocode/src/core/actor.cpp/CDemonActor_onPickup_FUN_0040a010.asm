; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_actor.cpp_CDemonActor_onPickup_FUN_0040a010(CDemonActor * this_ptr, CDemonActor * owner)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   owner
;
; XREF[4]:
;   core_boxactor.cpp_CBoxActor_FUN_00422570 at 0042257a
;   core_health.cpp_FUN_004f2020 at 004f202a
;   core_keyactor.cpp_FUN_00501920 at 0050192a
;   core_weapon.cpp_CWeapon_FUN_005ee650 at 005ee65a
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_006139bf
;
; Called Functions:
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;
; *****************************************************************************

section .text

    PUSH 0x580                          ; 0040a010
        ;   Label: core_actor.cpp_CDemonActor_onPickup_FUN_0040a010
    PUSH 0x6139bf                       ; 0040a015 | = "..\\core\\actor.cpp"
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040a01a
    PUSH EDX                            ; 0040a01e
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 0040a01f
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
    ADD ESP,0xc                         ; 0040a024
    RET                                 ; 0040a027


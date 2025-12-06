; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_trap.cpp_CTrap_FUN_005dea50(CTrap * this_ptr)
;
; Parameters:
; CTrap *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Model_file_kfm_00655554
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005dea50
        ;   Label: core_trap.cpp_CTrap_FUN_005dea50
    MOV EDX,dword ptr [ESP + 0xc]       ; 005dea51
    PUSH EDX                            ; 005dea55
    MOV ECX,dword ptr [ESP + 0xc]       ; 005dea56
    PUSH ECX                            ; 005dea5a
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 005dea5b | void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005dea60
    MOV EAX,dword ptr [ESP + 0x8]       ; 005dea63
    PUSH 0x0                            ; 005dea67
    ADD EAX,0x158                       ; 005dea69
    PUSH EAX                            ; 005dea6e
    PUSH 0x655554                       ; 005dea6f | = "Model file (.kfm)" | s_Model_file_kfm_00655554 = Model file (.kfm)
    MOV EBX,dword ptr [ESP + 0x18]      ; 005dea74
    PUSH EBX                            ; 005dea78
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0 ; 005dea79 | void core_actor.cpp_CActorPropertyList_FUN_0040e3b0(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005dea7e
    POP EBX                             ; 005dea81
    RET                                 ; 005dea82


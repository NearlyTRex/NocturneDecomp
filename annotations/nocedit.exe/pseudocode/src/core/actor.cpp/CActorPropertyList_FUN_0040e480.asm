; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_actor.cpp_CActorPropertyList_FUN_0040e480(CActorPropertyList * this_ptr)
;
; Parameters:
; CActorPropertyList * Stack[0x4]:4   this_ptr
;
; XREF[7]:
;   core_boxactor.cpp_FUN_004226e0 at 00422867
;   core_charactr.cpp_CCharacter_FUN_0042f730 at 0042f7a0
;   core_dest.cpp_FUN_0046fe80 at 0046febf
;   core_door.cpp_CDoor_getPropertyList_FUN_00481320 at 004814c2
;   core_hostage.cpp_FUN_004f69c0 at 004f6a88
;   core_lever.cpp_FUN_00505240 at 005052a8
;   core_trigger.cpp_CTrigger_FUN_005e0f70 at 005e0fa7
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e480
        ;   Label: core_actor.cpp_CActorPropertyList_FUN_0040e480
    PUSH 0x0                            ; 0040e481
    MOV EDX,dword ptr [ESP + 0x14]      ; 0040e483
    PUSH EDX                            ; 0040e487
    MOV ECX,dword ptr [ESP + 0x14]      ; 0040e488
    PUSH ECX                            ; 0040e48c
    PUSH 0xc                            ; 0040e48d
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040e48f
    PUSH EBX                            ; 0040e493
    CALL core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0 ; 0040e494 | int core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0(CActorPropertyList * this_ptr, int property_type, char * property_name, void * data_ptr, ...)
        ;   XREF to: 0040e6c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0040e499
    POP EBX                             ; 0040e49c
    RET                                 ; 0040e49d


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_actor.cpp_CActorPropertyList_FUN_0040e1a0(CActorPropertyList * this_ptr)
;
; Parameters:
; CActorPropertyList * Stack[0x4]:4   this_ptr
;
; XREF[11]:
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 at 0040d31d
;   core_boxactor.cpp_FUN_004226e0 at 00422722
;   core_emitter.cpp_FUN_004a8db0 at 004a8fac
;   core_enemy.cpp_CEnemy_FUN_004aa170 at 004aa221
;   core_grave.cpp_FUN_004ee9e0 at 004eea21
;   core_health.cpp_FUN_004f2040 at 004f2098
;   core_melee.cpp_FUN_0050ecf0 at 0050ed72
;   core_platfrm.cpp_FUN_0054e7d0 at 0054e92b
;   core_trigger.cpp_CTrigger_FUN_005e0f70 at 005e108a
;   core_turret.cpp_CTurret_FUN_005e3ca0 at 005e3d73
;   ... and 1 more
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e1a0
        ;   Label: core_actor.cpp_CActorPropertyList_FUN_0040e1a0
    PUSH ESI                            ; 0040e1a1
    MOV EDX,dword ptr [ESP + 0x20]      ; 0040e1a2
    PUSH EDX                            ; 0040e1a6
    MOV ECX,dword ptr [ESP + 0x18]      ; 0040e1a7
    PUSH ECX                            ; 0040e1ab
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040e1ac
    PUSH EBX                            ; 0040e1b0
    PUSH 0x1                            ; 0040e1b1
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0040e1b3
    PUSH ESI                            ; 0040e1b7
    CALL core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0 ; 0040e1b8
        ;   XREF to: 0040e6c0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0(CActorPropertyList * this_ptr, int property_type, char * property_name, void * data_ptr, ...)
    MOV dword ptr [EAX + 0x5c],0x1      ; 0040e1bd
    ADD ESP,0x14                        ; 0040e1c4
    MOV dword ptr [EAX + 0x6c],0x3f800000 ; 0040e1c7
    MOV EDX,dword ptr [ESP + 0x18]      ; 0040e1ce
    MOV dword ptr [EAX + 0x60],EDX      ; 0040e1d2
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0040e1d5
    MOV dword ptr [EAX + 0x64],EDX      ; 0040e1d9
    POP ESI                             ; 0040e1dc
    POP EBX                             ; 0040e1dd
    RET                                 ; 0040e1de


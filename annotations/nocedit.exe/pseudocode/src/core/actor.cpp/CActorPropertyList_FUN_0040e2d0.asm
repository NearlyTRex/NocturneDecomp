; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_actor.cpp_CActorPropertyList_FUN_0040e2d0(CActorPropertyList * this_ptr)
;
; Parameters:
; CActorPropertyList * Stack[0x4]:4   this_ptr
;
; XREF[16]:
;   core_ammobox.cpp_CAmmoBox_getPropertyList_FUN_00411b30 at 00411ba5
;   core_bat.cpp_CBat_FUN_00414dc0 at 00414e83
;   core_boxactor.cpp_FUN_004226e0 at 00422766
;   core_chain.cpp_FUN_00431120 at 0043122e
;   core_door.cpp_CDoor_getPropertyList_FUN_00481320 at 00481403
;   core_drip.cpp_FUN_0048e930 at 0048e9e9
;   core_emitter.cpp_FUN_004a8db0 at 004a8f6e
;   core_grave.cpp_FUN_004ee9e0 at 004eea60
;   core_hostage.cpp_FUN_004f69c0 at 004f6b23
;   core_lever.cpp_FUN_00505240 at 005052d2
;   ... and 6 more
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e2d0
        ;   Label: core_actor.cpp_CActorPropertyList_FUN_0040e2d0
    PUSH 0x0                            ; 0040e2d1
    MOV EDX,dword ptr [ESP + 0x14]      ; 0040e2d3
    PUSH EDX                            ; 0040e2d7
    MOV ECX,dword ptr [ESP + 0x14]      ; 0040e2d8
    PUSH ECX                            ; 0040e2dc
    PUSH 0x8                            ; 0040e2dd
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040e2df
    PUSH EBX                            ; 0040e2e3
    CALL core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0 ; 0040e2e4 | int core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0(CActorPropertyList * this_ptr, int property_type, char * property_name, void * data_ptr, ...)
        ;   XREF to: 0040e6c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0040e2e9
    MOV dword ptr [EAX + 0x5c],0x0      ; 0040e2ec
    POP EBX                             ; 0040e2f3
    RET                                 ; 0040e2f4


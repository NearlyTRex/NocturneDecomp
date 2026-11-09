; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTeleportDest * __cdecl core_teleport_cpp_CTeleportDest_ctor_FUN_00572240(CTeleportDest *this_ptr)
;
; Parameters:
; CTeleportDest *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_teleport.cpp_factoryFuncTeleportDest_FUN_00572210 at 00572223
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408790
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00572240
        ;   Label: core_teleport.cpp_CTeleportDest_ctor_FUN_00572240
    PUSH EDX                            ; 00572244
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408790 ; 00572245
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408790(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0057224a
    MOV dword ptr [EAX + 0x2b0],0x5fca44 ; 0057224d
    RET                                 ; 00572257


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dest_cpp_CActorDestination_setup_FUN_0045d260(CActorDestination *this_ptr)
;
; Parameters:
; CActorDestination * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_filmreel.cpp_CFilmProjector_setup_FUN_004ab680 at 004ab686
;
; Referenced Globals:
;   undefined4 DAT_0061f650
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408850
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045d260
        ;   Label: core_dest.cpp_CActorDestination_setup_FUN_0045d260
    MOV EBX,dword ptr [ESP + 0x8]       ; 0045d261
    PUSH EBX                            ; 0045d265
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408850 ; 0045d266
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408850(CDemonActor * this_ptr)
    MOV EAX,[0x0061f650]                ; 0045d26b | DAT_0061f650
    MOV dword ptr [EBX + 0xf8],0x0      ; 0045d270
    MOV EAX,dword ptr [EAX + 0x1008]    ; 0045d27a
    MOV dword ptr [EBX + 0x184],0x0     ; 0045d280
    MOV dword ptr [EBX + 0x1f0],0x1     ; 0045d28a
    ADD ESP,0x4                         ; 0045d294
    MOV dword ptr [EBX + 0xfc],EAX      ; 0045d297
    POP EBX                             ; 0045d29d
    RET                                 ; 0045d29e


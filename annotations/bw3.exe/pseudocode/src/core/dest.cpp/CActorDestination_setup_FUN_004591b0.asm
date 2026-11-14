; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dest_cpp_CActorDestination_setup_FUN_004591b0(CActorDestination *this_ptr)
;
; Parameters:
; CActorDestination * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_filmreel.cpp_CFilmProjector_setup_FUN_00496520 at 00496526
;
; Referenced Globals:
;   undefined4 DAT_00600530
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004591b0
        ;   Label: core_dest.cpp_CActorDestination_setup_FUN_004591b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004591b1
    PUSH EBX                            ; 004591b5
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408890 ; 004591b6
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408890(CDemonActor * this_ptr)
    MOV EAX,[0x00600530]                ; 004591bb | DAT_00600530
    MOV dword ptr [EBX + 0xf8],0x0      ; 004591c0
    MOV EAX,dword ptr [EAX + 0x1008]    ; 004591ca
    MOV dword ptr [EBX + 0x184],0x0     ; 004591d0
    MOV dword ptr [EBX + 0x1f0],0x1     ; 004591da
    ADD ESP,0x4                         ; 004591e4
    MOV dword ptr [EBX + 0xfc],EAX      ; 004591e7
    POP EBX                             ; 004591ed
    RET                                 ; 004591ee


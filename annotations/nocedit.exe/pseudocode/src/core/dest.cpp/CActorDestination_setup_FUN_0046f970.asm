; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dest_cpp_CActorDestination_setup_FUN_0046f970(CActorDestination *this_ptr)
;
; Parameters:
; CActorDestination * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_filmreel.cpp_CFilmProjector_setup_FUN_004beb00 at 004beb06
;
; Referenced Globals:
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   undefined4 g_CDemonMissionInstance.is_in_editor
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046f970
        ;   Label: core_dest.cpp_CActorDestination_setup_FUN_0046f970
    MOV EBX,dword ptr [ESP + 0x8]       ; 0046f971
    PUSH EBX                            ; 0046f975
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 0046f976
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)
    MOV EAX,[0x0067d550]                ; 0046f97b | g_CDemonMissionPtr
    MOV dword ptr [EBX + 0xf8],0x0      ; 0046f980
    MOV EAX,dword ptr [EAX + 0x4]       ; 0046f98a | g_CDemonMissionInstance.is_in_editor
    MOV dword ptr [EBX + 0x184],0x0     ; 0046f98d
    MOV dword ptr [EBX + 0x1f0],0x1     ; 0046f997
    ADD ESP,0x4                         ; 0046f9a1
    MOV dword ptr [EBX + 0xfc],EAX      ; 0046f9a4
    POP EBX                             ; 0046f9aa
    RET                                 ; 0046f9ab


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dest_cpp_CActorDestination_setup_FUN_00447100(CActorDestination *this_ptr)
;
; Parameters:
; CActorDestination * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_filmreel.cpp_FUN_00492cd0 at 00492cd6
;
; Referenced Globals:
;   undefined4 DAT_00618170
;
; Called Functions:
;   core_actor.cpp_FUN_00408a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00447100
        ;   Label: core_dest.cpp_CActorDestination_setup_FUN_00447100
    MOV EBX,dword ptr [ESP + 0x8]       ; 00447101
    PUSH EBX                            ; 00447105
    CALL core_actor.cpp_FUN_00408a80    ; 00447106
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00408a80(CDemonActor * this_ptr)
    MOV EAX,[0x00618170]                ; 0044710b | DAT_00618170
    MOV dword ptr [EBX + 0xf8],0x0      ; 00447110
    MOV EAX,dword ptr [EAX + 0x1008]    ; 0044711a
    MOV dword ptr [EBX + 0x2e0],0x0     ; 00447120
    MOV dword ptr [EBX + 0x34c],0x1     ; 0044712a
    ADD ESP,0x4                         ; 00447134
    MOV dword ptr [EBX + 0xfc],EAX      ; 00447137
    POP EBX                             ; 0044713d
    RET                                 ; 0044713e


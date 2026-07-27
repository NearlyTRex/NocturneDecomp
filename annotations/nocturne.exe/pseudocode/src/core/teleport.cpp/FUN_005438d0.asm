; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_teleport_cpp_FUN_005438d0(undefined4 param_1)
;
;
; XREF[1]:
;   core_teleport.cpp_FUN_005438a0 at 005438b3
;
; Referenced Globals:
;   undefined1* PTR_core_actor.cpp_CDemonActor_setup_FUN_00409fc0_005a2fc4 = 00409fc0
;
; Called Functions:
;   core_actor.cpp_FUN_00409d30
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005438d0
        ;   Label: core_teleport.cpp_FUN_005438d0
    PUSH EDX                            ; 005438d4
    CALL core_actor.cpp_FUN_00409d30    ; 005438d5
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00409d30()
    MOV dword ptr [EAX + 0x14c],0x5a2fc4 ; 005438da | PTR_core_actor.cpp_CDemonActor_setup_FUN_00409fc0_005a2fc4
    MOV dword ptr [EAX + 0x150],0x40a00000 ; 005438e4
    MOV dword ptr [EAX + 0x154],0x41100000 ; 005438ee
    MOV dword ptr [EAX + 0x158],0x40a00000 ; 005438f8
    ADD ESP,0x4                         ; 00543902
    MOV dword ptr [EAX + 0x15c],0x0     ; 00543905
    RET                                 ; 0054390f


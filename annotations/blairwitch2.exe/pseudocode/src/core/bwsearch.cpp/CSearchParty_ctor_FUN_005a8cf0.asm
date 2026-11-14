; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSearchParty * __cdecl core_bwsearch_cpp_CSearchParty_ctor_FUN_005a8cf0(CSearchParty *this_ptr)
;
; Parameters:
; CSearchParty *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_bwsearch.cpp_factoryFuncSearchParty_FUN_005a8cc0 at 005a8cd3
;
; Called Functions:
;   core_basicnpc.cpp_CBasicNPC_ctor_FUN_005a47b0
;   core_bwsearch.cpp_CSearchParty_processStates_FUN_005a8db0
;   core_muzzle.cpp_FUN_0059d990
;   core_muzzle.cpp_FUN_0059dc80
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a8cf0
        ;   Label: core_bwsearch.cpp_CSearchParty_ctor_FUN_005a8cf0
    PUSH ESI                            ; 005a8cf1
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a8cf2
    PUSH EDX                            ; 005a8cf6
    CALL core_basicnpc.cpp_CBasicNPC_ctor_FUN_005a47b0 ; 005a8cf7
        ;   XREF to: 005a47b0 (UNCONDITIONAL_CALL)  ; CBasicNPC * core_basicnpc.cpp_CBasicNPC_ctor_FUN_005a47b0(CBasicNPC * this_ptr)
    ADD ESP,0x4                         ; 005a8cfc
    PUSH 0x5f0844                       ; 005a8cff
    MOV EBX,EAX                         ; 005a8d04
    LEA ESI,[EAX + 0x2b4]               ; 005a8d06
    PUSH ESI                            ; 005a8d0c
    MOV dword ptr [EAX + 0x2b0],0x600314 ; 005a8d0d
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 005a8d17
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x3434],0x3f800000 ; 005a8d1c
    MOV dword ptr [EBX + 0x1134c],0x3fc00000 ; 005a8d26
    MOV dword ptr [EBX + 0x11380],0x0   ; 005a8d30
    MOV dword ptr [EBX + 0x11384],0x0   ; 005a8d3a
    ADD ESP,0x8                         ; 005a8d44
    MOV dword ptr [EBX + 0x11388],0x1   ; 005a8d47
    PUSH 0x0                            ; 005a8d51
    MOV dword ptr [EBX + 0x1138c],0x1   ; 005a8d53
    PUSH 0x0                            ; 005a8d5d
    MOV dword ptr [EBX + 0x11390],0x0   ; 005a8d5f
    PUSH EBX                            ; 005a8d69
    MOV dword ptr [EBX + 0x11394],0x0   ; 005a8d6a
    CALL core_bwsearch.cpp_CSearchParty_processStates_FUN_005a8db0 ; 005a8d74
        ;   XREF to: 005a8db0 (UNCONDITIONAL_CALL)  ; void core_bwsearch.cpp_CSearchParty_processStates_FUN_005a8db0(CSearchParty * this_ptr, float delta_time, int mode)
    ADD ESP,0xc                         ; 005a8d79
    PUSH 0x5f084d                       ; 005a8d7c
    LEA ESI,[EBX + 0x10af8]             ; 005a8d81
    PUSH ESI                            ; 005a8d87
    CALL core_muzzle.cpp_FUN_0059d990   ; 005a8d88
        ;   XREF to: 0059d990 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059d990()
    ADD ESP,0x8                         ; 005a8d8d
    PUSH ESI                            ; 005a8d90
    CALL core_muzzle.cpp_FUN_0059dc80   ; 005a8d91
        ;   XREF to: 0059dc80 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059dc80()
    ADD ESP,0x4                         ; 005a8d96
    MOV EAX,EBX                         ; 005a8d99
    POP ESI                             ; 005a8d9b
    POP EBX                             ; 005a8d9c
    RET                                 ; 005a8d9d


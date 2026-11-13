; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CRobin * __cdecl core_weaver_cpp_CRobin_ctor_FUN_005a5e70(CRobin *this_ptr)
;
; Parameters:
; CRobin *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_weaver.cpp_factoryFuncRobin_FUN_005a5e40 at 005a5e53
;
; Called Functions:
;   core_basicnpc.cpp_CBasicNPC_ctor_FUN_005a47b0
;   core_muzzle.cpp_FUN_0059d7f0
;   core_muzzle.cpp_FUN_0059d990
;   core_muzzle.cpp_FUN_0059dc80
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;   core_weaver.cpp_CRobin_processStates_FUN_005a60d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a5e70
        ;   Label: core_weaver.cpp_CRobin_ctor_FUN_005a5e70
    PUSH ESI                            ; 005a5e71
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a5e72
    PUSH EDX                            ; 005a5e76
    CALL core_basicnpc.cpp_CBasicNPC_ctor_FUN_005a47b0 ; 005a5e77
        ;   XREF to: 005a47b0 (UNCONDITIONAL_CALL)  ; CBasicNPC * core_basicnpc.cpp_CBasicNPC_ctor_FUN_005a47b0(CBasicNPC * this_ptr)
    ADD ESP,0x4                         ; 005a5e7c
    PUSH 0x5f062d                       ; 005a5e7f
    MOV EBX,EAX                         ; 005a5e84
    LEA ESI,[EAX + 0x2b4]               ; 005a5e86
    PUSH ESI                            ; 005a5e8c
    MOV dword ptr [EAX + 0x2b0],0x5ffca4 ; 005a5e8d
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 005a5e97
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x3434],0x3f000000 ; 005a5e9c
    MOV dword ptr [EBX + 0x1134c],0x3f99999a ; 005a5ea6
    MOV dword ptr [EBX + 0xfc],0x1      ; 005a5eb0
    MOV dword ptr [EBX + 0x113c4],0x3f800000 ; 005a5eba
    MOV dword ptr [EBX + 0x2a8],0x3dcccccd ; 005a5ec4
    MOV dword ptr [EBX + 0x11380],0x0   ; 005a5ece
    ADD ESP,0x8                         ; 005a5ed8
    MOV dword ptr [EBX + 0x11384],0x0   ; 005a5edb
    PUSH 0x0                            ; 005a5ee5
    MOV dword ptr [EBX + 0x11388],0x1   ; 005a5ee7
    PUSH 0x0                            ; 005a5ef1
    MOV dword ptr [EBX + 0x1138c],0x2   ; 005a5ef3
    PUSH EBX                            ; 005a5efd
    MOV dword ptr [EBX + 0x11390],0x0   ; 005a5efe
    CALL core_weaver.cpp_CRobin_processStates_FUN_005a60d0 ; 005a5f08
        ;   XREF to: 005a60d0 (UNCONDITIONAL_CALL)  ; void core_weaver.cpp_CRobin_processStates_FUN_005a60d0(CRobin * this_ptr, float delta_time, int mode)
    ADD ESP,0xc                         ; 005a5f0d
    PUSH 0x5f0637                       ; 005a5f10
    PUSH 0x5f0643                       ; 005a5f15
    LEA ESI,[EBX + 0x10af8]             ; 005a5f1a
    PUSH ESI                            ; 005a5f20
    CALL core_muzzle.cpp_FUN_0059d7f0   ; 005a5f21
        ;   XREF to: 0059d7f0 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059d7f0()
    ADD ESP,0xc                         ; 005a5f26
    PUSH 0x5f0651                       ; 005a5f29
    PUSH ESI                            ; 005a5f2e
    CALL core_muzzle.cpp_FUN_0059d990   ; 005a5f2f
        ;   XREF to: 0059d990 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059d990()
    ADD ESP,0x8                         ; 005a5f34
    PUSH ESI                            ; 005a5f37
    CALL core_muzzle.cpp_FUN_0059dc80   ; 005a5f38
        ;   XREF to: 0059dc80 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059dc80()
    ADD ESP,0x4                         ; 005a5f3d
    MOV EAX,EBX                         ; 005a5f40
    MOV dword ptr [EBX + 0x2ac],0x0     ; 005a5f42
    POP ESI                             ; 005a5f4c
    POP EBX                             ; 005a5f4d
    RET                                 ; 005a5f4e


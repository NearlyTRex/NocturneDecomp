; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBelling * core_belling_cpp_CBelling_ctor_FUN_005a8f80(CBelling *this_ptr)
;
; Parameters:
; CBelling *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_belling.cpp_factoryFuncBelling_FUN_005a8f50 at 005a8f63
;
; Called Functions:
;   core_basicnpc.cpp_CBasicNPC_ctor_FUN_005a47b0
;   core_belling.cpp_CBelling_processStates_FUN_005a9060
;   core_cloth.cpp_CClothList_add_FUN_005b15c0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;   unkaddr_0059d350.cpp_FUN_0059d990
;   unkaddr_0059d350.cpp_FUN_0059dc80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a8f80
        ;   Label: core_belling.cpp_CBelling_ctor_FUN_005a8f80
    PUSH ESI                            ; 005a8f81
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a8f82
    PUSH EDX                            ; 005a8f86
    CALL core_basicnpc.cpp_CBasicNPC_ctor_FUN_005a47b0 ; 005a8f87
        ;   XREF to: 005a47b0 (UNCONDITIONAL_CALL)  ; CBasicNPC * core_basicnpc.cpp_CBasicNPC_ctor_FUN_005a47b0(CBasicNPC * this_ptr)
    ADD ESP,0x4                         ; 005a8f8c
    PUSH 0x5f0870                       ; 005a8f8f
    MOV EBX,EAX                         ; 005a8f94
    LEA ESI,[EAX + 0x2b4]               ; 005a8f96
    PUSH ESI                            ; 005a8f9c
    MOV dword ptr [EAX + 0x2b0],0x6004e4 ; 005a8f9d
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 005a8fa7
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x3434],0x3f800000 ; 005a8fac
    MOV dword ptr [EBX + 0x1134c],0x3fc00000 ; 005a8fb6
    MOV dword ptr [EBX + 0x11380],0x0   ; 005a8fc0
    MOV dword ptr [EBX + 0x11384],0x0   ; 005a8fca
    MOV dword ptr [EBX + 0x11388],0x0   ; 005a8fd4
    ADD ESP,0x8                         ; 005a8fde
    MOV dword ptr [EBX + 0x1138c],0x0   ; 005a8fe1
    PUSH 0x5f087c                       ; 005a8feb
    LEA ESI,[EBX + 0x2d0c]              ; 005a8ff0
    MOV dword ptr [EBX + 0x11390],0x0   ; 005a8ff6
    PUSH ESI                            ; 005a9000
    MOV dword ptr [EBX + 0x11394],0x0   ; 005a9001
    CALL core_cloth.cpp_CClothList_add_FUN_005b15c0 ; 005a900b
        ;   XREF to: 005b15c0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_add_FUN_005b15c0(CClothList * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005a9010
    PUSH 0x0                            ; 005a9013
    PUSH 0x0                            ; 005a9015
    PUSH EBX                            ; 005a9017
    CALL core_belling.cpp_CBelling_processStates_FUN_005a9060 ; 005a9018
        ;   XREF to: 005a9060 (UNCONDITIONAL_CALL)  ; void core_belling.cpp_CBelling_processStates_FUN_005a9060(CBelling * this_ptr, float delta_time, int mode)
    ADD ESP,0xc                         ; 005a901d
    PUSH 0x5f088d                       ; 005a9020
    LEA ESI,[EBX + 0x10af8]             ; 005a9025
    PUSH ESI                            ; 005a902b
    CALL unkaddr_0059d350.cpp_FUN_0059d990 ; 005a902c
        ;   XREF to: 0059d990 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d990()
    ADD ESP,0x8                         ; 005a9031
    PUSH ESI                            ; 005a9034
    CALL unkaddr_0059d350.cpp_FUN_0059dc80 ; 005a9035
        ;   XREF to: 0059dc80 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059dc80()
    ADD ESP,0x4                         ; 005a903a
    MOV EAX,EBX                         ; 005a903d
    POP ESI                             ; 005a903f
    POP EBX                             ; 005a9040
    RET                                 ; 005a9041


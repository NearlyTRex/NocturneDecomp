; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHand * core_hand_cpp_CHand_ctor_FUN_005a9c00(CHand *this_ptr)
;
; Parameters:
; CHand *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_hand.cpp_factoryFuncHand_FUN_005a9bd0 at 005a9be3
;
; Called Functions:
;   core_hand.cpp_CHand_processStates_FUN_005a9e10
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;   unkaddr_0059d350.cpp_FUN_0059d6f0
;   unkaddr_0059d350.cpp_FUN_0059d990
;   unkaddr_0059d350.cpp_FUN_0059dc80
;   unkafter_basicene.cpp_CBasicEnemy_ctor_FUN_0059e3b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9c00
        ;   Label: core_hand.cpp_CHand_ctor_FUN_005a9c00
    PUSH ESI                            ; 005a9c01
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a9c02
    PUSH EDX                            ; 005a9c06
    CALL unkafter_basicene.cpp_CBasicEnemy_ctor_FUN_0059e3b0 ; 005a9c07
        ;   XREF to: 0059e3b0 (UNCONDITIONAL_CALL)  ; int unkafter_basicene.cpp_CBasicEnemy_ctor_FUN_0059e3b0(CBasicEnemy * this_ptr)
    ADD ESP,0x4                         ; 005a9c0c
    PUSH 0x5f09e9                       ; 005a9c0f
    MOV EBX,EAX                         ; 005a9c14
    LEA ESI,[EAX + 0x2b4]               ; 005a9c16
    PUSH ESI                            ; 005a9c1c
    MOV dword ptr [EAX + 0x2b0],0x6008a4 ; 005a9c1d
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 005a9c27
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x3434],0x3f000000 ; 005a9c2c
    MOV dword ptr [EBX + 0x1134c],0x3fd9999a ; 005a9c36
    MOV dword ptr [EBX + 0xfc],0x1      ; 005a9c40
    MOV dword ptr [EBX + 0x113c4],0x3f800000 ; 005a9c4a
    MOV dword ptr [EBX + 0x2a8],0x3dcccccd ; 005a9c54
    MOV dword ptr [EBX + 0x11380],0x2   ; 005a9c5e
    MOV dword ptr [EBX + 0x11384],0x2   ; 005a9c68
    MOV dword ptr [EBX + 0x11388],0x2   ; 005a9c72
    MOV dword ptr [EBX + 0x1138c],0x2   ; 005a9c7c
    MOV dword ptr [EBX + 0x11390],0x2   ; 005a9c86
    MOV dword ptr [EBX + 0x11858],0x0   ; 005a9c90
    ADD ESP,0x8                         ; 005a9c9a
    MOV dword ptr [EBX + 0x1185c],0x0   ; 005a9c9d
    PUSH 0x0                            ; 005a9ca7
    MOV dword ptr [EBX + 0x11860],0x40a00000 ; 005a9ca9
    PUSH 0x0                            ; 005a9cb3
    MOV dword ptr [EBX + 0x11864],0x0   ; 005a9cb5
    PUSH EBX                            ; 005a9cbf
    MOV dword ptr [EBX + 0x11854],0x0   ; 005a9cc0
    CALL core_hand.cpp_CHand_processStates_FUN_005a9e10 ; 005a9cca
        ;   XREF to: 005a9e10 (UNCONDITIONAL_CALL)  ; void core_hand.cpp_CHand_processStates_FUN_005a9e10(CHand * this_ptr, float delta_time, int mode)
    ADD ESP,0xc                         ; 005a9ccf
    PUSH 0x5f09f2                       ; 005a9cd2
    PUSH 0x5f09f8                       ; 005a9cd7
    LEA ESI,[EBX + 0x10af8]             ; 005a9cdc
    PUSH ESI                            ; 005a9ce2
    CALL unkaddr_0059d350.cpp_FUN_0059d6f0 ; 005a9ce3
        ;   XREF to: 0059d6f0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d6f0()
    ADD ESP,0xc                         ; 005a9ce8
    PUSH 0x5f0a06                       ; 005a9ceb
    PUSH ESI                            ; 005a9cf0
    CALL unkaddr_0059d350.cpp_FUN_0059d990 ; 005a9cf1
        ;   XREF to: 0059d990 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d990()
    ADD ESP,0x8                         ; 005a9cf6
    PUSH ESI                            ; 005a9cf9
    CALL unkaddr_0059d350.cpp_FUN_0059dc80 ; 005a9cfa
        ;   XREF to: 0059dc80 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059dc80()
    MOV dword ptr [EBX + 0x1137c],0xffffffff ; 005a9cff
    MOV dword ptr [EBX + 0x113fc],0xffffffff ; 005a9d09
    ADD ESP,0x4                         ; 005a9d13
    MOV dword ptr [EBX + 0x256c],0x0    ; 005a9d16
    MOV EAX,EBX                         ; 005a9d20
    MOV dword ptr [EBX + 0x11868],0x40a00000 ; 005a9d22
    POP ESI                             ; 005a9d2c
    POP EBX                             ; 005a9d2d
    RET                                 ; 005a9d2e


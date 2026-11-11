; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBasicNPC * core_basicnpc_cpp_CBasicNPC_ctor_FUN_005a47b0(CBasicNPC *this_ptr)
;
; Parameters:
; CBasicNPC *      Stack[0x4]:4   this_ptr
;
; XREF[7]:
;   core_basicnpc.cpp_factoryFuncBasicNPC_FUN_005a4780 at 005a4793
;   core_belling.cpp_CBelling_ctor_FUN_005a8f80 at 005a8f87
;   core_grandma.cpp_CGrandma_ctor_FUN_005a7b10 at 005a7b17
;   core_robin.cpp_CRobin_ctor_FUN_005a5e70 at 005a5e77
;   core_searpart.cpp_CSearchParty_ctor_FUN_005a8cf0 at 005a8cf7
;   core_steuben.cpp_CSteuben_ctor_FUN_005a5b40 at 005a5b47
;   core_union.cpp_CUnion_ctor_FUN_005a4a80 at 005a4a88
;
; Referenced Globals:
;   undefined4 DAT_005ff71c
;
; Called Functions:
;   core_basicnpc.cpp_CBasicNPC_processStates_FUN_005a4880
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;   unkaddr_0059d350.cpp_FUN_0059d990
;   unkaddr_0059d350.cpp_FUN_0059dc80
;   unkafter_basicene.cpp_CBasicEnemy_ctor_FUN_0059e3b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a47b0
        ;   Label: core_basicnpc.cpp_CBasicNPC_ctor_FUN_005a47b0
    PUSH ESI                            ; 005a47b1
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a47b2
    PUSH EDX                            ; 005a47b6
    CALL unkafter_basicene.cpp_CBasicEnemy_ctor_FUN_0059e3b0 ; 005a47b7
        ;   XREF to: 0059e3b0 (UNCONDITIONAL_CALL)  ; int unkafter_basicene.cpp_CBasicEnemy_ctor_FUN_0059e3b0(CBasicEnemy * this_ptr)
    ADD ESP,0x4                         ; 005a47bc
    PUSH 0x5f03f4                       ; 005a47bf
    MOV EBX,EAX                         ; 005a47c4
    LEA ESI,[EAX + 0x2b4]               ; 005a47c6
    PUSH ESI                            ; 005a47cc
    MOV dword ptr [EAX + 0x2b0],0x5ff724 ; 005a47cd
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 005a47d7
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x3434],0x3f800000 ; 005a47dc
    MOV dword ptr [EBX + 0x1134c],0x3f800000 ; 005a47e6
    MOV dword ptr [EBX + 0x11380],0x0   ; 005a47f0
    MOV dword ptr [EBX + 0x11384],0x0   ; 005a47fa
    MOV dword ptr [EBX + 0x11388],0x1   ; 005a4804
    ADD ESP,0x8                         ; 005a480e
    MOV dword ptr [EBX + 0x1138c],0x1   ; 005a4811
    PUSH 0x0                            ; 005a481b
    FLD float ptr [0x005ff71c]          ; 005a481d | DAT_005ff71c
    MOV dword ptr [EBX + 0x11394],0x0   ; 005a4823
    PUSH 0x0                            ; 005a482d
    MOV dword ptr [EBX + 0x11344],0x2   ; 005a482f
    PUSH EBX                            ; 005a4839
    FSTP float ptr [EBX + 0x11370]      ; 005a483a
    CALL core_basicnpc.cpp_CBasicNPC_processStates_FUN_005a4880 ; 005a4840
        ;   XREF to: 005a4880 (UNCONDITIONAL_CALL)  ; void core_basicnpc.cpp_CBasicNPC_processStates_FUN_005a4880(CBasicNPC * this_ptr, float delta_time, int mode)
    ADD ESP,0xc                         ; 005a4845
    PUSH 0x5f0400                       ; 005a4848
    LEA ESI,[EBX + 0x10af8]             ; 005a484d
    PUSH ESI                            ; 005a4853
    CALL unkaddr_0059d350.cpp_FUN_0059d990 ; 005a4854
        ;   XREF to: 0059d990 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d990()
    ADD ESP,0x8                         ; 005a4859
    PUSH ESI                            ; 005a485c
    CALL unkaddr_0059d350.cpp_FUN_0059dc80 ; 005a485d
        ;   XREF to: 0059dc80 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059dc80()
    ADD ESP,0x4                         ; 005a4862
    MOV EAX,EBX                         ; 005a4865
    POP ESI                             ; 005a4867
    POP EBX                             ; 005a4868
    RET                                 ; 005a4869


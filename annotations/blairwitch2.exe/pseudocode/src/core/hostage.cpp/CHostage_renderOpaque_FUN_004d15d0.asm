; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hostage_cpp_CHostage_renderOpaque_FUN_004d15d0(CHostage *this_ptr)
;
; Parameters:
; CHostage *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   core_motion.cpp_FUN_005035c0
;   core_npc.cpp_CNPC_renderOpaque_FUN_00510900
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d15d0
        ;   Label: core_hostage.cpp_CHostage_renderOpaque_FUN_004d15d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d15d1
    CMP dword ptr [EBX + 0x2471c],0x0   ; 004d15d5
    JZ 0x004d1615                       ; 004d15dc
        ;   XREF to: 004d1615 (CONDITIONAL_JUMP)  ; LAB_004d1615
    MOV ECX,dword ptr [0x0060b280]      ; 004d15de | DAT_0060b280
    PUSH ECX                            ; 004d15e4 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 004d15e5
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004d15ea
    TEST EAX,EAX                        ; 004d15ed
    JZ 0x004d1615                       ; 004d15ef
        ;   XREF to: 004d1615 (CONDITIONAL_JUMP)  ; LAB_004d1615
    CMP dword ptr [EBX + 0x246fc],0x4   ; 004d15f1
    JNZ 0x004d1615                      ; 004d15f8
        ;   XREF to: 004d1615 (CONDITIONAL_JUMP)  ; LAB_004d1615
    LEA EAX,[EBX + 0x2b4]               ; 004d15fa
    PUSH EAX                            ; 004d1600
    CALL core_motion.cpp_FUN_005035c0   ; 004d1601
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004d1606
    ADD ESP,0x4                         ; 004d1609
    CMP EAX,0xa                         ; 004d160c
    JNZ 0x004d1615                      ; 004d160f
        ;   XREF to: 004d1615 (CONDITIONAL_JUMP)  ; LAB_004d1615
    XOR EAX,EAX                         ; 004d1611
    POP EBX                             ; 004d1613
    RET                                 ; 004d1614
    PUSH EBX                            ; 004d1615
        ;   Label: LAB_004d1615
    CALL core_npc.cpp_CNPC_renderOpaque_FUN_00510900 ; 004d1616
        ;   XREF to: 00510900 (UNCONDITIONAL_CALL)  ; int core_npc.cpp_CNPC_renderOpaque_FUN_00510900(CNPC * this_ptr)
    ADD ESP,0x4                         ; 004d161b
    POP EBX                             ; 004d161e
    RET                                 ; 004d161f


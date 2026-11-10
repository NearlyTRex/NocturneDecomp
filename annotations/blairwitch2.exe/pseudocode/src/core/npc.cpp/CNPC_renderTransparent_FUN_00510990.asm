; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_npc_cpp_CNPC_renderTransparent_FUN_00510990(CNPC *this_ptr)
;
; Parameters:
; CNPC *           Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_heroCanSee_005e1534
;   undefined4 DAT_006141f0
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderTransparent_FUN_004268b0
;   core_event.cpp_CEventList_evaluateCondition_FUN_0048e340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00510990
        ;   Label: core_npc.cpp_CNPC_renderTransparent_FUN_00510990
    MOV EBX,dword ptr [ESP + 0x8]       ; 00510991
    CMP dword ptr [EBX + 0x2814],0x0    ; 00510995
    JNZ 0x005109a2                      ; 0051099c
        ;   XREF to: 005109a2 (CONDITIONAL_JUMP)  ; LAB_005109a2
    XOR EAX,EAX                         ; 0051099e
        ;   Label: LAB_0051099e
    POP EBX                             ; 005109a0
        ;   Label: LAB_005109a0
    RET                                 ; 005109a1
    PUSH 0x5e1534                       ; 005109a2 | = "heroCanSee"
        ;   Label: LAB_005109a2
    MOV ECX,dword ptr [0x006141f0]      ; 005109a7 | DAT_006141f0
    PUSH ECX                            ; 005109ad
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 005109ae
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005109b3
    TEST EAX,EAX                        ; 005109b6
    JZ 0x005109a0                       ; 005109b8
        ;   XREF to: 005109a0 (CONDITIONAL_JUMP)  ; LAB_005109a0
    CMP dword ptr [EBX + 0x24340],0x0   ; 005109ba
    JNZ 0x0051099e                      ; 005109c1
        ;   XREF to: 0051099e (CONDITIONAL_JUMP)  ; LAB_0051099e
    PUSH EBX                            ; 005109c3
    CALL core_charactr.cpp_CCharacter_renderTransparent_FUN_004268b0 ; 005109c4
        ;   XREF to: 004268b0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderTransparent_FUN_004268b0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005109c9
    MOV EAX,dword ptr [EBX + 0x2828]    ; 005109cc
    POP EBX                             ; 005109d2
    RET                                 ; 005109d3


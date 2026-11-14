; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_rifle_cpp_CRifle_getDamage_FUN_00540930(CRifle *this_ptr)
;
; Parameters:
; CRifle *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_COMBATMODEHARD_005edca3
;   undefined4 DAT_005edcb3
;   undefined4 DAT_0061b4d0
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 g_CGameInstance.game_control
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00540930
        ;   Label: core_rifle.cpp_CRifle_getDamage_FUN_00540930
    SUB ESP,0xc                         ; 00540931
    MOV EAX,dword ptr [ESP + 0x14]      ; 00540934
    CMP dword ptr [EAX + 0x56c],0x6     ; 00540938
    JNZ 0x0054094e                      ; 0054093f
        ;   XREF to: 0054094e (CONDITIONAL_JUMP)  ; LAB_0054094e
    XOR ESI,ESI                         ; 00540941
    MOV dword ptr [ESP],ESI             ; 00540943
    MOV EAX,dword ptr [ESP]             ; 00540946
    ADD ESP,0xc                         ; 00540949
    POP ESI                             ; 0054094c
    RET                                 ; 0054094d
    PUSH EBX                            ; 0054094e
        ;   Label: LAB_0054094e
    PUSH 0x5edca3                       ; 0054094f | = "COMBATMODEHARD"
    MOV ECX,dword ptr [0x0061b4d0]      ; 00540954 | DAT_0061b4d0
    PUSH ECX                            ; 0054095a
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 0054095b
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00540960
    PUSH 0x425c0000                     ; 00540963
    PUSH 0x41c80000                     ; 00540968
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0054096d
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x14],EAX      ; 00540972
    MOV EAX,[0x0061d95c]                ; 00540976 | g_CGamePtr
    FLD float ptr [ESP + 0x14]          ; 0054097b
    ADD ESP,0x8                         ; 0054097f
    MOV EBX,dword ptr [EAX + 0xd0]      ; 00540982 | g_CGameInstance.game_control
    FSTP float ptr [ESP + 0x8]          ; 00540988
    CMP EBX,0x3                         ; 0054098c
    JNZ 0x0054099f                      ; 0054098f
        ;   XREF to: 0054099f (CONDITIONAL_JUMP)  ; LAB_0054099f
    FLD float ptr [ESP + 0x8]           ; 00540991
    FMUL float ptr [0x005edcb3]         ; 00540995 | DAT_005edcb3
    FSTP float ptr [ESP + 0x8]          ; 0054099b
    MOV EAX,dword ptr [ESP + 0x8]       ; 0054099f
        ;   Label: LAB_0054099f
    MOV dword ptr [ESP + 0x4],EAX       ; 005409a3
    POP EBX                             ; 005409a7
    MOV EAX,dword ptr [ESP]             ; 005409a8
    ADD ESP,0xc                         ; 005409ab
    POP ESI                             ; 005409ae
    RET                                 ; 005409af


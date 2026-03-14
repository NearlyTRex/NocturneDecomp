; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hpriest_cpp_CHighPriestOfGardath_process_FUN_004f7c00(CHighPriestOfGardath *this_ptr,float delta_time)
;
; Parameters:
; CHighPriestOfGardath * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   CEventList* g_CEventListPtr = 02d05310
;   CEventList g_CEventListInstance
;
; Called Functions:
;   core_charactr.cpp_CCharacter_dismember_FUN_0042b9e0
;   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
;   core_npc.cpp_CNPC_process_FUN_005448b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f7c00
        ;   Label: core_hpriest.cpp_CHighPriestOfGardath_process_FUN_004f7c00
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f7c01
    PUSH dword ptr [ESP + 0xc]          ; 004f7c05
    PUSH EBX                            ; 004f7c09
    CALL core_npc.cpp_CNPC_process_FUN_005448b0 ; 004f7c0a
        ;   XREF to: 005448b0 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_CNPC_process_FUN_005448b0(CNPC * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004f7c0f
    LEA EAX,[EBX + 0x1f708]             ; 004f7c12
    PUSH EAX                            ; 004f7c18
    MOV EDX,dword ptr [0x006793d0]      ; 004f7c19 | g_CEventListInstance | g_CEventListPtr
    PUSH EDX                            ; 004f7c1f | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 004f7c20
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004f7c25
    TEST EAX,EAX                        ; 004f7c28
    JNZ 0x004f7c2e                      ; 004f7c2a
        ;   XREF to: 004f7c2e (CONDITIONAL_JUMP)  ; LAB_004f7c2e
    POP EBX                             ; 004f7c2c
    RET                                 ; 004f7c2d
    PUSH 0x1                            ; 004f7c2e
        ;   Label: LAB_004f7c2e
    PUSH 0xbf800000                     ; 004f7c30
    PUSH 0x0                            ; 004f7c35
    PUSH EBX                            ; 004f7c37
    CALL core_charactr.cpp_CCharacter_dismember_FUN_0042b9e0 ; 004f7c38
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismember_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * impact_point, float impact_force, int render_in_background)
    ADD ESP,0x10                        ; 004f7c3d
    POP EBX                             ; 004f7c40
    RET                                 ; 004f7c41


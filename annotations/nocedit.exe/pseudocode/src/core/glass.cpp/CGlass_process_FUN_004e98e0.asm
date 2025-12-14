; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_glass.cpp_CGlass_process_FUN_004e98e0(CGlass * this_ptr)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CEventList* g_CEventListPtr = 02d05310
;   CEventList g_CEventListInstance
;
; Called Functions:
;   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
;   core_glass.cpp_CGlass_shatter_FUN_004eaef0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e98e0
        ;   Label: core_glass.cpp_CGlass_process_FUN_004e98e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e98e1
    CMP dword ptr [EBX + 0x180],0x0     ; 004e98e5
    JZ 0x004e98fa                       ; 004e98ec
        ;   XREF to: 004e98fa (CONDITIONAL_JUMP)  ; LAB_004e98fa
    MOV dword ptr [EBX + 0x104],0x1     ; 004e98ee
    POP EBX                             ; 004e98f8
        ;   Label: LAB_004e98f8
    RET                                 ; 004e98f9
    LEA EAX,[EBX + 0x184]               ; 004e98fa
        ;   Label: LAB_004e98fa
    PUSH EAX                            ; 004e9900
    MOV ECX,dword ptr [0x006793d0]      ; 004e9901 | g_CEventListInstance | g_CEventListPtr
    PUSH ECX                            ; 004e9907 | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 004e9908
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004e990d
    TEST EAX,EAX                        ; 004e9910
    JZ 0x004e98f8                       ; 004e9912
        ;   XREF to: 004e98f8 (CONDITIONAL_JUMP)  ; LAB_004e98f8
    LEA EAX,[EBX + 0x20]                ; 004e9914
    PUSH EAX                            ; 004e9917
    PUSH EBX                            ; 004e9918
    CALL core_glass.cpp_CGlass_shatter_FUN_004eaef0 ; 004e9919
        ;   XREF to: 004eaef0 (UNCONDITIONAL_CALL)  ; void core_glass.cpp_CGlass_shatter_FUN_004eaef0(CGlass * this_ptr, CVector3f * location)
    ADD ESP,0x8                         ; 004e991e
    POP EBX                             ; 004e9921
    RET                                 ; 004e9922


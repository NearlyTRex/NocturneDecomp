; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_litecone_cpp_FUN_00506bc0(void)
;
;
; Referenced Globals:
;   CEventList* g_CEventListPtr = 02d05310
;   CEventList g_CEventListInstance
;
; Called Functions:
;   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00506bc0
        ;   Label: core_litecone.cpp_FUN_00506bc0
    PUSH ESI                            ; 00506bc1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00506bc2
    CMP dword ptr [EBX + 0x160],0x0     ; 00506bc6
    JNZ 0x00506bf9                      ; 00506bcd
        ;   XREF to: 00506bf9 (CONDITIONAL_JUMP)  ; LAB_00506bf9
    LEA EAX,[EBX + 0x164]               ; 00506bcf
    PUSH EAX                            ; 00506bd5
    MOV ESI,dword ptr [0x006793d0]      ; 00506bd6 | g_CEventListPtr
    PUSH ESI                            ; 00506bdc | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 00506bdd
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00506be2
    TEST EAX,EAX                        ; 00506be5
    JNZ 0x00506bec                      ; 00506be7
        ;   XREF to: 00506bec (CONDITIONAL_JUMP)  ; LAB_00506bec
    POP ESI                             ; 00506be9
        ;   Label: LAB_00506be9
    POP EBX                             ; 00506bea
    RET                                 ; 00506beb
    MOV dword ptr [EBX + 0x160],0x1     ; 00506bec
        ;   Label: LAB_00506bec
    POP ESI                             ; 00506bf6
    POP EBX                             ; 00506bf7
    RET                                 ; 00506bf8
    LEA EAX,[EBX + 0x1c8]               ; 00506bf9
        ;   Label: LAB_00506bf9
    PUSH EAX                            ; 00506bff
    MOV ECX,dword ptr [0x006793d0]      ; 00506c00 | g_CEventListInstance | g_CEventListPtr
    PUSH ECX                            ; 00506c06 | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 00506c07
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00506c0c
    TEST EAX,EAX                        ; 00506c0f
    JZ 0x00506be9                       ; 00506c11
        ;   XREF to: 00506be9 (CONDITIONAL_JUMP)  ; LAB_00506be9
    MOV dword ptr [EBX + 0x160],0x0     ; 00506c13
    POP ESI                             ; 00506c1d
    POP EBX                             ; 00506c1e
    RET                                 ; 00506c1f


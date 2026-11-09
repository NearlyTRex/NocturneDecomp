; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_glass_cpp_FUN_004c5250(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_006141f0
;
; Called Functions:
;   core_event.cpp_CEventList_evaluateCondition_FUN_0048e340
;   core_glass.cpp_FUN_004c6d40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c5250
        ;   Label: core_glass.cpp_FUN_004c5250
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c5251
    CMP dword ptr [EBX + 0x2dc],0x0     ; 004c5255
    JZ 0x004c526a                       ; 004c525c
        ;   XREF to: 004c526a (CONDITIONAL_JUMP)  ; LAB_004c526a
    MOV dword ptr [EBX + 0x104],0x1     ; 004c525e
    POP EBX                             ; 004c5268
        ;   Label: LAB_004c5268
    RET                                 ; 004c5269
    LEA EAX,[EBX + 0x2e0]               ; 004c526a
        ;   Label: LAB_004c526a
    PUSH EAX                            ; 004c5270
    MOV ECX,dword ptr [0x006141f0]      ; 004c5271 | DAT_006141f0
    PUSH ECX                            ; 004c5277
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 004c5278
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004c527d
    TEST EAX,EAX                        ; 004c5280
    JZ 0x004c5268                       ; 004c5282
        ;   XREF to: 004c5268 (CONDITIONAL_JUMP)  ; LAB_004c5268
    LEA EAX,[EBX + 0x20]                ; 004c5284
    PUSH EAX                            ; 004c5287
    PUSH EBX                            ; 004c5288
    CALL core_glass.cpp_FUN_004c6d40    ; 004c5289
        ;   XREF to: 004c6d40 (UNCONDITIONAL_CALL)  ; undefined core_glass.cpp_FUN_004c6d40()
    ADD ESP,0x8                         ; 004c528e
    POP EBX                             ; 004c5291
    RET                                 ; 004c5292


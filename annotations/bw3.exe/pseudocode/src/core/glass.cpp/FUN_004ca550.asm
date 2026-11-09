; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_glass_cpp_FUN_004ca550(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba60
;
; Called Functions:
;   core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0
;   core_glass.cpp_FUN_004cc040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ca550
        ;   Label: core_glass.cpp_FUN_004ca550
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ca551
    CMP dword ptr [EBX + 0x1b0],0x0     ; 004ca555
    JZ 0x004ca56a                       ; 004ca55c
        ;   XREF to: 004ca56a (CONDITIONAL_JUMP)  ; LAB_004ca56a
    MOV dword ptr [EBX + 0x104],0x1     ; 004ca55e
    POP EBX                             ; 004ca568
        ;   Label: LAB_004ca568
    RET                                 ; 004ca569
    LEA EAX,[EBX + 0x1b4]               ; 004ca56a
        ;   Label: LAB_004ca56a
    PUSH EAX                            ; 004ca570
    MOV ECX,dword ptr [0x005fba60]      ; 004ca571 | DAT_005fba60
    PUSH ECX                            ; 004ca577
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 004ca578
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004ca57d
    TEST EAX,EAX                        ; 004ca580
    JZ 0x004ca568                       ; 004ca582
        ;   XREF to: 004ca568 (CONDITIONAL_JUMP)  ; LAB_004ca568
    LEA EAX,[EBX + 0x20]                ; 004ca584
    PUSH EAX                            ; 004ca587
    PUSH EBX                            ; 004ca588
    CALL core_glass.cpp_FUN_004cc040    ; 004ca589
        ;   XREF to: 004cc040 (UNCONDITIONAL_CALL)  ; undefined core_glass.cpp_FUN_004cc040()
    ADD ESP,0x8                         ; 004ca58e
    POP EBX                             ; 004ca591
    RET                                 ; 004ca592


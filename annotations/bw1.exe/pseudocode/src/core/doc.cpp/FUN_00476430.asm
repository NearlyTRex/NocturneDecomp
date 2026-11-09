; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_doc_cpp_FUN_00476430(undefined4 param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_docCannotDie_005da662
;   undefined4 DAT_0061b4d0
;
; Called Functions:
;   core_charactr.cpp_FUN_00431c30
;   core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
;
; *****************************************************************************

section .text

    PUSH 0x5da662                       ; 00476430 | = "docCannotDie"
        ;   Label: core_doc.cpp_FUN_00476430
    MOV EDX,dword ptr [0x0061b4d0]      ; 00476435 | DAT_0061b4d0
    PUSH EDX                            ; 0047643b
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 0047643c
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00476441
    TEST EAX,EAX                        ; 00476444
    JZ 0x0047644b                       ; 00476446
        ;   XREF to: 0047644b (CONDITIONAL_JUMP)  ; LAB_0047644b
    XOR EAX,EAX                         ; 00476448
    RET                                 ; 0047644a
    MOV ECX,dword ptr [ESP + 0x4]       ; 0047644b
        ;   Label: LAB_0047644b
    PUSH ECX                            ; 0047644f
    CALL core_charactr.cpp_FUN_00431c30 ; 00476450
        ;   XREF to: 00431c30 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00431c30()
    ADD ESP,0x4                         ; 00476455
    RET                                 ; 00476458


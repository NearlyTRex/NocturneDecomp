; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_glass_cpp_CGlass_process_FUN_004ac3f0(CGlass *this_ptr,float delta_time)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 DAT_005b7650
;
; Called Functions:
;   core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30
;   core_glass.cpp_CGlass_shatter_FUN_004ada20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ac3f0
        ;   Label: core_glass.cpp_CGlass_process_FUN_004ac3f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ac3f1
    CMP dword ptr [EBX + 0x178],0x0     ; 004ac3f5
    JZ 0x004ac40a                       ; 004ac3fc
        ;   XREF to: 004ac40a (CONDITIONAL_JUMP)  ; LAB_004ac40a
    MOV dword ptr [EBX + 0x104],0x1     ; 004ac3fe
    POP EBX                             ; 004ac408
        ;   Label: LAB_004ac408
    RET                                 ; 004ac409
    LEA EAX,[EBX + 0x17c]               ; 004ac40a
        ;   Label: LAB_004ac40a
    PUSH EAX                            ; 004ac410
    MOV ECX,dword ptr [0x005b7650]      ; 004ac411 | DAT_005b7650
    PUSH ECX                            ; 004ac417
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 004ac418
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004ac41d
    TEST EAX,EAX                        ; 004ac420
    JZ 0x004ac408                       ; 004ac422
        ;   XREF to: 004ac408 (CONDITIONAL_JUMP)  ; LAB_004ac408
    LEA EAX,[EBX + 0x20]                ; 004ac424
    PUSH EAX                            ; 004ac427
    PUSH EBX                            ; 004ac428
    CALL core_glass.cpp_CGlass_shatter_FUN_004ada20 ; 004ac429
        ;   XREF to: 004ada20 (UNCONDITIONAL_CALL)  ; void core_glass.cpp_CGlass_shatter_FUN_004ada20(CGlass * this_ptr, CVector3f * location)
    ADD ESP,0x8                         ; 004ac42e
    POP EBX                             ; 004ac431
    RET                                 ; 004ac432


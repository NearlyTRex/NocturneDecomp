; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_glass_cpp_CGlass_process_FUN_004e19c0(CGlass *this_ptr,float delta_time)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 DAT_0061b4d0
;
; Called Functions:
;   core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
;   core_glass.cpp_FUN_004e34b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e19c0
        ;   Label: core_glass.cpp_CGlass_process_FUN_004e19c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e19c1
    CMP dword ptr [EBX + 0x180],0x0     ; 004e19c5
    JZ 0x004e19da                       ; 004e19cc
        ;   XREF to: 004e19da (CONDITIONAL_JUMP)  ; LAB_004e19da
    MOV dword ptr [EBX + 0x104],0x1     ; 004e19ce
    POP EBX                             ; 004e19d8
        ;   Label: LAB_004e19d8
    RET                                 ; 004e19d9
    LEA EAX,[EBX + 0x184]               ; 004e19da
        ;   Label: LAB_004e19da
    PUSH EAX                            ; 004e19e0
    MOV ECX,dword ptr [0x0061b4d0]      ; 004e19e1 | DAT_0061b4d0
    PUSH ECX                            ; 004e19e7
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 004e19e8
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004e19ed
    TEST EAX,EAX                        ; 004e19f0
    JZ 0x004e19d8                       ; 004e19f2
        ;   XREF to: 004e19d8 (CONDITIONAL_JUMP)  ; LAB_004e19d8
    LEA EAX,[EBX + 0x20]                ; 004e19f4
    PUSH EAX                            ; 004e19f7
    PUSH EBX                            ; 004e19f8
    CALL core_glass.cpp_FUN_004e34b0    ; 004e19f9
        ;   XREF to: 004e34b0 (UNCONDITIONAL_CALL)  ; undefined core_glass.cpp_FUN_004e34b0()
    ADD ESP,0x8                         ; 004e19fe
    POP EBX                             ; 004e1a01
    RET                                 ; 004e1a02


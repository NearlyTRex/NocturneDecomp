; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_event.cpp_CEventList_FUN_004b0830(CEventList * this_ptr)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_event.cpp_CEventList_FUN_004aacc0 at 004abbfc
;   core_event.cpp_CEventList_FUN_004ae140 at 004ae717
;   core_event.cpp_FUN_004aa3c0 at 004aa3f1
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055d253
;
; Called Functions:
;   core_event.cpp_CEventList_FUN_004b0950
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004b0830
        ;   Label: core_event.cpp_CEventList_FUN_004b0830
    PUSH EDX                            ; 004b0834
    MOV ECX,dword ptr [ESP + 0x8]       ; 004b0835
    PUSH ECX                            ; 004b0839
    CALL core_event.cpp_CEventList_FUN_004b0950 ; 004b083a
        ;   XREF to: 004b0950 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_FUN_004b0950(CEventList * this_ptr)
    ADD ESP,0x8                         ; 004b083f
    TEST EAX,EAX                        ; 004b0842
    JL 0x004b0858                       ; 004b0844
        ;   XREF to: 004b0858 (CONDITIONAL_JUMP)  ; LAB_004b0858
    PUSH EBX                            ; 004b0846
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b0847
    SHL EAX,0x2                         ; 004b084b
    ADD EAX,EBX                         ; 004b084e
    MOV EAX,dword ptr [EAX + 0x34c0]    ; 004b0850
    POP EBX                             ; 004b0856
    RET                                 ; 004b0857
    XOR EAX,EAX                         ; 004b0858
        ;   Label: LAB_004b0858
    RET                                 ; 004b085a


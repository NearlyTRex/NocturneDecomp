; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_CEventList_getCounterValue_FUN_00494d00(CEventList *this_ptr,char *str)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   str
;
; XREF[4]:
;   core_event.cpp_CEventList_evaluateAtom_FUN_00491f40 at 00492504
;   core_event.cpp_FUN_0048c2e0 at 0048e5ad
;   core_event.cpp_parseIntOrCounter_FUN_0048b910 at 0048b941
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052cc92
;
; Called Functions:
;   core_event.cpp_CEventList_findCounter_FUN_00494e20
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00494d00
        ;   Label: core_event.cpp_CEventList_getCounterValue_FUN_00494d00
    PUSH EDX                            ; 00494d04
    MOV ECX,dword ptr [ESP + 0x8]       ; 00494d05
    PUSH ECX                            ; 00494d09
    CALL core_event.cpp_CEventList_findCounter_FUN_00494e20 ; 00494d0a
        ;   XREF to: 00494e20 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_findCounter_FUN_00494e20(CEventList * this_ptr, char * name)
    ADD ESP,0x8                         ; 00494d0f
    TEST EAX,EAX                        ; 00494d12
    JL 0x00494d28                       ; 00494d14
        ;   XREF to: 00494d28 (CONDITIONAL_JUMP)  ; LAB_00494d28
    PUSH EBX                            ; 00494d16
    MOV EBX,dword ptr [ESP + 0x8]       ; 00494d17
    SHL EAX,0x2                         ; 00494d1b
    ADD EAX,EBX                         ; 00494d1e
    MOV EAX,dword ptr [EAX + 0x34c0]    ; 00494d20
    POP EBX                             ; 00494d26
    RET                                 ; 00494d27
    XOR EAX,EAX                         ; 00494d28
        ;   Label: LAB_00494d28
    RET                                 ; 00494d2a


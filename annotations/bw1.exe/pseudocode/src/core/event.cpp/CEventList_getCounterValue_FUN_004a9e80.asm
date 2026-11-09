; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_CEventList_getCounterValue_FUN_004a9e80(CEventList *this_ptr,char *str)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   str
;
; XREF[4]:
;   core_event.cpp_CEventList_evaluateAtom_FUN_004a70d0 at 004a7694
;   core_event.cpp_FUN_004a1d00 at 004a3fb1
;   core_event.cpp_parseIntOrCounter_FUN_004a1330 at 004a1361
;   core_script.cpp_CScript_step_FUN_00544460 at 005475a8
;
; Called Functions:
;   core_event.cpp_CEventList_findCounter_FUN_004a9fa0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004a9e80
        ;   Label: core_event.cpp_CEventList_getCounterValue_FUN_004a9e80
    PUSH EDX                            ; 004a9e84
    MOV ECX,dword ptr [ESP + 0x8]       ; 004a9e85
    PUSH ECX                            ; 004a9e89
    CALL core_event.cpp_CEventList_findCounter_FUN_004a9fa0 ; 004a9e8a
        ;   XREF to: 004a9fa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_findCounter_FUN_004a9fa0(CEventList * this_ptr, char * name)
    ADD ESP,0x8                         ; 004a9e8f
    TEST EAX,EAX                        ; 004a9e92
    JL 0x004a9ea8                       ; 004a9e94
        ;   XREF to: 004a9ea8 (CONDITIONAL_JUMP)  ; LAB_004a9ea8
    PUSH EBX                            ; 004a9e96
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a9e97
    SHL EAX,0x2                         ; 004a9e9b
    ADD EAX,EBX                         ; 004a9e9e
    MOV EAX,dword ptr [EAX + 0x34c0]    ; 004a9ea0
    POP EBX                             ; 004a9ea6
    RET                                 ; 004a9ea7
    XOR EAX,EAX                         ; 004a9ea8
        ;   Label: LAB_004a9ea8
    RET                                 ; 004a9eaa


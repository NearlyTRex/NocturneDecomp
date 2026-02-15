; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_event_cpp_CEventList_getSfxHandle_FUN_004b0c40(CEventList *this_ptr,char *name)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   name
;
; XREF[2]:
;   core_event.cpp_CEventList_evaluateAtom_FUN_004ae140 at 004afc09
;   core_event.cpp_CEventList_executeCommand_FUN_004aacc0 at 004ab68c
;
; Called Functions:
;   core_event.cpp_CEventList_findSfxEntry_FUN_004b0d60
;   core_event.cpp_CEventList_updateSfxEntries_FUN_004b0db0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0c40
        ;   Label: core_event.cpp_CEventList_getSfxHandle_FUN_004b0c40
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b0c41
    PUSH EBX                            ; 004b0c45
    CALL core_event.cpp_CEventList_updateSfxEntries_FUN_004b0db0 ; 004b0c46
        ;   XREF to: 004b0db0 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_updateSfxEntries_FUN_004b0db0(CEventList * this_ptr)
    ADD ESP,0x4                         ; 004b0c4b
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b0c4e
    PUSH EDX                            ; 004b0c52
    PUSH EBX                            ; 004b0c53
    CALL core_event.cpp_CEventList_findSfxEntry_FUN_004b0d60 ; 004b0c54
        ;   XREF to: 004b0d60 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_findSfxEntry_FUN_004b0d60(CEventList * this_ptr, char * name)
    ADD ESP,0x8                         ; 004b0c59
    TEST EAX,EAX                        ; 004b0c5c
    JL 0x004b0c73                       ; 004b0c5e
        ;   XREF to: 004b0c73 (CONDITIONAL_JUMP)  ; LAB_004b0c73
    MOV EDX,EAX                         ; 004b0c60
    SHL EAX,0x3                         ; 004b0c62
    ADD EAX,EDX                         ; 004b0c65
    SHL EAX,0x5                         ; 004b0c67
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x3acc] ; 004b0c6a
    POP EBX                             ; 004b0c71
    RET                                 ; 004b0c72
    XOR EAX,EAX                         ; 004b0c73
        ;   Label: LAB_004b0c73
    POP EBX                             ; 004b0c75
    RET                                 ; 004b0c76


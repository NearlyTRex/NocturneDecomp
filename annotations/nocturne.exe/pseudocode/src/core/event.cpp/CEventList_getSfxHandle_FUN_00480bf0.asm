; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint core_event_cpp_CEventList_getSfxHandle_FUN_00480bf0(CEventList *param_1,char *param_2)
;
;
; XREF[2]:
;   core_event.cpp_CEventList_evaluateAtom_FUN_0047e0d0 at 0047fbb0
;   core_event.cpp_CEventList_executeCommand_FUN_0047ac50 at 0047b61c
;
; Called Functions:
;   core_event.cpp_CEventList_findSfxEntry_FUN_00480d10
;   core_event.cpp_CEventList_updateSfxEntries_FUN_00480d60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480bf0
        ;   Label: core_event.cpp_CEventList_getSfxHandle_FUN_00480bf0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00480bf1
    PUSH EBX                            ; 00480bf5
    CALL core_event.cpp_CEventList_updateSfxEntries_FUN_00480d60 ; 00480bf6
        ;   XREF to: 00480d60 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_updateSfxEntries_FUN_00480d60(CEventList * this_ptr)
    ADD ESP,0x4                         ; 00480bfb
    MOV EDX,dword ptr [ESP + 0xc]       ; 00480bfe
    PUSH EDX                            ; 00480c02
    PUSH EBX                            ; 00480c03
    CALL core_event.cpp_CEventList_findSfxEntry_FUN_00480d10 ; 00480c04
        ;   XREF to: 00480d10 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_findSfxEntry_FUN_00480d10(CEventList * this_ptr, char * name)
    ADD ESP,0x8                         ; 00480c09
    TEST EAX,EAX                        ; 00480c0c
    JL 0x00480c23                       ; 00480c0e
        ;   XREF to: 00480c23 (CONDITIONAL_JUMP)  ; LAB_00480c23
    MOV EDX,EAX                         ; 00480c10
    SHL EAX,0x3                         ; 00480c12
    ADD EAX,EDX                         ; 00480c15
    SHL EAX,0x5                         ; 00480c17
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x3acc] ; 00480c1a
    POP EBX                             ; 00480c21
    RET                                 ; 00480c22
    XOR EAX,EAX                         ; 00480c23
        ;   Label: LAB_00480c23
    POP EBX                             ; 00480c25
    RET                                 ; 00480c26


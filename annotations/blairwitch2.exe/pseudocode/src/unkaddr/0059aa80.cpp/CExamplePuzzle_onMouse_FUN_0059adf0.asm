; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl unkaddr_0059aa80_cpp_CExamplePuzzle_onMouse_FUN_0059adf0(CExamplePuzzle *this_ptr,int param_2,int param_3)
;
; Parameters:
; CExamplePuzzle * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
; int              Stack[0xc]:4   param_3
;
; Referenced Globals:
;   undefined4 DAT_006141f0
;
; Called Functions:
;   core_event.cpp_CEventList_executeCommands_FUN_004894f0
;   unkaddr_0059aa80.cpp_FUN_0059ab70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059adf0
        ;   Label: unkaddr_0059aa80.cpp_CExamplePuzzle_onMouse_FUN_0059adf0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059adf1
    MOV EDX,dword ptr [ESP + 0xc]       ; 0059adf5
    MOV EAX,dword ptr [ESP + 0x10]      ; 0059adf9
    CMP EDX,dword ptr [EBX + 0x4]       ; 0059adfd
    JL 0x0059ae11                       ; 0059ae00
        ;   XREF to: 0059ae11 (CONDITIONAL_JUMP)  ; LAB_0059ae11
    CMP EDX,dword ptr [EBX + 0xc]       ; 0059ae02
    JG 0x0059ae11                       ; 0059ae05
        ;   XREF to: 0059ae11 (CONDITIONAL_JUMP)  ; LAB_0059ae11
    CMP EAX,dword ptr [EBX + 0x8]       ; 0059ae07
    JL 0x0059ae11                       ; 0059ae0a
        ;   XREF to: 0059ae11 (CONDITIONAL_JUMP)  ; LAB_0059ae11
    CMP EAX,dword ptr [EBX + 0x10]      ; 0059ae0c
    JLE 0x0059ae13                      ; 0059ae0f
        ;   XREF to: 0059ae13 (CONDITIONAL_JUMP)  ; LAB_0059ae13
    POP EBX                             ; 0059ae11
        ;   Label: LAB_0059ae11
    RET                                 ; 0059ae12
    PUSH 0x5ef3fc                       ; 0059ae13
        ;   Label: LAB_0059ae13
    MOV EAX,[0x006141f0]                ; 0059ae18 | DAT_006141f0
    PUSH EAX                            ; 0059ae1d
    CALL core_event.cpp_CEventList_executeCommands_FUN_004894f0 ; 0059ae1e
        ;   XREF to: 004894f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004894f0(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 0059ae23
    PUSH 0x0                            ; 0059ae26
    PUSH EBX                            ; 0059ae28
    CALL unkaddr_0059aa80.cpp_FUN_0059ab70 ; 0059ae29
        ;   XREF to: 0059ab70 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059aa80.cpp_FUN_0059ab70()
    ADD ESP,0x8                         ; 0059ae2e
    POP EBX                             ; 0059ae31
    RET                                 ; 0059ae32


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList *this_ptr,char *condition_expression)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   condition_expression
;
; XREF[75]:
;   core_anvil.cpp_FUN_0040e680 at 0040e696
;   core_armour.cpp_FUN_0040eaa0 at 0040eb7b
;   core_baron.cpp_FUN_0040f4d0 at 0040f4ff
;   core_batman.cpp_FUN_00412ba0 at 004133fa
;   core_biggs.cpp_FUN_00414b30 at 00414d46
;   core_bodypart.cpp_FUN_00419740 at 004198cc
;   core_boneguy.cpp_FUN_0041bb40 at 0041bb63
;   core_bugs.cpp_FUN_004253c0 at 00425419
;   core_carved.cpp_FUN_004287e0 at 00428802
;   core_charactr.cpp_FUN_00432f10 at 004330bc
;   ... and 65 more
;
; Referenced Globals:
;   undefined4 DAT_005de189
;   undefined4 DAT_005de18e
;   CConsole* g_CConsolePtr = 007db5f0
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01c56ecc
;   undefined4 DAT_01c56ed0
;
; Called Functions:
;   core_event.cpp_CEventList_evaluateExpression_FUN_004a6d10
;   crt_string.c__stricmp_FUN_005c04e0
;   engine_console.cpp_FUN_00445430
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a6c30
        ;   Label: core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
    MOV EBX,dword ptr [ESP + 0xc]       ; 004a6c31
    TEST EBX,EBX                        ; 004a6c35
    JZ 0x004a6c3e                       ; 004a6c37
        ;   XREF to: 004a6c3e (CONDITIONAL_JUMP)  ; LAB_004a6c3e
    CMP byte ptr [EBX],0x0              ; 004a6c39
    JNZ 0x004a6c42                      ; 004a6c3c
        ;   XREF to: 004a6c42 (CONDITIONAL_JUMP)  ; LAB_004a6c42
    XOR EAX,EAX                         ; 004a6c3e
        ;   Label: LAB_004a6c3e
    POP EBX                             ; 004a6c40
        ;   Label: LAB_004a6c40
    RET                                 ; 004a6c41
    PUSH 0x5de189                       ; 004a6c42 | DAT_005de189
        ;   Label: LAB_004a6c42
    PUSH EBX                            ; 004a6c47
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a6c48
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a6c4d
    TEST EAX,EAX                        ; 004a6c50
    JZ 0x004a6c40                       ; 004a6c52
        ;   XREF to: 004a6c40 (CONDITIONAL_JUMP)  ; LAB_004a6c40
    PUSH EBX                            ; 004a6c54
    MOV ECX,dword ptr [ESP + 0xc]       ; 004a6c55
    XOR EDX,EDX                         ; 004a6c59
    PUSH ECX                            ; 004a6c5b
    MOV dword ptr [0x01c56ecc],EDX      ; 004a6c5c | DAT_01c56ecc
    CALL core_event.cpp_CEventList_evaluateExpression_FUN_004a6d10 ; 004a6c62
        ;   XREF to: 004a6d10 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateExpression_FUN_004a6d10(CEventList * this_ptr, char * expression)
    ADD ESP,0x8                         ; 004a6c67
    TEST EAX,EAX                        ; 004a6c6a
    JGE 0x004a6c40                      ; 004a6c6c
        ;   XREF to: 004a6c40 (CONDITIONAL_JUMP)  ; LAB_004a6c40
    PUSH 0x1c56ed0                      ; 004a6c6e | DAT_01c56ed0
    PUSH 0x5de18e                       ; 004a6c73 | DAT_005de18e
    MOV EBX,dword ptr [0x00611100]      ; 004a6c78 | g_CConsolePtr
    PUSH EBX                            ; 004a6c7e | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 004a6c7f
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0xc                         ; 004a6c84
    XOR EAX,EAX                         ; 004a6c87
    POP EBX                             ; 004a6c89
    RET                                 ; 004a6c8a


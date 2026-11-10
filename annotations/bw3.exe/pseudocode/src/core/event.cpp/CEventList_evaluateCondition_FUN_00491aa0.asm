; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList *this_ptr,char *condition_expression)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   condition_expression
;
; XREF[55]:
;   core_bird.cpp_CBird_renderOpaque_FUN_0040fe90 at 0040fef5
;   core_bird.cpp_CBird_renderTransparent_FUN_0040ff30 at 0040ff4e
;   core_bodypart.cpp_CBodyPart_process_FUN_00415350 at 004154dc
;   core_boneguy.cpp_CBaalSkel_process_FUN_00419b40 at 00419b63
;   core_boneguy.cpp_CBoneGuy_process_FUN_004179b0 at 004179f3
;   core_boxactor.cpp_CBoxActor_process_FUN_0041f360 at 0041f82b
;   core_bugs.cpp_CBugs_process_FUN_00421300 at 0042144f
;   core_carved.cpp_CCarved_ctor_FUN_00425960 at 00425a63
;   core_charactr.cpp_FUN_00432330 at 004324dc
;   core_constrct.cpp_CConstruct_process_FUN_00442a20 at 00443bc7
;   ... and 45 more
;
; Referenced Globals:
;   undefined4 DAT_005bf4c5
;   undefined4 DAT_005bf4ca
;   CConsole* g_CConsolePtr = 007f7ea4
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01c734ac
;   undefined4 DAT_01c734b0
;
; Called Functions:
;   core_event.cpp_CEventList_evaluateExpression_FUN_00491b80
;   crt_string.c__stricmp_FUN_005a3260
;   engine_console.cpp_FUN_00441ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00491aa0
        ;   Label: core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0
    MOV EBX,dword ptr [ESP + 0xc]       ; 00491aa1
    TEST EBX,EBX                        ; 00491aa5
    JZ 0x00491aae                       ; 00491aa7
        ;   XREF to: 00491aae (CONDITIONAL_JUMP)  ; LAB_00491aae
    CMP byte ptr [EBX],0x0              ; 00491aa9
    JNZ 0x00491ab2                      ; 00491aac
        ;   XREF to: 00491ab2 (CONDITIONAL_JUMP)  ; LAB_00491ab2
    XOR EAX,EAX                         ; 00491aae
        ;   Label: LAB_00491aae
    POP EBX                             ; 00491ab0
        ;   Label: LAB_00491ab0
    RET                                 ; 00491ab1
    PUSH 0x5bf4c5                       ; 00491ab2 | DAT_005bf4c5
        ;   Label: LAB_00491ab2
    PUSH EBX                            ; 00491ab7
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00491ab8
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00491abd
    TEST EAX,EAX                        ; 00491ac0
    JZ 0x00491ab0                       ; 00491ac2
        ;   XREF to: 00491ab0 (CONDITIONAL_JUMP)  ; LAB_00491ab0
    PUSH EBX                            ; 00491ac4
    MOV ECX,dword ptr [ESP + 0xc]       ; 00491ac5
    XOR EDX,EDX                         ; 00491ac9
    PUSH ECX                            ; 00491acb
    MOV dword ptr [0x01c734ac],EDX      ; 00491acc | DAT_01c734ac
    CALL core_event.cpp_CEventList_evaluateExpression_FUN_00491b80 ; 00491ad2
        ;   XREF to: 00491b80 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateExpression_FUN_00491b80(CEventList * this_ptr, char * expression)
    ADD ESP,0x8                         ; 00491ad7
    TEST EAX,EAX                        ; 00491ada
    JGE 0x00491ab0                      ; 00491adc
        ;   XREF to: 00491ab0 (CONDITIONAL_JUMP)  ; LAB_00491ab0
    PUSH 0x1c734b0                      ; 00491ade | DAT_01c734b0
    PUSH 0x5bf4ca                       ; 00491ae3 | DAT_005bf4ca
    MOV EBX,dword ptr [0x005f1690]      ; 00491ae8 | g_CConsolePtr
    PUSH EBX                            ; 00491aee | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 00491aef
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0xc                         ; 00491af4
    XOR EAX,EAX                         ; 00491af7
    POP EBX                             ; 00491af9
    RET                                 ; 00491afa


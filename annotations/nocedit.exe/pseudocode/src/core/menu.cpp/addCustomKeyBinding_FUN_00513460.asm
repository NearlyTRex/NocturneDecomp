; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_menu_cpp_addCustomKeyBinding_FUN_00513460(int *key_code_ptr,char *key_name)
;
; Parameters:
; int *            Stack[0x4]:4   key_code_ptr
; char *           Stack[0x8]:4   key_name
;
; Referenced Globals:
;   TerminatedCString s_core_menu_cpp_00636e40
;   TerminatedCString s_Too_many_custom_keys_00636e51
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_CustomKeyCount
;   int*[31] g_CustomKeyPointers
;   char[30][40] g_CustomKeyNames
;   undefined4 g_CustomKeyNames[0][1]
;   undefined4 g_CustomKeyNames[0][2]
;   undefined4 g_CustomKeyNames[0][3]
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00513460
        ;   Label: core_menu.cpp_addCustomKeyBinding_FUN_00513460
    PUSH EDI                            ; 00513461
    CMP dword ptr [0x02f29270],0x1e     ; 00513462 | g_CustomKeyCount
    JGE 0x005134b3                      ; 00513469
        ;   XREF to: 005134b3 (CONDITIONAL_JUMP)  ; LAB_005134b3
    MOV EAX,[0x02f29270]                ; 0051346b | g_CustomKeyCount
        ;   Label: LAB_0051346b
    MOV EDX,dword ptr [ESP + 0xc]       ; 00513470
    MOV dword ptr [EAX*0x4 + 0x2f29274],EDX ; 00513474 | g_CustomKeyPointers
    MOV EDX,EAX                         ; 0051347b
    SHL EAX,0x2                         ; 0051347d
    ADD EAX,EDX                         ; 00513480
    MOV EDI,0x2f292f0                   ; 00513482 | g_CustomKeyNames
    SHL EAX,0x3                         ; 00513487
    MOV ESI,dword ptr [ESP + 0x10]      ; 0051348a
    ADD EDI,EAX                         ; 0051348e
    PUSH EDI                            ; 00513490
    MOV AL,byte ptr [ESI]               ; 00513491
        ;   Label: LAB_00513491
    MOV byte ptr [EDI],AL               ; 00513493 | g_CustomKeyNames | g_CustomKeyNames[0][2]
    CMP AL,0x0                          ; 00513495
    JZ 0x005134a9                       ; 00513497
        ;   XREF to: 005134a9 (CONDITIONAL_JUMP)  ; LAB_005134a9
    MOV AL,byte ptr [ESI + 0x1]         ; 00513499
    ADD ESI,0x2                         ; 0051349c
    MOV byte ptr [EDI + 0x1],AL         ; 0051349f | g_CustomKeyNames[0][1] | g_CustomKeyNames[0][3]
    ADD EDI,0x2                         ; 005134a2
    CMP AL,0x0                          ; 005134a5
    JNZ 0x00513491                      ; 005134a7
        ;   XREF to: 00513491 (CONDITIONAL_JUMP)  ; LAB_00513491
    POP EDI                             ; 005134a9
        ;   Label: LAB_005134a9
    INC dword ptr [0x02f29270]          ; 005134aa | g_CustomKeyCount
    POP EDI                             ; 005134b0
    POP ESI                             ; 005134b1
    RET                                 ; 005134b2
    PUSH EBX                            ; 005134b3
        ;   Label: LAB_005134b3
    MOV ECX,0x636e40                    ; 005134b4 | = "..\\core\\menu.cpp"
    MOV EBX,0x82b                       ; 005134b9
    PUSH 0x636e51                       ; 005134be | = "Too many custom keys!"
    MOV dword ptr [0x02f0ca48],ECX      ; 005134c3 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 005134c9 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005134cf
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005134d4
    POP EBX                             ; 005134d7
    JMP 0x0051346b                      ; 005134d8
        ;   XREF to: 0051346b (UNCONDITIONAL_JUMP)  ; LAB_0051346b


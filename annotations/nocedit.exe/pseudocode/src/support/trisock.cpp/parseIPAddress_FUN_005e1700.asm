; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl uint support_trisock.cpp_parseIPAddress_FUN_005e1700(uint * result_ptr, char * dotted_decimal_string)
;
; Parameters:
; uint *           Stack[0x4]:4   result_ptr
; char *           Stack[0x8]:4   dotted_decimal_string
;
; XREF[1]:
;   core_game.cpp_FUN_004e2fc0 at 004e3006
;
; Referenced Globals:
;   TerminatedCString s_support_trisock_cpp_0065646a
;   TerminatedCString s_Invalid_dotted_decimal_s_00656481
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   support_trisock.cpp_parseIPComponents_FUN_005e1800
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e1700
        ;   Label: support_trisock.cpp_parseIPAddress_FUN_005e1700
    MOV EBX,dword ptr [ESP + 0x8]       ; 005e1701
    MOV EDX,dword ptr [ESP + 0xc]       ; 005e1705
    PUSH EDX                            ; 005e1709
    PUSH EBX                            ; 005e170a
    CALL support_trisock.cpp_parseIPComponents_FUN_005e1800 ; 005e170b | int support_trisock.cpp_parseIPComponents_FUN_005e1800(uint * result_ptr, char * dotted_decimal_string)
        ;   XREF to: 005e1800 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e1710
    TEST EAX,EAX                        ; 005e1713
    JZ 0x005e171b                       ; 005e1715 | LAB_005e171b
        ;   XREF to: 005e171b (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 005e1717
    POP EBX                             ; 005e1719
    RET                                 ; 005e171a
    PUSH EDI                            ; 005e171b
        ;   Label: LAB_005e171b
    PUSH ESI                            ; 005e171c
    MOV EDI,dword ptr [ESP + 0x14]      ; 005e171d
    PUSH EDI                            ; 005e1721
    MOV ECX,0x65646a                    ; 005e1722 | = "..\\support\\trisock.cpp" | s_support_trisock_cpp_0065646a = ..\support\trisock.cpp
    MOV ESI,0x36                        ; 005e1727
    PUSH 0x656481                       ; 005e172c | = "Invalid dotted decimal string: %s" | s_Invalid_dotted_decimal_s_00656481 = Invalid dotted decimal string: %s
    MOV dword ptr [0x02f0ca48],ECX      ; 005e1731 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 005e1737 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005e173d | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e1742
    POP ESI                             ; 005e1745
    POP EDI                             ; 005e1746
    MOV EAX,EBX                         ; 005e1747
    POP EBX                             ; 005e1749
    RET                                 ; 005e174a


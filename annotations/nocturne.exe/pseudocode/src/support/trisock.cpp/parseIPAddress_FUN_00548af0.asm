; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint * __cdecl support_trisock_cpp_parseIPAddress_FUN_00548af0(uint *result_ptr,char *dotted_decimal_string)
;
; Parameters:
; uint *           Stack[0x4]:4   result_ptr
; char *           Stack[0x8]:4   dotted_decimal_string
;
; XREF[1]:
;   core_game.cpp_joinNetworkGame_FUN_004a5e40 at 004a5e86
;
; Referenced Globals:
;   TerminatedCString s_support_trisock_cpp_00596b9f
;   TerminatedCString s_Invalid_dotted_decimal_s_00596bb6
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   support_trisock.cpp_parseIPComponents_FUN_00548bf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548af0
        ;   Label: support_trisock.cpp_parseIPAddress_FUN_00548af0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00548af1
    MOV EDX,dword ptr [ESP + 0xc]       ; 00548af5
    PUSH EDX                            ; 00548af9
    PUSH EBX                            ; 00548afa
    CALL support_trisock.cpp_parseIPComponents_FUN_00548bf0 ; 00548afb
        ;   XREF to: 00548bf0 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_parseIPComponents_FUN_00548bf0(uint * result_ptr, char * dotted_decimal_string)
    ADD ESP,0x8                         ; 00548b00
    TEST EAX,EAX                        ; 00548b03
    JZ 0x00548b0b                       ; 00548b05
        ;   XREF to: 00548b0b (CONDITIONAL_JUMP)  ; LAB_00548b0b
    MOV EAX,EBX                         ; 00548b07
    POP EBX                             ; 00548b09
    RET                                 ; 00548b0a
    PUSH EDI                            ; 00548b0b
        ;   Label: LAB_00548b0b
    PUSH ESI                            ; 00548b0c
    MOV EDI,dword ptr [ESP + 0x14]      ; 00548b0d
    PUSH EDI                            ; 00548b11
    MOV ECX,0x596b9f                    ; 00548b12 | = "..\\support\\trisock.cpp"
    MOV ESI,0x36                        ; 00548b17
    PUSH 0x596bb6                       ; 00548b1c | = "Invalid dotted decimal string: %s"
    MOV dword ptr [0x01cc4800],ECX      ; 00548b21 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ESI      ; 00548b27 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00548b2d
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x8                         ; 00548b32
    POP ESI                             ; 00548b35
    POP EDI                             ; 00548b36
    MOV EAX,EBX                         ; 00548b37
    POP EBX                             ; 00548b39
    RET                                 ; 00548b3a


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0(CCloth * this_ptr)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_stranger.cpp_CStranger_FUN_005c6220 at 005c6442
;
; Referenced Globals:
;   TerminatedCString s_core_cloth_cpp_00618ad4
;   TerminatedCString s_CCloth_grabCloth_Can_t_f_00618ae6
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_string.c_strcmp_FUN_005fef20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043e0d0
        ;   Label: core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0
    PUSH ESI                            ; 0043e0d1
    PUSH EDI                            ; 0043e0d2
    PUSH EBP                            ; 0043e0d3
    MOV EDI,dword ptr [ESP + 0x14]      ; 0043e0d4
    MOV EBP,dword ptr [ESP + 0x18]      ; 0043e0d8
    MOV EDX,dword ptr [EDI + 0x3ce8c]   ; 0043e0dc
    XOR EBX,EBX                         ; 0043e0e2
    TEST EDX,EDX                        ; 0043e0e4
    JLE 0x0043e0fc                      ; 0043e0e6 | LAB_0043e0fc
        ;   XREF to: 0043e0fc (CONDITIONAL_JUMP)
    LEA ESI,[EDI + 0x3ce90]             ; 0043e0e8
    PUSH ESI                            ; 0043e0ee
        ;   Label: LAB_0043e0ee
    PUSH EBP                            ; 0043e0ef
    CALL crt_string.c_strcmp_FUN_005fef20 ; 0043e0f0 | int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0043e0f5
    TEST EAX,EAX                        ; 0043e0f8
    JNZ 0x0043e12d                      ; 0043e0fa | LAB_0043e12d
        ;   XREF to: 0043e12d (CONDITIONAL_JUMP)
    CMP EBX,dword ptr [EDI + 0x3ce8c]   ; 0043e0fc
        ;   Label: LAB_0043e0fc
    JZ 0x0043e140                       ; 0043e102 | LAB_0043e140
        ;   XREF to: 0043e140 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0043e104
        ;   Label: LAB_0043e104
    LEA EAX,[ESI*0x8 + 0x0]             ; 0043e108
    ADD EAX,ESI                         ; 0043e10f
    SHL EAX,0x3                         ; 0043e111
    SUB EAX,ESI                         ; 0043e114
    MOV dword ptr [EDI + EAX*0x4 + 0x574c],0x1 ; 0043e116
    MOV dword ptr [EDI + EAX*0x4 + 0x57b0],EBX ; 0043e121
    POP EBP                             ; 0043e128
    POP EDI                             ; 0043e129
    POP ESI                             ; 0043e12a
    POP EBX                             ; 0043e12b
    RET                                 ; 0043e12c
    INC EBX                             ; 0043e12d
        ;   Label: LAB_0043e12d
    MOV ECX,dword ptr [EDI + 0x3ce8c]   ; 0043e12e
    ADD ESI,0xac                        ; 0043e134
    CMP EBX,ECX                         ; 0043e13a
    JL 0x0043e0ee                       ; 0043e13c | LAB_0043e0ee
        ;   XREF to: 0043e0ee (CONDITIONAL_JUMP)
    JMP 0x0043e0fc                      ; 0043e13e | LAB_0043e0fc
        ;   XREF to: 0043e0fc (UNCONDITIONAL_JUMP)
    PUSH EBP                            ; 0043e140
        ;   Label: LAB_0043e140
    MOV EAX,0x618ad4                    ; 0043e141 | = "..\\core\\cloth.cpp" | s_core_cloth_cpp_00618ad4 = ..\core\cloth.cpp
    MOV EDX,0xaa7                       ; 0043e146
    PUSH 0x618ae6                       ; 0043e14b | = "CCloth::grabCloth - Can't find bone %s" | s_CCloth_grabCloth_Can_t_f_00618ae6 = CCloth::grabCloth - Can't find bone %s
    MOV [0x02f0ca48],EAX                ; 0043e150 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 0043e155 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0043e15b | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0043e160
    JMP 0x0043e104                      ; 0043e163 | LAB_0043e104
        ;   XREF to: 0043e104 (UNCONDITIONAL_JUMP)


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_edittool.cpp_CEdCheck_handleInput_FUN_004a6d20(CEdCheck * this_ptr)
;
; Parameters:
; CEdCheck *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 at 0053990a
;
; Referenced Globals:
;   CEdButton* g_ActiveButton
;   int g_MouseX
;   int g_MouseY
;   int g_MouseButtonFlags
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a6d20
        ;   Label: shape_edittool.cpp_CEdCheck_handleInput_FUN_004a6d20
    MOV ECX,dword ptr [0x02cf2b00]      ; 004a6d21 | CEdButton * g_ActiveButton
    MOV EAX,dword ptr [ESP + 0x8]       ; 004a6d27
    CMP dword ptr [EAX + 0x8],0x0       ; 004a6d2b
    JZ 0x004a6d84                       ; 004a6d2f | LAB_004a6d84
        ;   XREF to: 004a6d84 (CONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 004a6d31
        ;   Label: LAB_004a6d31
    CMP ECX,EAX                         ; 004a6d33
        ;   Label: LAB_004a6d33
    JNZ 0x004a6de6                      ; 004a6d35 | LAB_004a6de6
        ;   XREF to: 004a6de6 (CONDITIONAL_JUMP)
    MOV BH,byte ptr [0x02cf6a94]        ; 004a6d3b | int g_MouseButtonFlags
    MOV dword ptr [EAX + 0x20],EDX      ; 004a6d41
    TEST BH,0x1                         ; 004a6d44
    JNZ 0x004a6ddc                      ; 004a6d47 | LAB_004a6ddc
        ;   XREF to: 004a6ddc (CONDITIONAL_JUMP)
    XOR ECX,EAX                         ; 004a6d4d
    TEST EDX,EDX                        ; 004a6d4f
    JZ 0x004a6ddc                       ; 004a6d51 | LAB_004a6ddc
        ;   XREF to: 004a6ddc (CONDITIONAL_JUMP)
    PUSH EDI                            ; 004a6d57
    MOV EBX,dword ptr [EAX]             ; 004a6d58
    MOV dword ptr [EAX + 0x20],0x0      ; 004a6d5a
    CMP EBX,0x1                         ; 004a6d61
    JZ 0x004a6dba                       ; 004a6d64 | LAB_004a6dba
        ;   XREF to: 004a6dba (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x4],0x0       ; 004a6d66
    SETZ DL                             ; 004a6d6a
    AND EDX,0xff                        ; 004a6d6d
    MOV dword ptr [EAX + 0x4],EDX       ; 004a6d73
    MOV EAX,0x1                         ; 004a6d76
        ;   Label: LAB_004a6d76
    POP EDI                             ; 004a6d7b
    MOV dword ptr [0x02cf2b00],ECX      ; 004a6d7c | CEdButton * g_ActiveButton
    POP EBX                             ; 004a6d82
    RET                                 ; 004a6d83
    MOV EDX,dword ptr [0x02cf6a8c]      ; 004a6d84 | int g_MouseX
        ;   Label: LAB_004a6d84
    CMP EDX,dword ptr [EAX + 0x10]      ; 004a6d8a
    JL 0x004a6d31                       ; 004a6d8d | LAB_004a6d31
        ;   XREF to: 004a6d31 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x02cf6a90]      ; 004a6d8f | int g_MouseY
    CMP EDX,dword ptr [EAX + 0x14]      ; 004a6d95
    JL 0x004a6d31                       ; 004a6d98 | LAB_004a6d31
        ;   XREF to: 004a6d31 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x02cf6a8c]      ; 004a6d9a | int g_MouseX
    CMP EDX,dword ptr [EAX + 0x18]      ; 004a6da0
    JGE 0x004a6d31                      ; 004a6da3 | LAB_004a6d31
        ;   XREF to: 004a6d31 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x02cf6a90]      ; 004a6da5 | int g_MouseY
    CMP EDX,dword ptr [EAX + 0x1c]      ; 004a6dab
    JGE 0x004a6d31                      ; 004a6dae | LAB_004a6d31
        ;   XREF to: 004a6d31 (CONDITIONAL_JUMP)
    MOV EDX,0x1                         ; 004a6db0
    JMP 0x004a6d33                      ; 004a6db5 | LAB_004a6d33
        ;   XREF to: 004a6d33 (UNCONDITIONAL_JUMP)
    MOV EDI,dword ptr [EAX + 0x4]       ; 004a6dba
        ;   Label: LAB_004a6dba
    ADD EDI,EBX                         ; 004a6dbd
    MOV dword ptr [EAX + 0x4],EDI       ; 004a6dbf
    CMP EDI,0x2                         ; 004a6dc2
    JLE 0x004a6d76                      ; 004a6dc5 | LAB_004a6d76
        ;   XREF to: 004a6d76 (CONDITIONAL_JUMP)
    MOV dword ptr [EAX + 0x4],0x0       ; 004a6dc7
    MOV EAX,0x1                         ; 004a6dce
    POP EDI                             ; 004a6dd3
    MOV dword ptr [0x02cf2b00],ECX      ; 004a6dd4 | CEdButton * g_ActiveButton
    POP EBX                             ; 004a6dda
    RET                                 ; 004a6ddb
    XOR EAX,EAX                         ; 004a6ddc
        ;   Label: LAB_004a6ddc
    MOV dword ptr [0x02cf2b00],ECX      ; 004a6dde | CEdButton * g_ActiveButton
    POP EBX                             ; 004a6de4
    RET                                 ; 004a6de5
    TEST ECX,ECX                        ; 004a6de6
        ;   Label: LAB_004a6de6
    JNZ 0x004a6df7                      ; 004a6de8 | LAB_004a6df7
        ;   XREF to: 004a6df7 (CONDITIONAL_JUMP)
    TEST byte ptr [0x02cf6a94],0x1      ; 004a6dea | int g_MouseButtonFlags
    JZ 0x004a6df7                       ; 004a6df1 | LAB_004a6df7
        ;   XREF to: 004a6df7 (CONDITIONAL_JUMP)
    TEST EDX,EDX                        ; 004a6df3
    JNZ 0x004a6e01                      ; 004a6df5 | LAB_004a6e01
        ;   XREF to: 004a6e01 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 004a6df7
        ;   Label: LAB_004a6df7
    MOV dword ptr [0x02cf2b00],ECX      ; 004a6df9 | CEdButton * g_ActiveButton
    POP EBX                             ; 004a6dff
    RET                                 ; 004a6e00
    MOV ECX,EAX                         ; 004a6e01
        ;   Label: LAB_004a6e01
    MOV dword ptr [EAX + 0x20],0x1      ; 004a6e03
    XOR EAX,EAX                         ; 004a6e0a
    MOV dword ptr [0x02cf2b00],ECX      ; 004a6e0c | CEdButton * g_ActiveButton
    POP EBX                             ; 004a6e12
    RET                                 ; 004a6e13


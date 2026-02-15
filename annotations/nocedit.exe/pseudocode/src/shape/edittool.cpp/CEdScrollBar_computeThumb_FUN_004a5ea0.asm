; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_004a5ea0(CEdScrollBar *this_ptr)
;
; Parameters:
; CEdScrollBar *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0 at 004a608d
;   shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10 at 004a5c1d
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_00623f5a
;   TerminatedCString s_CEdScrollBar_computeThum_00623f70
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a5ea0
        ;   Label: shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_004a5ea0
    PUSH ESI                            ; 004a5ea1
    PUSH EDI                            ; 004a5ea2
    PUSH EBP                            ; 004a5ea3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004a5ea4
    MOV EDX,dword ptr [EBX + 0x4]       ; 004a5ea8
    CMP EDX,dword ptr [EBX + 0x8]       ; 004a5eab
    JLE 0x004a5f59                      ; 004a5eae
        ;   XREF to: 004a5f59 (CONDITIONAL_JUMP)  ; LAB_004a5f59
    CMP EDX,0x1                         ; 004a5eb4
    JL 0x004a5f59                       ; 004a5eb7
        ;   XREF to: 004a5f59 (CONDITIONAL_JUMP)  ; LAB_004a5f59
    MOV EDI,dword ptr [EBX + 0x24]      ; 004a5ebd
    MOV ESI,dword ptr [EBX + 0x28]      ; 004a5ec0
    SUB ESI,EDI                         ; 004a5ec3
    CMP ESI,0x1                         ; 004a5ec5
    JL 0x004a5f6a                       ; 004a5ec8
        ;   XREF to: 004a5f6a (CONDITIONAL_JUMP)  ; LAB_004a5f6a
    MOV EDX,dword ptr [EBX + 0x8]       ; 004a5ece
        ;   Label: LAB_004a5ece
    IMUL EDX,ESI                        ; 004a5ed1
    MOV ECX,dword ptr [EBX + 0x4]       ; 004a5ed4
    MOV EAX,EDX                         ; 004a5ed7
    SAR EDX,0x1f                        ; 004a5ed9
    IDIV ECX                            ; 004a5edc
    MOV EDI,dword ptr [EBX + 0x10]      ; 004a5ede
    MOV ECX,EAX                         ; 004a5ee1
    TEST EDI,EDI                        ; 004a5ee3
    JZ 0x004a5f91                       ; 004a5ee5
        ;   XREF to: 004a5f91 (CONDITIONAL_JUMP)  ; LAB_004a5f91
    MOV EAX,dword ptr [EBX + 0x18]      ; 004a5eeb
    MOV EDX,dword ptr [EBX + 0x20]      ; 004a5eee
    SUB EDX,EAX                         ; 004a5ef1
    CMP ECX,EDX                         ; 004a5ef3
    JGE 0x004a5ef9                      ; 004a5ef5
        ;   XREF to: 004a5ef9 (CONDITIONAL_JUMP)  ; LAB_004a5ef9
        ;   Label: LAB_004a5ef5
    MOV ECX,EDX                         ; 004a5ef7
    CMP ECX,ESI                         ; 004a5ef9
        ;   Label: LAB_004a5ef9
    JLE 0x004a5eff                      ; 004a5efb
        ;   XREF to: 004a5eff (CONDITIONAL_JUMP)  ; LAB_004a5eff
    MOV ECX,ESI                         ; 004a5efd
    MOV EDI,dword ptr [EBX + 0x8]       ; 004a5eff
        ;   Label: LAB_004a5eff
    MOV EDX,dword ptr [EBX + 0x4]       ; 004a5f02
    SUB EDX,EDI                         ; 004a5f05
    MOV EDI,EDX                         ; 004a5f07
    MOV EDX,ESI                         ; 004a5f09
    MOV EBP,dword ptr [EBX]             ; 004a5f0b
    SUB EDX,ECX                         ; 004a5f0d
    IMUL EDX,EBP                        ; 004a5f0f
    MOV EAX,EDX                         ; 004a5f12
    SAR EDX,0x1f                        ; 004a5f14
    IDIV EDI                            ; 004a5f17
    MOV EDX,dword ptr [EBX + 0x24]      ; 004a5f19
    ADD EDX,EAX                         ; 004a5f1c
    MOV dword ptr [EBX + 0x2c],EDX      ; 004a5f1e
    MOV EAX,EDX                         ; 004a5f21
    MOV EDX,dword ptr [EBX + 0x24]      ; 004a5f23
    CMP EAX,EDX                         ; 004a5f26
    JGE 0x004a5f2d                      ; 004a5f28
        ;   XREF to: 004a5f2d (CONDITIONAL_JUMP)  ; LAB_004a5f2d
    MOV dword ptr [EBX + 0x2c],EDX      ; 004a5f2a
    MOV EDX,dword ptr [EBX + 0x2c]      ; 004a5f2d
        ;   Label: LAB_004a5f2d
    ADD EDX,ECX                         ; 004a5f30
    MOV ECX,dword ptr [EBX + 0x28]      ; 004a5f32
    MOV dword ptr [EBX + 0x30],EDX      ; 004a5f35
    CMP EDX,ECX                         ; 004a5f38
    JLE 0x004a5f4c                      ; 004a5f3a
        ;   XREF to: 004a5f4c (CONDITIONAL_JUMP)  ; LAB_004a5f4c
    MOV EDI,dword ptr [EBX + 0x2c]      ; 004a5f3c
    SUB EDX,ECX                         ; 004a5f3f
    MOV EAX,dword ptr [EBX + 0x28]      ; 004a5f41
    SUB EDI,EDX                         ; 004a5f44
    MOV dword ptr [EBX + 0x30],EAX      ; 004a5f46
    MOV dword ptr [EBX + 0x2c],EDI      ; 004a5f49
    MOV EBP,dword ptr [EBX + 0x24]      ; 004a5f4c
        ;   Label: LAB_004a5f4c
    CMP EBP,dword ptr [EBX + 0x2c]      ; 004a5f4f
    JG 0x004a5fa0                       ; 004a5f52
        ;   XREF to: 004a5fa0 (CONDITIONAL_JUMP)  ; LAB_004a5fa0
    POP EBP                             ; 004a5f54
    POP EDI                             ; 004a5f55
    POP ESI                             ; 004a5f56
    POP EBX                             ; 004a5f57
    RET                                 ; 004a5f58
    MOV EAX,dword ptr [EBX + 0x24]      ; 004a5f59
        ;   Label: LAB_004a5f59
    MOV dword ptr [EBX + 0x2c],EAX      ; 004a5f5c
    MOV EAX,dword ptr [EBX + 0x28]      ; 004a5f5f
    MOV dword ptr [EBX + 0x30],EAX      ; 004a5f62
    POP EBP                             ; 004a5f65
    POP EDI                             ; 004a5f66
    POP ESI                             ; 004a5f67
    POP EBX                             ; 004a5f68
    RET                                 ; 004a5f69
    MOV EBP,0x623f5a                    ; 004a5f6a | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_004a5f6a
    MOV EAX,0x115a                      ; 004a5f6f
    PUSH 0x623f70                       ; 004a5f74 | = "CEdScrollBar::computeThumb - invalid ..."
    MOV dword ptr [0x02f0ca48],EBP      ; 004a5f79 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 004a5f7f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a5f84
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004a5f89
    JMP 0x004a5ece                      ; 004a5f8c
        ;   XREF to: 004a5ece (UNCONDITIONAL_JUMP)  ; LAB_004a5ece
    MOV EBP,dword ptr [EBX + 0x14]      ; 004a5f91
        ;   Label: LAB_004a5f91
    MOV EDX,dword ptr [EBX + 0x1c]      ; 004a5f94
    SUB EDX,EBP                         ; 004a5f97
    CMP EAX,EDX                         ; 004a5f99
    JMP 0x004a5ef5                      ; 004a5f9b
        ;   XREF to: 004a5ef5 (UNCONDITIONAL_JUMP)  ; LAB_004a5ef5
    MOV dword ptr [EBX + 0x2c],EBP      ; 004a5fa0
        ;   Label: LAB_004a5fa0
    POP EBP                             ; 004a5fa3
    POP EDI                             ; 004a5fa4
    POP ESI                             ; 004a5fa5
    POP EBX                             ; 004a5fa6
    RET                                 ; 004a5fa7


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049ce40(int *param_1)
;
;
; XREF[2]:
;   FUN_0049caa0 at 0049caad
;   FUN_0049cf60 at 0049cf72
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005dc857
;   TerminatedCString s_CEdScrollBar_computeThum_005dc86d
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049ce40
        ;   Label: FUN_0049ce40
    PUSH ESI                            ; 0049ce41
    PUSH EDI                            ; 0049ce42
    PUSH EBP                            ; 0049ce43
    MOV EBX,dword ptr [ESP + 0x14]      ; 0049ce44
    MOV EDX,dword ptr [EBX + 0x4]       ; 0049ce48
    CMP EDX,dword ptr [EBX + 0x8]       ; 0049ce4b
    JLE 0x0049cef9                      ; 0049ce4e
        ;   XREF to: 0049cef9 (CONDITIONAL_JUMP)  ; LAB_0049cef9
    CMP EDX,0x1                         ; 0049ce54
    JL 0x0049cef9                       ; 0049ce57
        ;   XREF to: 0049cef9 (CONDITIONAL_JUMP)  ; LAB_0049cef9
    MOV EDI,dword ptr [EBX + 0x24]      ; 0049ce5d
    MOV ESI,dword ptr [EBX + 0x28]      ; 0049ce60
    SUB ESI,EDI                         ; 0049ce63
    CMP ESI,0x1                         ; 0049ce65
    JL 0x0049cf0a                       ; 0049ce68
        ;   XREF to: 0049cf0a (CONDITIONAL_JUMP)  ; LAB_0049cf0a
    MOV EDX,dword ptr [EBX + 0x8]       ; 0049ce6e
        ;   Label: LAB_0049ce6e
    IMUL EDX,ESI                        ; 0049ce71
    MOV ECX,dword ptr [EBX + 0x4]       ; 0049ce74
    MOV EAX,EDX                         ; 0049ce77
    SAR EDX,0x1f                        ; 0049ce79
    IDIV ECX                            ; 0049ce7c
    MOV EDI,dword ptr [EBX + 0x10]      ; 0049ce7e
    MOV ECX,EAX                         ; 0049ce81
    TEST EDI,EDI                        ; 0049ce83
    JZ 0x0049cf31                       ; 0049ce85
        ;   XREF to: 0049cf31 (CONDITIONAL_JUMP)  ; LAB_0049cf31
    MOV EAX,dword ptr [EBX + 0x18]      ; 0049ce8b
    MOV EDX,dword ptr [EBX + 0x20]      ; 0049ce8e
    SUB EDX,EAX                         ; 0049ce91
    CMP ECX,EDX                         ; 0049ce93
    JGE 0x0049ce99                      ; 0049ce95
        ;   XREF to: 0049ce99 (CONDITIONAL_JUMP)  ; LAB_0049ce99
        ;   Label: LAB_0049ce95
    MOV ECX,EDX                         ; 0049ce97
    CMP ECX,ESI                         ; 0049ce99
        ;   Label: LAB_0049ce99
    JLE 0x0049ce9f                      ; 0049ce9b
        ;   XREF to: 0049ce9f (CONDITIONAL_JUMP)  ; LAB_0049ce9f
    MOV ECX,ESI                         ; 0049ce9d
    MOV EDI,dword ptr [EBX + 0x8]       ; 0049ce9f
        ;   Label: LAB_0049ce9f
    MOV EDX,dword ptr [EBX + 0x4]       ; 0049cea2
    SUB EDX,EDI                         ; 0049cea5
    MOV EDI,EDX                         ; 0049cea7
    MOV EDX,ESI                         ; 0049cea9
    MOV EBP,dword ptr [EBX]             ; 0049ceab
    SUB EDX,ECX                         ; 0049cead
    IMUL EDX,EBP                        ; 0049ceaf
    MOV EAX,EDX                         ; 0049ceb2
    SAR EDX,0x1f                        ; 0049ceb4
    IDIV EDI                            ; 0049ceb7
    MOV EDX,dword ptr [EBX + 0x24]      ; 0049ceb9
    ADD EDX,EAX                         ; 0049cebc
    MOV dword ptr [EBX + 0x2c],EDX      ; 0049cebe
    MOV EAX,EDX                         ; 0049cec1
    MOV EDX,dword ptr [EBX + 0x24]      ; 0049cec3
    CMP EAX,EDX                         ; 0049cec6
    JGE 0x0049cecd                      ; 0049cec8
        ;   XREF to: 0049cecd (CONDITIONAL_JUMP)  ; LAB_0049cecd
    MOV dword ptr [EBX + 0x2c],EDX      ; 0049ceca
    MOV EDX,dword ptr [EBX + 0x2c]      ; 0049cecd
        ;   Label: LAB_0049cecd
    ADD EDX,ECX                         ; 0049ced0
    MOV ECX,dword ptr [EBX + 0x28]      ; 0049ced2
    MOV dword ptr [EBX + 0x30],EDX      ; 0049ced5
    CMP EDX,ECX                         ; 0049ced8
    JLE 0x0049ceec                      ; 0049ceda
        ;   XREF to: 0049ceec (CONDITIONAL_JUMP)  ; LAB_0049ceec
    MOV EDI,dword ptr [EBX + 0x2c]      ; 0049cedc
    SUB EDX,ECX                         ; 0049cedf
    MOV EAX,dword ptr [EBX + 0x28]      ; 0049cee1
    SUB EDI,EDX                         ; 0049cee4
    MOV dword ptr [EBX + 0x30],EAX      ; 0049cee6
    MOV dword ptr [EBX + 0x2c],EDI      ; 0049cee9
    MOV EBP,dword ptr [EBX + 0x24]      ; 0049ceec
        ;   Label: LAB_0049ceec
    CMP EBP,dword ptr [EBX + 0x2c]      ; 0049ceef
    JG 0x0049cf40                       ; 0049cef2
        ;   XREF to: 0049cf40 (CONDITIONAL_JUMP)  ; LAB_0049cf40
    POP EBP                             ; 0049cef4
    POP EDI                             ; 0049cef5
    POP ESI                             ; 0049cef6
    POP EBX                             ; 0049cef7
    RET                                 ; 0049cef8
    MOV EAX,dword ptr [EBX + 0x24]      ; 0049cef9
        ;   Label: LAB_0049cef9
    MOV dword ptr [EBX + 0x2c],EAX      ; 0049cefc
    MOV EAX,dword ptr [EBX + 0x28]      ; 0049ceff
    MOV dword ptr [EBX + 0x30],EAX      ; 0049cf02
    POP EBP                             ; 0049cf05
    POP EDI                             ; 0049cf06
    POP ESI                             ; 0049cf07
    POP EBX                             ; 0049cf08
    RET                                 ; 0049cf09
    MOV EBP,0x5dc857                    ; 0049cf0a | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_0049cf0a
    MOV EAX,0x12cb                      ; 0049cf0f
    PUSH 0x5dc86d                       ; 0049cf14 | = "CEdScrollBar::computeThumb - invalid ..."
    MOV dword ptr [0x01d1d400],EBP      ; 0049cf19 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0049cf1f | DAT_01d1d404
    CALL FUN_005030e0                   ; 0049cf24
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0049cf29
    JMP 0x0049ce6e                      ; 0049cf2c
        ;   XREF to: 0049ce6e (UNCONDITIONAL_JUMP)  ; LAB_0049ce6e
    MOV EBP,dword ptr [EBX + 0x14]      ; 0049cf31
        ;   Label: LAB_0049cf31
    MOV EDX,dword ptr [EBX + 0x1c]      ; 0049cf34
    SUB EDX,EBP                         ; 0049cf37
    CMP EAX,EDX                         ; 0049cf39
    JMP 0x0049ce95                      ; 0049cf3b
        ;   XREF to: 0049ce95 (UNCONDITIONAL_JUMP)  ; LAB_0049ce95
    MOV dword ptr [EBX + 0x2c],EBP      ; 0049cf40
        ;   Label: LAB_0049cf40
    POP EBP                             ; 0049cf43
    POP EDI                             ; 0049cf44
    POP ESI                             ; 0049cf45
    POP EBX                             ; 0049cf46
    RET                                 ; 0049cf47


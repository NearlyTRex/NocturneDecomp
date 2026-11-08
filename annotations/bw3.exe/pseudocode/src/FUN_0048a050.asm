; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048a050(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_CEnemy_stopGrabbing_s_005bdcff
;   void* PTR_DAT_005f1690 = 007f7ea4
;   undefined4 DAT_0078a123
;   undefined4 DAT_007f7ea4
;
; Called Functions:
;   FUN_0042c230
;   FUN_00441ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048a050
        ;   Label: FUN_0048a050
    PUSH ESI                            ; 0048a051
    SUB ESP,0xc                         ; 0048a052
    MOV EBX,dword ptr [ESP + 0x18]      ; 0048a055
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 0048a059
    TEST EDX,EDX                        ; 0048a05f
    JNZ 0x0048a069                      ; 0048a061
        ;   XREF to: 0048a069 (CONDITIONAL_JUMP)  ; LAB_0048a069
    ADD ESP,0xc                         ; 0048a063
        ;   Label: LAB_0048a063
    POP ESI                             ; 0048a066
    POP EBX                             ; 0048a067
    RET                                 ; 0048a068
    PUSH EDX                            ; 0048a069
        ;   Label: LAB_0048a069
    PUSH 0x5bdcff                       ; 0048a06a | = "CEnemy::stopGrabbing %s\n"
    MOV ESI,dword ptr [0x005f1690]      ; 0048a06f | PTR_DAT_005f1690
    PUSH ESI                            ; 0048a075 | DAT_007f7ea4
    CALL FUN_00441ff0                   ; 0048a076
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ff0()
    ADD ESP,0xc                         ; 0048a07b
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 0048a07e
    PUSH EAX                            ; 0048a084
    MOV EDX,dword ptr [EAX + 0x154]     ; 0048a085
    CALL dword ptr [EDX + 0xf4]         ; 0048a08b
    ADD ESP,0x4                         ; 0048a091
    CMP EAX,EBX                         ; 0048a094
    JNZ 0x0048a063                      ; 0048a096
        ;   XREF to: 0048a063 (CONDITIONAL_JUMP)  ; LAB_0048a063
    PUSH EDI                            ; 0048a098
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 0048a099
    PUSH EAX                            ; 0048a09f
    MOV EDX,dword ptr [EAX + 0x154]     ; 0048a0a0
    CALL dword ptr [EDX + 0xf0]         ; 0048a0a6
    MOV EDI,dword ptr [EBX + 0x68]      ; 0048a0ac
    ADD ESP,0x4                         ; 0048a0af
    CMP EDI,0x78a123                    ; 0048a0b2 | DAT_0078a123
    JNZ 0x0048a0ea                      ; 0048a0b8
        ;   XREF to: 0048a0ea (CONDITIONAL_JUMP)  ; LAB_0048a0ea
    LEA EAX,[EBX + 0x158]               ; 0048a0ba
    CMP dword ptr [EAX + 0x23a0],0x0    ; 0048a0c0
    JZ 0x0048a0ea                       ; 0048a0c7
        ;   XREF to: 0048a0ea (CONDITIONAL_JUMP)  ; LAB_0048a0ea
    XOR EAX,EAX                         ; 0048a0c9
    MOV dword ptr [ESP + 0x4],EAX       ; 0048a0cb
    MOV dword ptr [ESP + 0x8],EAX       ; 0048a0cf
    LEA EAX,[ESP + 0x4]                 ; 0048a0d3
    PUSH EAX                            ; 0048a0d7
    MOV ECX,0xba83126f                  ; 0048a0d8
    PUSH EBX                            ; 0048a0dd
    MOV dword ptr [ESP + 0x14],ECX      ; 0048a0de
    CALL FUN_0042c230                   ; 0048a0e2
        ;   XREF to: 0042c230 (UNCONDITIONAL_CALL)  ; undefined FUN_0042c230()
    ADD ESP,0x8                         ; 0048a0e7
    MOV dword ptr [EBX + 0xcde4],0x0    ; 0048a0ea
        ;   Label: LAB_0048a0ea
    POP EDI                             ; 0048a0f4
    ADD ESP,0xc                         ; 0048a0f5
    POP ESI                             ; 0048a0f8
    POP EBX                             ; 0048a0f9
    RET                                 ; 0048a0fa


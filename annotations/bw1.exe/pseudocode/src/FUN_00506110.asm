; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00506110(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_pGemPos_005e75f6
;   TerminatedCString s_pGemOrient_005e75fe
;   TerminatedCString s_pEmitterPos_005e7609
;   TerminatedCString s_exists_005e7615
;   TerminatedCString s_r_005e761c
;   TerminatedCString s_g_005e761e
;   TerminatedCString s_b_005e7620
;   undefined4 DAT_0061f3a8
;
; Called Functions:
;   FUN_0040b1c0
;   FUN_0040b260
;   FUN_0040b670
;   FUN_0040c040
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00506110
        ;   Label: FUN_00506110
    PUSH EBP                            ; 00506111
    SUB ESP,0x4                         ; 00506112
    MOV ESI,dword ptr [ESP + 0x10]      ; 00506115
    PUSH ESI                            ; 00506119
    CALL FUN_0040c040                   ; 0050611a
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c040()
    MOV EDX,dword ptr [0x0061f3a8]      ; 0050611f | DAT_0061f3a8
    ADD ESP,0x4                         ; 00506125
    CMP EDX,0x2                         ; 00506128
    JGE 0x005061b2                      ; 0050612b
        ;   XREF to: 005061b2 (CONDITIONAL_JUMP)  ; LAB_005061b2
    CMP dword ptr [0x0061f3a8],0x3      ; 00506131 | DAT_0061f3a8
        ;   Label: LAB_00506131
    JL 0x005061ac                       ; 00506138
        ;   XREF to: 005061ac (CONDITIONAL_JUMP)  ; LAB_005061ac
    PUSH EDI                            ; 0050613a
    PUSH EBX                            ; 0050613b
    LEA EAX,[ESI + 0x5f0]               ; 0050613c
    LEA EBP,[ESI + 0x644]               ; 00506142
    XOR EBX,EBX                         ; 00506148
    LEA EDI,[ESI + 0x640]               ; 0050614a
    MOV dword ptr [ESP + 0x8],EAX       ; 00506150
    ADD ESI,0x63c                       ; 00506154
    IMUL EAX,EBX,0x64                   ; 0050615a
        ;   Label: LAB_0050615a
    MOV EDX,dword ptr [ESP + 0x8]       ; 0050615d
    PUSH 0x5e7615                       ; 00506161 | = "exists"
    ADD EAX,EDX                         ; 00506166
    PUSH EAX                            ; 00506168
    CALL FUN_0040b670                   ; 00506169
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 0050616e
    PUSH 0x5e761c                       ; 00506171 | = "r"
    PUSH ESI                            ; 00506176
    CALL FUN_0040b670                   ; 00506177
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 0050617c
    PUSH 0x5e761e                       ; 0050617f | = "g"
    PUSH EDI                            ; 00506184
    CALL FUN_0040b670                   ; 00506185
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 0050618a
    PUSH 0x5e7620                       ; 0050618d | = "b"
    INC EBX                             ; 00506192
    PUSH EBP                            ; 00506193
    ADD ESI,0x64                        ; 00506194
    ADD EDI,0x64                        ; 00506197
    CALL FUN_0040b670                   ; 0050619a
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 0050619f
    ADD EBP,0x64                        ; 005061a2
    CMP EBX,0xc                         ; 005061a5
    JL 0x0050615a                       ; 005061a8
        ;   XREF to: 0050615a (CONDITIONAL_JUMP)  ; LAB_0050615a
    POP EBX                             ; 005061aa
    POP EDI                             ; 005061ab
    ADD ESP,0x4                         ; 005061ac
        ;   Label: LAB_005061ac
    POP EBP                             ; 005061af
    POP ESI                             ; 005061b0
    RET                                 ; 005061b1
    PUSH 0x5e75f6                       ; 005061b2 | = "pGemPos"
        ;   Label: LAB_005061b2
    LEA EAX,[ESI + 0x5cc]               ; 005061b7
    PUSH EAX                            ; 005061bd
    CALL FUN_0040b1c0                   ; 005061be
        ;   XREF to: 0040b1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b1c0()
    ADD ESP,0x8                         ; 005061c3
    PUSH 0x5e75fe                       ; 005061c6 | = "pGemOrient"
    LEA EAX,[ESI + 0x5d8]               ; 005061cb
    PUSH EAX                            ; 005061d1
    CALL FUN_0040b260                   ; 005061d2
        ;   XREF to: 0040b260 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b260()
    ADD ESP,0x8                         ; 005061d7
    PUSH 0x5e7609                       ; 005061da | = "pEmitterPos"
    LEA EAX,[ESI + 0x5e4]               ; 005061df
    PUSH EAX                            ; 005061e5
    CALL FUN_0040b1c0                   ; 005061e6
        ;   XREF to: 0040b1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b1c0()
    ADD ESP,0x8                         ; 005061eb
    JMP 0x00506131                      ; 005061ee
        ;   XREF to: 00506131 (UNCONDITIONAL_JUMP)  ; LAB_00506131


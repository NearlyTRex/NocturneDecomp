; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00478b40(int param_1,int param_2,int param_3)
;
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x1c]:1  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004eb3e0 at 004eb54f
;
; Referenced Globals:
;   void* switchdataD_00478b2c = 00478b89
;   TerminatedCString s_The_door_is_locked_005da9d6
;   TerminatedCString s_core_door_cpp_005da9ea
;   TerminatedCString s_CDoor_getMoveType_invali_005da9fb
;   undefined4 DAT_0061d95c
;   undefined4 DAT_01ccf390
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_00408bb0
;   FUN_00478d10
;   FUN_004cc190
;   FUN_005030e0
;   FUN_00531090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00478b40
        ;   Label: FUN_00478b40
    PUSH ESI                            ; 00478b41
    PUSH EDI                            ; 00478b42
    PUSH EBP                            ; 00478b43
    MOV EBP,ESP                         ; 00478b44
    SUB ESP,0x18                        ; 00478b46
    AND ESP,0xfffffff8                  ; 00478b49
    MOV EBX,dword ptr [EBP + 0x14]      ; 00478b4c
    MOV EAX,dword ptr [EBP + 0x18]      ; 00478b4f
    ADD EAX,0x20                        ; 00478b52
    PUSH EAX                            ; 00478b55
    PUSH EBX                            ; 00478b56
    LEA ESI,[ESP + 0x8]                 ; 00478b57
    LEA EDI,[ESP + 0x14]                ; 00478b5b
    CALL FUN_00408bb0                   ; 00478b5f
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408bb0()
    ADD ESP,0x8                         ; 00478b64
    MOV ESI,ESP                         ; 00478b67
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00478b69
    MOVSD ES:EDI,ESI                    ; 00478b6c
    MOVSD ES:EDI,ESI                    ; 00478b6d
    MOVSD ES:EDI,ESI                    ; 00478b6e
    TEST EDX,EDX                        ; 00478b6f
    JZ 0x00478bc1                       ; 00478b71
        ;   XREF to: 00478bc1 (CONDITIONAL_JUMP)  ; LAB_00478bc1
    MOV EAX,dword ptr [EBX + 0x2d8]     ; 00478b73
        ;   Label: LAB_00478b73
    CMP EAX,0x3                         ; 00478b79
    JA 0x00478ce3                       ; 00478b7c
        ;   XREF to: 00478ce3 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x478b2c]  ; 00478b82 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    CMP dword ptr [EBX + 0x2e4],0x0     ; 00478b89
        ;   Label: caseD_0
    JNZ 0x00478c5d                      ; 00478b90
        ;   XREF to: 00478c5d (CONDITIONAL_JUMP)  ; LAB_00478c5d
    CMP dword ptr [EBX + 0x2e0],0x0     ; 00478b96
        ;   Label: LAB_00478b96
    JZ 0x00478ba4                       ; 00478b9d
        ;   XREF to: 00478ba4 (CONDITIONAL_JUMP)  ; LAB_00478ba4
    XOR byte ptr [ESP + 0x17],0x80      ; 00478b9f
    FLD float ptr [ESP + 0x14]          ; 00478ba4
        ;   Label: LAB_00478ba4
    FLDZ                                ; 00478ba8
    FCOMPP                              ; 00478baa
    FNSTSW AX                           ; 00478bac
    SAHF                                ; 00478bae
    JBE 0x00478c67                      ; 00478baf
        ;   XREF to: 00478c67 (CONDITIONAL_JUMP)  ; LAB_00478c67
    MOV EAX,0x3                         ; 00478bb5
    MOV ESP,EBP                         ; 00478bba
    POP EBP                             ; 00478bbc
    POP EDI                             ; 00478bbd
    POP ESI                             ; 00478bbe
    POP EBX                             ; 00478bbf
    RET                                 ; 00478bc0
    PUSH 0x5da9d6                       ; 00478bc1 | = "The door is locked."
        ;   Label: LAB_00478bc1
    CALL FUN_00531090                   ; 00478bc6
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 00478bcb
    MOV ESI,EAX                         ; 00478bce
    FLD float ptr [ESP + 0x14]          ; 00478bd0
    FLDZ                                ; 00478bd4
    FCOMPP                              ; 00478bd6
    FNSTSW AX                           ; 00478bd8
    SAHF                                ; 00478bda
    JNC 0x00478c17                      ; 00478bdb
        ;   XREF to: 00478c17 (CONDITIONAL_JUMP)  ; LAB_00478c17
    TEST byte ptr [EBX + 0x9d8],0x1     ; 00478bdd
    JNZ 0x00478b73                      ; 00478be4
        ;   XREF to: 00478b73 (CONDITIONAL_JUMP)  ; LAB_00478b73
    CMP dword ptr [EBX + 0x9d8],0x0     ; 00478be6
    JNZ 0x00478bf8                      ; 00478bed
        ;   XREF to: 00478bf8 (CONDITIONAL_JUMP)  ; LAB_00478bf8
    XOR EAX,EAX                         ; 00478bef
        ;   Label: LAB_00478bef
    MOV ESP,EBP                         ; 00478bf1
    POP EBP                             ; 00478bf3
    POP EDI                             ; 00478bf4
    POP ESI                             ; 00478bf5
    POP EBX                             ; 00478bf6
    RET                                 ; 00478bf7
    PUSH EBX                            ; 00478bf8
        ;   Label: LAB_00478bf8
    CALL FUN_00478d10                   ; 00478bf9
        ;   XREF to: 00478d10 (UNCONDITIONAL_CALL)  ; undefined FUN_00478d10()
    ADD ESP,0x4                         ; 00478bfe
    PUSH 0x40a00000                     ; 00478c01
    PUSH ESI                            ; 00478c06
    MOV EAX,[0x0061d95c]                ; 00478c07 | DAT_0061d95c
    PUSH EAX                            ; 00478c0c | DAT_01ccf390
    CALL FUN_004cc190                   ; 00478c0d
        ;   XREF to: 004cc190 (UNCONDITIONAL_CALL)  ; undefined FUN_004cc190()
    ADD ESP,0xc                         ; 00478c12
    JMP 0x00478bef                      ; 00478c15
        ;   XREF to: 00478bef (UNCONDITIONAL_JUMP)  ; LAB_00478bef
    TEST byte ptr [EBX + 0x9d8],0x2     ; 00478c17
        ;   Label: LAB_00478c17
    JNZ 0x00478b73                      ; 00478c1e
        ;   XREF to: 00478b73 (CONDITIONAL_JUMP)  ; LAB_00478b73
    CMP dword ptr [EBX + 0x9d8],0x0     ; 00478c24
    JNZ 0x00478c36                      ; 00478c2b
        ;   XREF to: 00478c36 (CONDITIONAL_JUMP)  ; LAB_00478c36
    XOR EAX,EAX                         ; 00478c2d
    MOV ESP,EBP                         ; 00478c2f
    POP EBP                             ; 00478c31
    POP EDI                             ; 00478c32
    POP ESI                             ; 00478c33
    POP EBX                             ; 00478c34
    RET                                 ; 00478c35
    PUSH EBX                            ; 00478c36
        ;   Label: LAB_00478c36
    CALL FUN_00478d10                   ; 00478c37
        ;   XREF to: 00478d10 (UNCONDITIONAL_CALL)  ; undefined FUN_00478d10()
    ADD ESP,0x4                         ; 00478c3c
    PUSH 0x40a00000                     ; 00478c3f
    PUSH ESI                            ; 00478c44
    MOV EBX,dword ptr [0x0061d95c]      ; 00478c45 | DAT_0061d95c
    PUSH EBX                            ; 00478c4b | DAT_01ccf390
    CALL FUN_004cc190                   ; 00478c4c
        ;   XREF to: 004cc190 (UNCONDITIONAL_CALL)  ; undefined FUN_004cc190()
    ADD ESP,0xc                         ; 00478c51
    XOR EAX,EAX                         ; 00478c54
    MOV ESP,EBP                         ; 00478c56
    POP EBP                             ; 00478c58
    POP EDI                             ; 00478c59
    POP ESI                             ; 00478c5a
    POP EBX                             ; 00478c5b
    RET                                 ; 00478c5c
    XOR byte ptr [ESP + 0x17],0x80      ; 00478c5d
        ;   Label: LAB_00478c5d
    JMP 0x00478b96                      ; 00478c62
        ;   XREF to: 00478b96 (UNCONDITIONAL_JUMP)  ; LAB_00478b96
    MOV EAX,0x2                         ; 00478c67
        ;   Label: LAB_00478c67
    MOV ESP,EBP                         ; 00478c6c
    POP EBP                             ; 00478c6e
    POP EDI                             ; 00478c6f
    POP ESI                             ; 00478c70
    POP EBX                             ; 00478c71
    RET                                 ; 00478c72
    CMP dword ptr [EBX + 0x2e0],0x0     ; 00478c73
        ;   Label: caseD_1
    JZ 0x00478c88                       ; 00478c7a
        ;   XREF to: 00478c88 (CONDITIONAL_JUMP)  ; LAB_00478c88
    MOV EAX,0x7                         ; 00478c7c
    MOV ESP,EBP                         ; 00478c81
    POP EBP                             ; 00478c83
    POP EDI                             ; 00478c84
    POP ESI                             ; 00478c85
    POP EBX                             ; 00478c86
    RET                                 ; 00478c87
    MOV EAX,0x6                         ; 00478c88
        ;   Label: LAB_00478c88
    MOV ESP,EBP                         ; 00478c8d
    POP EBP                             ; 00478c8f
    POP EDI                             ; 00478c90
    POP ESI                             ; 00478c91
    POP EBX                             ; 00478c92
    RET                                 ; 00478c93
    CMP dword ptr [EBX + 0x2dc],0x1     ; 00478c94
        ;   Label: caseD_2
    JNZ 0x00478cc4                      ; 00478c9b
        ;   XREF to: 00478cc4 (CONDITIONAL_JUMP)  ; LAB_00478cc4
    CMP dword ptr [EBX + 0x2e0],0x0     ; 00478c9d
        ;   Label: LAB_00478c9d
    JZ 0x00478cab                       ; 00478ca4
        ;   XREF to: 00478cab (CONDITIONAL_JUMP)  ; LAB_00478cab
    XOR byte ptr [ESP + 0x17],0x80      ; 00478ca6
    FLD float ptr [ESP + 0x14]          ; 00478cab
        ;   Label: LAB_00478cab
    FLDZ                                ; 00478caf
    FCOMPP                              ; 00478cb1
    FNSTSW AX                           ; 00478cb3
    SAHF                                ; 00478cb5
    JBE 0x00478ccb                      ; 00478cb6
        ;   XREF to: 00478ccb (CONDITIONAL_JUMP)  ; LAB_00478ccb
    MOV EAX,0x5                         ; 00478cb8
    MOV ESP,EBP                         ; 00478cbd
    POP EBP                             ; 00478cbf
    POP EDI                             ; 00478cc0
    POP ESI                             ; 00478cc1
    POP EBX                             ; 00478cc2
    RET                                 ; 00478cc3
    XOR byte ptr [ESP + 0x17],0x80      ; 00478cc4
        ;   Label: LAB_00478cc4
    JMP 0x00478c9d                      ; 00478cc9
        ;   XREF to: 00478c9d (UNCONDITIONAL_JUMP)  ; LAB_00478c9d
    MOV EAX,0x4                         ; 00478ccb
        ;   Label: LAB_00478ccb
    MOV ESP,EBP                         ; 00478cd0
    POP EBP                             ; 00478cd2
    POP EDI                             ; 00478cd3
    POP ESI                             ; 00478cd4
    POP EBX                             ; 00478cd5
    RET                                 ; 00478cd6
    MOV EAX,0x1                         ; 00478cd7
        ;   Label: caseD_3
    MOV ESP,EBP                         ; 00478cdc
    POP EBP                             ; 00478cde
    POP EDI                             ; 00478cdf
    POP ESI                             ; 00478ce0
    POP EBX                             ; 00478ce1
    RET                                 ; 00478ce2
    MOV EDX,0x5da9ea                    ; 00478ce3 | = "..\\core\\door.cpp"
        ;   Label: default
    MOV ECX,0x3de                       ; 00478ce8
    PUSH 0x5da9fb                       ; 00478ced | = "CDoor::getMoveType - invalid door!"
    MOV dword ptr [0x01d1d400],EDX      ; 00478cf2 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00478cf8 | DAT_01d1d404
    CALL FUN_005030e0                   ; 00478cfe
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00478d03
    XOR EAX,EAX                         ; 00478d06
    MOV ESP,EBP                         ; 00478d08
    POP EBP                             ; 00478d0a
    POP EDI                             ; 00478d0b
    POP ESI                             ; 00478d0c
    POP EBX                             ; 00478d0d
    RET                                 ; 00478d0e


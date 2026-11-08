; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a7890(char *param_1)
;
;
; XREF[2]:
;   FUN_004a8f30 at 004a9045
;   FUN_004aa810 at 004aaaeb
;
; Referenced Globals:
;   undefined4 DAT_006074b8
;
; Called Functions:
;   FUN_005a54c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a7890
        ;   Label: FUN_004a7890
    PUSH ESI                            ; 004a7891
    PUSH EDI                            ; 004a7892
    MOV ESI,dword ptr [ESP + 0x10]      ; 004a7893
    MOV EDI,ESI                         ; 004a7897
    SUB ECX,ECX                         ; 004a7899
    DEC ECX                             ; 004a789b
    XOR EAX,EAX                         ; 004a789c
    SCASB.REPNE ES:EDI                  ; 004a789e
    NOT ECX                             ; 004a78a0
    DEC ECX                             ; 004a78a2
    MOV EBX,ECX                         ; 004a78a3
    TEST ECX,ECX                        ; 004a78a5
    JLE 0x004a78c0                      ; 004a78a7
        ;   XREF to: 004a78c0 (CONDITIONAL_JUMP)  ; LAB_004a78c0
    LEA EAX,[ECX + ESI*0x1]             ; 004a78a9
    MOV DL,byte ptr [EAX + -0x1]        ; 004a78ac
        ;   Label: LAB_004a78ac
    INC DL                              ; 004a78af
    AND EDX,0xff                        ; 004a78b1
    TEST byte ptr [EDX + 0x6074b8],0x2  ; 004a78b7 | DAT_006074b8
    JNZ 0x004a78e9                      ; 004a78be
        ;   XREF to: 004a78e9 (CONDITIONAL_JUMP)  ; LAB_004a78e9
    LEA EAX,[ESI + EBX*0x1]             ; 004a78c0
        ;   Label: LAB_004a78c0
    LEA EDI,[ESI + 0x1]                 ; 004a78c3
    MOV byte ptr [EAX],0x0              ; 004a78c6
    MOV AL,byte ptr [ESI]               ; 004a78c9
        ;   Label: LAB_004a78c9
    INC AL                              ; 004a78cb
    AND EAX,0xff                        ; 004a78cd
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 004a78d2 | DAT_006074b8
    JZ 0x004a78f1                       ; 004a78d9
        ;   XREF to: 004a78f1 (CONDITIONAL_JUMP)  ; LAB_004a78f1
    PUSH EBX                            ; 004a78db
    PUSH EDI                            ; 004a78dc
    PUSH ESI                            ; 004a78dd
    DEC EBX                             ; 004a78de
    CALL FUN_005a54c0                   ; 004a78df
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a54c0()
    ADD ESP,0xc                         ; 004a78e4
    JMP 0x004a78c9                      ; 004a78e7
        ;   XREF to: 004a78c9 (UNCONDITIONAL_JUMP)  ; LAB_004a78c9
    DEC EBX                             ; 004a78e9
        ;   Label: LAB_004a78e9
    DEC EAX                             ; 004a78ea
    TEST EBX,EBX                        ; 004a78eb
    JG 0x004a78ac                       ; 004a78ed
        ;   XREF to: 004a78ac (CONDITIONAL_JUMP)  ; LAB_004a78ac
    JMP 0x004a78c0                      ; 004a78ef
        ;   XREF to: 004a78c0 (UNCONDITIONAL_JUMP)  ; LAB_004a78c0
    XOR EDX,EDX                         ; 004a78f1
        ;   Label: LAB_004a78f1
    TEST EBX,EBX                        ; 004a78f3
    JLE 0x004a790f                      ; 004a78f5
        ;   XREF to: 004a790f (CONDITIONAL_JUMP)  ; LAB_004a790f
    MOV EAX,ESI                         ; 004a78f7
    MOV CL,byte ptr [EAX]               ; 004a78f9
        ;   Label: LAB_004a78f9
    INC CL                              ; 004a78fb
    MOVZX ESI,CL                        ; 004a78fd
    TEST byte ptr [ESI + 0x6074b8],0x2  ; 004a7900 | DAT_006074b8
    JNZ 0x004a7913                      ; 004a7907
        ;   XREF to: 004a7913 (CONDITIONAL_JUMP)  ; LAB_004a7913
    INC EDX                             ; 004a7909
    INC EAX                             ; 004a790a
    CMP EDX,EBX                         ; 004a790b
    JL 0x004a78f9                       ; 004a790d
        ;   XREF to: 004a78f9 (CONDITIONAL_JUMP)  ; LAB_004a78f9
    POP EDI                             ; 004a790f
        ;   Label: LAB_004a790f
    POP ESI                             ; 004a7910
    POP EBX                             ; 004a7911
    RET                                 ; 004a7912
    MOV byte ptr [EAX],0x20             ; 004a7913
        ;   Label: LAB_004a7913
    INC EDX                             ; 004a7916
    INC EAX                             ; 004a7917
    CMP EDX,EBX                         ; 004a7918
    JL 0x004a78f9                       ; 004a791a
        ;   XREF to: 004a78f9 (CONDITIONAL_JUMP)  ; LAB_004a78f9
    POP EDI                             ; 004a791c
    POP ESI                             ; 004a791d
    POP EBX                             ; 004a791e
    RET                                 ; 004a791f


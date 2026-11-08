; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00480eb0(int *param_1,int param_2,char *param_3)
;
;
; XREF[1]:
;   FUN_00483c30 at 00483c42
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005d259f
;   TerminatedCString s_CStrList_insert_invalid_005d25b5
;   TerminatedCString s_shape_edittool_cpp_005d25d6
;   TerminatedCString s_CStrList_insert_out_of_m_005d25ec
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_00480fa0
;   FUN_004e4500
;   FUN_005b8580
;   FUN_005ba1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480eb0
        ;   Label: FUN_00480eb0
    PUSH ESI                            ; 00480eb1
    PUSH EDI                            ; 00480eb2
    PUSH EBP                            ; 00480eb3
    MOV EBX,dword ptr [ESP + 0x14]      ; 00480eb4
    MOV EBP,dword ptr [ESP + 0x18]      ; 00480eb8
    TEST EBP,EBP                        ; 00480ebc
    JL 0x00480ec4                       ; 00480ebe
        ;   XREF to: 00480ec4 (CONDITIONAL_JUMP)  ; LAB_00480ec4
    CMP EBP,dword ptr [EBX]             ; 00480ec0
    JLE 0x00480ee7                      ; 00480ec2
        ;   XREF to: 00480ee7 (CONDITIONAL_JUMP)  ; LAB_00480ee7
    MOV ECX,0x5d259f                    ; 00480ec4 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_00480ec4
    MOV ESI,0xbb2                       ; 00480ec9
    PUSH 0x5d25b5                       ; 00480ece | = "CStrList::insert - invalid index"
    MOV dword ptr [0x01d046a0],ECX      ; 00480ed3 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00480ed9 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00480edf
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00480ee4
    MOV EDI,dword ptr [EBX]             ; 00480ee7
        ;   Label: LAB_00480ee7
    INC EDI                             ; 00480ee9
    MOV EDX,dword ptr [EBX + 0x4]       ; 00480eea
    MOV dword ptr [EBX],EDI             ; 00480eed
    CMP EDI,EDX                         ; 00480eef
    JLE 0x00480f00                      ; 00480ef1
        ;   XREF to: 00480f00 (CONDITIONAL_JUMP)  ; LAB_00480f00
    LEA EAX,[EDI + 0x14]                ; 00480ef3
    PUSH EAX                            ; 00480ef6
    PUSH EBX                            ; 00480ef7
    CALL FUN_00480fa0                   ; 00480ef8
        ;   XREF to: 00480fa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00480fa0()
    ADD ESP,0x8                         ; 00480efd
    MOV EAX,dword ptr [EBX]             ; 00480f00
        ;   Label: LAB_00480f00
    SUB EAX,EBP                         ; 00480f02
    SHL EAX,0x2                         ; 00480f04
    SUB EAX,0x4                         ; 00480f07
    LEA ESI,[EBP*0x4 + 0x0]             ; 00480f0a
    PUSH EAX                            ; 00480f11
    MOV EAX,dword ptr [EBX + 0x8]       ; 00480f12
    LEA ECX,[EAX + ESI*0x1]             ; 00480f15
    PUSH ECX                            ; 00480f18
    LEA ECX,[ESI + 0x4]                 ; 00480f19
    ADD EAX,ECX                         ; 00480f1c
    PUSH EAX                            ; 00480f1e
    CALL FUN_005ba1f0                   ; 00480f1f
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005ba1f0()
    ADD ESP,0xc                         ; 00480f24
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00480f27
    SUB ECX,ECX                         ; 00480f2b
    DEC ECX                             ; 00480f2d
    XOR EAX,EAX                         ; 00480f2e
    SCASB.REPNE ES:EDI                  ; 00480f30
    NOT ECX                             ; 00480f32
    DEC ECX                             ; 00480f34
    INC ECX                             ; 00480f35
    PUSH ECX                            ; 00480f36
    CALL FUN_005b8580                   ; 00480f37
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8580()
    MOV ECX,dword ptr [EBX + 0x8]       ; 00480f3c
    MOV dword ptr [ECX + ESI*0x1],EAX   ; 00480f3f
    MOV EAX,dword ptr [EBX + 0x8]       ; 00480f42
    MOV ECX,dword ptr [ESI + EAX*0x1]   ; 00480f45
    ADD ESP,0x4                         ; 00480f48
    TEST ECX,ECX                        ; 00480f4b
    JZ 0x00480f78                       ; 00480f4d
        ;   XREF to: 00480f78 (CONDITIONAL_JUMP)  ; LAB_00480f78
    MOV EDI,dword ptr [EBX + 0x8]       ; 00480f4f
        ;   Label: LAB_00480f4f
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00480f52
    MOV EDI,dword ptr [EDI + EBP*0x4]   ; 00480f56
    PUSH EDI                            ; 00480f59
    MOV AL,byte ptr [ESI]               ; 00480f5a
        ;   Label: LAB_00480f5a
    MOV byte ptr [EDI],AL               ; 00480f5c
    CMP AL,0x0                          ; 00480f5e
    JZ 0x00480f72                       ; 00480f60
        ;   XREF to: 00480f72 (CONDITIONAL_JUMP)  ; LAB_00480f72
    MOV AL,byte ptr [ESI + 0x1]         ; 00480f62
    ADD ESI,0x2                         ; 00480f65
    MOV byte ptr [EDI + 0x1],AL         ; 00480f68
    ADD EDI,0x2                         ; 00480f6b
    CMP AL,0x0                          ; 00480f6e
    JNZ 0x00480f5a                      ; 00480f70
        ;   XREF to: 00480f5a (CONDITIONAL_JUMP)  ; LAB_00480f5a
    POP EDI                             ; 00480f72
        ;   Label: LAB_00480f72
    POP EBP                             ; 00480f73
    POP EDI                             ; 00480f74
    POP ESI                             ; 00480f75
    POP EBX                             ; 00480f76
    RET                                 ; 00480f77
    MOV ESI,0x5d25d6                    ; 00480f78 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_00480f78
    MOV EDI,0xbc0                       ; 00480f7d
    PUSH 0x5d25ec                       ; 00480f82 | = "CStrList::insert - out of memory"
    MOV dword ptr [0x01d046a0],ESI      ; 00480f87 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 00480f8d | DAT_01d046a4
    CALL FUN_004e4500                   ; 00480f93
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00480f98
    JMP 0x00480f4f                      ; 00480f9b
        ;   XREF to: 00480f4f (UNCONDITIONAL_JUMP)  ; LAB_00480f4f


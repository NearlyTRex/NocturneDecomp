; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_1000df10(char *param_1)
;
;
; XREF[1]:
;   FUN_1000ddc0 at 1000de42
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 1000df10
        ;   Label: FUN_1000df10
    PUSH EBX                            ; 1000df14
    CMP byte ptr [EDX],0x0              ; 1000df15
    JZ 0x1000df51                       ; 1000df18
        ;   XREF to: 1000df51 (CONDITIONAL_JUMP)  ; LAB_1000df51
    MOV AL,byte ptr [EDX]               ; 1000df1a
        ;   Label: LAB_1000df1a
    CMP AL,0x30                         ; 1000df1c
    JL 0x1000df30                       ; 1000df1e
        ;   XREF to: 1000df30 (CONDITIONAL_JUMP)  ; LAB_1000df30
    CMP AL,0x39                         ; 1000df20
    JG 0x1000df30                       ; 1000df22
        ;   XREF to: 1000df30 (CONDITIONAL_JUMP)  ; LAB_1000df30
    SUB AL,0x30                         ; 1000df24
    MOV byte ptr [EDX],AL               ; 1000df26
    INC EDX                             ; 1000df28
    CMP byte ptr [EDX],0x0              ; 1000df29
    JNZ 0x1000df1a                      ; 1000df2c
        ;   XREF to: 1000df1a (CONDITIONAL_JUMP)  ; LAB_1000df1a
    POP EBX                             ; 1000df2e
    RET                                 ; 1000df2f
    CMP AL,0x3b                         ; 1000df30
        ;   Label: LAB_1000df30
    JNZ 0x1000df4b                      ; 1000df32
        ;   XREF to: 1000df4b (CONDITIONAL_JUMP)  ; LAB_1000df4b
    MOV EAX,EDX                         ; 1000df34
    LEA ECX,[EAX + 0x1]                 ; 1000df36
        ;   Label: LAB_1000df36
    MOV BL,byte ptr [ECX]               ; 1000df39
    MOV byte ptr [EAX],BL               ; 1000df3b
    MOV EAX,ECX                         ; 1000df3d
    CMP byte ptr [ECX],0x0              ; 1000df3f
    JNZ 0x1000df36                      ; 1000df42
        ;   XREF to: 1000df36 (CONDITIONAL_JUMP)  ; LAB_1000df36
    CMP byte ptr [EDX],0x0              ; 1000df44
    JNZ 0x1000df1a                      ; 1000df47
        ;   XREF to: 1000df1a (CONDITIONAL_JUMP)  ; LAB_1000df1a
    POP EBX                             ; 1000df49
    RET                                 ; 1000df4a
    INC EDX                             ; 1000df4b
        ;   Label: LAB_1000df4b
    CMP byte ptr [EDX],0x0              ; 1000df4c
    JNZ 0x1000df1a                      ; 1000df4f
        ;   XREF to: 1000df1a (CONDITIONAL_JUMP)  ; LAB_1000df1a
    POP EBX                             ; 1000df51
        ;   Label: LAB_1000df51
    RET                                 ; 1000df52


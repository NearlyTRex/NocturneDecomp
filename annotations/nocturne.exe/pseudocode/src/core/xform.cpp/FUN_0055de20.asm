; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_FUN_0055de20(void)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined1* switchdataD_0055de10 = 0055de88
;   undefined1* PTR_caseD_1_0055de14 = 0055deed
;   undefined1* PTR_caseD_3_0055de1c = 0055decd
;   string caseD_0
;   undefined4 caseD_3
;   undefined4 caseD_1
;   string caseD_2
;   undefined4 DAT_02de313c
;   undefined4 DAT_02de4344
;   undefined4 DAT_02de4348
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055de20
        ;   Label: core_xform.cpp_FUN_0055de20
    PUSH ESI                            ; 0055de21
    PUSH EDI                            ; 0055de22
    PUSH EBP                            ; 0055de23
    SUB ESP,0x4                         ; 0055de24
    XOR EDX,EDX                         ; 0055de27
    MOV ECX,dword ptr [0x02de313c]      ; 0055de29 | DAT_02de313c
    MOV dword ptr [ESP],EDX             ; 0055de2f
    TEST ECX,ECX                        ; 0055de32
    JLE 0x0055dee5                      ; 0055de34
        ;   XREF to: 0055dee5 (CONDITIONAL_JUMP)  ; LAB_0055dee5
    MOV EBX,0x2de4340                   ; 0055de3a
    MOV EAX,dword ptr [ESP]             ; 0055de3f
        ;   Label: LAB_0055de3f
    MOV EBP,dword ptr [0x02de313c]      ; 0055de42 | DAT_02de313c
    INC EAX                             ; 0055de48
    CMP EAX,EBP                         ; 0055de49
    JNZ 0x0055de4f                      ; 0055de4b
        ;   XREF to: 0055de4f (CONDITIONAL_JUMP)  ; LAB_0055de4f
    XOR EAX,EBP                         ; 0055de4d
    IMUL EAX,EAX,0x30                   ; 0055de4f
        ;   Label: LAB_0055de4f
    MOV EBP,0x2de4340                   ; 0055de52
    MOV EDX,EBX                         ; 0055de57
    MOV EDI,dword ptr [EBX + 0x8]       ; 0055de59
    MOV ECX,dword ptr [EBX + 0x4]       ; 0055de5c
    NEG EDI                             ; 0055de5f
    ADD EBP,EAX                         ; 0055de61
    XOR EAX,EAX                         ; 0055de63
    CMP EDI,ECX                         ; 0055de65
    JL 0x0055de6e                       ; 0055de67
        ;   XREF to: 0055de6e (CONDITIONAL_JUMP)  ; LAB_0055de6e
    MOV EAX,0x1                         ; 0055de69
    MOV EDI,dword ptr [EBP + 0x8]       ; 0055de6e | DAT_02de4348
        ;   Label: LAB_0055de6e
    MOV ESI,dword ptr [EBP + 0x4]       ; 0055de71 | DAT_02de4344
    NEG EDI                             ; 0055de74
    CMP EDI,ESI                         ; 0055de76
    JL 0x0055de7c                       ; 0055de78
        ;   XREF to: 0055de7c (CONDITIONAL_JUMP)  ; LAB_0055de7c
    OR AL,0x2                           ; 0055de7a
    CMP EAX,0x3                         ; 0055de7c
        ;   Label: LAB_0055de7c
    JA 0x0055decd                       ; 0055de7f
        ;   XREF to: 0055decd (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x55de10]  ; 0055de81 | = "k=plv" | caseD_1 | caseD_2
        ;   Label: switchD


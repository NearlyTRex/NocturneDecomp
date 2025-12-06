; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_FUN_0060b0c8()
;
;
; XREF[1]:
;   crt_unknown.c_FUN_0060b133 at 0060b135
;
; Referenced Globals:
;   char[256] g_CharacterClassificationTable
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060b0c8
        ;   Label: crt_unknown.c_FUN_0060b0c8
    MOV EAX,dword ptr [ESP + 0x8]       ; 0060b0c9
    MOV EDX,dword ptr [ESP + 0xc]       ; 0060b0cd
    MOV ECX,EAX                         ; 0060b0d1
    CMP EDX,0x14                        ; 0060b0d3
    JGE 0x0060b102                      ; 0060b0d6 | LAB_0060b102
        ;   XREF to: 0060b102 (CONDITIONAL_JUMP)
    MOV BL,byte ptr [EAX]               ; 0060b0d8
    INC BL                              ; 0060b0da
    AND EBX,0xff                        ; 0060b0dc
    TEST byte ptr [EBX + 0x6849c4],0x20 ; 0060b0e2 | char[256] g_CharacterClassificationTable
    JZ 0x0060b102                       ; 0060b0e9 | LAB_0060b102
        ;   XREF to: 0060b102 (CONDITIONAL_JUMP)
    CMP byte ptr [EAX],0x0              ; 0060b0eb
        ;   Label: LAB_0060b0eb
    JZ 0x0060b0f4                       ; 0060b0ee | LAB_0060b0f4
        ;   XREF to: 0060b0f4 (CONDITIONAL_JUMP)
    INC EAX                             ; 0060b0f0
    DEC EDX                             ; 0060b0f1
    JMP 0x0060b0eb                      ; 0060b0f2 | LAB_0060b0eb
        ;   XREF to: 0060b0eb (UNCONDITIONAL_JUMP)
    TEST EDX,EDX                        ; 0060b0f4
        ;   Label: LAB_0060b0f4
    JLE 0x0060b0ff                      ; 0060b0f6 | LAB_0060b0ff
        ;   XREF to: 0060b0ff (CONDITIONAL_JUMP)
    DEC EDX                             ; 0060b0f8
    MOV byte ptr [EAX],0x30             ; 0060b0f9
    INC EAX                             ; 0060b0fc
    JMP 0x0060b0f4                      ; 0060b0fd | LAB_0060b0f4
        ;   XREF to: 0060b0f4 (UNCONDITIONAL_JUMP)
    MOV byte ptr [EAX],0x0              ; 0060b0ff
        ;   Label: LAB_0060b0ff
    MOV EAX,ECX                         ; 0060b102
        ;   Label: LAB_0060b102
    POP EBX                             ; 0060b104
    RET                                 ; 0060b105


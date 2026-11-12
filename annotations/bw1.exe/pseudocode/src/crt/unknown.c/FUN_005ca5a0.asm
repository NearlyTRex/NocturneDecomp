; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 * crt_unknown_c_FUN_005ca5a0(uint *param_1,undefined1 *param_2,int param_3)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005ca500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ca5a0
        ;   Label: crt_unknown.c_FUN_005ca5a0
    PUSH ESI                            ; 005ca5a1
    PUSH EDI                            ; 005ca5a2
    PUSH ES                             ; 005ca5a3
    SUB ESP,0x8                         ; 005ca5a4
    MOV EBX,dword ptr [ESP + 0x20]      ; 005ca5a7
    MOV ECX,dword ptr [ESP + 0x24]      ; 005ca5ab
    MOV EDI,ESP                         ; 005ca5af
    MOV AX,DS                           ; 005ca5b1
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005ca5b3
    MOV ES,AX                           ; 005ca5b7
    MOV EDX,EBX                         ; 005ca5b9
    MOVSD ES:EDI,ESI                    ; 005ca5bb
    MOVSD ES:EDI,ESI                    ; 005ca5bc
    CMP ECX,0xa                         ; 005ca5bd
    JNZ 0x005ca5f5                      ; 005ca5c0
        ;   XREF to: 005ca5f5 (CONDITIONAL_JUMP)  ; LAB_005ca5f5
    TEST byte ptr [ESP + 0x7],0x80      ; 005ca5c2
    JZ 0x005ca5f5                       ; 005ca5c7
        ;   XREF to: 005ca5f5 (CONDITIONAL_JUMP)  ; LAB_005ca5f5
    MOV byte ptr [EBX],0x2d             ; 005ca5c9
    MOV EDX,dword ptr [ESP]             ; 005ca5cc
    MOV ESI,dword ptr [ESP + 0x4]       ; 005ca5cf
    NOT EDX                             ; 005ca5d3
    NOT ESI                             ; 005ca5d5
    MOV dword ptr [ESP],EDX             ; 005ca5d7
    MOV dword ptr [ESP + 0x4],ESI       ; 005ca5da
    MOV EDI,dword ptr [ESP]             ; 005ca5de
    LEA EDX,[EBX + 0x1]                 ; 005ca5e1
    INC EDI                             ; 005ca5e4
    MOV dword ptr [ESP],EDI             ; 005ca5e5
    JNZ 0x005ca5ef                      ; 005ca5e8
        ;   XREF to: 005ca5ef (CONDITIONAL_JUMP)  ; LAB_005ca5ef
    LEA EAX,[ESI + 0x1]                 ; 005ca5ea
    JMP 0x005ca5f1                      ; 005ca5ed
        ;   XREF to: 005ca5f1 (UNCONDITIONAL_JUMP)  ; LAB_005ca5f1
    MOV EAX,ESI                         ; 005ca5ef
        ;   Label: LAB_005ca5ef
    MOV dword ptr [ESP + 0x4],EAX       ; 005ca5f1
        ;   Label: LAB_005ca5f1
    PUSH ECX                            ; 005ca5f5
        ;   Label: LAB_005ca5f5
    PUSH EDX                            ; 005ca5f6
    LEA EAX,[ESP + 0x8]                 ; 005ca5f7
    PUSH EAX                            ; 005ca5fb
    CALL crt_unknown.c_FUN_005ca500     ; 005ca5fc
        ;   XREF to: 005ca500 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ca500()
    ADD ESP,0xc                         ; 005ca601
    MOV EAX,EBX                         ; 005ca604
    ADD ESP,0x8                         ; 005ca606
    POP ES                              ; 005ca609
    POP EDI                             ; 005ca60a
    POP ESI                             ; 005ca60b
    POP EBX                             ; 005ca60c
    RET                                 ; 005ca60d


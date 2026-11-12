; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 * crt_unknown_c_FUN_005c22a0(uint *param_1,undefined1 *param_2,int param_3)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c2200
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c22a0
        ;   Label: crt_unknown.c_FUN_005c22a0
    PUSH ESI                            ; 005c22a1
    PUSH EDI                            ; 005c22a2
    PUSH ES                             ; 005c22a3
    SUB ESP,0x8                         ; 005c22a4
    MOV EBX,dword ptr [ESP + 0x20]      ; 005c22a7
    MOV ECX,dword ptr [ESP + 0x24]      ; 005c22ab
    MOV EDI,ESP                         ; 005c22af
    MOV AX,DS                           ; 005c22b1
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005c22b3
    MOV ES,AX                           ; 005c22b7
    MOV EDX,EBX                         ; 005c22b9
    MOVSD ES:EDI,ESI                    ; 005c22bb
    MOVSD ES:EDI,ESI                    ; 005c22bc
    CMP ECX,0xa                         ; 005c22bd
    JNZ 0x005c22f5                      ; 005c22c0
        ;   XREF to: 005c22f5 (CONDITIONAL_JUMP)  ; LAB_005c22f5
    TEST byte ptr [ESP + 0x7],0x80      ; 005c22c2
    JZ 0x005c22f5                       ; 005c22c7
        ;   XREF to: 005c22f5 (CONDITIONAL_JUMP)  ; LAB_005c22f5
    MOV byte ptr [EBX],0x2d             ; 005c22c9
    MOV EDX,dword ptr [ESP]             ; 005c22cc
    MOV ESI,dword ptr [ESP + 0x4]       ; 005c22cf
    NOT EDX                             ; 005c22d3
    NOT ESI                             ; 005c22d5
    MOV dword ptr [ESP],EDX             ; 005c22d7
    MOV dword ptr [ESP + 0x4],ESI       ; 005c22da
    MOV EDI,dword ptr [ESP]             ; 005c22de
    LEA EDX,[EBX + 0x1]                 ; 005c22e1
    INC EDI                             ; 005c22e4
    MOV dword ptr [ESP],EDI             ; 005c22e5
    JNZ 0x005c22ef                      ; 005c22e8
        ;   XREF to: 005c22ef (CONDITIONAL_JUMP)  ; LAB_005c22ef
    LEA EAX,[ESI + 0x1]                 ; 005c22ea
    JMP 0x005c22f1                      ; 005c22ed
        ;   XREF to: 005c22f1 (UNCONDITIONAL_JUMP)  ; LAB_005c22f1
    MOV EAX,ESI                         ; 005c22ef
        ;   Label: LAB_005c22ef
    MOV dword ptr [ESP + 0x4],EAX       ; 005c22f1
        ;   Label: LAB_005c22f1
    PUSH ECX                            ; 005c22f5
        ;   Label: LAB_005c22f5
    PUSH EDX                            ; 005c22f6
    LEA EAX,[ESP + 0x8]                 ; 005c22f7
    PUSH EAX                            ; 005c22fb
    CALL crt_unknown.c_FUN_005c2200     ; 005c22fc
        ;   XREF to: 005c2200 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c2200()
    ADD ESP,0xc                         ; 005c2301
    MOV EAX,EBX                         ; 005c2304
    ADD ESP,0x8                         ; 005c2306
    POP ES                              ; 005c2309
    POP EDI                             ; 005c230a
    POP ESI                             ; 005c230b
    POP EBX                             ; 005c230c
    RET                                 ; 005c230d


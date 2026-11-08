; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00414600(int param_1)
;
;
; Called Functions:
;   FUN_00468900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414600
        ;   Label: FUN_00414600
    PUSH EDI                            ; 00414601
    SUB ESP,0x18                        ; 00414602
    MOV EBX,ESI                         ; 00414605
    MOV EAX,dword ptr [ESP + 0x24]      ; 00414607
    ADD EAX,0x158                       ; 0041460b
    PUSH EAX                            ; 00414610
    LEA EDI,[ESP + 0x4]                 ; 00414611
    CALL FUN_00468900                   ; 00414615
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; undefined FUN_00468900()
    MOV ECX,0x6                         ; 0041461a
    MOV ESI,dword ptr [EAX + 0x350]     ; 0041461f
    ADD ESP,0x4                         ; 00414625
    MOVSD.REP ES:EDI,ESI                ; 00414628
    MOV ECX,0x6                         ; 0041462a
    MOV ESI,ESP                         ; 0041462f
    MOV EDI,EBX                         ; 00414631
    MOVSD.REP ES:EDI,ESI                ; 00414633
    MOV EAX,EBX                         ; 00414635
    ADD ESP,0x18                        ; 00414637
    POP EDI                             ; 0041463a
    POP EBX                             ; 0041463b
    RET                                 ; 0041463c


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059c1e0(int param_1)
;
;
; Called Functions:
;   FUN_0044fd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059c1e0
        ;   Label: FUN_0059c1e0
    PUSH EDI                            ; 0059c1e1
    SUB ESP,0x18                        ; 0059c1e2
    MOV EBX,ESI                         ; 0059c1e5
    MOV EAX,dword ptr [ESP + 0x24]      ; 0059c1e7
    ADD EAX,0x2b4                       ; 0059c1eb
    PUSH EAX                            ; 0059c1f0
    LEA EDI,[ESP + 0x4]                 ; 0059c1f1
    CALL FUN_0044fd20                   ; 0059c1f5
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd20()
    MOV ECX,0x6                         ; 0059c1fa
    MOV ESI,dword ptr [EAX + 0x350]     ; 0059c1ff
    ADD ESP,0x4                         ; 0059c205
    MOVSD.REP ES:EDI,ESI                ; 0059c208
    MOV ECX,0x6                         ; 0059c20a
    MOV ESI,ESP                         ; 0059c20f
    MOV EDI,EBX                         ; 0059c211
    MOVSD.REP ES:EDI,ESI                ; 0059c213
    MOV EAX,EBX                         ; 0059c215
    ADD ESP,0x18                        ; 0059c217
    POP EDI                             ; 0059c21a
    POP EBX                             ; 0059c21b
    RET                                 ; 0059c21c


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045fe80(int param_1)
;
;
; Called Functions:
;   FUN_0044fd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045fe80
        ;   Label: FUN_0045fe80
    PUSH EDI                            ; 0045fe81
    SUB ESP,0x18                        ; 0045fe82
    MOV EBX,ESI                         ; 0045fe85
    MOV EAX,dword ptr [ESP + 0x24]      ; 0045fe87
    ADD EAX,0x2b4                       ; 0045fe8b
    PUSH EAX                            ; 0045fe90
    LEA EDI,[ESP + 0x4]                 ; 0045fe91
    CALL FUN_0044fd20                   ; 0045fe95
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd20()
    MOV ECX,0x6                         ; 0045fe9a
    MOV ESI,dword ptr [EAX + 0x350]     ; 0045fe9f
    ADD ESP,0x4                         ; 0045fea5
    MOVSD.REP ES:EDI,ESI                ; 0045fea8
    MOV ECX,0x6                         ; 0045feaa
    MOV ESI,ESP                         ; 0045feaf
    MOV EDI,EBX                         ; 0045feb1
    MOVSD.REP ES:EDI,ESI                ; 0045feb3
    MOV EAX,EBX                         ; 0045feb5
    ADD ESP,0x18                        ; 0045feb7
    POP EDI                             ; 0045feba
    POP EBX                             ; 0045febb
    RET                                 ; 0045febc


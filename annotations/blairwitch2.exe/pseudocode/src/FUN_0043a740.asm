; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043a740(int param_1)
;
;
; Called Functions:
;   FUN_0044fd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043a740
        ;   Label: FUN_0043a740
    PUSH EDI                            ; 0043a741
    SUB ESP,0x24                        ; 0043a742
    MOV EBX,ESI                         ; 0043a745
    MOV EAX,dword ptr [ESP + 0x30]      ; 0043a747
    ADD EAX,0x2b4                       ; 0043a74b
    PUSH EAX                            ; 0043a750
    LEA EDI,[ESP + 0x4]                 ; 0043a751
    CALL FUN_0044fd20                   ; 0043a755
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd20()
    MOV ECX,0x6                         ; 0043a75a
    LEA ESI,[EAX + 0x338]               ; 0043a75f
    ADD ESP,0x4                         ; 0043a765
    MOVSD.REP ES:EDI,ESI                ; 0043a768
    XOR EDX,EDX                         ; 0043a76a
    MOV EAX,dword ptr [ESP + 0x10]      ; 0043a76c
    LEA ESI,[ESP + 0x18]                ; 0043a770
    MOV EDI,EBX                         ; 0043a774
    MOV dword ptr [ESP + 0x1c],EAX      ; 0043a776
    MOV EAX,dword ptr [ESP + 0x14]      ; 0043a77a
    MOV dword ptr [ESP + 0x18],EDX      ; 0043a77e
    MOV dword ptr [ESP + 0x20],EAX      ; 0043a782
    MOVSD ES:EDI,ESI                    ; 0043a786
    MOVSD ES:EDI,ESI                    ; 0043a787
    MOVSD ES:EDI,ESI                    ; 0043a788
    MOV EAX,EBX                         ; 0043a789
    ADD ESP,0x24                        ; 0043a78b
    POP EDI                             ; 0043a78e
    POP EBX                             ; 0043a78f
    RET                                 ; 0043a790


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00443050(int param_1)
;
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00443050
        ;   Label: FUN_00443050
    PUSH EDI                            ; 00443051
    MOV EAX,dword ptr [ESP + 0xc]       ; 00443052
    LEA ECX,[EAX + 0x104]               ; 00443056
    LEA EDI,[EAX + 0x16c]               ; 0044305c
    LEA ESI,[EAX + 0x148c]              ; 00443062
    LEA EDX,[EAX + 0x1498]              ; 00443068
    MOVSD ES:EDI,ESI                    ; 0044306e
    MOVSD ES:EDI,ESI                    ; 0044306f
    MOVSD ES:EDI,ESI                    ; 00443070
    CMP ECX,EDX                         ; 00443071
    JNZ 0x004430e4                      ; 00443073
        ;   XREF to: 004430e4 (CONDITIONAL_JUMP)  ; LAB_004430e4
    MOV EDX,dword ptr [EAX + 0x14a4]    ; 00443075
        ;   Label: LAB_00443075
    MOV dword ptr [EAX + 0x178],EDX     ; 0044307b
    MOV EDX,dword ptr [EAX + 0x14a8]    ; 00443081
    MOV dword ptr [EAX + 0x17c],EDX     ; 00443087
    MOV EDX,dword ptr [EAX + 0x14ac]    ; 0044308d
    MOV dword ptr [EAX + 0x180],EDX     ; 00443093
    MOV EDX,dword ptr [EAX + 0x14b0]    ; 00443099
    MOV dword ptr [EAX + 0x184],EDX     ; 0044309f
    MOV EDX,dword ptr [EAX + 0x14b4]    ; 004430a5
    MOV dword ptr [EAX + 0x188],EDX     ; 004430ab
    MOV EDX,dword ptr [EAX + 0x14b8]    ; 004430b1
    MOV dword ptr [EAX + 0x18c],EDX     ; 004430b7
    MOV EDX,dword ptr [EAX + 0x14bc]    ; 004430bd
    MOV dword ptr [EAX + 0x190],EDX     ; 004430c3
    MOV EDX,dword ptr [EAX + 0x14c0]    ; 004430c9
    MOV dword ptr [EAX + 0x194],EDX     ; 004430cf
    MOV EDX,dword ptr [EAX + 0x14c4]    ; 004430d5
    MOV dword ptr [EAX + 0x198],EDX     ; 004430db
    POP EDI                             ; 004430e1
    POP ESI                             ; 004430e2
    RET                                 ; 004430e3
    PUSH EBX                            ; 004430e4
        ;   Label: LAB_004430e4
    MOV EBX,dword ptr [EDX]             ; 004430e5
    MOV dword ptr [ECX],EBX             ; 004430e7
    MOV EBX,dword ptr [EDX + 0x4]       ; 004430e9
    MOV dword ptr [ECX + 0x4],EBX       ; 004430ec
    MOV EBX,dword ptr [EDX + 0x8]       ; 004430ef
    MOV dword ptr [ECX + 0x8],EBX       ; 004430f2
    POP EBX                             ; 004430f5
    JMP 0x00443075                      ; 004430f6
        ;   XREF to: 00443075 (UNCONDITIONAL_JUMP)  ; LAB_00443075


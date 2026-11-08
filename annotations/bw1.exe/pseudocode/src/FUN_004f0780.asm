; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004f0780(int param_1,undefined4 *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01d06bcc
;   undefined4 DAT_01d06bf0
;   undefined4 DAT_01d06bf8
;
; Called Functions:
;   FUN_00569130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f0780
        ;   Label: FUN_004f0780
    PUSH ESI                            ; 004f0781
    PUSH EDI                            ; 004f0782
    PUSH EBP                            ; 004f0783
    SUB ESP,0x48                        ; 004f0784
    MOV EBX,dword ptr [ESP + 0x60]      ; 004f0787
    MOV EDX,dword ptr [0x01d06bcc]      ; 004f078b | DAT_01d06bcc
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004f0791
    PUSH EDX                            ; 004f0795
    ADD EAX,0x158                       ; 004f0796
    MOV EBP,0x3                         ; 004f079b
    PUSH EAX                            ; 004f07a0
    LEA ESI,[ESP + 0x44]                ; 004f07a1
    LEA EDI,[ESP + 0x38]                ; 004f07a5
    CALL FUN_00569130                   ; 004f07a9
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined FUN_00569130()
    LEA ESI,[ESP + 0x44]                ; 004f07ae
    ADD ESP,0x8                         ; 004f07b2
    LEA EAX,[ESP + 0x30]                ; 004f07b5
    MOVSD ES:EDI,ESI                    ; 004f07b9
    MOVSD ES:EDI,ESI                    ; 004f07ba
    MOVSD ES:EDI,ESI                    ; 004f07bb
    CMP EBX,EAX                         ; 004f07bc
    JZ 0x004f07d4                       ; 004f07be
        ;   XREF to: 004f07d4 (CONDITIONAL_JUMP)  ; LAB_004f07d4
    MOV EAX,dword ptr [ESP + 0x30]      ; 004f07c0
    MOV dword ptr [EBX],EAX             ; 004f07c4
    MOV EAX,dword ptr [ESP + 0x34]      ; 004f07c6
    MOV dword ptr [EBX + 0x4],EAX       ; 004f07ca
    MOV EAX,dword ptr [ESP + 0x38]      ; 004f07cd
    MOV dword ptr [EBX + 0x8],EAX       ; 004f07d1
    MOV ECX,dword ptr [0x01d06bf0]      ; 004f07d4 | DAT_01d06bf0
        ;   Label: LAB_004f07d4
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004f07da
    PUSH ECX                            ; 004f07de
    ADD EAX,0x158                       ; 004f07df
    PUSH EAX                            ; 004f07e4
    LEA ESI,[ESP + 0x14]                ; 004f07e5
    LEA EDI,[ESP + 0x20]                ; 004f07e9
    CALL FUN_00569130                   ; 004f07ed
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined FUN_00569130()
    LEA ESI,[ESP + 0x14]                ; 004f07f2
    LEA EAX,[ESP + 0x20]                ; 004f07f6
    ADD ESP,0x8                         ; 004f07fa
    LEA EDX,[EBX + 0xc]                 ; 004f07fd
    MOVSD ES:EDI,ESI                    ; 004f0800
    MOVSD ES:EDI,ESI                    ; 004f0801
    MOVSD ES:EDI,ESI                    ; 004f0802
    CMP EDX,EAX                         ; 004f0803
    JZ 0x004f081b                       ; 004f0805
        ;   XREF to: 004f081b (CONDITIONAL_JUMP)  ; LAB_004f081b
    MOV EAX,dword ptr [ESP + 0x18]      ; 004f0807
    MOV dword ptr [EDX],EAX             ; 004f080b
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004f080d
    MOV dword ptr [EDX + 0x4],EAX       ; 004f0811
    MOV EAX,dword ptr [ESP + 0x20]      ; 004f0814
    MOV dword ptr [EDX + 0x8],EAX       ; 004f0818
    MOV ESI,dword ptr [0x01d06bf8]      ; 004f081b | DAT_01d06bf8
        ;   Label: LAB_004f081b
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004f0821
    PUSH ESI                            ; 004f0825
    ADD EAX,0x158                       ; 004f0826
    LEA EDI,[ESP + 0x4]                 ; 004f082b
    PUSH EAX                            ; 004f082f
    LEA ESI,[ESP + 0x2c]                ; 004f0830
    ADD EBX,0x18                        ; 004f0834
    CALL FUN_00569130                   ; 004f0837
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined FUN_00569130()
    LEA ESI,[ESP + 0x2c]                ; 004f083c
    ADD ESP,0x8                         ; 004f0840
    MOV EAX,ESP                         ; 004f0843
    MOVSD ES:EDI,ESI                    ; 004f0845
    MOVSD ES:EDI,ESI                    ; 004f0846
    MOVSD ES:EDI,ESI                    ; 004f0847
    CMP EBX,EAX                         ; 004f0848
    JNZ 0x004f0856                      ; 004f084a
        ;   XREF to: 004f0856 (CONDITIONAL_JUMP)  ; LAB_004f0856
    MOV EAX,EBP                         ; 004f084c
    ADD ESP,0x48                        ; 004f084e
    POP EBP                             ; 004f0851
    POP EDI                             ; 004f0852
    POP ESI                             ; 004f0853
    POP EBX                             ; 004f0854
    RET                                 ; 004f0855
    MOV EAX,dword ptr [ESP]             ; 004f0856
        ;   Label: LAB_004f0856
    MOV dword ptr [EBX],EAX             ; 004f0859
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f085b
    MOV dword ptr [EBX + 0x4],EAX       ; 004f085f
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f0862
    MOV dword ptr [EBX + 0x8],EAX       ; 004f0866
    MOV EAX,EBP                         ; 004f0869
    ADD ESP,0x48                        ; 004f086b
    POP EBP                             ; 004f086e
    POP EDI                             ; 004f086f
    POP ESI                             ; 004f0870
    POP EBX                             ; 004f0871
    RET                                 ; 004f0872


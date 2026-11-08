; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0040c750(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_005d2e3d
;   undefined4 DAT_005d2e41
;   undefined4 DAT_00622c18
;   undefined4 DAT_01e82168
;   undefined4 DAT_01fcf29c
;   undefined4 DAT_01fe37f0
;   undefined4 DAT_01fe37f4
;   undefined4 DAT_01fe37f8
;
; Called Functions:
;   FUN_00408b40
;   FUN_005562c0
;   FUN_00559220
;   FUN_00559250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c750
        ;   Label: FUN_0040c750
    PUSH ESI                            ; 0040c751
    PUSH EDI                            ; 0040c752
    SUB ESP,0x48                        ; 0040c753
    MOV EBX,dword ptr [ESP + 0x58]      ; 0040c756
    MOV EDX,dword ptr [ESP + 0x5c]      ; 0040c75a
    PUSH EDX                            ; 0040c75e
    PUSH EBX                            ; 0040c75f
    LEA ESI,[ESP + 0x14]                ; 0040c760
    LEA EDI,[ESP + 0x2c]                ; 0040c764
    CALL FUN_00408b40                   ; 0040c768
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    LEA ESI,[ESP + 0x14]                ; 0040c76d
    ADD ESP,0x8                         ; 0040c771
    MOVSD ES:EDI,ESI                    ; 0040c774
    MOVSD ES:EDI,ESI                    ; 0040c775
    MOVSD ES:EDI,ESI                    ; 0040c776
    LEA EDI,[ESP + 0x18]                ; 0040c777
    MOV ESI,0x1fe37f0                   ; 0040c77b
    MOVSD ES:EDI,ESI                    ; 0040c780 | DAT_01fe37f0
    MOVSD ES:EDI,ESI                    ; 0040c781 | DAT_01fe37f4
    MOVSD ES:EDI,ESI                    ; 0040c782 | DAT_01fe37f8
    MOV EDI,ESP                         ; 0040c783
    LEA ESI,[ESP + 0x18]                ; 0040c785
    MOVSD ES:EDI,ESI                    ; 0040c789
    MOVSD ES:EDI,ESI                    ; 0040c78a
    MOVSD ES:EDI,ESI                    ; 0040c78b
    FLD float ptr [ESP + 0x24]          ; 0040c78c
    FSUB float ptr [ESP]                ; 0040c790
    FMUL ST0                            ; 0040c793
    FLD float ptr [ESP + 0x28]          ; 0040c795
    FSUB float ptr [ESP + 0x4]          ; 0040c799
    FMUL ST0                            ; 0040c79d
    FLD float ptr [ESP + 0x2c]          ; 0040c79f
    FXCH                                ; 0040c7a3
    FADDP ST2,ST0                       ; 0040c7a5
    FSUB float ptr [ESP + 0x8]          ; 0040c7a7
    FMUL ST0                            ; 0040c7ab
    FADDP                               ; 0040c7ad
    FCOMP float ptr [0x005d2e3d]        ; 0040c7af | DAT_005d2e3d
    FNSTSW AX                           ; 0040c7b5
    SAHF                                ; 0040c7b7
    JBE 0x0040c7c3                      ; 0040c7b8
        ;   XREF to: 0040c7c3 (CONDITIONAL_JUMP)  ; LAB_0040c7c3
    XOR EAX,EAX                         ; 0040c7ba
    ADD ESP,0x48                        ; 0040c7bc
    POP EDI                             ; 0040c7bf
    POP ESI                             ; 0040c7c0
    POP EBX                             ; 0040c7c1
    RET                                 ; 0040c7c2
    PUSH EBX                            ; 0040c7c3
        ;   Label: LAB_0040c7c3
    MOV ECX,dword ptr [0x00622c18]      ; 0040c7c4 | DAT_00622c18
    PUSH ECX                            ; 0040c7ca | DAT_01e82168
    CALL FUN_00559250                   ; 0040c7cb
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; undefined FUN_00559250()
    ADD ESP,0x8                         ; 0040c7d0
    LEA EAX,[ESP + 0x24]                ; 0040c7d3
    PUSH 0x0                            ; 0040c7d7
    PUSH EAX                            ; 0040c7d9
    MOV ESI,dword ptr [0x00622c18]      ; 0040c7da | DAT_00622c18
    PUSH ESI                            ; 0040c7e0 | DAT_01e82168
    CALL FUN_005562c0                   ; 0040c7e1
        ;   XREF to: 005562c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005562c0()
    MOV dword ptr [ESP + 0x50],EAX      ; 0040c7e6
    FLD float ptr [ESP + 0x50]          ; 0040c7ea
    ADD ESP,0xc                         ; 0040c7ee
    LEA EDX,[EBX + 0x20]                ; 0040c7f1
    PUSH 0x0                            ; 0040c7f4
    PUSH EDX                            ; 0040c7f6
    MOV EAX,[0x00622c18]                ; 0040c7f7 | DAT_00622c18
    PUSH EAX                            ; 0040c7fc | DAT_01e82168
    FSTP float ptr [ESP + 0x3c]         ; 0040c7fd
    MOV ESI,dword ptr [EAX + 0x14d134]  ; 0040c801 | DAT_01fcf29c
    CALL FUN_005562c0                   ; 0040c807
        ;   XREF to: 005562c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005562c0()
    MOV dword ptr [ESP + 0x50],EAX      ; 0040c80c
    FLD float ptr [ESP + 0x50]          ; 0040c810
    ADD ESP,0xc                         ; 0040c814
    MOV EDI,dword ptr [0x00622c18]      ; 0040c817 | DAT_00622c18
    PUSH EDI                            ; 0040c81d | DAT_01e82168
    FSTP float ptr [ESP + 0x38]         ; 0040c81e
    CALL FUN_00559220                   ; 0040c822
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; undefined FUN_00559220()
    ADD ESP,0x4                         ; 0040c827
    FLD float ptr [ESP + 0x34]          ; 0040c82a
    FADD double ptr [0x005d2e41]        ; 0040c82e | DAT_005d2e41
    FLD float ptr [ESP + 0x30]          ; 0040c834
    FCOMPP                              ; 0040c838
    FNSTSW AX                           ; 0040c83a
    SAHF                                ; 0040c83c
    JNC 0x0040c84b                      ; 0040c83d
        ;   XREF to: 0040c84b (CONDITIONAL_JUMP)  ; LAB_0040c84b
    MOV ESI,dword ptr [0x00622c18]      ; 0040c83f | DAT_00622c18
    MOV ESI,dword ptr [ESI + 0x14d134]  ; 0040c845 | DAT_01fcf29c
    PUSH dword ptr [ESP + 0x60]         ; 0040c84b
        ;   Label: LAB_0040c84b
    PUSH ESI                            ; 0040c84f
    LEA EAX,[ESP + 0x2c]                ; 0040c850
    PUSH EAX                            ; 0040c854
    MOV EDX,dword ptr [EBX + 0x154]     ; 0040c855
    PUSH EBX                            ; 0040c85b
    CALL dword ptr [EDX + 0x28]         ; 0040c85c
    ADD ESP,0x10                        ; 0040c85f
    ADD ESP,0x48                        ; 0040c862
    POP EDI                             ; 0040c865
    POP ESI                             ; 0040c866
    POP EBX                             ; 0040c867
    RET                                 ; 0040c868


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0055c6f0(int param_1,float *param_2,float param_3)
;
; Local Variables:
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined        Stack[-0x24]:1  local_24
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   FUN_00559f80 at 0055a958
;
; Called Functions:
;   FUN_0045f700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055c6f0
        ;   Label: FUN_0055c6f0
    PUSH ESI                            ; 0055c6f1
    PUSH EDI                            ; 0055c6f2
    SUB ESP,0x30                        ; 0055c6f3
    MOV EBX,dword ptr [ESP + 0x40]      ; 0055c6f6
    MOV ESI,dword ptr [ESP + 0x44]      ; 0055c6fa
    FLD float ptr [ESI + 0x4]           ; 0055c6fe
    FLD float ptr [ESI + 0x8]           ; 0055c701
    FLD float ptr [ESI]                 ; 0055c704
    LEA EAX,[EBX + 0x100]               ; 0055c706
    LEA EDI,[ESP + 0x24]                ; 0055c70c
    MOV ESI,ESP                         ; 0055c710
    FSUB float ptr [EAX]                ; 0055c712
    FXCH ST2                            ; 0055c714
    FSUB float ptr [EAX + 0x4]          ; 0055c716
    FXCH                                ; 0055c719
    FSUB float ptr [EAX + 0x8]          ; 0055c71b
    FXCH ST2                            ; 0055c71e
    FSTP float ptr [ESP]                ; 0055c720
    FSTP float ptr [ESP + 0x4]          ; 0055c723
    LEA EAX,[ESP + 0x24]                ; 0055c727
    FSTP float ptr [ESP + 0x8]          ; 0055c72b
    PUSH EAX                            ; 0055c72f
    LEA EAX,[EBX + 0x118]               ; 0055c730
    MOVSD ES:EDI,ESI                    ; 0055c736
    MOVSD ES:EDI,ESI                    ; 0055c737
    MOVSD ES:EDI,ESI                    ; 0055c738
    PUSH EAX                            ; 0055c739
    LEA ESI,[ESP + 0x20]                ; 0055c73a
    LEA EDI,[ESP + 0x14]                ; 0055c73e
    CALL FUN_0045f700                   ; 0055c742
        ;   XREF to: 0045f700 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f700()
    LEA ESI,[ESP + 0x20]                ; 0055c747
    ADD ESP,0x8                         ; 0055c74b
    MOVSD ES:EDI,ESI                    ; 0055c74e
    MOVSD ES:EDI,ESI                    ; 0055c74f
    MOVSD ES:EDI,ESI                    ; 0055c750
    FLD float ptr [ESP + 0xc]           ; 0055c751
    FADD float ptr [ESP + 0x48]         ; 0055c755
    FCOMP float ptr [EBX + 0x17c]       ; 0055c759
    FNSTSW AX                           ; 0055c75f
    SAHF                                ; 0055c761
    JC 0x0055c7c3                       ; 0055c762
        ;   XREF to: 0055c7c3 (CONDITIONAL_JUMP)  ; LAB_0055c7c3
    FLD float ptr [ESP + 0x10]          ; 0055c764
    FADD float ptr [ESP + 0x48]         ; 0055c768
    FCOMP float ptr [EBX + 0x180]       ; 0055c76c
    FNSTSW AX                           ; 0055c772
    SAHF                                ; 0055c774
    JC 0x0055c7c3                       ; 0055c775
        ;   XREF to: 0055c7c3 (CONDITIONAL_JUMP)  ; LAB_0055c7c3
    FLD float ptr [ESP + 0x14]          ; 0055c777
    FADD float ptr [ESP + 0x48]         ; 0055c77b
    FCOMP float ptr [EBX + 0x184]       ; 0055c77f
    FNSTSW AX                           ; 0055c785
    SAHF                                ; 0055c787
    JC 0x0055c7c3                       ; 0055c788
        ;   XREF to: 0055c7c3 (CONDITIONAL_JUMP)  ; LAB_0055c7c3
    FLD float ptr [ESP + 0xc]           ; 0055c78a
    FSUB float ptr [ESP + 0x48]         ; 0055c78e
    FCOMP float ptr [EBX + 0x188]       ; 0055c792
    FNSTSW AX                           ; 0055c798
    SAHF                                ; 0055c79a
    JA 0x0055c7c3                       ; 0055c79b
        ;   XREF to: 0055c7c3 (CONDITIONAL_JUMP)  ; LAB_0055c7c3
    FLD float ptr [ESP + 0x10]          ; 0055c79d
    FSUB float ptr [ESP + 0x48]         ; 0055c7a1
    FCOMP float ptr [EBX + 0x18c]       ; 0055c7a5
    FNSTSW AX                           ; 0055c7ab
    SAHF                                ; 0055c7ad
    JA 0x0055c7c3                       ; 0055c7ae
        ;   XREF to: 0055c7c3 (CONDITIONAL_JUMP)  ; LAB_0055c7c3
    FLD float ptr [ESP + 0x14]          ; 0055c7b0
    FSUB float ptr [ESP + 0x48]         ; 0055c7b4
    FCOMP float ptr [EBX + 0x190]       ; 0055c7b8
    FNSTSW AX                           ; 0055c7be
    SAHF                                ; 0055c7c0
    JBE 0x0055c7cc                      ; 0055c7c1
        ;   XREF to: 0055c7cc (CONDITIONAL_JUMP)  ; LAB_0055c7cc
    XOR EAX,EAX                         ; 0055c7c3
        ;   Label: LAB_0055c7c3
    ADD ESP,0x30                        ; 0055c7c5
    POP EDI                             ; 0055c7c8
    POP ESI                             ; 0055c7c9
    POP EBX                             ; 0055c7ca
    RET                                 ; 0055c7cb
    MOV EAX,0x1                         ; 0055c7cc
        ;   Label: LAB_0055c7cc
    ADD ESP,0x30                        ; 0055c7d1
    POP EDI                             ; 0055c7d4
    POP ESI                             ; 0055c7d5
    POP EBX                             ; 0055c7d6
    RET                                 ; 0055c7d7


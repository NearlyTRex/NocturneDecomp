; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004e28b0(int param_1,int param_2,int param_3)
;
;
; XREF[8]:
;   FUN_00403a20 at 00403a31
;   FUN_00403af0 at 00403b4a
;   FUN_00404860 at 004049db
;   FUN_00404b00 at 00404b69
;   FUN_00406450 at 00406660
;   FUN_004066f0 at 0040674a
;   FUN_00407640 at 00407698
;   FUN_00407740 at 0040779b
;
; Referenced Globals:
;   undefined4 DAT_00617e40
;   undefined4 DAT_01c38b90
;   undefined4 DAT_01c38b94
;   undefined4 DAT_01c38b98
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e28b0
        ;   Label: FUN_004e28b0
    MOV EDX,dword ptr [0x01c38b90]      ; 004e28b4 | DAT_01c38b90
    IMUL EDX                            ; 004e28ba
    SHRD EAX,EDX,0x10                   ; 004e28bc
    MOV EDX,dword ptr [0x01c38b94]      ; 004e28c0 | DAT_01c38b94
    MOV ECX,EAX                         ; 004e28c6
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e28c8
    IMUL EDX                            ; 004e28cc
    SHRD EAX,EDX,0x10                   ; 004e28ce
    MOV EDX,dword ptr [0x01c38b98]      ; 004e28d2 | DAT_01c38b98
    ADD ECX,EAX                         ; 004e28d8
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e28da
    IMUL EDX                            ; 004e28de
    SHRD EAX,EDX,0x10                   ; 004e28e0
    LEA EDX,[ECX + EAX*0x1]             ; 004e28e4
    NEG EDX                             ; 004e28e7
    TEST EDX,EDX                        ; 004e28e9
    JL 0x004e293b                       ; 004e28eb
        ;   XREF to: 004e293b (CONDITIONAL_JUMP)  ; LAB_004e293b
    CMP EDX,0xffff                      ; 004e28ed
    JLE 0x004e28fa                      ; 004e28f3
        ;   XREF to: 004e28fa (CONDITIONAL_JUMP)  ; LAB_004e28fa
    MOV EDX,0xffff                      ; 004e28f5
    MOV ECX,0xffff                      ; 004e28fa
        ;   Label: LAB_004e28fa
    SUB ECX,dword ptr [0x00617e40]      ; 004e28ff | DAT_00617e40
    MOV EAX,EDX                         ; 004e2905
    MOV EDX,ECX                         ; 004e2907
    IMUL EDX                            ; 004e2909
    SHRD EAX,EDX,0x10                   ; 004e290b
    MOV EDX,dword ptr [0x00617e40]      ; 004e290f | DAT_00617e40
    ADD EDX,EAX                         ; 004e2915
    TEST EDX,EDX                        ; 004e2917
    JL 0x004e293f                       ; 004e2919
        ;   XREF to: 004e293f (CONDITIONAL_JUMP)  ; LAB_004e293f
    CMP EDX,0xffff                      ; 004e291b
    JLE 0x004e2928                      ; 004e2921
        ;   XREF to: 004e2928 (CONDITIONAL_JUMP)  ; LAB_004e2928
    MOV EDX,0xffff                      ; 004e2923
    MOV EAX,EDX                         ; 004e2928
        ;   Label: LAB_004e2928
    SAR EDX,0x1f                        ; 004e292a
    SHL EDX,0x4                         ; 004e292d
    SBB EAX,EDX                         ; 004e2930
    SAR EAX,0x4                         ; 004e2932
    ADD EAX,0x100                       ; 004e2935
    RET                                 ; 004e293a
    XOR EDX,EDX                         ; 004e293b
        ;   Label: LAB_004e293b
    JMP 0x004e28fa                      ; 004e293d
        ;   XREF to: 004e28fa (UNCONDITIONAL_JUMP)  ; LAB_004e28fa
    XOR EDX,EDX                         ; 004e293f
        ;   Label: LAB_004e293f
    MOV EAX,EDX                         ; 004e2941
    SAR EDX,0x1f                        ; 004e2943
    SHL EDX,0x4                         ; 004e2946
    SBB EAX,EDX                         ; 004e2949
    SAR EAX,0x4                         ; 004e294b
    ADD EAX,0x100                       ; 004e294e
    RET                                 ; 004e2953


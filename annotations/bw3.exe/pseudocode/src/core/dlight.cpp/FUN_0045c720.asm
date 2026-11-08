; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045c720(int param_1,int *param_2)
;
;
; XREF[1]:
;   FUN_0045ca30 at 0045cc67
;
; Referenced Globals:
;   TerminatedCString s_core_dlight_cpp_005bb314
;   TerminatedCString s_CDemonLight_blitZBuffer_005bb327
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_00471271
;   FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045c720
        ;   Label: FUN_0045c720
    PUSH ESI                            ; 0045c721
    PUSH EDI                            ; 0045c722
    PUSH EBP                            ; 0045c723
    MOV EBP,dword ptr [ESP + 0x14]      ; 0045c724
    MOV ESI,dword ptr [ESP + 0x18]      ; 0045c728
    CMP dword ptr [EBP + 0x2f9c],0x0    ; 0045c72c
    JZ 0x0045c7b5                       ; 0045c733
        ;   XREF to: 0045c7b5 (CONDITIONAL_JUMP)  ; LAB_0045c7b5
    MOV EDI,dword ptr [EBP + 0x11d4]    ; 0045c739
        ;   Label: LAB_0045c739
    CMP EDI,dword ptr [ESI + 0x4]       ; 0045c73f
    JGE 0x0045c7b0                      ; 0045c742
        ;   XREF to: 0045c7b0 (CONDITIONAL_JUMP)  ; LAB_0045c7b0
    MOV EDX,dword ptr [EBP + 0x11d8]    ; 0045c748
    CMP EDX,dword ptr [ESI + 0xc]       ; 0045c74e
    JGE 0x0045c7b0                      ; 0045c751
        ;   XREF to: 0045c7b0 (CONDITIONAL_JUMP)  ; LAB_0045c7b0
    MOV ECX,dword ptr [EBP + 0x11dc]    ; 0045c753
    CMP ECX,dword ptr [ESI]             ; 0045c759
    JLE 0x0045c7b0                      ; 0045c75b
        ;   XREF to: 0045c7b0 (CONDITIONAL_JUMP)  ; LAB_0045c7b0
    MOV EBX,dword ptr [EBP + 0x11e0]    ; 0045c75d
    MOV EAX,dword ptr [ESI + 0x8]       ; 0045c763
    CMP EAX,EBX                         ; 0045c766
    JGE 0x0045c7b0                      ; 0045c768
        ;   XREF to: 0045c7b0 (CONDITIONAL_JUMP)  ; LAB_0045c7b0
    MOV EDI,EAX                         ; 0045c76a
    CMP EDI,dword ptr [ESI + 0xc]       ; 0045c76c
    JG 0x0045c7b0                       ; 0045c76f
        ;   XREF to: 0045c7b0 (CONDITIONAL_JUMP)  ; LAB_0045c7b0
    MOV EAX,dword ptr [EBP + 0x1cc0]    ; 0045c771
        ;   Label: LAB_0045c771
    IMUL EAX,EDI                        ; 0045c777
    ADD EAX,dword ptr [ESI]             ; 0045c77a
    MOV EDX,dword ptr [EBP + 0x2f94]    ; 0045c77c
    ADD EAX,EAX                         ; 0045c782
    LEA ECX,[EDX + EAX*0x1]             ; 0045c784
    MOV EDX,dword ptr [EBP + 0x2f9c]    ; 0045c787
    MOV EBX,dword ptr [ESI]             ; 0045c78d
    ADD EDX,EAX                         ; 0045c78f
    MOV EAX,dword ptr [ESI + 0x4]       ; 0045c791
    SUB EAX,EBX                         ; 0045c794
    ADD EAX,EAX                         ; 0045c796
    ADD EAX,0x2                         ; 0045c798
    PUSH EAX                            ; 0045c79b
    PUSH EDX                            ; 0045c79c
    PUSH ECX                            ; 0045c79d
    INC EDI                             ; 0045c79e
    CALL FUN_00471271                   ; 0045c79f
        ;   XREF to: 00471271 (UNCONDITIONAL_CALL)  ; undefined FUN_00471271()
    MOV EAX,dword ptr [ESI + 0xc]       ; 0045c7a4
    ADD ESP,0xc                         ; 0045c7a7
    CMP EDI,EAX                         ; 0045c7aa
    JLE 0x0045c771                      ; 0045c7ac
        ;   XREF to: 0045c771 (CONDITIONAL_JUMP)  ; LAB_0045c771
    MOV EAX,EAX                         ; 0045c7ae
    POP EBP                             ; 0045c7b0
        ;   Label: LAB_0045c7b0
    POP EDI                             ; 0045c7b1
    POP ESI                             ; 0045c7b2
    POP EBX                             ; 0045c7b3
    RET                                 ; 0045c7b4
    MOV ECX,0x5bb314                    ; 0045c7b5 | = "..\\core\\dlight.cpp"
        ;   Label: LAB_0045c7b5
    MOV EBX,0x147                       ; 0045c7ba
    PUSH 0x5bb327                       ; 0045c7bf | = "CDemonLight::blitZBuffer - No master ..."
    MOV dword ptr [0x01d71de0],ECX      ; 0045c7c4 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 0045c7ca | DAT_01d71de4
    CALL FUN_004e4330                   ; 0045c7d0
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 0045c7d5
    JMP 0x0045c739                      ; 0045c7d8
        ;   XREF to: 0045c739 (UNCONDITIONAL_JUMP)  ; LAB_0045c739


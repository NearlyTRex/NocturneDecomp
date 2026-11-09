; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fldnotes_cpp_FUN_004aa620(int param_1)
;
;
; XREF[1]:
;   core_fldnotes.cpp_FUN_004aa490 at 004aa59a
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aa620
        ;   Label: core_fldnotes.cpp_FUN_004aa620
    PUSH ESI                            ; 004aa621
    PUSH EDI                            ; 004aa622
    PUSH EBP                            ; 004aa623
    MOV ECX,dword ptr [ESP + 0x14]      ; 004aa624
    MOV EDX,dword ptr [ECX + 0x80]      ; 004aa628
    XOR EBP,EBP                         ; 004aa62e
    XOR ESI,ESI                         ; 004aa630
    TEST EDX,EDX                        ; 004aa632
    JLE 0x004aa6b6                      ; 004aa634
        ;   XREF to: 004aa6b6 (CONDITIONAL_JUMP)  ; LAB_004aa6b6
    MOV EDI,dword ptr [ECX + 0x7c]      ; 004aa63a
        ;   Label: LAB_004aa63a
    XOR EBX,EBX                         ; 004aa63d
    TEST EDI,EDI                        ; 004aa63f
    JLE 0x004aa6ad                      ; 004aa641
        ;   XREF to: 004aa6ad (CONDITIONAL_JUMP)  ; LAB_004aa6ad
    MOV EDX,dword ptr [ECX + 0x98]      ; 004aa643
        ;   Label: LAB_004aa643
    IMUL EDX,EBP                        ; 004aa649
    MOV EDI,dword ptr [ECX + 0x80]      ; 004aa64c
    MOV EAX,EDX                         ; 004aa652
    SAR EDX,0x1f                        ; 004aa654
    IDIV EDI                            ; 004aa657
    MOV EDX,dword ptr [ECX + 0x94]      ; 004aa659
    IMUL EDX,EBX                        ; 004aa65f
    MOV EDI,EAX                         ; 004aa662
    MOV EAX,EDX                         ; 004aa664
    SAR EDX,0x1f                        ; 004aa666
    IDIV dword ptr [ECX + 0x7c]         ; 004aa669
    MOV EDX,dword ptr [ECX + 0x94]      ; 004aa66c
    IMUL EDX,EDI                        ; 004aa672
    ADD EDX,EAX                         ; 004aa675
    MOV EAX,dword ptr [ECX + 0x84]      ; 004aa677
    MOVZX EDI,byte ptr [ESI + EAX*0x1]  ; 004aa67d
    MOV EAX,dword ptr [ECX + 0x8c]      ; 004aa681
    ADD EAX,EDX                         ; 004aa687
    XOR EDX,EDX                         ; 004aa689
    MOV DL,byte ptr [EAX]               ; 004aa68b
    IMUL EDX,EDI                        ; 004aa68d
    MOV EDI,0xff                        ; 004aa690
    MOV EAX,EDX                         ; 004aa695
    SAR EDX,0x1f                        ; 004aa697
    IDIV EDI                            ; 004aa69a
    MOV DL,AL                           ; 004aa69c
    MOV EAX,dword ptr [ECX + 0x74]      ; 004aa69e
    MOV byte ptr [ESI + EAX*0x1],DL     ; 004aa6a1
    INC EBX                             ; 004aa6a4
    MOV EAX,dword ptr [ECX + 0x7c]      ; 004aa6a5
    INC ESI                             ; 004aa6a8
    CMP EBX,EAX                         ; 004aa6a9
    JL 0x004aa643                       ; 004aa6ab
        ;   XREF to: 004aa643 (CONDITIONAL_JUMP)  ; LAB_004aa643
    INC EBP                             ; 004aa6ad
        ;   Label: LAB_004aa6ad
    CMP EBP,dword ptr [ECX + 0x80]      ; 004aa6ae
    JL 0x004aa63a                       ; 004aa6b4
        ;   XREF to: 004aa63a (CONDITIONAL_JUMP)  ; LAB_004aa63a
    MOV dword ptr [ECX + 0x1268],0x0    ; 004aa6b6
        ;   Label: LAB_004aa6b6
    POP EBP                             ; 004aa6c0
    POP EDI                             ; 004aa6c1
    POP ESI                             ; 004aa6c2
    POP EBX                             ; 004aa6c3
    RET                                 ; 004aa6c4


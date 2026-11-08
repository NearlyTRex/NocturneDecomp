; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004db830(int param_1,undefined4 param_2)
;
;
; XREF[4]:
;   FUN_0048e7e0 at 0048f184
;   FUN_004b90d0 at 004b9a88
;   FUN_00522350 at 00526a1f
;   FUN_00583160 at 00583336
;
; Called Functions:
;   FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004db830
        ;   Label: FUN_004db830
    PUSH ESI                            ; 004db831
    PUSH EDI                            ; 004db832
    PUSH EBP                            ; 004db833
    MOV EDI,dword ptr [ESP + 0x14]      ; 004db834
    MOV EBP,dword ptr [ESP + 0x18]      ; 004db838
    MOV EDX,dword ptr [EDI + 0x10]      ; 004db83c
    XOR ESI,ESI                         ; 004db83f
    TEST EDX,EDX                        ; 004db841
    JLE 0x004db871                      ; 004db843
        ;   XREF to: 004db871 (CONDITIONAL_JUMP)  ; LAB_004db871
    MOV EBX,EDI                         ; 004db845
    PUSH EBP                            ; 004db847
        ;   Label: LAB_004db847
    MOV EAX,dword ptr [EBX + 0x14]      ; 004db848
    PUSH EAX                            ; 004db84b
    CALL FUN_005b8130                   ; 004db84c
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 004db851
    TEST EAX,EAX                        ; 004db854
    JNZ 0x004db866                      ; 004db856
        ;   XREF to: 004db866 (CONDITIONAL_JUMP)  ; LAB_004db866
    MOV EDX,dword ptr [EDI + 0x468]     ; 004db858
    CMP EDX,dword ptr [EBX + 0x46c]     ; 004db85e
    JZ 0x004db878                       ; 004db864
        ;   XREF to: 004db878 (CONDITIONAL_JUMP)  ; LAB_004db878
    INC ESI                             ; 004db866
        ;   Label: LAB_004db866
    MOV ECX,dword ptr [EDI + 0x10]      ; 004db867
    ADD EBX,0x4                         ; 004db86a
    CMP ESI,ECX                         ; 004db86d
    JL 0x004db847                       ; 004db86f
        ;   XREF to: 004db847 (CONDITIONAL_JUMP)  ; LAB_004db847
    XOR EAX,EAX                         ; 004db871
        ;   Label: LAB_004db871
    POP EBP                             ; 004db873
    POP EDI                             ; 004db874
    POP ESI                             ; 004db875
    POP EBX                             ; 004db876
    RET                                 ; 004db877
    MOV EAX,dword ptr [EBX + 0x14]      ; 004db878
        ;   Label: LAB_004db878
    POP EBP                             ; 004db87b
    POP EDI                             ; 004db87c
    POP ESI                             ; 004db87d
    POP EBX                             ; 004db87e
    RET                                 ; 004db87f


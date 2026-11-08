; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0044a810(int param_1,int *param_2,byte param_3,byte param_4)
;
;
; XREF[1]:
;   FUN_0043d220 at 0043d6ae
;
; Referenced Globals:
;   undefined4 DAT_0060afc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044a810
        ;   Label: FUN_0044a810
    PUSH ESI                            ; 0044a811
    PUSH EDI                            ; 0044a812
    PUSH EBP                            ; 0044a813
    MOV EBX,dword ptr [ESP + 0x14]      ; 0044a814
    MOV ESI,dword ptr [ESP + 0x18]      ; 0044a818
    MOV CL,byte ptr [ESP + 0x1c]        ; 0044a81c
    XOR EDX,EDX                         ; 0044a820
    XOR EAX,EAX                         ; 0044a822
    TEST CL,0x1                         ; 0044a824
    JZ 0x0044a830                       ; 0044a827
        ;   XREF to: 0044a830 (CONDITIONAL_JUMP)  ; LAB_0044a830
    MOV EAX,0x4000                      ; 0044a829
    MOV EDX,EAX                         ; 0044a82e
    TEST byte ptr [ESP + 0x20],0x1      ; 0044a830
        ;   Label: LAB_0044a830
    JZ 0x0044a83d                       ; 0044a835
        ;   XREF to: 0044a83d (CONDITIONAL_JUMP)  ; LAB_0044a83d
    OR DH,0x80                          ; 0044a837
    OR AH,0x80                          ; 0044a83a
    CMP dword ptr [ESI + 0x8],0x0       ; 0044a83d
        ;   Label: LAB_0044a83d
    JLE 0x0044a884                      ; 0044a841
        ;   XREF to: 0044a884 (CONDITIONAL_JUMP)  ; LAB_0044a884
    MOV EDI,dword ptr [ESI]             ; 0044a843
    MOV EBP,dword ptr [ESI + 0x4]       ; 0044a845
    LEA ECX,[EAX + EDI*0x1]             ; 0044a848
    LEA ESI,[EDX + EBP*0x1]             ; 0044a84b
    SAR ECX,0x10                        ; 0044a84e
    MOV EAX,dword ptr [EBX + 0x1cb8]    ; 0044a851
    SAR ESI,0x10                        ; 0044a857
    TEST EAX,EAX                        ; 0044a85a
    JZ 0x0044a88b                       ; 0044a85c
        ;   XREF to: 0044a88b (CONDITIONAL_JUMP)  ; LAB_0044a88b
    MOV EAX,dword ptr [EBX + 0x1cc0]    ; 0044a85e
    MOV EDX,EAX                         ; 0044a864
    SAR EDX,0x1f                        ; 0044a866
    SUB EAX,EDX                         ; 0044a869
    SAR EAX,0x1                         ; 0044a86b
    MOV EDI,ECX                         ; 0044a86d
    SUB EDI,EAX                         ; 0044a86f
    IMUL EDI,EDI                        ; 0044a871
    MOV EDX,ESI                         ; 0044a874
    SUB EDX,EAX                         ; 0044a876
    IMUL EDX,EDX                        ; 0044a878
    IMUL EAX,EAX                        ; 0044a87b
    ADD EDX,EDI                         ; 0044a87e
    CMP EDX,EAX                         ; 0044a880
    JLE 0x0044a8a3                      ; 0044a882
        ;   XREF to: 0044a8a3 (CONDITIONAL_JUMP)  ; LAB_0044a8a3
    XOR EAX,EAX                         ; 0044a884
        ;   Label: LAB_0044a884
    POP EBP                             ; 0044a886
        ;   Label: LAB_0044a886
    POP EDI                             ; 0044a887
    POP ESI                             ; 0044a888
    POP EBX                             ; 0044a889
    RET                                 ; 0044a88a
    TEST ECX,ECX                        ; 0044a88b
        ;   Label: LAB_0044a88b
    JL 0x0044a886                       ; 0044a88d
        ;   XREF to: 0044a886 (CONDITIONAL_JUMP)  ; LAB_0044a886
    CMP ECX,dword ptr [EBX + 0x1cc0]    ; 0044a88f
    JGE 0x0044a886                      ; 0044a895
        ;   XREF to: 0044a886 (CONDITIONAL_JUMP)  ; LAB_0044a886
    TEST ESI,ESI                        ; 0044a897
    JL 0x0044a886                       ; 0044a899
        ;   XREF to: 0044a886 (CONDITIONAL_JUMP)  ; LAB_0044a886
    CMP ESI,dword ptr [EBX + 0x1cc4]    ; 0044a89b
    JGE 0x0044a886                      ; 0044a8a1
        ;   XREF to: 0044a886 (CONDITIONAL_JUMP)  ; LAB_0044a886
    MOV EDX,dword ptr [EBX + 0x1cc0]    ; 0044a8a3
        ;   Label: LAB_0044a8a3
    IMUL EDX,ESI                        ; 0044a8a9
    MOV EAX,EDX                         ; 0044a8ac
    SAR EDX,0x1f                        ; 0044a8ae
    SHL EDX,0x3                         ; 0044a8b1
    SBB EAX,EDX                         ; 0044a8b4
    SAR EAX,0x3                         ; 0044a8b6
    MOV EDI,EAX                         ; 0044a8b9
    MOV EDX,ECX                         ; 0044a8bb
    MOV EAX,ECX                         ; 0044a8bd
    SAR EDX,0x1f                        ; 0044a8bf
    SHL EDX,0x3                         ; 0044a8c2
    SBB EAX,EDX                         ; 0044a8c5
    SAR EAX,0x3                         ; 0044a8c7
    ADD EDI,EAX                         ; 0044a8ca
    MOV EAX,dword ptr [EBX + 0x2fa0]    ; 0044a8cc
    ADD EAX,EDI                         ; 0044a8d2
    MOV EDI,ECX                         ; 0044a8d4
    AND EDI,0x7                         ; 0044a8d6
    MOV DL,byte ptr [EDI + 0x60afc0]    ; 0044a8d9 | DAT_0060afc0
    OR byte ptr [EAX],DL                ; 0044a8df
    IMUL ESI,dword ptr [EBX + 0x1cc0]   ; 0044a8e1
    ADD ECX,ESI                         ; 0044a8e8
    MOV EAX,dword ptr [EBX + 0x2f94]    ; 0044a8ea
    ADD ECX,ECX                         ; 0044a8f0
    ADD EAX,ECX                         ; 0044a8f2
    POP EBP                             ; 0044a8f4
    POP EDI                             ; 0044a8f5
    POP ESI                             ; 0044a8f6
    POP EBX                             ; 0044a8f7
    RET                                 ; 0044a8f8


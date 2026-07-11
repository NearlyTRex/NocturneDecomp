; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_0056c750(uint param_1,char *param_2)
;
;
; XREF[1]:
;   FUN_0056c864 at 0056c9f7
;
; Referenced Globals:
;   void* PTR_CloseHandle_0057548c = 00175ad4
;   void* PTR_CreateFileA_00575498 = 00175b06
;   void* PTR_GetFileType_00575514 = 00175d4e
;   void* PTR_GetLastError_0057551c = 00175d70
;   undefined4 DAT_00598bd4
;   string s_conin$_00598bd8
;   undefined4 DAT_00598be0
;   undefined2 DAT_005c1d11
;
; Called Functions:
;   CloseHandle
;   CreateFileA
;   FUN_00564520
;   FUN_005649c0
;   GetFileType
;   GetLastError
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056c750
        ;   Label: FUN_0056c750
    PUSH ESI                            ; 0056c751
    PUSH EDI                            ; 0056c752
    MOV ESI,dword ptr [ESP + 0x14]      ; 0056c753
    MOV DX,word ptr [0x005c1d11]        ; 0056c757 | DAT_005c1d11
    XOR EBX,EBX                         ; 0056c75e
    CMP DX,0x8000                       ; 0056c760
    JNC 0x0056c76e                      ; 0056c765
        ;   XREF to: 0056c76e (CONDITIONAL_JUMP)  ; LAB_0056c76e
    MOV EAX,0x20                        ; 0056c767
    JMP 0x0056c773                      ; 0056c76c
        ;   XREF to: 0056c773 (UNCONDITIONAL_JUMP)  ; LAB_0056c773
    MOV EAX,0x40                        ; 0056c76e
        ;   Label: LAB_0056c76e
    TEST dword ptr [ESP + 0x10],EAX     ; 0056c773
        ;   Label: LAB_0056c773
    JZ 0x0056c7f7                       ; 0056c777
        ;   XREF to: 0056c7f7 (CONDITIONAL_JUMP)  ; LAB_0056c7f7
    PUSH 0x598bd4                       ; 0056c77d | DAT_00598bd4
    PUSH ESI                            ; 0056c782
    CALL FUN_00564520                   ; 0056c783
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined FUN_00564520()
    ADD ESP,0x8                         ; 0056c788
    TEST EAX,EAX                        ; 0056c78b
    JNZ 0x0056c796                      ; 0056c78d
        ;   XREF to: 0056c796 (CONDITIONAL_JUMP)  ; LAB_0056c796
    MOV EAX,0x598bd8                    ; 0056c78f | = "conin$"
    JMP 0x0056c798                      ; 0056c794
        ;   XREF to: 0056c798 (UNCONDITIONAL_JUMP)  ; LAB_0056c798
    MOV EAX,ESI                         ; 0056c796
        ;   Label: LAB_0056c796
    PUSH 0x0                            ; 0056c798
        ;   Label: LAB_0056c798
    PUSH 0x0                            ; 0056c79a
    PUSH 0x3                            ; 0056c79c
    PUSH 0x0                            ; 0056c79e
    PUSH 0x0                            ; 0056c7a0
    PUSH 0x0                            ; 0056c7a2
    PUSH EAX                            ; 0056c7a4 | = "conin$"
    CALL dword ptr CS:[0x575498]        ; 0056c7a5 | PTR_CreateFileA_00575498
    MOV EDI,EAX                         ; 0056c7ac
    CMP EAX,-0x1                        ; 0056c7ae
    JZ 0x0056c7db                       ; 0056c7b1
        ;   XREF to: 0056c7db (CONDITIONAL_JUMP)  ; LAB_0056c7db
    PUSH EAX                            ; 0056c7b3
    CALL dword ptr CS:[0x575514]        ; 0056c7b4 | PTR_GetFileType_00575514
    CMP EAX,0x2                         ; 0056c7bb
    JNZ 0x0056c7c7                      ; 0056c7be
        ;   XREF to: 0056c7c7 (CONDITIONAL_JUMP)  ; LAB_0056c7c7
    MOV EBX,0x2000                      ; 0056c7c0
    JMP 0x0056c7d1                      ; 0056c7c5
        ;   XREF to: 0056c7d1 (UNCONDITIONAL_JUMP)  ; LAB_0056c7d1
    CMP EAX,0x3                         ; 0056c7c7
        ;   Label: LAB_0056c7c7
    JNZ 0x0056c7d1                      ; 0056c7ca
        ;   XREF to: 0056c7d1 (CONDITIONAL_JUMP)  ; LAB_0056c7d1
    MOV EBX,0x1000                      ; 0056c7cc
    PUSH EDI                            ; 0056c7d1
        ;   Label: LAB_0056c7d1
    CALL dword ptr CS:[0x57548c]        ; 0056c7d2 | PTR_CloseHandle_0057548c
    JMP 0x0056c7f7                      ; 0056c7d9
        ;   XREF to: 0056c7f7 (UNCONDITIONAL_JUMP)  ; LAB_0056c7f7
    CMP word ptr [0x005c1d11],0x8000    ; 0056c7db | DAT_005c1d11
        ;   Label: LAB_0056c7db
    JNC 0x0056c7f2                      ; 0056c7e4
        ;   XREF to: 0056c7f2 (CONDITIONAL_JUMP)  ; LAB_0056c7f2
    CALL dword ptr CS:[0x57551c]        ; 0056c7e6 | PTR_GetLastError_0057551c
    CMP EAX,0x5                         ; 0056c7ed
    JNZ 0x0056c7f7                      ; 0056c7f0
        ;   XREF to: 0056c7f7 (CONDITIONAL_JUMP)  ; LAB_0056c7f7
    MOV EBX,0x2000                      ; 0056c7f2
        ;   Label: LAB_0056c7f2
    TEST byte ptr [ESP + 0x10],0x10     ; 0056c7f7
        ;   Label: LAB_0056c7f7
    JZ 0x0056c80a                       ; 0056c7fc
        ;   XREF to: 0056c80a (CONDITIONAL_JUMP)  ; LAB_0056c80a
    AND BX,0xfb6                        ; 0056c7fe
    OR BX,0x4049                        ; 0056c803
    JMP 0x0056c84b                      ; 0056c808
        ;   XREF to: 0056c84b (UNCONDITIONAL_JUMP)  ; LAB_0056c84b
    TEST BH,0x20                        ; 0056c80a
        ;   Label: LAB_0056c80a
    JNZ 0x0056c84b                      ; 0056c80d
        ;   XREF to: 0056c84b (CONDITIONAL_JUMP)  ; LAB_0056c84b
    TEST BH,0x10                        ; 0056c80f
    JNZ 0x0056c84b                      ; 0056c812
        ;   XREF to: 0056c84b (CONDITIONAL_JUMP)  ; LAB_0056c84b
    MOV DL,0x2e                         ; 0056c814
    OR BH,0x80                          ; 0056c816
    MOV AL,byte ptr [ESI]               ; 0056c819
        ;   Label: LAB_0056c819
    CMP AL,DL                           ; 0056c81b
    JZ 0x0056c831                       ; 0056c81d
        ;   XREF to: 0056c831 (CONDITIONAL_JUMP)  ; LAB_0056c831
    CMP AL,0x0                          ; 0056c81f
    JZ 0x0056c82f                       ; 0056c821
        ;   XREF to: 0056c82f (CONDITIONAL_JUMP)  ; LAB_0056c82f
    INC ESI                             ; 0056c823
    MOV AL,byte ptr [ESI]               ; 0056c824
    CMP AL,DL                           ; 0056c826
    JZ 0x0056c831                       ; 0056c828
        ;   XREF to: 0056c831 (CONDITIONAL_JUMP)  ; LAB_0056c831
    INC ESI                             ; 0056c82a
    CMP AL,0x0                          ; 0056c82b
    JNZ 0x0056c819                      ; 0056c82d
        ;   XREF to: 0056c819 (CONDITIONAL_JUMP)  ; LAB_0056c819
    SUB ESI,ESI                         ; 0056c82f
        ;   Label: LAB_0056c82f
    TEST ESI,ESI                        ; 0056c831
        ;   Label: LAB_0056c831
    JZ 0x0056c84b                       ; 0056c833
        ;   XREF to: 0056c84b (CONDITIONAL_JUMP)  ; LAB_0056c84b
    PUSH 0x598be0                       ; 0056c835 | DAT_00598be0
    INC ESI                             ; 0056c83a
    PUSH ESI                            ; 0056c83b
    CALL FUN_005649c0                   ; 0056c83c
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005649c0()
    ADD ESP,0x8                         ; 0056c841
    TEST EAX,EAX                        ; 0056c844
    JNZ 0x0056c84b                      ; 0056c846
        ;   XREF to: 0056c84b (CONDITIONAL_JUMP)  ; LAB_0056c84b
    OR BL,0x49                          ; 0056c848
    MOV DL,byte ptr [ESP + 0x10]        ; 0056c84b
        ;   Label: LAB_0056c84b
    OR BX,0x124                         ; 0056c84f
    TEST DL,0x1                         ; 0056c854
    JNZ 0x0056c85c                      ; 0056c857
        ;   XREF to: 0056c85c (CONDITIONAL_JUMP)  ; LAB_0056c85c
    OR BL,0x92                          ; 0056c859
    MOV EAX,EBX                         ; 0056c85c
        ;   Label: LAB_0056c85c
    POP EDI                             ; 0056c85e
    POP ESI                             ; 0056c85f
    POP EBX                             ; 0056c860
    RET                                 ; 0056c861


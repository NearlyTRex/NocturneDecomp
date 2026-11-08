; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; HANDLE FUN_005c67b0(undefined4 param_1,int param_2,undefined4 param_3)
;
;
; Referenced Globals:
;   void* PTR_CloseHandle_005c850c = 001c8c32
;   void* PTR_CreateEventA_005c8514 = 001c8c54
;   void* PTR_CreateThread_005c8520 = 001c8c82
;   void* PTR_GetCurrentThreadId_005c8580 = 001c8e42
;   void* PTR_GetCurrentThread_005c8584 = 001c8e58
;   void* PTR_WaitForSingleObject_005c866c = 001c9290
;   undefined4 DAT_005f2114
;   undefined4 DAT_005f2118
;   undefined1 DAT_005f211c
;   undefined4 DAT_0061f2a0
;
; Called Functions:
;   CloseHandle
;   CreateEventA
;   CreateThread
;   FUN_005bafd8
;   FUN_005c297c
;   FUN_005c2ab4
;   GetCurrentThread
;   GetCurrentThreadId
;   WaitForSingleObject
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c67b0
        ;   Label: FUN_005c67b0
    PUSH ESI                            ; 005c67b1
    PUSH EDI                            ; 005c67b2
    PUSH ES                             ; 005c67b3
    PUSH EBP                            ; 005c67b4
    SUB ESP,0x38                        ; 005c67b5
    MOV EBX,dword ptr [ESP + 0x54]      ; 005c67b8
    CMP dword ptr [0x0061f2a0],-0x1     ; 005c67bc | DAT_0061f2a0
    JNZ 0x005c67d7                      ; 005c67c3
        ;   XREF to: 005c67d7 (CONDITIONAL_JUMP)  ; LAB_005c67d7
    CALL FUN_005c297c                   ; 005c67c5
        ;   XREF to: 005c297c (UNCONDITIONAL_CALL)  ; undefined FUN_005c297c()
    TEST EAX,EAX                        ; 005c67ca
    JZ 0x005c689c                       ; 005c67cc
        ;   XREF to: 005c689c (CONDITIONAL_JUMP)  ; LAB_005c689c
    CALL FUN_005c2ab4                   ; 005c67d2
        ;   XREF to: 005c2ab4 (UNCONDITIONAL_CALL)  ; undefined FUN_005c2ab4()
    LEA EAX,[EBX + 0xfff]               ; 005c67d7
        ;   Label: LAB_005c67d7
    XOR AL,AL                           ; 005c67dd
    AND AH,0xf0                         ; 005c67df
    MOV EBX,EAX                         ; 005c67e2
    MOV EAX,dword ptr [ESP + 0x50]      ; 005c67e4
    MOV dword ptr [ESP + 0x20],EAX      ; 005c67e8
    MOV EAX,dword ptr [ESP + 0x58]      ; 005c67ec
    MOV EDI,ESP                         ; 005c67f0
    MOV dword ptr [ESP + 0x24],EAX      ; 005c67f2
    CALL dword ptr CS:[0x5c8584]        ; 005c67f6 | PTR_GetCurrentThread_005c8584
    PUSH 0x10                           ; 005c67fd
    MOV dword ptr [ESP + 0x2c],EAX      ; 005c67ff
    MOV AX,DS                           ; 005c6803
    XOR ECX,ECX                         ; 005c6805
    MOV ES,AX                           ; 005c6807
    LEA EAX,[ESP + 0xc]                 ; 005c6809
    MOV ESI,0x5f2114                    ; 005c680d | DAT_005f2114
    MOV dword ptr [ESP + 0x34],ECX      ; 005c6812
    PUSH EAX                            ; 005c6816
    MOVSD ES:EDI,ESI                    ; 005c6817 | DAT_005f2114
    MOVSD ES:EDI,ESI                    ; 005c6818 | DAT_005f2118
    MOVSB ES:EDI,ESI                    ; 005c6819 | DAT_005f211c
    CALL dword ptr CS:[0x5c8580]        ; 005c681a | PTR_GetCurrentThreadId_005c8580
    PUSH EAX                            ; 005c6821
    CALL FUN_005bafd8                   ; 005c6822
        ;   XREF to: 005bafd8 (UNCONDITIONAL_CALL)  ; undefined FUN_005bafd8()
    ADD ESP,0xc                         ; 005c6827
    MOV EAX,ESP                         ; 005c682a
    PUSH EAX                            ; 005c682c
    PUSH 0x0                            ; 005c682d
    PUSH 0x0                            ; 005c682f
    PUSH 0x0                            ; 005c6831
    CALL dword ptr CS:[0x5c8514]        ; 005c6833 | PTR_CreateEventA_005c8514
    MOV dword ptr [ESP + 0x2c],EAX      ; 005c683a
    LEA EAX,[ESP + 0x34]                ; 005c683e
    PUSH EAX                            ; 005c6842
    PUSH 0x0                            ; 005c6843
    LEA EAX,[ESP + 0x28]                ; 005c6845
    PUSH EAX                            ; 005c6849
    PUSH 0x5c6710                       ; 005c684a
    PUSH EBX                            ; 005c684f
    PUSH 0x0                            ; 005c6850
    CALL dword ptr CS:[0x5c8520]        ; 005c6852 | PTR_CreateThread_005c8520
    MOV EBX,EAX                         ; 005c6859
    MOV ESI,EAX                         ; 005c685b
    TEST EAX,EAX                        ; 005c685d
    JNZ 0x005c686b                      ; 005c685f
        ;   XREF to: 005c686b (CONDITIONAL_JUMP)  ; LAB_005c686b
    MOV dword ptr [ESP + 0x34],0xffffffff ; 005c6861
    JMP 0x005c688e                      ; 005c6869
        ;   XREF to: 005c688e (UNCONDITIONAL_JUMP)  ; LAB_005c688e
    PUSH -0x1                           ; 005c686b
        ;   Label: LAB_005c686b
    MOV EDI,dword ptr [ESP + 0x30]      ; 005c686d
    PUSH EDI                            ; 005c6871
    CALL dword ptr CS:[0x5c866c]        ; 005c6872 | PTR_WaitForSingleObject_005c866c
    MOV EBP,dword ptr [ESP + 0x30]      ; 005c6879
    TEST EBP,EBP                        ; 005c687d
    JZ 0x005c6886                       ; 005c687f
        ;   XREF to: 005c6886 (CONDITIONAL_JUMP)  ; LAB_005c6886
    MOV dword ptr [EBP],EBX             ; 005c6881
    JMP 0x005c688e                      ; 005c6884
        ;   XREF to: 005c688e (UNCONDITIONAL_JUMP)  ; LAB_005c688e
    PUSH EBX                            ; 005c6886
        ;   Label: LAB_005c6886
    CALL dword ptr CS:[0x5c850c]        ; 005c6887 | PTR_CloseHandle_005c850c
    MOV EDX,dword ptr [ESP + 0x2c]      ; 005c688e
        ;   Label: LAB_005c688e
    PUSH EDX                            ; 005c6892
    CALL dword ptr CS:[0x5c850c]        ; 005c6893 | PTR_CloseHandle_005c850c
    MOV EAX,ESI                         ; 005c689a
    ADD ESP,0x38                        ; 005c689c
        ;   Label: LAB_005c689c
    POP EBP                             ; 005c689f
    POP ES                              ; 005c68a0
    POP EDI                             ; 005c68a1
    POP ESI                             ; 005c68a2
    POP EBX                             ; 005c68a3
    RET                                 ; 005c68a4


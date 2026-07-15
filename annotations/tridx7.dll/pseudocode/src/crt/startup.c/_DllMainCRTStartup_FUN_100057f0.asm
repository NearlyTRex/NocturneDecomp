; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_startup_c__DllMainCRTStartup_FUN_100057f0(HINSTANCE hinst_dll,DWORD reason,LPVOID reserved)
;
; Parameters:
; HINSTANCE        Stack[0x4]:4   hinst_dll
; DWORD            Stack[0x8]:4   reason
; LPVOID           Stack[0xc]:4   reserved
;
; Referenced Globals:
;   undefined4 DAT_10016c60
;   undefined4 DAT_10241984
;
; Called Functions:
;   crt_heap.c__heap_term_FUN_10007910
;   crt_startup.c___CRTDLL_INIT_FUN_100056a0
;   crt_startup.c_DllMain_FUN_100085c0
;   crt_thread.c__mtterm_FUN_10007760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 100057f0
        ;   Label: crt_startup.c__DllMainCRTStartup_FUN_100057f0
    PUSH ESI                            ; 100057f1
    PUSH EDI                            ; 100057f2
    MOV EBX,0x1                         ; 100057f3
    MOV EDI,dword ptr [ESP + 0x14]      ; 100057f8
    PUSH EBP                            ; 100057fc
    CMP EDI,EBX                         ; 100057fd
    JNZ 0x1000582b                      ; 100057ff
        ;   XREF to: 1000582b (CONDITIONAL_JUMP)  ; LAB_1000582b
    ADD dword ptr [0x10016c60],EBX      ; 10005801 | DAT_10016c60
    CMP EDI,0x1                         ; 10005807
        ;   Label: LAB_10005807
    JZ 0x10005811                       ; 1000580a
        ;   XREF to: 10005811 (CONDITIONAL_JUMP)  ; LAB_10005811
    CMP EDI,0x2                         ; 1000580c
    JNZ 0x1000585d                      ; 1000580f
        ;   XREF to: 1000585d (CONDITIONAL_JUMP)  ; LAB_1000585d
    MOV EAX,[0x10241984]                ; 10005811 | DAT_10241984
        ;   Label: LAB_10005811
    MOV ESI,dword ptr [ESP + 0x1c]      ; 10005816
    TEST EAX,EAX                        ; 1000581a
    JZ 0x10005849                       ; 1000581c
        ;   XREF to: 10005849 (CONDITIONAL_JUMP)  ; LAB_10005849
    MOV EBP,dword ptr [ESP + 0x14]      ; 1000581e
    PUSH ESI                            ; 10005822
    PUSH EDI                            ; 10005823
    PUSH EBP                            ; 10005824
    CALL EAX                            ; 10005825
    MOV EBX,EAX                         ; 10005827
    JMP 0x1000584d                      ; 10005829
        ;   XREF to: 1000584d (UNCONDITIONAL_JUMP)  ; LAB_1000584d
    TEST EDI,EDI                        ; 1000582b
        ;   Label: LAB_1000582b
    JNZ 0x10005807                      ; 1000582d
        ;   XREF to: 10005807 (CONDITIONAL_JUMP)  ; LAB_10005807
    MOV EAX,[0x10016c60]                ; 1000582f | DAT_10016c60
    TEST EAX,EAX                        ; 10005834
    JLE 0x10005840                      ; 10005836
        ;   XREF to: 10005840 (CONDITIONAL_JUMP)  ; LAB_10005840
    DEC EAX                             ; 10005838
    MOV [0x10016c60],EAX                ; 10005839 | DAT_10016c60
    JMP 0x10005807                      ; 1000583e
        ;   XREF to: 10005807 (UNCONDITIONAL_JUMP)  ; LAB_10005807
    XOR EAX,EAX                         ; 10005840
        ;   Label: LAB_10005840
    POP EBP                             ; 10005842
    POP EDI                             ; 10005843
    POP ESI                             ; 10005844
    POP EBX                             ; 10005845
    RET 0xc                             ; 10005846
    MOV EBP,dword ptr [ESP + 0x14]      ; 10005849
        ;   Label: LAB_10005849
    TEST EBX,EBX                        ; 1000584d
        ;   Label: LAB_1000584d
    JZ 0x10005873                       ; 1000584f
        ;   XREF to: 10005873 (CONDITIONAL_JUMP)  ; LAB_10005873
    PUSH ESI                            ; 10005851
    PUSH EDI                            ; 10005852
    PUSH EBP                            ; 10005853
    CALL crt_startup.c___CRTDLL_INIT_FUN_100056a0 ; 10005854
        ;   XREF to: 100056a0 (UNCONDITIONAL_CALL)  ; BOOL crt_startup.c___CRTDLL_INIT_FUN_100056a0(HINSTANCE hinst_dll, DWORD reason, LPVOID reserved)
    MOV EBX,EAX                         ; 10005859
    JMP 0x10005865                      ; 1000585b
        ;   XREF to: 10005865 (UNCONDITIONAL_JUMP)  ; LAB_10005865
    MOV ESI,dword ptr [ESP + 0x1c]      ; 1000585d
        ;   Label: LAB_1000585d
    MOV EBP,dword ptr [ESP + 0x14]      ; 10005861
    TEST EBX,EBX                        ; 10005865
        ;   Label: LAB_10005865
    JZ 0x10005877                       ; 10005867
        ;   XREF to: 10005877 (CONDITIONAL_JUMP)  ; LAB_10005877
    PUSH ESI                            ; 10005869
    PUSH EDI                            ; 1000586a
    PUSH EBP                            ; 1000586b
    CALL crt_startup.c_DllMain_FUN_100085c0 ; 1000586c
        ;   XREF to: 100085c0 (UNCONDITIONAL_CALL)  ; BOOL crt_startup.c_DllMain_FUN_100085c0(HINSTANCE hinst_dll, DWORD reason, LPVOID reserved)
    MOV EBX,EAX                         ; 10005871
    TEST EBX,EBX                        ; 10005873
        ;   Label: LAB_10005873
    JNZ 0x10005886                      ; 10005875
        ;   XREF to: 10005886 (CONDITIONAL_JUMP)  ; LAB_10005886
    CMP EDI,0x1                         ; 10005877
        ;   Label: LAB_10005877
    JNZ 0x10005886                      ; 1000587a
        ;   XREF to: 10005886 (CONDITIONAL_JUMP)  ; LAB_10005886
    CALL crt_thread.c__mtterm_FUN_10007760 ; 1000587c
        ;   XREF to: 10007760 (UNCONDITIONAL_CALL)  ; void crt_thread.c__mtterm_FUN_10007760()
    CALL crt_heap.c__heap_term_FUN_10007910 ; 10005881
        ;   XREF to: 10007910 (UNCONDITIONAL_CALL)  ; void crt_heap.c__heap_term_FUN_10007910()
    TEST EDI,EDI                        ; 10005886
        ;   Label: LAB_10005886
    JZ 0x1000588f                       ; 10005888
        ;   XREF to: 1000588f (CONDITIONAL_JUMP)  ; LAB_1000588f
    CMP EDI,0x3                         ; 1000588a
    JNZ 0x100058b1                      ; 1000588d
        ;   XREF to: 100058b1 (CONDITIONAL_JUMP)  ; LAB_100058b1
    PUSH ESI                            ; 1000588f
        ;   Label: LAB_1000588f
    PUSH EDI                            ; 10005890
    PUSH EBP                            ; 10005891
    CALL crt_startup.c___CRTDLL_INIT_FUN_100056a0 ; 10005892
        ;   XREF to: 100056a0 (UNCONDITIONAL_CALL)  ; BOOL crt_startup.c___CRTDLL_INIT_FUN_100056a0(HINSTANCE hinst_dll, DWORD reason, LPVOID reserved)
    TEST EAX,EAX                        ; 10005897
    JNZ 0x1000589d                      ; 10005899
        ;   XREF to: 1000589d (CONDITIONAL_JUMP)  ; LAB_1000589d
    XOR EBX,EBX                         ; 1000589b
    TEST EBX,EBX                        ; 1000589d
        ;   Label: LAB_1000589d
    JZ 0x100058b1                       ; 1000589f
        ;   XREF to: 100058b1 (CONDITIONAL_JUMP)  ; LAB_100058b1
    MOV EAX,[0x10241984]                ; 100058a1 | DAT_10241984
    TEST EAX,EAX                        ; 100058a6
    JZ 0x100058b1                       ; 100058a8
        ;   XREF to: 100058b1 (CONDITIONAL_JUMP)  ; LAB_100058b1
    PUSH ESI                            ; 100058aa
    PUSH EDI                            ; 100058ab
    PUSH EBP                            ; 100058ac
    CALL EAX                            ; 100058ad
    MOV EBX,EAX                         ; 100058af
    MOV EAX,EBX                         ; 100058b1
        ;   Label: LAB_100058b1
    POP EBP                             ; 100058b3
    POP EDI                             ; 100058b4
    POP ESI                             ; 100058b5
    POP EBX                             ; 100058b6
    RET 0xc                             ; 100058b7


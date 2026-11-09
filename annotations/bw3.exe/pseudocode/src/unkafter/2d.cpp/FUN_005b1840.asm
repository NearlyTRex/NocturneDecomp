; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; HANDLE unkafter_2d_cpp_FUN_005b1840(undefined4 param_1,int param_2,undefined4 param_3)
;
;
; Referenced Globals:
;   void* PTR_CloseHandle_005b3518 = 001b3c48
;   void* PTR_CreateEventA_005b3520 = 001b3c6a
;   void* PTR_CreateThread_005b352c = 001b3c98
;   void* PTR_GetCurrentThreadId_005b3590 = 001b3e70
;   void* PTR_GetCurrentThread_005b3594 = 001b3e86
;   void* PTR_WaitForSingleObject_005b3680 = 001b42d2
;   undefined4 DAT_005daf78
;   undefined4 DAT_005daf7c
;   undefined1 DAT_005daf80
;   undefined4 DAT_0060799c
;
; Called Functions:
;   CloseHandle
;   CreateEventA
;   CreateThread
;   crt_unknown.c_FUN_005acc88
;   GetCurrentThread
;   GetCurrentThreadId
;   unkafter_asgaya.cpp_FUN_005adaec
;   unkafter_asgaya.cpp_FUN_005adc24
;   WaitForSingleObject
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b1840
        ;   Label: unkafter_2d.cpp_FUN_005b1840
    PUSH ESI                            ; 005b1841
    PUSH EDI                            ; 005b1842
    PUSH ES                             ; 005b1843
    PUSH EBP                            ; 005b1844
    SUB ESP,0x38                        ; 005b1845
    MOV EBX,dword ptr [ESP + 0x54]      ; 005b1848
    CMP dword ptr [0x0060799c],-0x1     ; 005b184c | DAT_0060799c
    JNZ 0x005b1867                      ; 005b1853
        ;   XREF to: 005b1867 (CONDITIONAL_JUMP)  ; LAB_005b1867
    CALL unkafter_asgaya.cpp_FUN_005adaec ; 005b1855
        ;   XREF to: 005adaec (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005adaec()
    TEST EAX,EAX                        ; 005b185a
    JZ 0x005b192c                       ; 005b185c
        ;   XREF to: 005b192c (CONDITIONAL_JUMP)  ; LAB_005b192c
    CALL unkafter_asgaya.cpp_FUN_005adc24 ; 005b1862
        ;   XREF to: 005adc24 (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005adc24()
    LEA EAX,[EBX + 0xfff]               ; 005b1867
        ;   Label: LAB_005b1867
    XOR AL,AL                           ; 005b186d
    AND AH,0xf0                         ; 005b186f
    MOV EBX,EAX                         ; 005b1872
    MOV EAX,dword ptr [ESP + 0x50]      ; 005b1874
    MOV dword ptr [ESP + 0x20],EAX      ; 005b1878
    MOV EAX,dword ptr [ESP + 0x58]      ; 005b187c
    MOV EDI,ESP                         ; 005b1880
    MOV dword ptr [ESP + 0x24],EAX      ; 005b1882
    CALL dword ptr CS:[0x5b3594]        ; 005b1886 | PTR_GetCurrentThread_005b3594
    PUSH 0x10                           ; 005b188d
    MOV dword ptr [ESP + 0x2c],EAX      ; 005b188f
    MOV AX,DS                           ; 005b1893
    XOR ECX,ECX                         ; 005b1895
    MOV ES,AX                           ; 005b1897
    LEA EAX,[ESP + 0xc]                 ; 005b1899
    MOV ESI,0x5daf78                    ; 005b189d | DAT_005daf78
    MOV dword ptr [ESP + 0x34],ECX      ; 005b18a2
    PUSH EAX                            ; 005b18a6
    MOVSD ES:EDI,ESI                    ; 005b18a7 | DAT_005daf78
    MOVSD ES:EDI,ESI                    ; 005b18a8 | DAT_005daf7c
    MOVSB ES:EDI,ESI                    ; 005b18a9 | DAT_005daf80
    CALL dword ptr CS:[0x5b3590]        ; 005b18aa | PTR_GetCurrentThreadId_005b3590
    PUSH EAX                            ; 005b18b1
    CALL crt_unknown.c_FUN_005acc88     ; 005b18b2
        ;   XREF to: 005acc88 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005acc88()
    ADD ESP,0xc                         ; 005b18b7
    MOV EAX,ESP                         ; 005b18ba
    PUSH EAX                            ; 005b18bc
    PUSH 0x0                            ; 005b18bd
    PUSH 0x0                            ; 005b18bf
    PUSH 0x0                            ; 005b18c1
    CALL dword ptr CS:[0x5b3520]        ; 005b18c3 | PTR_CreateEventA_005b3520
    MOV dword ptr [ESP + 0x2c],EAX      ; 005b18ca
    LEA EAX,[ESP + 0x34]                ; 005b18ce
    PUSH EAX                            ; 005b18d2
    PUSH 0x0                            ; 005b18d3
    LEA EAX,[ESP + 0x28]                ; 005b18d5
    PUSH EAX                            ; 005b18d9
    PUSH 0x5b17a0                       ; 005b18da
    PUSH EBX                            ; 005b18df
    PUSH 0x0                            ; 005b18e0
    CALL dword ptr CS:[0x5b352c]        ; 005b18e2 | PTR_CreateThread_005b352c
    MOV EBX,EAX                         ; 005b18e9
    MOV ESI,EAX                         ; 005b18eb
    TEST EAX,EAX                        ; 005b18ed
    JNZ 0x005b18fb                      ; 005b18ef
        ;   XREF to: 005b18fb (CONDITIONAL_JUMP)  ; LAB_005b18fb
    MOV dword ptr [ESP + 0x34],0xffffffff ; 005b18f1
    JMP 0x005b191e                      ; 005b18f9
        ;   XREF to: 005b191e (UNCONDITIONAL_JUMP)  ; LAB_005b191e
    PUSH -0x1                           ; 005b18fb
        ;   Label: LAB_005b18fb
    MOV EDI,dword ptr [ESP + 0x30]      ; 005b18fd
    PUSH EDI                            ; 005b1901
    CALL dword ptr CS:[0x5b3680]        ; 005b1902 | PTR_WaitForSingleObject_005b3680
    MOV EBP,dword ptr [ESP + 0x30]      ; 005b1909
    TEST EBP,EBP                        ; 005b190d
    JZ 0x005b1916                       ; 005b190f
        ;   XREF to: 005b1916 (CONDITIONAL_JUMP)  ; LAB_005b1916
    MOV dword ptr [EBP],EBX             ; 005b1911
    JMP 0x005b191e                      ; 005b1914
        ;   XREF to: 005b191e (UNCONDITIONAL_JUMP)  ; LAB_005b191e
    PUSH EBX                            ; 005b1916
        ;   Label: LAB_005b1916
    CALL dword ptr CS:[0x5b3518]        ; 005b1917 | PTR_CloseHandle_005b3518
    MOV EDX,dword ptr [ESP + 0x2c]      ; 005b191e
        ;   Label: LAB_005b191e
    PUSH EDX                            ; 005b1922
    CALL dword ptr CS:[0x5b3518]        ; 005b1923 | PTR_CloseHandle_005b3518
    MOV EAX,ESI                         ; 005b192a
    ADD ESP,0x38                        ; 005b192c
        ;   Label: LAB_005b192c
    POP EBP                             ; 005b192f
    POP ES                              ; 005b1930
    POP EDI                             ; 005b1931
    POP ESI                             ; 005b1932
    POP EBX                             ; 005b1933
    RET                                 ; 005b1934


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; HANDLE unkafter_2d_cpp_FUN_005ceab0(undefined4 param_1,int param_2,undefined4 param_3)
;
;
; Referenced Globals:
;   void* PTR_CloseHandle_005d051c = 001d0c5a
;   void* PTR_CreateEventA_005d0524 = 001d0c7c
;   void* PTR_CreateThread_005d0530 = 001d0caa
;   void* PTR_GetCurrentThreadId_005d0590 = 001d0e6a
;   void* PTR_GetCurrentThread_005d0594 = 001d0e80
;   void* PTR_WaitForSingleObject_005d0680 = 001d12cc
;   undefined4 DAT_005fb2bc
;   undefined4 DAT_005fb2c0
;   undefined1 DAT_005fb2c4
;   undefined4 DAT_006265f8
;
; Called Functions:
;   CloseHandle
;   CreateEventA
;   CreateThread
;   crt_unknown.c_FUN_005c9e48
;   GetCurrentThread
;   GetCurrentThreadId
;   unkafter_zombie.cpp_FUN_005cac7c
;   unkafter_zombie.cpp_FUN_005cadb4
;   WaitForSingleObject
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ceab0
        ;   Label: unkafter_2d.cpp_FUN_005ceab0
    PUSH ESI                            ; 005ceab1
    PUSH EDI                            ; 005ceab2
    PUSH ES                             ; 005ceab3
    PUSH EBP                            ; 005ceab4
    SUB ESP,0x38                        ; 005ceab5
    MOV EBX,dword ptr [ESP + 0x54]      ; 005ceab8
    CMP dword ptr [0x006265f8],-0x1     ; 005ceabc | DAT_006265f8
    JNZ 0x005cead7                      ; 005ceac3
        ;   XREF to: 005cead7 (CONDITIONAL_JUMP)  ; LAB_005cead7
    CALL unkafter_zombie.cpp_FUN_005cac7c ; 005ceac5
        ;   XREF to: 005cac7c (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005cac7c()
    TEST EAX,EAX                        ; 005ceaca
    JZ 0x005ceb9c                       ; 005ceacc
        ;   XREF to: 005ceb9c (CONDITIONAL_JUMP)  ; LAB_005ceb9c
    CALL unkafter_zombie.cpp_FUN_005cadb4 ; 005cead2
        ;   XREF to: 005cadb4 (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005cadb4()
    LEA EAX,[EBX + 0xfff]               ; 005cead7
        ;   Label: LAB_005cead7
    XOR AL,AL                           ; 005ceadd
    AND AH,0xf0                         ; 005ceadf
    MOV EBX,EAX                         ; 005ceae2
    MOV EAX,dword ptr [ESP + 0x50]      ; 005ceae4
    MOV dword ptr [ESP + 0x20],EAX      ; 005ceae8
    MOV EAX,dword ptr [ESP + 0x58]      ; 005ceaec
    MOV EDI,ESP                         ; 005ceaf0
    MOV dword ptr [ESP + 0x24],EAX      ; 005ceaf2
    CALL dword ptr CS:[0x5d0594]        ; 005ceaf6 | PTR_GetCurrentThread_005d0594
    PUSH 0x10                           ; 005ceafd
    MOV dword ptr [ESP + 0x2c],EAX      ; 005ceaff
    MOV AX,DS                           ; 005ceb03
    XOR ECX,ECX                         ; 005ceb05
    MOV ES,AX                           ; 005ceb07
    LEA EAX,[ESP + 0xc]                 ; 005ceb09
    MOV ESI,0x5fb2bc                    ; 005ceb0d | DAT_005fb2bc
    MOV dword ptr [ESP + 0x34],ECX      ; 005ceb12
    PUSH EAX                            ; 005ceb16
    MOVSD ES:EDI,ESI                    ; 005ceb17 | DAT_005fb2bc
    MOVSD ES:EDI,ESI                    ; 005ceb18 | DAT_005fb2c0
    MOVSB ES:EDI,ESI                    ; 005ceb19 | DAT_005fb2c4
    CALL dword ptr CS:[0x5d0590]        ; 005ceb1a | PTR_GetCurrentThreadId_005d0590
    PUSH EAX                            ; 005ceb21
    CALL crt_unknown.c_FUN_005c9e48     ; 005ceb22
        ;   XREF to: 005c9e48 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c9e48()
    ADD ESP,0xc                         ; 005ceb27
    MOV EAX,ESP                         ; 005ceb2a
    PUSH EAX                            ; 005ceb2c
    PUSH 0x0                            ; 005ceb2d
    PUSH 0x0                            ; 005ceb2f
    PUSH 0x0                            ; 005ceb31
    CALL dword ptr CS:[0x5d0524]        ; 005ceb33 | PTR_CreateEventA_005d0524
    MOV dword ptr [ESP + 0x2c],EAX      ; 005ceb3a
    LEA EAX,[ESP + 0x34]                ; 005ceb3e
    PUSH EAX                            ; 005ceb42
    PUSH 0x0                            ; 005ceb43
    LEA EAX,[ESP + 0x28]                ; 005ceb45
    PUSH EAX                            ; 005ceb49
    PUSH 0x5cea10                       ; 005ceb4a
    PUSH EBX                            ; 005ceb4f
    PUSH 0x0                            ; 005ceb50
    CALL dword ptr CS:[0x5d0530]        ; 005ceb52 | PTR_CreateThread_005d0530
    MOV EBX,EAX                         ; 005ceb59
    MOV ESI,EAX                         ; 005ceb5b
    TEST EAX,EAX                        ; 005ceb5d
    JNZ 0x005ceb6b                      ; 005ceb5f
        ;   XREF to: 005ceb6b (CONDITIONAL_JUMP)  ; LAB_005ceb6b
    MOV dword ptr [ESP + 0x34],0xffffffff ; 005ceb61
    JMP 0x005ceb8e                      ; 005ceb69
        ;   XREF to: 005ceb8e (UNCONDITIONAL_JUMP)  ; LAB_005ceb8e
    PUSH -0x1                           ; 005ceb6b
        ;   Label: LAB_005ceb6b
    MOV EDI,dword ptr [ESP + 0x30]      ; 005ceb6d
    PUSH EDI                            ; 005ceb71
    CALL dword ptr CS:[0x5d0680]        ; 005ceb72 | PTR_WaitForSingleObject_005d0680
    MOV EBP,dword ptr [ESP + 0x30]      ; 005ceb79
    TEST EBP,EBP                        ; 005ceb7d
    JZ 0x005ceb86                       ; 005ceb7f
        ;   XREF to: 005ceb86 (CONDITIONAL_JUMP)  ; LAB_005ceb86
    MOV dword ptr [EBP],EBX             ; 005ceb81
    JMP 0x005ceb8e                      ; 005ceb84
        ;   XREF to: 005ceb8e (UNCONDITIONAL_JUMP)  ; LAB_005ceb8e
    PUSH EBX                            ; 005ceb86
        ;   Label: LAB_005ceb86
    CALL dword ptr CS:[0x5d051c]        ; 005ceb87 | PTR_CloseHandle_005d051c
    MOV EDX,dword ptr [ESP + 0x2c]      ; 005ceb8e
        ;   Label: LAB_005ceb8e
    PUSH EDX                            ; 005ceb92
    CALL dword ptr CS:[0x5d051c]        ; 005ceb93 | PTR_CloseHandle_005d051c
    MOV EAX,ESI                         ; 005ceb9a
    ADD ESP,0x38                        ; 005ceb9c
        ;   Label: LAB_005ceb9c
    POP EBP                             ; 005ceb9f
    POP ES                              ; 005ceba0
    POP EDI                             ; 005ceba1
    POP ESI                             ; 005ceba2
    POP EBX                             ; 005ceba3
    RET                                 ; 005ceba4


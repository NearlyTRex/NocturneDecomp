; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; HANDLE FUN_00573ed0(undefined4 param_1,int param_2,undefined4 param_3)
;
;
; Referenced Globals:
;   void* PTR_CloseHandle_0057548c = 00175ad4
;   void* PTR_CreateEventA_00575494 = 00175af6
;   void* PTR_CreateThread_005754a0 = 00175b24
;   void* PTR_GetCurrentThreadId_00575500 = 00175ce8
;   void* PTR_GetCurrentThread_00575504 = 00175cfe
;   void* PTR_WaitForSingleObject_005755e0 = 00176102
;   undefined4 DAT_005992a4
;   undefined4 DAT_005992a8
;   undefined1 DAT_005992ac
;   undefined4 DAT_005c1ab8
;
; Called Functions:
;   CloseHandle
;   CreateEventA
;   CreateThread
;   FUN_0056dc68
;   FUN_0056e5ac
;   FUN_0056e6e4
;   GetCurrentThread
;   GetCurrentThreadId
;   WaitForSingleObject
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00573ed0
        ;   Label: FUN_00573ed0
    PUSH ESI                            ; 00573ed1
    PUSH EDI                            ; 00573ed2
    PUSH ES                             ; 00573ed3
    PUSH EBP                            ; 00573ed4
    SUB ESP,0x38                        ; 00573ed5
    MOV EBX,dword ptr [ESP + 0x54]      ; 00573ed8
    CMP dword ptr [0x005c1ab8],-0x1     ; 00573edc | DAT_005c1ab8
    JNZ 0x00573ef7                      ; 00573ee3
        ;   XREF to: 00573ef7 (CONDITIONAL_JUMP)  ; LAB_00573ef7
    CALL FUN_0056e5ac                   ; 00573ee5
        ;   XREF to: 0056e5ac (UNCONDITIONAL_CALL)  ; undefined FUN_0056e5ac()
    TEST EAX,EAX                        ; 00573eea
    JZ 0x00573fbc                       ; 00573eec
        ;   XREF to: 00573fbc (CONDITIONAL_JUMP)  ; LAB_00573fbc
    CALL FUN_0056e6e4                   ; 00573ef2
        ;   XREF to: 0056e6e4 (UNCONDITIONAL_CALL)  ; undefined FUN_0056e6e4()
    LEA EAX,[EBX + 0xfff]               ; 00573ef7
        ;   Label: LAB_00573ef7
    XOR AL,AL                           ; 00573efd
    AND AH,0xf0                         ; 00573eff
    MOV EBX,EAX                         ; 00573f02
    MOV EAX,dword ptr [ESP + 0x50]      ; 00573f04
    MOV dword ptr [ESP + 0x20],EAX      ; 00573f08
    MOV EAX,dword ptr [ESP + 0x58]      ; 00573f0c
    MOV EDI,ESP                         ; 00573f10
    MOV dword ptr [ESP + 0x24],EAX      ; 00573f12
    CALL dword ptr CS:[0x575504]        ; 00573f16 | PTR_GetCurrentThread_00575504
    PUSH 0x10                           ; 00573f1d
    MOV dword ptr [ESP + 0x2c],EAX      ; 00573f1f
    MOV AX,DS                           ; 00573f23
    XOR ECX,ECX                         ; 00573f25
    MOV ES,AX                           ; 00573f27
    LEA EAX,[ESP + 0xc]                 ; 00573f29
    MOV ESI,0x5992a4                    ; 00573f2d | DAT_005992a4
    MOV dword ptr [ESP + 0x34],ECX      ; 00573f32
    PUSH EAX                            ; 00573f36
    MOVSD ES:EDI,ESI                    ; 00573f37 | DAT_005992a4
    MOVSD ES:EDI,ESI                    ; 00573f38 | DAT_005992a8
    MOVSB ES:EDI,ESI                    ; 00573f39 | DAT_005992ac
    CALL dword ptr CS:[0x575500]        ; 00573f3a | PTR_GetCurrentThreadId_00575500
    PUSH EAX                            ; 00573f41
    CALL FUN_0056dc68                   ; 00573f42
        ;   XREF to: 0056dc68 (UNCONDITIONAL_CALL)  ; undefined FUN_0056dc68()
    ADD ESP,0xc                         ; 00573f47
    MOV EAX,ESP                         ; 00573f4a
    PUSH EAX                            ; 00573f4c
    PUSH 0x0                            ; 00573f4d
    PUSH 0x0                            ; 00573f4f
    PUSH 0x0                            ; 00573f51
    CALL dword ptr CS:[0x575494]        ; 00573f53 | PTR_CreateEventA_00575494
    MOV dword ptr [ESP + 0x2c],EAX      ; 00573f5a
    LEA EAX,[ESP + 0x34]                ; 00573f5e
    PUSH EAX                            ; 00573f62
    PUSH 0x0                            ; 00573f63
    LEA EAX,[ESP + 0x28]                ; 00573f65
    PUSH EAX                            ; 00573f69
    PUSH 0x573e30                       ; 00573f6a
    PUSH EBX                            ; 00573f6f
    PUSH 0x0                            ; 00573f70
    CALL dword ptr CS:[0x5754a0]        ; 00573f72 | PTR_CreateThread_005754a0
    MOV EBX,EAX                         ; 00573f79
    MOV ESI,EAX                         ; 00573f7b
    TEST EAX,EAX                        ; 00573f7d
    JNZ 0x00573f8b                      ; 00573f7f
        ;   XREF to: 00573f8b (CONDITIONAL_JUMP)  ; LAB_00573f8b
    MOV dword ptr [ESP + 0x34],0xffffffff ; 00573f81
    JMP 0x00573fae                      ; 00573f89
        ;   XREF to: 00573fae (UNCONDITIONAL_JUMP)  ; LAB_00573fae
    PUSH -0x1                           ; 00573f8b
        ;   Label: LAB_00573f8b
    MOV EDI,dword ptr [ESP + 0x30]      ; 00573f8d
    PUSH EDI                            ; 00573f91
    CALL dword ptr CS:[0x5755e0]        ; 00573f92 | PTR_WaitForSingleObject_005755e0
    MOV EBP,dword ptr [ESP + 0x30]      ; 00573f99
    TEST EBP,EBP                        ; 00573f9d
    JZ 0x00573fa6                       ; 00573f9f
        ;   XREF to: 00573fa6 (CONDITIONAL_JUMP)  ; LAB_00573fa6
    MOV dword ptr [EBP],EBX             ; 00573fa1
    JMP 0x00573fae                      ; 00573fa4
        ;   XREF to: 00573fae (UNCONDITIONAL_JUMP)  ; LAB_00573fae
    PUSH EBX                            ; 00573fa6
        ;   Label: LAB_00573fa6
    CALL dword ptr CS:[0x57548c]        ; 00573fa7 | PTR_CloseHandle_0057548c
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00573fae
        ;   Label: LAB_00573fae
    PUSH EDX                            ; 00573fb2
    CALL dword ptr CS:[0x57548c]        ; 00573fb3 | PTR_CloseHandle_0057548c
    MOV EAX,ESI                         ; 00573fba
    ADD ESP,0x38                        ; 00573fbc
        ;   Label: LAB_00573fbc
    POP EBP                             ; 00573fbf
    POP ES                              ; 00573fc0
    POP EDI                             ; 00573fc1
    POP ESI                             ; 00573fc2
    POP EBX                             ; 00573fc3
    RET                                 ; 00573fc4


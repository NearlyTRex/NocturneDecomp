; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_trigger_cpp_FUN_0059b240(CDemonActor *param_1,float param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_0059b230 = 0059b300
;   undefined4 DAT_0061b4d0
;
; Called Functions:
;   core_event.cpp_CEventList_executeCommands_FUN_004a1b70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059b240
        ;   Label: core_trigger.cpp_FUN_0059b240
    PUSH ESI                            ; 0059b241
    PUSH EDI                            ; 0059b242
    PUSH EBP                            ; 0059b243
    MOV EBP,ESP                         ; 0059b244
    SUB ESP,0xe0                        ; 0059b246
    AND ESP,0xfffffff8                  ; 0059b24c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059b24f
    XOR EDX,EDX                         ; 0059b252
    MOV dword ptr [EAX + 0x300],EDX     ; 0059b254
    MOV EAX,dword ptr [EAX + 0x174]     ; 0059b25a
    MOV dword ptr [ESP + 0xcc],EDX      ; 0059b260
    CMP EAX,0x9                         ; 0059b267
    JA 0x0059b2eb                       ; 0059b26a
        ;   XREF to: 0059b2eb (CONDITIONAL_JUMP)  ; LAB_0059b2eb
    JMP dword ptr [EAX*0x4 + 0x59b208]  ; 0059b270
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059b2eb
        ;   Label: LAB_0059b2eb
    MOV EAX,dword ptr [EAX + 0x15c]     ; 0059b2ee
    CMP EAX,0x3                         ; 0059b2f4
    JA 0x0059b31c                       ; 0059b2f7
        ;   XREF to: 0059b31c (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x59b230]  ; 0059b2f9 | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    MOV EDX,dword ptr [ESP + 0xcc]      ; 0059b300
        ;   Label: caseD_0
    TEST EDX,EDX                        ; 0059b307
    JZ 0x0059b825                       ; 0059b309
        ;   XREF to: 0059b825 (CONDITIONAL_JUMP)  ; LAB_0059b825
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059b30f
        ;   Label: LAB_0059b30f
    MOV dword ptr [EAX + 0x16c],0x1     ; 0059b312
    MOV EDX,dword ptr [EBP + 0x14]      ; 0059b31c
        ;   Label: default
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0059b31f
    MOV EBX,dword ptr [EDX + 0x16c]     ; 0059b326
    MOV dword ptr [EDX + 0x2ec],EAX     ; 0059b32c
    TEST EBX,EBX                        ; 0059b332
    JZ 0x0059b88f                       ; 0059b334
        ;   XREF to: 0059b88f (CONDITIONAL_JUMP)  ; LAB_0059b88f
    LEA EAX,[EDX + 0x224]               ; 0059b33a
    PUSH EAX                            ; 0059b340
    MOV EDI,dword ptr [0x0061b4d0]      ; 0059b341 | DAT_0061b4d0
    PUSH EDI                            ; 0059b347
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 0059b348
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 0059b34d
    MOV ESP,EBP                         ; 0059b350
    POP EBP                             ; 0059b352
    POP EDI                             ; 0059b353
    POP ESI                             ; 0059b354
    POP EBX                             ; 0059b355
    RET                                 ; 0059b356
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059b825
        ;   Label: LAB_0059b825
    CMP dword ptr [EAX + 0x15c],0x0     ; 0059b828
    JNZ 0x0059b31c                      ; 0059b82f
        ;   XREF to: 0059b31c (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [EAX + 0x16c],EDX     ; 0059b835
    JMP 0x0059b31c                      ; 0059b83b
        ;   XREF to: 0059b31c (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059b840
        ;   Label: caseD_2
    CMP dword ptr [EAX + 0x2ec],0x0     ; 0059b843
    JNZ 0x0059b85a                      ; 0059b84a
        ;   XREF to: 0059b85a (CONDITIONAL_JUMP)  ; LAB_0059b85a
    CMP dword ptr [ESP + 0xcc],0x0      ; 0059b84c
    JNZ 0x0059b30f                      ; 0059b854
        ;   XREF to: 0059b30f (CONDITIONAL_JUMP)  ; LAB_0059b30f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059b85a
        ;   Label: LAB_0059b85a
    MOV dword ptr [EAX + 0x16c],0x0     ; 0059b85d
    JMP 0x0059b31c                      ; 0059b867
        ;   XREF to: 0059b31c (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059b86c
        ;   Label: caseD_3
    MOV EBX,dword ptr [EAX + 0x2ec]     ; 0059b86f
    CMP EBX,0x1                         ; 0059b875
    JNZ 0x0059b85a                      ; 0059b878
        ;   XREF to: 0059b85a (CONDITIONAL_JUMP)  ; LAB_0059b85a
    CMP dword ptr [ESP + 0xcc],0x0      ; 0059b87a
    JNZ 0x0059b85a                      ; 0059b882
        ;   XREF to: 0059b85a (CONDITIONAL_JUMP)  ; LAB_0059b85a
    MOV dword ptr [EAX + 0x16c],EBX     ; 0059b884
    JMP 0x0059b31c                      ; 0059b88a
        ;   XREF to: 0059b31c (UNCONDITIONAL_JUMP)  ; default
    LEA EAX,[EDX + 0x288]               ; 0059b88f
        ;   Label: LAB_0059b88f
    PUSH EAX                            ; 0059b895
    MOV ESI,dword ptr [0x0061b4d0]      ; 0059b896 | DAT_0061b4d0
    PUSH ESI                            ; 0059b89c
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 0059b89d
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 0059b8a2
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059b8a5
    MOV dword ptr [EAX + 0x300],EBX     ; 0059b8a8
    MOV ESP,EBP                         ; 0059b8ae
    POP EBP                             ; 0059b8b0
    POP EDI                             ; 0059b8b1
    POP ESI                             ; 0059b8b2
    POP EBX                             ; 0059b8b3
    RET                                 ; 0059b8b4


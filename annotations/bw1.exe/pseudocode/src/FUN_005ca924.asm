; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; LPCRITICAL_SECTION FUN_005ca924(void)
;
;
; XREF[2]:
;   FUN_005caa60 at 005caa92
;   FUN_005cadb4 at 005cae6a
;
; Referenced Globals:
;   void* PTR_InitializeCriticalSection_005d05f0 = 001d101a
;   TerminatedCString s_Unable_to_allocate_semap_005fac58
;   TerminatedCString s_Unable_to_allocate_semap_005fac7c
;   undefined4 DAT_02c9ff60
;   undefined4 DAT_02c9ff64
;   undefined4 DAT_02c9ff68
;
; Called Functions:
;   FUN_005c10d0
;   FUN_005c1cb0
;   FUN_005c9f70
;   InitializeCriticalSection
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ca924
        ;   Label: FUN_005ca924
    PUSH ESI                            ; 005ca925
    PUSH EDI                            ; 005ca926
    MOV EDX,dword ptr [0x02c9ff60]      ; 005ca927 | DAT_02c9ff60
    CMP EDX,0x40                        ; 005ca92d
    JGE 0x005ca950                      ; 005ca930
        ;   XREF to: 005ca950 (CONDITIONAL_JUMP)  ; LAB_005ca950
    LEA EAX,[EDX*0x4 + 0x0]             ; 005ca932
    MOV EBX,0x2c9f930                   ; 005ca939
    SUB EAX,EDX                         ; 005ca93e
    LEA EDI,[EDX + 0x1]                 ; 005ca940
    SHL EAX,0x3                         ; 005ca943
    MOV dword ptr [0x02c9ff60],EDI      ; 005ca946 | DAT_02c9ff60
    ADD EBX,EAX                         ; 005ca94c
    JMP 0x005ca9b9                      ; 005ca94e
        ;   XREF to: 005ca9b9 (UNCONDITIONAL_JUMP)  ; LAB_005ca9b9
    PUSH 0x18                           ; 005ca950
        ;   Label: LAB_005ca950
    PUSH 0x1                            ; 005ca952
    CALL FUN_005c1cb0                   ; 005ca954
        ;   XREF to: 005c1cb0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1cb0()
    ADD ESP,0x8                         ; 005ca959
    MOV EBX,EAX                         ; 005ca95c
    TEST EAX,EAX                        ; 005ca95e
    JNZ 0x005ca971                      ; 005ca960
        ;   XREF to: 005ca971 (CONDITIONAL_JUMP)  ; LAB_005ca971
    PUSH 0x1                            ; 005ca962
    PUSH 0x5fac58                       ; 005ca964 | = "Unable to allocate semaphore data\r\n"
    CALL FUN_005c9f70                   ; 005ca969
        ;   XREF to: 005c9f70 (UNCONDITIONAL_CALL)  ; undefined FUN_005c9f70()
    ADD ESP,0x8                         ; 005ca96e
    MOV EAX,[0x02c9ff64]                ; 005ca971 | DAT_02c9ff64
        ;   Label: LAB_005ca971
    INC EAX                             ; 005ca976
    SHL EAX,0x2                         ; 005ca977
    PUSH EAX                            ; 005ca97a
    MOV ECX,dword ptr [0x02c9ff68]      ; 005ca97b | DAT_02c9ff68
    PUSH ECX                            ; 005ca981
    CALL FUN_005c10d0                   ; 005ca982
        ;   XREF to: 005c10d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c10d0()
    ADD ESP,0x8                         ; 005ca987
    MOV [0x02c9ff68],EAX                ; 005ca98a | DAT_02c9ff68
    TEST EAX,EAX                        ; 005ca98f
    JNZ 0x005ca9a2                      ; 005ca991
        ;   XREF to: 005ca9a2 (CONDITIONAL_JUMP)  ; LAB_005ca9a2
    PUSH 0x1                            ; 005ca993
    PUSH 0x5fac7c                       ; 005ca995 | = "Unable to allocate semaphore data\r\n"
    CALL FUN_005c9f70                   ; 005ca99a
        ;   XREF to: 005c9f70 (UNCONDITIONAL_CALL)  ; undefined FUN_005c9f70()
    ADD ESP,0x8                         ; 005ca99f
    MOV EAX,[0x02c9ff64]                ; 005ca9a2 | DAT_02c9ff64
        ;   Label: LAB_005ca9a2
    MOV EDX,dword ptr [0x02c9ff68]      ; 005ca9a7 | DAT_02c9ff68
    LEA ESI,[EAX + 0x1]                 ; 005ca9ad
    MOV dword ptr [EDX + EAX*0x4],EBX   ; 005ca9b0
    MOV dword ptr [0x02c9ff64],ESI      ; 005ca9b3 | DAT_02c9ff64
    PUSH EBX                            ; 005ca9b9
        ;   Label: LAB_005ca9b9
    CALL dword ptr CS:[0x5d05f0]        ; 005ca9ba | PTR_InitializeCriticalSection_005d05f0
    MOV EAX,EBX                         ; 005ca9c1
    POP EDI                             ; 005ca9c3
    POP ESI                             ; 005ca9c4
    POP EBX                             ; 005ca9c5
    RET                                 ; 005ca9c6


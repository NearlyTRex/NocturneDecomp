; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00472d10(undefined4 param_1,char *param_2)
;
;
; XREF[2]:
;   FUN_0046f2e0 at 0046f319
;   FUN_00474380 at 0047443e
;
; Referenced Globals:
;   void* PTR_CloseClipboard_00575418 = 00175904
;   void* PTR_OpenClipboard_00575454 = 001759fc
;   void* PTR_SetClipboardData_00575464 = 00175a40
;   void* PTR_GlobalAlloc_00575544 = 00175e26
;   void* PTR_GlobalFree_00575548 = 00175e34
;   void* PTR_GlobalLock_0057554c = 00175e42
;   void* PTR_GlobalUnlock_00575554 = 00175e66
;   undefined1 DAT_0057ea92
;   undefined1 DAT_0057ea93
;   undefined4 DAT_01bcd078
;   undefined4 DAT_02de2098
;
; Called Functions:
;   CloseClipboard
;   FUN_00564a70
;   GlobalAlloc
;   GlobalFree
;   GlobalLock
;   GlobalUnlock
;   OpenClipboard
;   SetClipboardData
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00472d10
        ;   Label: FUN_00472d10
    PUSH ESI                            ; 00472d11
    PUSH EDI                            ; 00472d12
    PUSH EBP                            ; 00472d13
    CMP dword ptr [ESP + 0x18],0x0      ; 00472d14
    JNZ 0x00472d23                      ; 00472d19
        ;   XREF to: 00472d23 (CONDITIONAL_JUMP)  ; LAB_00472d23
    MOV dword ptr [ESP + 0x18],0x57ea92 ; 00472d1b | DAT_0057ea92
    MOV EDI,dword ptr [ESP + 0x18]      ; 00472d23
        ;   Label: LAB_00472d23
    SUB ECX,ECX                         ; 00472d27
    DEC ECX                             ; 00472d29
    XOR EAX,EAX                         ; 00472d2a
    SCASB.REPNE ES:EDI                  ; 00472d2c | DAT_0057ea92 | DAT_0057ea93
    NOT ECX                             ; 00472d2e
    DEC ECX                             ; 00472d30
    MOV ESI,dword ptr [0x02de2098]      ; 00472d31 | DAT_02de2098
    PUSH ESI                            ; 00472d37
    LEA EBX,[ECX + 0x1]                 ; 00472d38
    CALL dword ptr CS:[0x575454]        ; 00472d3b | PTR_OpenClipboard_00575454
    TEST EAX,EAX                        ; 00472d42
    JZ 0x00472d96                       ; 00472d44
        ;   XREF to: 00472d96 (CONDITIONAL_JUMP)  ; LAB_00472d96
    PUSH EBX                            ; 00472d46
    PUSH 0x2002                         ; 00472d47
    CALL dword ptr CS:[0x575544]        ; 00472d4c | PTR_GlobalAlloc_00575544
    MOV EBP,EAX                         ; 00472d53
    TEST EAX,EAX                        ; 00472d55
    JZ 0x00472d8f                       ; 00472d57
        ;   XREF to: 00472d8f (CONDITIONAL_JUMP)  ; LAB_00472d8f
    PUSH EAX                            ; 00472d59
    CALL dword ptr CS:[0x57554c]        ; 00472d5a | PTR_GlobalLock_0057554c
    TEST EAX,EAX                        ; 00472d61
    JZ 0x00472db4                       ; 00472d63
        ;   XREF to: 00472db4 (CONDITIONAL_JUMP)  ; LAB_00472db4
    MOV ESI,dword ptr [ESP + 0x18]      ; 00472d65
    MOV ECX,EBX                         ; 00472d69
    MOV EDI,EAX                         ; 00472d6b
    PUSH EDI                            ; 00472d6d
    MOV EAX,ECX                         ; 00472d6e
    SHR ECX,0x2                         ; 00472d70
    MOVSD.REP ES:EDI,ESI                ; 00472d73
    MOV CL,AL                           ; 00472d75
    AND CL,0x3                          ; 00472d77
    MOVSB.REP ES:EDI,ESI                ; 00472d7a
    POP EDI                             ; 00472d7c
    PUSH EBP                            ; 00472d7d
    CALL dword ptr CS:[0x575554]        ; 00472d7e | PTR_GlobalUnlock_00575554
    PUSH EBP                            ; 00472d85
    PUSH 0x1                            ; 00472d86
    CALL dword ptr CS:[0x575464]        ; 00472d88 | PTR_SetClipboardData_00575464
    CALL dword ptr CS:[0x575418]        ; 00472d8f | PTR_CloseClipboard_00575418
        ;   Label: LAB_00472d8f
    PUSH EBX                            ; 00472d96
        ;   Label: LAB_00472d96
    MOV EDI,dword ptr [0x01bcd078]      ; 00472d97 | DAT_01bcd078
    PUSH EDI                            ; 00472d9d
    CALL FUN_00564a70                   ; 00472d9e
        ;   XREF to: 00564a70 (UNCONDITIONAL_CALL)  ; undefined FUN_00564a70()
    ADD ESP,0x8                         ; 00472da3
    MOV [0x01bcd078],EAX                ; 00472da6 | DAT_01bcd078
    TEST EAX,EAX                        ; 00472dab
    JNZ 0x00472dbe                      ; 00472dad
        ;   XREF to: 00472dbe (CONDITIONAL_JUMP)  ; LAB_00472dbe
    POP EBP                             ; 00472daf
    POP EDI                             ; 00472db0
    POP ESI                             ; 00472db1
    POP EBX                             ; 00472db2
    RET                                 ; 00472db3
    PUSH EBP                            ; 00472db4
        ;   Label: LAB_00472db4
    CALL dword ptr CS:[0x575548]        ; 00472db5 | PTR_GlobalFree_00575548
    JMP 0x00472d8f                      ; 00472dbc
        ;   XREF to: 00472d8f (UNCONDITIONAL_JUMP)  ; LAB_00472d8f
    MOV ESI,dword ptr [ESP + 0x18]      ; 00472dbe
        ;   Label: LAB_00472dbe
    MOV ECX,EBX                         ; 00472dc2
    MOV EDI,EAX                         ; 00472dc4
    PUSH EDI                            ; 00472dc6
    MOV EAX,ECX                         ; 00472dc7
    SHR ECX,0x2                         ; 00472dc9
    MOVSD.REP ES:EDI,ESI                ; 00472dcc
    MOV CL,AL                           ; 00472dce
    AND CL,0x3                          ; 00472dd0
    MOVSB.REP ES:EDI,ESI                ; 00472dd3
    POP EDI                             ; 00472dd5
    POP EBP                             ; 00472dd6
    POP EDI                             ; 00472dd7
    POP ESI                             ; 00472dd8
    POP EBX                             ; 00472dd9
    RET                                 ; 00472dda


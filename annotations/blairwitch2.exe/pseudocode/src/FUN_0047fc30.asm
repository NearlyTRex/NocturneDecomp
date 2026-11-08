; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0047fc30(undefined4 param_1,char *param_2)
;
;
; XREF[2]:
;   FUN_0047ac10 at 0047ac49
;   FUN_00481540 at 004815fe
;
; Referenced Globals:
;   void* PTR_CloseClipboard_005c8498 = 001c8a62
;   void* PTR_OpenClipboard_005c84d4 = 001c8b5a
;   void* PTR_SetClipboardData_005c84e4 = 001c8b9e
;   void* PTR_GlobalAlloc_005c85c8 = 001c8f8e
;   void* PTR_GlobalFree_005c85cc = 001c8f9c
;   void* PTR_GlobalLock_005c85d0 = 001c8faa
;   void* PTR_GlobalUnlock_005c85d8 = 001c8fce
;   undefined1 DAT_005d24d0
;   undefined1 DAT_005d24d1
;   undefined4 DAT_01c25598
;   undefined4 DAT_02664628
;
; Called Functions:
;   CloseClipboard
;   FUN_005b8ce0
;   GlobalAlloc
;   GlobalFree
;   GlobalLock
;   GlobalUnlock
;   OpenClipboard
;   SetClipboardData
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047fc30
        ;   Label: FUN_0047fc30
    PUSH ESI                            ; 0047fc31
    PUSH EDI                            ; 0047fc32
    PUSH EBP                            ; 0047fc33
    CMP dword ptr [ESP + 0x18],0x0      ; 0047fc34
    JNZ 0x0047fc43                      ; 0047fc39
        ;   XREF to: 0047fc43 (CONDITIONAL_JUMP)  ; LAB_0047fc43
    MOV dword ptr [ESP + 0x18],0x5d24d0 ; 0047fc3b | DAT_005d24d0
    MOV EDI,dword ptr [ESP + 0x18]      ; 0047fc43
        ;   Label: LAB_0047fc43
    SUB ECX,ECX                         ; 0047fc47
    DEC ECX                             ; 0047fc49
    XOR EAX,EAX                         ; 0047fc4a
    SCASB.REPNE ES:EDI                  ; 0047fc4c | DAT_005d24d0 | DAT_005d24d1
    NOT ECX                             ; 0047fc4e
    DEC ECX                             ; 0047fc50
    MOV ESI,dword ptr [0x02664628]      ; 0047fc51 | DAT_02664628
    PUSH ESI                            ; 0047fc57
    LEA EBX,[ECX + 0x1]                 ; 0047fc58
    CALL dword ptr CS:[0x5c84d4]        ; 0047fc5b | PTR_OpenClipboard_005c84d4
    TEST EAX,EAX                        ; 0047fc62
    JZ 0x0047fcb6                       ; 0047fc64
        ;   XREF to: 0047fcb6 (CONDITIONAL_JUMP)  ; LAB_0047fcb6
    PUSH EBX                            ; 0047fc66
    PUSH 0x2002                         ; 0047fc67
    CALL dword ptr CS:[0x5c85c8]        ; 0047fc6c | PTR_GlobalAlloc_005c85c8
    MOV EBP,EAX                         ; 0047fc73
    TEST EAX,EAX                        ; 0047fc75
    JZ 0x0047fcaf                       ; 0047fc77
        ;   XREF to: 0047fcaf (CONDITIONAL_JUMP)  ; LAB_0047fcaf
    PUSH EAX                            ; 0047fc79
    CALL dword ptr CS:[0x5c85d0]        ; 0047fc7a | PTR_GlobalLock_005c85d0
    TEST EAX,EAX                        ; 0047fc81
    JZ 0x0047fcd4                       ; 0047fc83
        ;   XREF to: 0047fcd4 (CONDITIONAL_JUMP)  ; LAB_0047fcd4
    MOV ESI,dword ptr [ESP + 0x18]      ; 0047fc85
    MOV ECX,EBX                         ; 0047fc89
    MOV EDI,EAX                         ; 0047fc8b
    PUSH EDI                            ; 0047fc8d
    MOV EAX,ECX                         ; 0047fc8e
    SHR ECX,0x2                         ; 0047fc90
    MOVSD.REP ES:EDI,ESI                ; 0047fc93
    MOV CL,AL                           ; 0047fc95
    AND CL,0x3                          ; 0047fc97
    MOVSB.REP ES:EDI,ESI                ; 0047fc9a
    POP EDI                             ; 0047fc9c
    PUSH EBP                            ; 0047fc9d
    CALL dword ptr CS:[0x5c85d8]        ; 0047fc9e | PTR_GlobalUnlock_005c85d8
    PUSH EBP                            ; 0047fca5
    PUSH 0x1                            ; 0047fca6
    CALL dword ptr CS:[0x5c84e4]        ; 0047fca8 | PTR_SetClipboardData_005c84e4
    CALL dword ptr CS:[0x5c8498]        ; 0047fcaf | PTR_CloseClipboard_005c8498
        ;   Label: LAB_0047fcaf
    PUSH EBX                            ; 0047fcb6
        ;   Label: LAB_0047fcb6
    MOV EDI,dword ptr [0x01c25598]      ; 0047fcb7 | DAT_01c25598
    PUSH EDI                            ; 0047fcbd
    CALL FUN_005b8ce0                   ; 0047fcbe
        ;   XREF to: 005b8ce0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8ce0()
    ADD ESP,0x8                         ; 0047fcc3
    MOV [0x01c25598],EAX                ; 0047fcc6 | DAT_01c25598
    TEST EAX,EAX                        ; 0047fccb
    JNZ 0x0047fcde                      ; 0047fccd
        ;   XREF to: 0047fcde (CONDITIONAL_JUMP)  ; LAB_0047fcde
    POP EBP                             ; 0047fccf
    POP EDI                             ; 0047fcd0
    POP ESI                             ; 0047fcd1
    POP EBX                             ; 0047fcd2
    RET                                 ; 0047fcd3
    PUSH EBP                            ; 0047fcd4
        ;   Label: LAB_0047fcd4
    CALL dword ptr CS:[0x5c85cc]        ; 0047fcd5 | PTR_GlobalFree_005c85cc
    JMP 0x0047fcaf                      ; 0047fcdc
        ;   XREF to: 0047fcaf (UNCONDITIONAL_JUMP)  ; LAB_0047fcaf
    MOV ESI,dword ptr [ESP + 0x18]      ; 0047fcde
        ;   Label: LAB_0047fcde
    MOV ECX,EBX                         ; 0047fce2
    MOV EDI,EAX                         ; 0047fce4
    PUSH EDI                            ; 0047fce6
    MOV EAX,ECX                         ; 0047fce7
    SHR ECX,0x2                         ; 0047fce9
    MOVSD.REP ES:EDI,ESI                ; 0047fcec
    MOV CL,AL                           ; 0047fcee
    AND CL,0x3                          ; 0047fcf0
    MOVSB.REP ES:EDI,ESI                ; 0047fcf3
    POP EDI                             ; 0047fcf5
    POP EBP                             ; 0047fcf6
    POP EDI                             ; 0047fcf7
    POP ESI                             ; 0047fcf8
    POP EBX                             ; 0047fcf9
    RET                                 ; 0047fcfa


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00498290(undefined4 param_1,char *param_2)
;
;
; XREF[2]:
;   FUN_00493100 at 00493139
;   FUN_00499ba0 at 00499c5e
;
; Referenced Globals:
;   void* PTR_CloseClipboard_005d04a4 = 001d0a7a
;   void* PTR_OpenClipboard_005d04e4 = 001d0b82
;   void* PTR_SetClipboardData_005d04f4 = 001d0bc6
;   void* PTR_GlobalAlloc_005d05dc = 001d0fca
;   void* PTR_GlobalFree_005d05e0 = 001d0fd8
;   void* PTR_GlobalLock_005d05e4 = 001d0fe6
;   void* PTR_GlobalUnlock_005d05ec = 001d100a
;   undefined1 DAT_005dc269
;   undefined1 DAT_005dc26a
;   undefined4 DAT_01c3eb58
;   undefined4 DAT_02c9be68
;
; Called Functions:
;   CloseClipboard
;   FUN_005c10d0
;   GlobalAlloc
;   GlobalFree
;   GlobalLock
;   GlobalUnlock
;   OpenClipboard
;   SetClipboardData
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00498290
        ;   Label: FUN_00498290
    PUSH ESI                            ; 00498291
    PUSH EDI                            ; 00498292
    PUSH EBP                            ; 00498293
    CMP dword ptr [ESP + 0x18],0x0      ; 00498294
    JNZ 0x004982a3                      ; 00498299
        ;   XREF to: 004982a3 (CONDITIONAL_JUMP)  ; LAB_004982a3
    MOV dword ptr [ESP + 0x18],0x5dc269 ; 0049829b | DAT_005dc269
    MOV EDI,dword ptr [ESP + 0x18]      ; 004982a3
        ;   Label: LAB_004982a3
    SUB ECX,ECX                         ; 004982a7
    DEC ECX                             ; 004982a9
    XOR EAX,EAX                         ; 004982aa
    SCASB.REPNE ES:EDI                  ; 004982ac | DAT_005dc269 | DAT_005dc26a
    NOT ECX                             ; 004982ae
    DEC ECX                             ; 004982b0
    MOV ESI,dword ptr [0x02c9be68]      ; 004982b1 | DAT_02c9be68
    PUSH ESI                            ; 004982b7
    LEA EBX,[ECX + 0x1]                 ; 004982b8
    CALL dword ptr CS:[0x5d04e4]        ; 004982bb | PTR_OpenClipboard_005d04e4
    TEST EAX,EAX                        ; 004982c2
    JZ 0x00498316                       ; 004982c4
        ;   XREF to: 00498316 (CONDITIONAL_JUMP)  ; LAB_00498316
    PUSH EBX                            ; 004982c6
    PUSH 0x2002                         ; 004982c7
    CALL dword ptr CS:[0x5d05dc]        ; 004982cc | PTR_GlobalAlloc_005d05dc
    MOV EBP,EAX                         ; 004982d3
    TEST EAX,EAX                        ; 004982d5
    JZ 0x0049830f                       ; 004982d7
        ;   XREF to: 0049830f (CONDITIONAL_JUMP)  ; LAB_0049830f
    PUSH EAX                            ; 004982d9
    CALL dword ptr CS:[0x5d05e4]        ; 004982da | PTR_GlobalLock_005d05e4
    TEST EAX,EAX                        ; 004982e1
    JZ 0x00498334                       ; 004982e3
        ;   XREF to: 00498334 (CONDITIONAL_JUMP)  ; LAB_00498334
    MOV ESI,dword ptr [ESP + 0x18]      ; 004982e5
    MOV ECX,EBX                         ; 004982e9
    MOV EDI,EAX                         ; 004982eb
    PUSH EDI                            ; 004982ed
    MOV EAX,ECX                         ; 004982ee
    SHR ECX,0x2                         ; 004982f0
    MOVSD.REP ES:EDI,ESI                ; 004982f3
    MOV CL,AL                           ; 004982f5
    AND CL,0x3                          ; 004982f7
    MOVSB.REP ES:EDI,ESI                ; 004982fa
    POP EDI                             ; 004982fc
    PUSH EBP                            ; 004982fd
    CALL dword ptr CS:[0x5d05ec]        ; 004982fe | PTR_GlobalUnlock_005d05ec
    PUSH EBP                            ; 00498305
    PUSH 0x1                            ; 00498306
    CALL dword ptr CS:[0x5d04f4]        ; 00498308 | PTR_SetClipboardData_005d04f4
    CALL dword ptr CS:[0x5d04a4]        ; 0049830f | PTR_CloseClipboard_005d04a4
        ;   Label: LAB_0049830f
    PUSH EBX                            ; 00498316
        ;   Label: LAB_00498316
    MOV EDI,dword ptr [0x01c3eb58]      ; 00498317 | DAT_01c3eb58
    PUSH EDI                            ; 0049831d
    CALL FUN_005c10d0                   ; 0049831e
        ;   XREF to: 005c10d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c10d0()
    ADD ESP,0x8                         ; 00498323
    MOV [0x01c3eb58],EAX                ; 00498326 | DAT_01c3eb58
    TEST EAX,EAX                        ; 0049832b
    JNZ 0x0049833e                      ; 0049832d
        ;   XREF to: 0049833e (CONDITIONAL_JUMP)  ; LAB_0049833e
    POP EBP                             ; 0049832f
    POP EDI                             ; 00498330
    POP ESI                             ; 00498331
    POP EBX                             ; 00498332
    RET                                 ; 00498333
    PUSH EBP                            ; 00498334
        ;   Label: LAB_00498334
    CALL dword ptr CS:[0x5d05e0]        ; 00498335 | PTR_GlobalFree_005d05e0
    JMP 0x0049830f                      ; 0049833c
        ;   XREF to: 0049830f (UNCONDITIONAL_JUMP)  ; LAB_0049830f
    MOV ESI,dword ptr [ESP + 0x18]      ; 0049833e
        ;   Label: LAB_0049833e
    MOV ECX,EBX                         ; 00498342
    MOV EDI,EAX                         ; 00498344
    PUSH EDI                            ; 00498346
    MOV EAX,ECX                         ; 00498347
    SHR ECX,0x2                         ; 00498349
    MOVSD.REP ES:EDI,ESI                ; 0049834c
    MOV CL,AL                           ; 0049834e
    AND CL,0x3                          ; 00498350
    MOVSB.REP ES:EDI,ESI                ; 00498353
    POP EDI                             ; 00498355
    POP EBP                             ; 00498356
    POP EDI                             ; 00498357
    POP ESI                             ; 00498358
    POP EBX                             ; 00498359
    RET                                 ; 0049835a


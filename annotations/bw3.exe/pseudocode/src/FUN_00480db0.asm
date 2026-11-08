; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * FUN_00480db0(void)
;
;
; XREF[1]:
;   FUN_0047bcf0 at 0047bcfd
;
; Referenced Globals:
;   void* PTR_CloseClipboard_005b34a4 = 001b3a7a
;   void* PTR_GetClipboardData_005b34c0 = 001b3af2
;   void* PTR_OpenClipboard_005b34e0 = 001b3b70
;   undefined4 DAT_005bd325
;   undefined4 DAT_01c5b0e8
;   undefined4 DAT_02d21b78
;
; Called Functions:
;   CloseClipboard
;   FUN_005a3e50
;   GetClipboardData
;   OpenClipboard
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480db0
        ;   Label: FUN_00480db0
    MOV EDX,dword ptr [0x02d21b78]      ; 00480db1 | DAT_02d21b78
    PUSH EDX                            ; 00480db7
    CALL dword ptr CS:[0x5b34e0]        ; 00480db8 | PTR_OpenClipboard_005b34e0
    TEST EAX,EAX                        ; 00480dbf
    JNZ 0x00480dd4                      ; 00480dc1
        ;   XREF to: 00480dd4 (CONDITIONAL_JUMP)  ; LAB_00480dd4
    MOV EBX,dword ptr [0x01c5b0e8]      ; 00480dc3 | DAT_01c5b0e8
        ;   Label: LAB_00480dc3
    TEST EBX,EBX                        ; 00480dc9
    JNZ 0x00480e2c                      ; 00480dcb
        ;   XREF to: 00480e2c (CONDITIONAL_JUMP)  ; LAB_00480e2c
    MOV EAX,0x5bd325                    ; 00480dcd | DAT_005bd325
    POP EBX                             ; 00480dd2
    RET                                 ; 00480dd3
    PUSH EDI                            ; 00480dd4
        ;   Label: LAB_00480dd4
    PUSH ESI                            ; 00480dd5
    PUSH 0x1                            ; 00480dd6
    CALL dword ptr CS:[0x5b34c0]        ; 00480dd8 | PTR_GetClipboardData_005b34c0
    MOV ESI,EAX                         ; 00480ddf
    TEST EAX,EAX                        ; 00480de1
    JZ 0x00480e21                       ; 00480de3
        ;   XREF to: 00480e21 (CONDITIONAL_JUMP)  ; LAB_00480e21
    MOV EDI,EAX                         ; 00480de5
    SUB ECX,ECX                         ; 00480de7
    DEC ECX                             ; 00480de9
    XOR EAX,EAX                         ; 00480dea
    SCASB.REPNE ES:EDI                  ; 00480dec
    NOT ECX                             ; 00480dee
    DEC ECX                             ; 00480df0
    LEA EBX,[ECX + 0x1]                 ; 00480df1
    PUSH EBX                            ; 00480df4
    MOV ECX,dword ptr [0x01c5b0e8]      ; 00480df5 | DAT_01c5b0e8
    PUSH ECX                            ; 00480dfb
    CALL FUN_005a3e50                   ; 00480dfc
        ;   XREF to: 005a3e50 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3e50()
    ADD ESP,0x8                         ; 00480e01
    MOV [0x01c5b0e8],EAX                ; 00480e04 | DAT_01c5b0e8
    TEST EAX,EAX                        ; 00480e09
    JZ 0x00480e21                       ; 00480e0b
        ;   XREF to: 00480e21 (CONDITIONAL_JUMP)  ; LAB_00480e21
    MOV ECX,EBX                         ; 00480e0d
    MOV EDI,EAX                         ; 00480e0f
    PUSH EDI                            ; 00480e11
    MOV EAX,ECX                         ; 00480e12
    SHR ECX,0x2                         ; 00480e14
    MOVSD.REP ES:EDI,ESI                ; 00480e17
    MOV CL,AL                           ; 00480e19
    AND CL,0x3                          ; 00480e1b
    MOVSB.REP ES:EDI,ESI                ; 00480e1e
    POP EDI                             ; 00480e20
    CALL dword ptr CS:[0x5b34a4]        ; 00480e21 | PTR_CloseClipboard_005b34a4
        ;   Label: LAB_00480e21
    POP ESI                             ; 00480e28
    POP EDI                             ; 00480e29
    JMP 0x00480dc3                      ; 00480e2a
        ;   XREF to: 00480dc3 (UNCONDITIONAL_JUMP)  ; LAB_00480dc3
    MOV EAX,EBX                         ; 00480e2c
        ;   Label: LAB_00480e2c
    POP EBX                             ; 00480e2e
    RET                                 ; 00480e2f


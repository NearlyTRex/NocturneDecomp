; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0047ac60(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0047acc0 at 0047ae07
;
; Referenced Globals:
;   undefined4 DAT_006138e0
;   undefined4 DAT_0061ed94
;
; Called Functions:
;   FUN_0047aa60
;   FUN_0047aa80
;   FUN_0047fbb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047ac60
        ;   Label: FUN_0047ac60
    PUSH ESI                            ; 0047ac61
    MOV ESI,dword ptr [ESP + 0xc]       ; 0047ac62
    MOV EDX,dword ptr [0x006138e0]      ; 0047ac66 | DAT_006138e0
    PUSH EDX                            ; 0047ac6c
    CALL FUN_0047fbb0                   ; 0047ac6d
        ;   XREF to: 0047fbb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047fbb0()
    ADD ESP,0x4                         ; 0047ac72
    MOV EBX,EAX                         ; 0047ac75
    XOR EAX,EAX                         ; 0047ac77
        ;   Label: LAB_0047ac77
    MOV AL,byte ptr [EBX]               ; 0047ac79
    TEST EAX,EAX                        ; 0047ac7b
    JLE 0x0047acad                      ; 0047ac7d
        ;   XREF to: 0047acad (CONDITIONAL_JUMP)  ; LAB_0047acad
    MOV DL,AL                           ; 0047ac7f
    INC DL                              ; 0047ac81
    AND EDX,0xff                        ; 0047ac83
    TEST byte ptr [EDX + 0x61ed94],0x8  ; 0047ac89 | DAT_0061ed94
    JNZ 0x0047ac95                      ; 0047ac90
        ;   XREF to: 0047ac95 (CONDITIONAL_JUMP)  ; LAB_0047ac95
    INC EBX                             ; 0047ac92
        ;   Label: LAB_0047ac92
    JMP 0x0047ac77                      ; 0047ac93
        ;   XREF to: 0047ac77 (UNCONDITIONAL_JUMP)  ; LAB_0047ac77
    CMP EAX,0x9                         ; 0047ac95
        ;   Label: LAB_0047ac95
    JNZ 0x0047ac9f                      ; 0047ac98
        ;   XREF to: 0047ac9f (CONDITIONAL_JUMP)  ; LAB_0047ac9f
    MOV EAX,0x20                        ; 0047ac9a
    PUSH 0x1                            ; 0047ac9f
        ;   Label: LAB_0047ac9f
    PUSH EAX                            ; 0047aca1
    PUSH ESI                            ; 0047aca2
    CALL FUN_0047aa80                   ; 0047aca3
        ;   XREF to: 0047aa80 (UNCONDITIONAL_CALL)  ; undefined FUN_0047aa80()
    ADD ESP,0xc                         ; 0047aca8
    JMP 0x0047ac92                      ; 0047acab
        ;   XREF to: 0047ac92 (UNCONDITIONAL_JUMP)  ; LAB_0047ac92
    PUSH ESI                            ; 0047acad
        ;   Label: LAB_0047acad
    CALL FUN_0047aa60                   ; 0047acae
        ;   XREF to: 0047aa60 (UNCONDITIONAL_CALL)  ; undefined FUN_0047aa60()
    ADD ESP,0x4                         ; 0047acb3
    POP ESI                             ; 0047acb6
    POP EBX                             ; 0047acb7
    RET                                 ; 0047acb8


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ca9f4(void)
;
;
; XREF[1]:
;   FUN_005caecc at 005caf06
;
; Referenced Globals:
;   undefined4 DAT_02c9ff64
;   undefined4 DAT_02c9ff68
;
; Called Functions:
;   FUN_005c09f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ca9f4
        ;   Label: FUN_005ca9f4
    PUSH ESI                            ; 005ca9f5
    PUSH EDI                            ; 005ca9f6
    PUSH EBP                            ; 005ca9f7
    MOV EDX,dword ptr [0x02c9ff64]      ; 005ca9f8 | DAT_02c9ff64
    XOR ESI,ESI                         ; 005ca9fe
    TEST EDX,EDX                        ; 005caa00
    JLE 0x005caa35                      ; 005caa02
        ;   XREF to: 005caa35 (CONDITIONAL_JUMP)  ; LAB_005caa35
    XOR EBX,EBX                         ; 005caa04
    MOV EAX,[0x02c9ff68]                ; 005caa06 | DAT_02c9ff68
        ;   Label: LAB_005caa06
    MOV ECX,dword ptr [EBX + EAX*0x1]   ; 005caa0b
    PUSH ECX                            ; 005caa0e
    CALL dword ptr CS:[0x5d0534]        ; 005caa0f
    MOV EAX,[0x02c9ff68]                ; 005caa16 | DAT_02c9ff68
    MOV EDI,dword ptr [EBX + EAX*0x1]   ; 005caa1b
    PUSH EDI                            ; 005caa1e
    ADD EBX,0x4                         ; 005caa1f
    INC ESI                             ; 005caa22
    CALL FUN_005c09f0                   ; 005caa23
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c09f0()
    MOV EBP,dword ptr [0x02c9ff64]      ; 005caa28 | DAT_02c9ff64
    ADD ESP,0x4                         ; 005caa2e
    CMP ESI,EBP                         ; 005caa31
    JL 0x005caa06                       ; 005caa33
        ;   XREF to: 005caa06 (CONDITIONAL_JUMP)  ; LAB_005caa06
    MOV EAX,[0x02c9ff68]                ; 005caa35 | DAT_02c9ff68
        ;   Label: LAB_005caa35
    TEST EAX,EAX                        ; 005caa3a
    JZ 0x005caa47                       ; 005caa3c
        ;   XREF to: 005caa47 (CONDITIONAL_JUMP)  ; LAB_005caa47
    PUSH EAX                            ; 005caa3e
    CALL FUN_005c09f0                   ; 005caa3f
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c09f0()
    ADD ESP,0x4                         ; 005caa44
    POP EBP                             ; 005caa47
        ;   Label: LAB_005caa47
    POP EDI                             ; 005caa48
    POP ESI                             ; 005caa49
    POP EBX                             ; 005caa4a
    RET                                 ; 005caa4b


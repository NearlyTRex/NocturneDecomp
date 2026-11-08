; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c9e40(int param_1)
;
;
; XREF[1]:
;   FUN_004c65f0 at 004c6e5f
;
; Referenced Globals:
;   undefined4 DAT_00622c18
;   undefined4 DAT_01e82168
;
; Called Functions:
;   FUN_00559220
;   FUN_00559250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c9e40
        ;   Label: FUN_004c9e40
    PUSH ESI                            ; 004c9e41
    MOV ESI,dword ptr [ESP + 0xc]       ; 004c9e42
    PUSH ESI                            ; 004c9e46
    MOV EDX,dword ptr [0x00622c18]      ; 004c9e47 | DAT_00622c18
    PUSH EDX                            ; 004c9e4d | DAT_01e82168
    LEA EBX,[ESI + 0x1fae8]             ; 004c9e4e
    CALL FUN_00559250                   ; 004c9e54
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; undefined FUN_00559250()
    ADD ESP,0x8                         ; 004c9e59
    MOV EAX,dword ptr [EBX + 0x338]     ; 004c9e5c
    PUSH EAX                            ; 004c9e62
    MOV EDX,dword ptr [EAX + 0x154]     ; 004c9e63
    CALL dword ptr [EDX + 0xe4]         ; 004c9e69
    ADD ESP,0x4                         ; 004c9e6f
    TEST EAX,EAX                        ; 004c9e72
    JZ 0x004c9e8f                       ; 004c9e74
        ;   XREF to: 004c9e8f (CONDITIONAL_JUMP)  ; LAB_004c9e8f
    MOV EAX,dword ptr [EBX + 0x338]     ; 004c9e76
    CMP dword ptr [EAX + 0x2dc],0x1     ; 004c9e7c
    JNZ 0x004c9e8f                      ; 004c9e83
        ;   XREF to: 004c9e8f (CONDITIONAL_JUMP)  ; LAB_004c9e8f
    MOV dword ptr [ESI + 0x1ffe4],0x3f800000 ; 004c9e85
    MOV EBX,dword ptr [0x00622c18]      ; 004c9e8f | DAT_00622c18
        ;   Label: LAB_004c9e8f
    PUSH EBX                            ; 004c9e95 | DAT_01e82168
    CALL FUN_00559220                   ; 004c9e96
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; undefined FUN_00559220()
    ADD ESP,0x4                         ; 004c9e9b
    MOV dword ptr [ESI + 0x1ffc4],0x0   ; 004c9e9e
    POP ESI                             ; 004c9ea8
    POP EBX                             ; 004c9ea9
    RET                                 ; 004c9eaa


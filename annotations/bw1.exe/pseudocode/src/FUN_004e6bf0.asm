; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e6bf0(int param_1)
;
;
; XREF[4]:
;   FUN_00459100 at 0045a3f4
;   FUN_004e69e0 at 004e6a35
;   FUN_005952f0 at 005953fd
;   FUN_005bafb0 at 005bc314
;
; Referenced Globals:
;   undefined4 DAT_00622c18
;   undefined4 DAT_01e82168
;
; Called Functions:
;   FUN_0054f060
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e6bf0
        ;   Label: FUN_004e6bf0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e6bf1
    MOV EDX,dword ptr [EBX + 0x2dc]     ; 004e6bf5
    TEST EDX,EDX                        ; 004e6bfb
    JNZ 0x004e6c46                      ; 004e6bfd
        ;   XREF to: 004e6c46 (CONDITIONAL_JUMP)  ; LAB_004e6c46
    CMP dword ptr [EBX + 0x2e0],0x0     ; 004e6bff
    JNZ 0x004e6c46                      ; 004e6c06
        ;   XREF to: 004e6c46 (CONDITIONAL_JUMP)  ; LAB_004e6c46
    MOV dword ptr [EBX + 0x2e0],0x1     ; 004e6c08
    MOV AH,byte ptr [EBX + 0x34c]       ; 004e6c12
    MOV dword ptr [EBX + 0x2d4],EDX     ; 004e6c18
    TEST AH,AH                          ; 004e6c1e
    JZ 0x004e6c36                       ; 004e6c20
        ;   XREF to: 004e6c36 (CONDITIONAL_JUMP)  ; LAB_004e6c36
    LEA EAX,[EBX + 0x34c]               ; 004e6c22
    PUSH EAX                            ; 004e6c28
    MOV EDX,dword ptr [EBX + 0x154]     ; 004e6c29
    PUSH EBX                            ; 004e6c2f
    CALL dword ptr [EDX + 0x2c]         ; 004e6c30
    ADD ESP,0x8                         ; 004e6c33
    PUSH EBX                            ; 004e6c36
        ;   Label: LAB_004e6c36
    MOV EBX,dword ptr [0x00622c18]      ; 004e6c37 | DAT_00622c18
    PUSH EBX                            ; 004e6c3d | DAT_01e82168
    CALL FUN_0054f060                   ; 004e6c3e
        ;   XREF to: 0054f060 (UNCONDITIONAL_CALL)  ; undefined FUN_0054f060()
    ADD ESP,0x8                         ; 004e6c43
    POP EBX                             ; 004e6c46
        ;   Label: LAB_004e6c46
    RET                                 ; 004e6c47


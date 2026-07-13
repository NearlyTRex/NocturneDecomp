; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041f0f0(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; Called Functions:
;   FUN_0041cb40
;   FUN_0041e4d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041f0f0
        ;   Label: FUN_0041f0f0
    SUB ESP,0xc                         ; 0041f0f1
    MOV EBX,dword ptr [ESP + 0x14]      ; 0041f0f4
    PUSH EBX                            ; 0041f0f8
    MOV dword ptr [EBX + 0x310],0x0     ; 0041f0f9
    CALL FUN_0041e4d0                   ; 0041f103
        ;   XREF to: 0041e4d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041e4d0()
    ADD ESP,0x4                         ; 0041f108
    MOV EDX,dword ptr [ESP + 0x18]      ; 0041f10b
    TEST EDX,EDX                        ; 0041f10f
    JNZ 0x0041f118                      ; 0041f111
        ;   XREF to: 0041f118 (CONDITIONAL_JUMP)  ; LAB_0041f118
    ADD ESP,0xc                         ; 0041f113
    POP EBX                             ; 0041f116
    RET                                 ; 0041f117
    PUSH EDI                            ; 0041f118
        ;   Label: LAB_0041f118
    LEA EAX,[ESP + 0x4]                 ; 0041f119
    PUSH EAX                            ; 0041f11d
    MOV EDI,0x4116cbe4                  ; 0041f11e
    XOR ECX,ECX                         ; 0041f123
    PUSH EDX                            ; 0041f125
    LEA EAX,[EBX + 0x38c]               ; 0041f126
    MOV dword ptr [ESP + 0x14],ECX      ; 0041f12c
    PUSH EAX                            ; 0041f130
    MOV dword ptr [ESP + 0x14],ECX      ; 0041f131
    MOV dword ptr [ESP + 0x10],EDI      ; 0041f135
    CALL FUN_0041cb40                   ; 0041f139
        ;   XREF to: 0041cb40 (UNCONDITIONAL_CALL)  ; undefined FUN_0041cb40()
    ADD ESP,0xc                         ; 0041f13e
    POP EDI                             ; 0041f141
    ADD ESP,0xc                         ; 0041f142
    POP EBX                             ; 0041f145
    RET                                 ; 0041f146


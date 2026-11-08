; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0056fb10(undefined4 *param_1,undefined4 param_2,undefined1 *param_3,undefined4 *param_4)
;
; Local Variables:
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   FUN_00504c10 at 00504c4e
;   FUN_00504c70 at 00504cdd
;   FUN_00570350 at 005703c4
;   FUN_00571d80 at 00571dd4
;
; Called Functions:
;   FUN_0056f750
;   Ordinal_111
;   Ordinal_16
;   Ordinal_17
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056fb10
        ;   Label: FUN_0056fb10
    PUSH ESI                            ; 0056fb11
    PUSH EDI                            ; 0056fb12
    PUSH EBP                            ; 0056fb13
    SUB ESP,0x1c                        ; 0056fb14
    MOV ECX,dword ptr [ESP + 0x30]      ; 0056fb17
    MOV EDX,dword ptr [ESP + 0x34]      ; 0056fb1b
    MOV EBX,dword ptr [ESP + 0x38]      ; 0056fb1f
    MOV EDI,dword ptr [ESP + 0x3c]      ; 0056fb23
    TEST EDI,EDI                        ; 0056fb27
    JNZ 0x0056fb4b                      ; 0056fb29
        ;   XREF to: 0056fb4b (CONDITIONAL_JUMP)  ; LAB_0056fb4b
    PUSH EDI                            ; 0056fb2b
    PUSH EBX                            ; 0056fb2c
    PUSH EDX                            ; 0056fb2d
    MOV EDX,dword ptr [ECX]             ; 0056fb2e
    PUSH EDX                            ; 0056fb30
    CALL Ordinal_16                     ; 0056fb31
        ;   XREF to: 005b25aa (UNCONDITIONAL_CALL)  ; undefined Ordinal_16()
    MOV EBX,EAX                         ; 0056fb36
    TEST EBX,EBX                        ; 0056fb38
        ;   Label: LAB_0056fb38
    JZ 0x0056fb86                       ; 0056fb3a
        ;   XREF to: 0056fb86 (CONDITIONAL_JUMP)  ; LAB_0056fb86
    CMP EBX,-0x1                        ; 0056fb3c
    JZ 0x0056fb8d                       ; 0056fb3f
        ;   XREF to: 0056fb8d (CONDITIONAL_JUMP)  ; LAB_0056fb8d
    MOV EAX,EBX                         ; 0056fb41
        ;   Label: LAB_0056fb41
    ADD ESP,0x1c                        ; 0056fb43
        ;   Label: LAB_0056fb43
    POP EBP                             ; 0056fb46
    POP EDI                             ; 0056fb47
    POP ESI                             ; 0056fb48
    POP EBX                             ; 0056fb49
    RET                                 ; 0056fb4a
    LEA EAX,[ESP + 0x18]                ; 0056fb4b
        ;   Label: LAB_0056fb4b
    PUSH EAX                            ; 0056fb4f
    LEA EAX,[ESP + 0x4]                 ; 0056fb50
    PUSH EAX                            ; 0056fb54
    PUSH 0x0                            ; 0056fb55
    MOV ESI,0x10                        ; 0056fb57
    PUSH EBX                            ; 0056fb5c
    MOV dword ptr [ESP + 0x28],ESI      ; 0056fb5d
    PUSH EDX                            ; 0056fb61
    MOV EBP,dword ptr [ECX]             ; 0056fb62
    PUSH EBP                            ; 0056fb64
    CALL Ordinal_17                     ; 0056fb65
        ;   XREF to: 005b25a4 (UNCONDITIONAL_CALL)  ; undefined Ordinal_17()
    MOV EBX,EAX                         ; 0056fb6a
    TEST EAX,EAX                        ; 0056fb6c
    JLE 0x0056fb38                      ; 0056fb6e
        ;   XREF to: 0056fb38 (CONDITIONAL_JUMP)  ; LAB_0056fb38
    MOV EAX,ESP                         ; 0056fb70
    PUSH EAX                            ; 0056fb72
    LEA EAX,[ESP + 0x14]                ; 0056fb73
    PUSH EAX                            ; 0056fb77
    CALL FUN_0056f750                   ; 0056fb78
        ;   XREF to: 0056f750 (UNCONDITIONAL_CALL)  ; undefined FUN_0056f750()
    MOV ESI,EAX                         ; 0056fb7d
    ADD ESP,0x8                         ; 0056fb7f
    MOVSD ES:EDI,ESI                    ; 0056fb82
    MOVSD ES:EDI,ESI                    ; 0056fb83
    JMP 0x0056fb38                      ; 0056fb84
        ;   XREF to: 0056fb38 (UNCONDITIONAL_JUMP)  ; LAB_0056fb38
    MOV EAX,0xfffffffe                  ; 0056fb86
        ;   Label: LAB_0056fb86
    JMP 0x0056fb43                      ; 0056fb8b
        ;   XREF to: 0056fb43 (UNCONDITIONAL_JUMP)  ; LAB_0056fb43
    CALL Ordinal_111                    ; 0056fb8d
        ;   XREF to: 005b25e6 (UNCONDITIONAL_CALL)  ; undefined Ordinal_111()
        ;   Label: LAB_0056fb8d
    CMP EAX,0x2733                      ; 0056fb92
    JNZ 0x0056fb41                      ; 0056fb97
        ;   XREF to: 0056fb41 (CONDITIONAL_JUMP)  ; LAB_0056fb41
    XOR EAX,EAX                         ; 0056fb99
    ADD ESP,0x1c                        ; 0056fb9b
    POP EBP                             ; 0056fb9e
    POP EDI                             ; 0056fb9f
    POP ESI                             ; 0056fba0
    POP EBX                             ; 0056fba1
    RET                                 ; 0056fba2


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_FUN_00607080()
;
;
; XREF[1]:
;   crt_string.c_strtok_FUN_005fff50 at 005fff7b
;
; Referenced Globals:
;   undefined4 DAT_00665f28
;
; Called Functions:
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00607080
        ;   Label: crt_unknown.c_FUN_00607080
    PUSH ESI                            ; 00607081
    MOV ESI,dword ptr [ESP + 0xc]       ; 00607082
    MOV EBX,dword ptr [ESP + 0x10]      ; 00607086
    PUSH 0x20                           ; 0060708a
    PUSH 0x0                            ; 0060708c
    PUSH ESI                            ; 0060708e
    CALL crt_memory.c_memset_FUN_005fde40 ; 0060708f
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00607094
    MOV AL,byte ptr [EBX]               ; 00607097
    TEST AL,AL                          ; 00607099
    JNZ 0x006070a0                      ; 0060709b
        ;   XREF to: 006070a0 (CONDITIONAL_JUMP)  ; LAB_006070a0
    POP ESI                             ; 0060709d
    POP EBX                             ; 0060709e
    RET                                 ; 0060709f
    XOR EDX,EDX                         ; 006070a0
        ;   Label: LAB_006070a0
    MOV DL,AL                           ; 006070a2
    SAR EDX,0x3                         ; 006070a4
    AND AL,0x7                          ; 006070a7
    AND EAX,0xff                        ; 006070a9
    MOV AL,byte ptr [EAX + 0x665f28]    ; 006070ae | DAT_00665f28
    MOV AH,byte ptr [EDX + ESI*0x1]     ; 006070b4
    OR AH,AL                            ; 006070b7
    INC EBX                             ; 006070b9
    MOV byte ptr [EDX + ESI*0x1],AH     ; 006070ba
    MOV AL,byte ptr [EBX]               ; 006070bd
    TEST AL,AL                          ; 006070bf
    JNZ 0x006070a0                      ; 006070c1
        ;   XREF to: 006070a0 (CONDITIONAL_JUMP)  ; LAB_006070a0
    POP ESI                             ; 006070c3
    POP EBX                             ; 006070c4
    RET                                 ; 006070c5


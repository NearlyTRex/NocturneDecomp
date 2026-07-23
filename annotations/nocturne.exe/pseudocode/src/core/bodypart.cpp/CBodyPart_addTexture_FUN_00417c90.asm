; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_bodypart_cpp_CBodyPart_addTexture_FUN_00417c90(int param_1,char *param_2)
;
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModel_dismember_FUN_00519ec0 at 0051a2b0
;
; Referenced Globals:
;   TerminatedCString s_core_bodypart_cpp_005790e8
;   TerminatedCString s_Too_many_body_part_textu_005790fd
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   crt_memory.c_memset_FUN_00563cc0
;   crt_string.c__stricmp_FUN_00564520
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00417c90
        ;   Label: core_bodypart.cpp_CBodyPart_addTexture_FUN_00417c90
    PUSH ESI                            ; 00417c91
    PUSH EDI                            ; 00417c92
    PUSH EBP                            ; 00417c93
    MOV EBX,dword ptr [ESP + 0x14]      ; 00417c94
    MOV EBP,dword ptr [ESP + 0x18]      ; 00417c98
    MOV EDX,dword ptr [EBX + 0x184]     ; 00417c9c
    XOR ESI,ESI                         ; 00417ca2
    TEST EDX,EDX                        ; 00417ca4
    JLE 0x00417cce                      ; 00417ca6
        ;   XREF to: 00417cce (CONDITIONAL_JUMP)  ; LAB_00417cce
    LEA EDI,[EBX + 0x190]               ; 00417ca8
    PUSH EBP                            ; 00417cae
        ;   Label: LAB_00417cae
    PUSH EDI                            ; 00417caf
    CALL crt_string.c__stricmp_FUN_00564520 ; 00417cb0
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 00417cb5
    TEST EAX,EAX                        ; 00417cb8
    JZ 0x00417d67                       ; 00417cba
        ;   XREF to: 00417d67 (CONDITIONAL_JUMP)  ; LAB_00417d67
    INC ESI                             ; 00417cc0
    MOV ECX,dword ptr [EBX + 0x184]     ; 00417cc1
    ADD EDI,0x18                        ; 00417cc7
    CMP ESI,ECX                         ; 00417cca
    JL 0x00417cae                       ; 00417ccc
        ;   XREF to: 00417cae (CONDITIONAL_JUMP)  ; LAB_00417cae
    CMP dword ptr [EBX + 0x184],0xa     ; 00417cce
        ;   Label: LAB_00417cce
    JL 0x00417cf9                       ; 00417cd5
        ;   XREF to: 00417cf9 (CONDITIONAL_JUMP)  ; LAB_00417cf9
    MOV EDI,0x5790e8                    ; 00417cd7 | = "..\\core\\bodypart.cpp"
    MOV EAX,0x47a                       ; 00417cdc
    PUSH 0x5790fd                       ; 00417ce1 | = "Too many body part textures!"
    MOV dword ptr [0x01cc4800],EDI      ; 00417ce6 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 00417cec | DAT_01cc4804
    CALL FUN_004c8440                   ; 00417cf1
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00417cf6
    MOV ESI,dword ptr [EBX + 0x184]     ; 00417cf9
        ;   Label: LAB_00417cf9
    LEA EAX,[ESI*0x4 + 0x0]             ; 00417cff
    PUSH 0x18                           ; 00417d06
    SUB EAX,ESI                         ; 00417d08
    LEA EDI,[EBX + 0x188]               ; 00417d0a
    SHL EAX,0x3                         ; 00417d10
    PUSH 0x0                            ; 00417d13
    ADD EAX,EDI                         ; 00417d15
    PUSH EAX                            ; 00417d17
    CALL crt_memory.c_memset_FUN_00563cc0 ; 00417d18
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_memset_FUN_00563cc0()
    MOV ESI,dword ptr [EBX + 0x184]     ; 00417d1d
    LEA EAX,[ESI*0x4 + 0x0]             ; 00417d23
    SUB EAX,ESI                         ; 00417d2a
    SHL EAX,0x3                         ; 00417d2c
    ADD ESP,0xc                         ; 00417d2f
    ADD EDI,EAX                         ; 00417d32
    MOV ESI,EBP                         ; 00417d34
    ADD EDI,0x8                         ; 00417d36
    PUSH EDI                            ; 00417d39
    MOV AL,byte ptr [ESI]               ; 00417d3a
        ;   Label: LAB_00417d3a
    MOV byte ptr [EDI],AL               ; 00417d3c
    CMP AL,0x0                          ; 00417d3e
    JZ 0x00417d52                       ; 00417d40
        ;   XREF to: 00417d52 (CONDITIONAL_JUMP)  ; LAB_00417d52
    MOV AL,byte ptr [ESI + 0x1]         ; 00417d42
    ADD ESI,0x2                         ; 00417d45
    MOV byte ptr [EDI + 0x1],AL         ; 00417d48
    ADD EDI,0x2                         ; 00417d4b
    CMP AL,0x0                          ; 00417d4e
    JNZ 0x00417d3a                      ; 00417d50
        ;   XREF to: 00417d3a (CONDITIONAL_JUMP)  ; LAB_00417d3a
    POP EDI                             ; 00417d52
        ;   Label: LAB_00417d52
    MOV EAX,dword ptr [EBX + 0x184]     ; 00417d53
    LEA ESI,[EAX + 0x1]                 ; 00417d59
    MOV dword ptr [EBX + 0x184],ESI     ; 00417d5c
    POP EBP                             ; 00417d62
    POP EDI                             ; 00417d63
    POP ESI                             ; 00417d64
    POP EBX                             ; 00417d65
    RET                                 ; 00417d66
    MOV EAX,ESI                         ; 00417d67
        ;   Label: LAB_00417d67
    POP EBP                             ; 00417d69
    POP EDI                             ; 00417d6a
    POP ESI                             ; 00417d6b
    POP EBX                             ; 00417d6c
    RET                                 ; 00417d6d


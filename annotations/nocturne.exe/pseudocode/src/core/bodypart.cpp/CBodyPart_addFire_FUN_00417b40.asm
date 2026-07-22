; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_CBodyPart_addFire_FUN_00417b40(int param_1,undefined4 *param_2)
;
; Local Variables:
; undefined        Stack[-0x18]:1  local_18
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0 at 0042808d
;
; Referenced Globals:
;   TerminatedCString s_CHAR2_RAW_005790de
;   undefined4 s_CHAR2_RAW_005790de+1
;   undefined4 s_CHAR2_RAW_005790de+2
;   undefined4 s_CHAR2_RAW_005790de+3
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_flame.cpp_CFlame_setup_FUN_0048d050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00417b40
        ;   Label: core_bodypart.cpp_CBodyPart_addFire_FUN_00417b40
    PUSH EBP                            ; 00417b41
    SUB ESP,0x10                        ; 00417b42
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00417b45
    MOV ECX,dword ptr [ESP + 0x20]      ; 00417b49
    MOV EDX,dword ptr [EBX + 0x744]     ; 00417b4d
    CMP EDX,0x2                         ; 00417b53
    JGE 0x00417c82                      ; 00417b56
        ;   XREF to: 00417c82 (CONDITIONAL_JUMP)  ; LAB_00417c82
    PUSH EDI                            ; 00417b5c
    PUSH ESI                            ; 00417b5d
    LEA EAX,[EDX*0x4 + 0x0]             ; 00417b5e
    ADD EAX,EDX                         ; 00417b65
    SHL EAX,0x3                         ; 00417b67
    LEA ESI,[EBX + 0x748]               ; 00417b6a
    MOV EDX,EAX                         ; 00417b70
    SHL EAX,0x4                         ; 00417b72
    MOV EDI,dword ptr [EBX + 0x744]     ; 00417b75
    ADD EAX,EDX                         ; 00417b7b
    INC EDI                             ; 00417b7d
    ADD ESI,EAX                         ; 00417b7e
    MOV dword ptr [EBX + 0x744],EDI     ; 00417b80
    CMP ESI,ECX                         ; 00417b86
    JZ 0x00417b9a                       ; 00417b88
        ;   XREF to: 00417b9a (CONDITIONAL_JUMP)  ; LAB_00417b9a
    MOV EAX,dword ptr [ECX]             ; 00417b8a
    MOV dword ptr [ESI],EAX             ; 00417b8c
    MOV EAX,dword ptr [ECX + 0x4]       ; 00417b8e
    MOV dword ptr [ESI + 0x4],EAX       ; 00417b91
    MOV EAX,dword ptr [ECX + 0x8]       ; 00417b94
    MOV dword ptr [ESI + 0x8],EAX       ; 00417b97
    PUSH ESI                            ; 00417b9a
        ;   Label: LAB_00417b9a
    LEA EAX,[ESP + 0xc]                 ; 00417b9b
    PUSH EAX                            ; 00417b9f
    PUSH EBX                            ; 00417ba0
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00417ba1
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    LEA EDX,[ESI + 0x2c]                ; 00417ba6
    FLD float ptr [EAX]                 ; 00417ba9
    ADD ESP,0xc                         ; 00417bab
    FSTP float ptr [EDX]                ; 00417bae
    MOV ECX,dword ptr [EAX + 0x4]       ; 00417bb0
    MOV dword ptr [EDX + 0x4],ECX       ; 00417bb3
    FLD float ptr [EAX + 0x8]           ; 00417bb6
    LEA EAX,[ESI + 0xc]                 ; 00417bb9
    PUSH EAX                            ; 00417bbc
    FSTP float ptr [EDX + 0x8]          ; 00417bbd
    CALL core_flame.cpp_CFlame_setup_FUN_0048d050 ; 00417bc0
        ;   XREF to: 0048d050 (UNCONDITIONAL_CALL)  ; undefined core_flame.cpp_CFlame_setup_FUN_0048d050()
    MOV dword ptr [ESI + 0x1b0],0x0     ; 00417bc5
    MOV dword ptr [ESI + 0x15c],0x3fc00000 ; 00417bcf
    MOV dword ptr [ESI + 0x160],0x40400000 ; 00417bd9
    LEA EDI,[EBX + 0x190]               ; 00417be3
    MOV dword ptr [ESI + 0x164],0x3fc00000 ; 00417be9
    ADD ESP,0x4                         ; 00417bf3
    MOV dword ptr [EBX + 0xfc],0x1      ; 00417bf6
    MOV ESI,0x5790de                    ; 00417c00 | = "CHAR2.RAW"
    MOV dword ptr [EBX + 0x184],0x1     ; 00417c05
    PUSH EDI                            ; 00417c0f
    MOV AL,byte ptr [ESI]               ; 00417c10 | = "CHAR2.RAW" | s_CHAR2_RAW_005790de+2
        ;   Label: LAB_00417c10
    MOV byte ptr [EDI],AL               ; 00417c12
    CMP AL,0x0                          ; 00417c14
    JZ 0x00417c28                       ; 00417c16
        ;   XREF to: 00417c28 (CONDITIONAL_JUMP)  ; LAB_00417c28
    MOV AL,byte ptr [ESI + 0x1]         ; 00417c18 | s_CHAR2_RAW_005790de+1 | s_CHAR2_RAW_005790de+3
    ADD ESI,0x2                         ; 00417c1b
    MOV byte ptr [EDI + 0x1],AL         ; 00417c1e
    ADD EDI,0x2                         ; 00417c21
    CMP AL,0x0                          ; 00417c24
    JNZ 0x00417c10                      ; 00417c26
        ;   XREF to: 00417c10 (CONDITIONAL_JUMP)  ; LAB_00417c10
    POP EDI                             ; 00417c28
        ;   Label: LAB_00417c28
    MOV EBP,dword ptr [EBX + 0x178]     ; 00417c29
    XOR EDX,EDX                         ; 00417c2f
    TEST EBP,EBP                        ; 00417c31
    JLE 0x00417c60                      ; 00417c33
        ;   XREF to: 00417c60 (CONDITIONAL_JUMP)  ; LAB_00417c60
    XOR EAX,EAX                         ; 00417c35
    MOV ECX,dword ptr [EBX + 0x180]     ; 00417c37
        ;   Label: LAB_00417c37
    MOV dword ptr [ECX + EAX*0x1],0x0   ; 00417c3d
    INC EDX                             ; 00417c44
    MOV ECX,dword ptr [EBX + 0x178]     ; 00417c45
    ADD EAX,0x4                         ; 00417c4b
    CMP EDX,ECX                         ; 00417c4e
    JL 0x00417c37                       ; 00417c50
        ;   XREF to: 00417c37 (CONDITIONAL_JUMP)  ; LAB_00417c37
    LEA EAX,[EAX]                       ; 00417c52
    LEA EDX,[EDX]                       ; 00417c58
    MOV EAX,EAX                         ; 00417c5e
    PUSH 0x41a00000                     ; 00417c60
        ;   Label: LAB_00417c60
    PUSH 0x41400000                     ; 00417c65
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00417c6a
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x1c],EAX      ; 00417c6f
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00417c73
    MOV dword ptr [EBX + 0xcb0],EAX     ; 00417c77
    ADD ESP,0x8                         ; 00417c7d
    POP ESI                             ; 00417c80
    POP EDI                             ; 00417c81
    ADD ESP,0x10                        ; 00417c82
        ;   Label: LAB_00417c82
    POP EBP                             ; 00417c85
    POP EBX                             ; 00417c86
    RET                                 ; 00417c87


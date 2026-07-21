; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_morph_cpp_CMorphModel_findOrAddTexture_FUN_004dfba0(int param_1,char *param_2)
;
;
; XREF[2]:
;   FUN_004df800 at 004df8b7
;   core_morph.cpp_CMorphModel_setFaceListFromTriangles_FUN_004df9e0 at 004dfaa9
;
; Referenced Globals:
;   string s_..\\core\\morph.cpp_0058acd8
;   string s_CMorphModel::findOrAddTexture_-_t_0058acea
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

    PUSH EBX                            ; 004dfba0
        ;   Label: core_morph.cpp_CMorphModel_findOrAddTexture_FUN_004dfba0
    PUSH ESI                            ; 004dfba1
    PUSH EDI                            ; 004dfba2
    PUSH EBP                            ; 004dfba3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004dfba4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004dfba8
    MOV EDX,dword ptr [EBX + 0x64]      ; 004dfbac
    XOR ESI,ESI                         ; 004dfbaf
    TEST EDX,EDX                        ; 004dfbb1
    JLE 0x004dfbd5                      ; 004dfbb3
        ;   XREF to: 004dfbd5 (CONDITIONAL_JUMP)  ; LAB_004dfbd5
    LEA EDI,[EBX + 0x70]                ; 004dfbb5
    PUSH EBP                            ; 004dfbb8
        ;   Label: LAB_004dfbb8
    PUSH EDI                            ; 004dfbb9
    CALL crt_string.c__stricmp_FUN_00564520 ; 004dfbba
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 004dfbbf
    TEST EAX,EAX                        ; 004dfbc2
    JZ 0x004dfc5c                       ; 004dfbc4
        ;   XREF to: 004dfc5c (CONDITIONAL_JUMP)  ; LAB_004dfc5c
    INC ESI                             ; 004dfbca
    MOV ECX,dword ptr [EBX + 0x64]      ; 004dfbcb
    ADD EDI,0x48                        ; 004dfbce
    CMP ESI,ECX                         ; 004dfbd1
    JL 0x004dfbb8                       ; 004dfbd3
        ;   XREF to: 004dfbb8 (CONDITIONAL_JUMP)  ; LAB_004dfbb8
    CMP dword ptr [EBX + 0x64],0x14     ; 004dfbd5
        ;   Label: LAB_004dfbd5
    JL 0x004dfbfd                       ; 004dfbd9
        ;   XREF to: 004dfbfd (CONDITIONAL_JUMP)  ; LAB_004dfbfd
    MOV EDI,0x58acd8                    ; 004dfbdb | = "..\\core\\morph.cpp"
    MOV EAX,0x1d0                       ; 004dfbe0
    PUSH 0x58acea                       ; 004dfbe5 | = "CMorphModel::findOrAddTexture - too m..."
    MOV dword ptr [0x01cc4800],EDI      ; 004dfbea | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004dfbf0 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004dfbf5
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004dfbfa
    MOV ESI,dword ptr [EBX + 0x64]      ; 004dfbfd
        ;   Label: LAB_004dfbfd
    LEA EAX,[ESI*0x8 + 0x0]             ; 004dfc00
    PUSH 0x48                           ; 004dfc07
    ADD EAX,ESI                         ; 004dfc09
    LEA EDI,[EBX + 0x68]                ; 004dfc0b
    SHL EAX,0x3                         ; 004dfc0e
    PUSH 0x0                            ; 004dfc11
    ADD EAX,EDI                         ; 004dfc13
    PUSH EAX                            ; 004dfc15
    CALL crt_memory.c_memset_FUN_00563cc0 ; 004dfc16
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_memset_FUN_00563cc0()
    MOV ESI,dword ptr [EBX + 0x64]      ; 004dfc1b
    LEA EAX,[ESI*0x8 + 0x0]             ; 004dfc1e
    ADD EAX,ESI                         ; 004dfc25
    SHL EAX,0x3                         ; 004dfc27
    ADD ESP,0xc                         ; 004dfc2a
    ADD EDI,EAX                         ; 004dfc2d
    MOV ESI,EBP                         ; 004dfc2f
    ADD EDI,0x8                         ; 004dfc31
    PUSH EDI                            ; 004dfc34
    MOV AL,byte ptr [ESI]               ; 004dfc35
        ;   Label: LAB_004dfc35
    MOV byte ptr [EDI],AL               ; 004dfc37
    CMP AL,0x0                          ; 004dfc39
    JZ 0x004dfc4d                       ; 004dfc3b
        ;   XREF to: 004dfc4d (CONDITIONAL_JUMP)  ; LAB_004dfc4d
    MOV AL,byte ptr [ESI + 0x1]         ; 004dfc3d
    ADD ESI,0x2                         ; 004dfc40
    MOV byte ptr [EDI + 0x1],AL         ; 004dfc43
    ADD EDI,0x2                         ; 004dfc46
    CMP AL,0x0                          ; 004dfc49
    JNZ 0x004dfc35                      ; 004dfc4b
        ;   XREF to: 004dfc35 (CONDITIONAL_JUMP)  ; LAB_004dfc35
    POP EDI                             ; 004dfc4d
        ;   Label: LAB_004dfc4d
    MOV EAX,dword ptr [EBX + 0x64]      ; 004dfc4e
    LEA ESI,[EAX + 0x1]                 ; 004dfc51
    MOV dword ptr [EBX + 0x64],ESI      ; 004dfc54
    POP EBP                             ; 004dfc57
    POP EDI                             ; 004dfc58
    POP ESI                             ; 004dfc59
    POP EBX                             ; 004dfc5a
    RET                                 ; 004dfc5b
    MOV EAX,ESI                         ; 004dfc5c
        ;   Label: LAB_004dfc5c
    POP EBP                             ; 004dfc5e
    POP EDI                             ; 004dfc5f
    POP ESI                             ; 004dfc60
    POP EBX                             ; 004dfc61
    RET                                 ; 004dfc62


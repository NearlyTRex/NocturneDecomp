; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ade20(int param_1)
;
;
; XREF[1]:
;   FUN_005adeb0 at 005ae10a
;
; Referenced Globals:
;   TerminatedCString s_core_cloth_cpp_005f0f3b
;   TerminatedCString s_CCloth_allocMemory_Out_o_005f0f4d
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;   FUN_005ade80
;   FUN_005b8df8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ade20
        ;   Label: FUN_005ade20
    MOV EBX,dword ptr [ESP + 0x8]       ; 005ade21
    PUSH EBX                            ; 005ade25
    CALL FUN_005ade80                   ; 005ade26
        ;   XREF to: 005ade80 (UNCONDITIONAL_CALL)  ; undefined FUN_005ade80()
    MOV EAX,dword ptr [EBX + 0x104]     ; 005ade2b
    ADD ESP,0x4                         ; 005ade31
    SHL EAX,0x2                         ; 005ade34
    PUSH EAX                            ; 005ade37
    CALL FUN_005b8df8                   ; 005ade38
        ;   XREF to: 005b8df8 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8df8()
    ADD ESP,0x4                         ; 005ade3d
    MOV dword ptr [EBX + 0x3aafc],EAX   ; 005ade40
    TEST EAX,EAX                        ; 005ade46
    JZ 0x005ade4c                       ; 005ade48
        ;   XREF to: 005ade4c (CONDITIONAL_JUMP)  ; LAB_005ade4c
    POP EBX                             ; 005ade4a
    RET                                 ; 005ade4b
    MOV ECX,0x5f0f3b                    ; 005ade4c | = "..\\core\\cloth.cpp"
        ;   Label: LAB_005ade4c
    MOV EBX,0x77                        ; 005ade51
    PUSH 0x5f0f4d                       ; 005ade56 | = "CCloth::allocMemory - Out of memory"
    MOV dword ptr [0x01d046a0],ECX      ; 005ade5b | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 005ade61 | DAT_01d046a4
    CALL FUN_004e4500                   ; 005ade67
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 005ade6c
    POP EBX                             ; 005ade6f
    RET                                 ; 005ade70


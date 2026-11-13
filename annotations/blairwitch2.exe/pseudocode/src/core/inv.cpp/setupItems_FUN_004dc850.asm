; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_inv_cpp_setupItems_FUN_004dc850(int param_1)
;
;
; XREF[1]:
;   core_hero.cpp_CHero_setup_FUN_004ce4a0 at 004ce4ce
;
; Referenced Globals:
;   TerminatedCString s_core_inv_cpp_005db8d9
;   TerminatedCString s_CInventory_setupItems_we_005db8e9
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dc850
        ;   Label: core_inv.cpp_setupItems_FUN_004dc850
    PUSH ESI                            ; 004dc851
    PUSH EDI                            ; 004dc852
    PUSH EBP                            ; 004dc853
    MOV EDI,dword ptr [ESP + 0x14]      ; 004dc854
    CMP dword ptr [EDI + 0x460],0x0     ; 004dc858
    JNZ 0x004dc895                      ; 004dc85f
        ;   XREF to: 004dc895 (CONDITIONAL_JUMP)  ; LAB_004dc895
    MOV ESI,dword ptr [EDI + 0x10]      ; 004dc861
        ;   Label: LAB_004dc861
    XOR EBX,EBX                         ; 004dc864
    TEST ESI,ESI                        ; 004dc866
    JLE 0x004dc890                      ; 004dc868
        ;   XREF to: 004dc890 (CONDITIONAL_JUMP)  ; LAB_004dc890
    MOV ESI,EDI                         ; 004dc86a
    MOV EAX,dword ptr [ESI + 0x14]      ; 004dc86c
        ;   Label: LAB_004dc86c
    PUSH EAX                            ; 004dc86f
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004dc870
    ADD ESI,0x4                         ; 004dc876
    INC EBX                             ; 004dc879
    CALL dword ptr [EDX + 0x8]          ; 004dc87a
    MOV EBP,dword ptr [EDI + 0x10]      ; 004dc87d
    ADD ESP,0x4                         ; 004dc880
    CMP EBX,EBP                         ; 004dc883
    JL 0x004dc86c                       ; 004dc885
        ;   XREF to: 004dc86c (CONDITIONAL_JUMP)  ; LAB_004dc86c
    LEA EAX,[EAX]                       ; 004dc887
    LEA EDX,[EDX]                       ; 004dc88d
    POP EBP                             ; 004dc890
        ;   Label: LAB_004dc890
    POP EDI                             ; 004dc891
    POP ESI                             ; 004dc892
    POP EBX                             ; 004dc893
    RET                                 ; 004dc894
    MOV ECX,0x5db8d9                    ; 004dc895 | = "..\\core\\inv.cpp"
        ;   Label: LAB_004dc895
    MOV EBX,0x64e                       ; 004dc89a
    PUSH 0x5db8e9                       ; 004dc89f | = "CInventory::setupItems - we should ow..."
    MOV dword ptr [0x01d046a0],ECX      ; 004dc8a4 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 004dc8aa | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004dc8b0
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004dc8b5
    JMP 0x004dc861                      ; 004dc8b8
        ;   XREF to: 004dc861 (UNCONDITIONAL_JUMP)  ; LAB_004dc861


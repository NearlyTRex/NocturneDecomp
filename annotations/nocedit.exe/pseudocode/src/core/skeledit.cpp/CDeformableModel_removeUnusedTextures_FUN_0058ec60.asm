; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeledit_cpp_CDeformableModel_removeUnusedTextures_FUN_0058ec60(CDeformableModel *this_ptr)
;
; Parameters:
; CDeformableModel * Stack[0x8]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_skeledit.cpp_FUN_0058c190 at 0058c367
;
; Referenced Globals:
;   TerminatedCString s_core_skeledit_cpp_0064b0ca
;   TerminatedCString s_CDeformableModel_removeU_0064b0df
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stack.c___STK_FUN_005ff9f3
;   crt_string.c_memmove_FUN_005fe5e0
;
; *****************************************************************************

section .text

    PUSH 0x34                           ; 0058ec60
        ;   Label: core_skeledit.cpp_CDeformableModel_removeUnusedTextures_FUN_0058ec60
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 0058ec65
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; void crt_stack.c___STK_FUN_005ff9f3()
    PUSH EBX                            ; 0058ec6a
    PUSH ESI                            ; 0058ec6b
    PUSH EDI                            ; 0058ec6c
    PUSH EBP                            ; 0058ec6d
    SUB ESP,0x14                        ; 0058ec6e
    MOV EAX,dword ptr [ESP + 0x28]      ; 0058ec71
    CMP dword ptr [EAX + 0xb8],0x1      ; 0058ec75
    JNZ 0x0058ecdf                      ; 0058ec7c
        ;   XREF to: 0058ecdf (CONDITIONAL_JUMP)  ; LAB_0058ecdf
    MOV EAX,dword ptr [ESP + 0x28]      ; 0058ec7e
        ;   Label: LAB_0058ec7e
    MOV EDI,dword ptr [EAX + 0xbc]      ; 0058ec82
    XOR ESI,ESI                         ; 0058ec88
    TEST EDI,EDI                        ; 0058ec8a
    JLE 0x0058ed4a                      ; 0058ec8c
        ;   XREF to: 0058ed4a (CONDITIONAL_JUMP)  ; LAB_0058ed4a
    ADD EAX,0xc0                        ; 0058ec92
    MOV dword ptr [ESP + 0x8],EAX       ; 0058ec97
    ADD EAX,0x48                        ; 0058ec9b
    MOV dword ptr [ESP + 0x4],EAX       ; 0058ec9e
    MOV EAX,dword ptr [ESP + 0x28]      ; 0058eca2
        ;   Label: LAB_0058eca2
    XOR EBP,EBP                         ; 0058eca6
    XOR EDI,EDI                         ; 0058eca8
    MOV EDX,dword ptr [EAX]             ; 0058ecaa
    MOV dword ptr [ESP],EBP             ; 0058ecac
    TEST EDX,EDX                        ; 0058ecaf
    JLE 0x0058ed1c                      ; 0058ecb1
        ;   XREF to: 0058ed1c (CONDITIONAL_JUMP)  ; LAB_0058ed1c
    MOV EBP,0x4                         ; 0058ecb3
    MOV dword ptr [ESP + 0xc],EAX       ; 0058ecb8
    MOV ECX,dword ptr [ESP + 0xc]       ; 0058ecbc
        ;   Label: LAB_0058ecbc
    XOR EDX,EDX                         ; 0058ecc0
    XOR EBX,EBX                         ; 0058ecc2
    MOV EAX,dword ptr [ECX + 0x54]      ; 0058ecc4
        ;   Label: LAB_0058ecc4
    ADD EAX,dword ptr [ECX + 0x68]      ; 0058ecc7
    CMP EBX,EAX                         ; 0058ecca
    JGE 0x0058ed07                      ; 0058eccc
        ;   XREF to: 0058ed07 (CONDITIONAL_JUMP)  ; LAB_0058ed07
    MOV EAX,dword ptr [ECX + 0x90]      ; 0058ecce
    CMP ESI,dword ptr [EDX + EAX*0x1]   ; 0058ecd4
    JZ 0x0058ed23                       ; 0058ecd7
        ;   XREF to: 0058ed23 (CONDITIONAL_JUMP)  ; LAB_0058ed23
    INC EBX                             ; 0058ecd9
    ADD EDX,0x4                         ; 0058ecda
    JMP 0x0058ecc4                      ; 0058ecdd
        ;   XREF to: 0058ecc4 (UNCONDITIONAL_JUMP)  ; LAB_0058ecc4
    MOV ECX,0x64b0ca                    ; 0058ecdf | = "..\\core\\skeledit.cpp"
        ;   Label: LAB_0058ecdf
    MOV EBX,0xa72                       ; 0058ece4
    PUSH 0x64b0df                       ; 0058ece9 | = "CDeformableModel::removeUnusedTexture..."
    MOV dword ptr [0x02f0ca48],ECX      ; 0058ecee | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0058ecf4 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0058ecfa
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0058ecff
    JMP 0x0058ec7e                      ; 0058ed02
        ;   XREF to: 0058ec7e (UNCONDITIONAL_JUMP)  ; LAB_0058ec7e
    MOV ECX,dword ptr [ESP + 0xc]       ; 0058ed07
        ;   Label: LAB_0058ed07
    MOV EAX,dword ptr [ESP + 0x28]      ; 0058ed0b
    INC EDI                             ; 0058ed0f
    ADD ECX,EBP                         ; 0058ed10
    MOV EBX,dword ptr [EAX]             ; 0058ed12
    MOV dword ptr [ESP + 0xc],ECX       ; 0058ed14
    CMP EDI,EBX                         ; 0058ed18
    JL 0x0058ecbc                       ; 0058ed1a
        ;   XREF to: 0058ecbc (CONDITIONAL_JUMP)  ; LAB_0058ecbc
    MOV EDI,dword ptr [ESP]             ; 0058ed1c
        ;   Label: LAB_0058ed1c
    TEST EDI,EDI                        ; 0058ed1f
    JZ 0x0058ed52                       ; 0058ed21
        ;   XREF to: 0058ed52 (CONDITIONAL_JUMP)  ; LAB_0058ed52
    MOV EDX,dword ptr [ESP + 0x4]       ; 0058ed23
        ;   Label: LAB_0058ed23
    MOV EAX,dword ptr [ESP + 0x8]       ; 0058ed27
    INC ESI                             ; 0058ed2b
    ADD EDX,0x48                        ; 0058ed2c
    ADD EAX,0x48                        ; 0058ed2f
    MOV dword ptr [ESP + 0x4],EDX       ; 0058ed32
    MOV dword ptr [ESP + 0x8],EAX       ; 0058ed36
    MOV EAX,dword ptr [ESP + 0x28]      ; 0058ed3a
        ;   Label: LAB_0058ed3a
    CMP ESI,dword ptr [EAX + 0xbc]      ; 0058ed3e
    JL 0x0058eca2                       ; 0058ed44
        ;   XREF to: 0058eca2 (CONDITIONAL_JUMP)  ; LAB_0058eca2
    ADD ESP,0x14                        ; 0058ed4a
        ;   Label: LAB_0058ed4a
    POP EBP                             ; 0058ed4d
    POP EDI                             ; 0058ed4e
    POP ESI                             ; 0058ed4f
    POP EBX                             ; 0058ed50
    RET                                 ; 0058ed51
    MOV EAX,dword ptr [ESP + 0x28]      ; 0058ed52
        ;   Label: LAB_0058ed52
    MOV EBP,dword ptr [EAX + 0xbc]      ; 0058ed56
    DEC EBP                             ; 0058ed5c
    MOV dword ptr [EAX + 0xbc],EBP      ; 0058ed5d
    MOV EAX,EBP                         ; 0058ed63
    SUB EAX,ESI                         ; 0058ed65
    IMUL EAX,EAX,0x48                   ; 0058ed67
    PUSH EAX                            ; 0058ed6a
    MOV EAX,dword ptr [ESP + 0x8]       ; 0058ed6b
    PUSH EAX                            ; 0058ed6f
    MOV EDX,dword ptr [ESP + 0x10]      ; 0058ed70
    PUSH EDX                            ; 0058ed74
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 0058ed75
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0058ed7a
    MOV EAX,dword ptr [ESP + 0x28]      ; 0058ed7d
    MOV EBX,dword ptr [EAX]             ; 0058ed81
    MOV dword ptr [ESP + 0x10],EDI      ; 0058ed83
    TEST EBX,EBX                        ; 0058ed87
    JLE 0x0058ed3a                      ; 0058ed89
        ;   XREF to: 0058ed3a (CONDITIONAL_JUMP)  ; LAB_0058ed3a
    MOV EDI,EAX                         ; 0058ed8b
    MOV EDX,EDI                         ; 0058ed8d
        ;   Label: LAB_0058ed8d
    XOR EBX,EBX                         ; 0058ed8f
    XOR ECX,ECX                         ; 0058ed91
    MOV EBP,dword ptr [EDX + 0x68]      ; 0058ed93
        ;   Label: LAB_0058ed93
    MOV EAX,dword ptr [EDX + 0x54]      ; 0058ed96
    ADD EAX,EBP                         ; 0058ed99
    CMP ECX,EAX                         ; 0058ed9b
    JGE 0x0058edb3                      ; 0058ed9d
        ;   XREF to: 0058edb3 (CONDITIONAL_JUMP)  ; LAB_0058edb3
    MOV EAX,dword ptr [EDX + 0x90]      ; 0058ed9f
    ADD EAX,EBX                         ; 0058eda5
    MOV EBP,dword ptr [EAX]             ; 0058eda7
    CMP ESI,EBP                         ; 0058eda9
    JL 0x0058edcf                       ; 0058edab
        ;   XREF to: 0058edcf (CONDITIONAL_JUMP)  ; LAB_0058edcf
    INC ECX                             ; 0058edad
    ADD EBX,0x4                         ; 0058edae
    JMP 0x0058ed93                      ; 0058edb1
        ;   XREF to: 0058ed93 (UNCONDITIONAL_JUMP)  ; LAB_0058ed93
    MOV EAX,dword ptr [ESP + 0x10]      ; 0058edb3
        ;   Label: LAB_0058edb3
    MOV EDX,dword ptr [ESP + 0x28]      ; 0058edb7
    ADD EDI,0x4                         ; 0058edbb
    INC EAX                             ; 0058edbe
    MOV ECX,dword ptr [EDX]             ; 0058edbf
    MOV dword ptr [ESP + 0x10],EAX      ; 0058edc1
    CMP EAX,ECX                         ; 0058edc5
    JGE 0x0058ed3a                      ; 0058edc7
        ;   XREF to: 0058ed3a (CONDITIONAL_JUMP)  ; LAB_0058ed3a
    JMP 0x0058ed8d                      ; 0058edcd
        ;   XREF to: 0058ed8d (UNCONDITIONAL_JUMP)  ; LAB_0058ed8d
    DEC EBP                             ; 0058edcf
        ;   Label: LAB_0058edcf
    MOV dword ptr [EAX],EBP             ; 0058edd0
    INC ECX                             ; 0058edd2
    ADD EBX,0x4                         ; 0058edd3
    JMP 0x0058ed93                      ; 0058edd6
        ;   XREF to: 0058ed93 (UNCONDITIONAL_JUMP)  ; LAB_0058ed93


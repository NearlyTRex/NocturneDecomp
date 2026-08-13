; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_clampClippedVertices_FUN_0055df90(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00766c70
;   undefined4 DAT_00766c74
;   undefined4 DAT_00766c7c
;   undefined4 DAT_00766ca4
;   undefined4 DAT_00766ca8
;   undefined4 DAT_00766cac
;   undefined4 DAT_00766cd4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055df90
        ;   Label: core_xform.cpp_clampClippedVertices_FUN_0055df90
    PUSH ESI                            ; 0055df91
    PUSH EDI                            ; 0055df92
    PUSH EBP                            ; 0055df93
    MOV ESI,dword ptr [0x00766c70]      ; 0055df94 | DAT_00766c70
    MOV EAX,0x766c74                    ; 0055df9a | DAT_00766c74
    XOR ECX,ECX                         ; 0055df9f
    TEST ESI,ESI                        ; 0055dfa1
    JLE 0x0055dfbd                      ; 0055dfa3
        ;   XREF to: 0055dfbd (CONDITIONAL_JUMP)  ; LAB_0055dfbd
    MOV EDX,dword ptr [EAX + 0x8]       ; 0055dfa5 | DAT_00766c7c | DAT_00766cac
        ;   Label: LAB_0055dfa5
    TEST EDX,EDX                        ; 0055dfa8
    JZ 0x0055dfc8                       ; 0055dfaa
        ;   XREF to: 0055dfc8 (CONDITIONAL_JUMP)  ; LAB_0055dfc8
    MOV EBX,dword ptr [EAX + 0x8]       ; 0055dfac | DAT_00766c7c | DAT_00766cac
    CMP EBX,dword ptr [EAX]             ; 0055dfaf | DAT_00766c74 | DAT_00766ca4
    JGE 0x0055dfd6                      ; 0055dfb1
        ;   XREF to: 0055dfd6 (CONDITIONAL_JUMP)  ; LAB_0055dfd6
    MOV dword ptr [EAX],EBX             ; 0055dfb3 | DAT_00766c74 | DAT_00766ca4
    INC ECX                             ; 0055dfb5
        ;   Label: LAB_0055dfb5
    ADD EAX,0x30                        ; 0055dfb6 | DAT_00766ca4 | DAT_00766cd4
    CMP ECX,ESI                         ; 0055dfb9
    JL 0x0055dfa5                       ; 0055dfbb
        ;   XREF to: 0055dfa5 (CONDITIONAL_JUMP)  ; LAB_0055dfa5
    MOV dword ptr [0x00766c70],ESI      ; 0055dfbd | DAT_00766c70
        ;   Label: LAB_0055dfbd
    POP EBP                             ; 0055dfc3
    POP EDI                             ; 0055dfc4
    POP ESI                             ; 0055dfc5
    POP EBX                             ; 0055dfc6
    RET                                 ; 0055dfc7
    MOV dword ptr [EAX + 0x8],0x1       ; 0055dfc8 | DAT_00766cac
        ;   Label: LAB_0055dfc8
    MOV dword ptr [EAX],EDX             ; 0055dfcf | DAT_00766ca4
    MOV dword ptr [EAX + 0x4],EDX       ; 0055dfd1 | DAT_00766ca8
    JMP 0x0055dfb5                      ; 0055dfd4
        ;   XREF to: 0055dfb5 (UNCONDITIONAL_JUMP)  ; LAB_0055dfb5
    MOV EDX,EBX                         ; 0055dfd6
        ;   Label: LAB_0055dfd6
    MOV EDI,dword ptr [EAX]             ; 0055dfd8 | DAT_00766ca4
    NEG EDX                             ; 0055dfda
    CMP EDX,EDI                         ; 0055dfdc
    JLE 0x0055dfe4                      ; 0055dfde
        ;   XREF to: 0055dfe4 (CONDITIONAL_JUMP)  ; LAB_0055dfe4
    MOV dword ptr [EAX],EDX             ; 0055dfe0 | DAT_00766ca4
    JMP 0x0055dfb5                      ; 0055dfe2
        ;   XREF to: 0055dfb5 (UNCONDITIONAL_JUMP)  ; LAB_0055dfb5
    MOV EBP,dword ptr [EAX + 0x8]       ; 0055dfe4 | DAT_00766cac
        ;   Label: LAB_0055dfe4
    MOV EBX,dword ptr [EAX + 0x4]       ; 0055dfe7 | DAT_00766ca8
    CMP EBX,EBP                         ; 0055dfea
    JLE 0x0055dff3                      ; 0055dfec
        ;   XREF to: 0055dff3 (CONDITIONAL_JUMP)  ; LAB_0055dff3
    MOV dword ptr [EAX + 0x4],EBP       ; 0055dfee | DAT_00766ca8
    JMP 0x0055dfb5                      ; 0055dff1
        ;   XREF to: 0055dfb5 (UNCONDITIONAL_JUMP)  ; LAB_0055dfb5
    CMP EDX,EBX                         ; 0055dff3
        ;   Label: LAB_0055dff3
    JLE 0x0055dfb5                      ; 0055dff5
        ;   XREF to: 0055dfb5 (CONDITIONAL_JUMP)  ; LAB_0055dfb5
    MOV dword ptr [EAX + 0x4],EDX       ; 0055dff7 | DAT_00766ca8
    JMP 0x0055dfb5                      ; 0055dffa
        ;   XREF to: 0055dfb5 (UNCONDITIONAL_JUMP)  ; LAB_0055dfb5


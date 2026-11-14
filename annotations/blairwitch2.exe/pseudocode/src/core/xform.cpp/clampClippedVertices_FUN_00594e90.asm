; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_clampClippedVertices_FUN_00594e90(void)
;
;
; Referenced Globals:
;   undefined4 DAT_007bee30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00594e90
        ;   Label: core_xform.cpp_clampClippedVertices_FUN_00594e90
    PUSH ESI                            ; 00594e91
    PUSH EDI                            ; 00594e92
    PUSH EBP                            ; 00594e93
    MOV ESI,dword ptr [0x007bee30]      ; 00594e94 | DAT_007bee30
    MOV EAX,0x7bee34                    ; 00594e9a
    XOR ECX,ECX                         ; 00594e9f
    TEST ESI,ESI                        ; 00594ea1
    JLE 0x00594ebd                      ; 00594ea3
        ;   XREF to: 00594ebd (CONDITIONAL_JUMP)  ; LAB_00594ebd
    MOV EDX,dword ptr [EAX + 0x8]       ; 00594ea5
        ;   Label: LAB_00594ea5
    TEST EDX,EDX                        ; 00594ea8
    JZ 0x00594ec8                       ; 00594eaa
        ;   XREF to: 00594ec8 (CONDITIONAL_JUMP)  ; LAB_00594ec8
    MOV EBX,dword ptr [EAX + 0x8]       ; 00594eac
    CMP EBX,dword ptr [EAX]             ; 00594eaf
    JGE 0x00594ed6                      ; 00594eb1
        ;   XREF to: 00594ed6 (CONDITIONAL_JUMP)  ; LAB_00594ed6
    MOV dword ptr [EAX],EBX             ; 00594eb3
    INC ECX                             ; 00594eb5
        ;   Label: LAB_00594eb5
    ADD EAX,0x30                        ; 00594eb6
    CMP ECX,ESI                         ; 00594eb9
    JL 0x00594ea5                       ; 00594ebb
        ;   XREF to: 00594ea5 (CONDITIONAL_JUMP)  ; LAB_00594ea5
    MOV dword ptr [0x007bee30],ESI      ; 00594ebd | DAT_007bee30
        ;   Label: LAB_00594ebd
    POP EBP                             ; 00594ec3
    POP EDI                             ; 00594ec4
    POP ESI                             ; 00594ec5
    POP EBX                             ; 00594ec6
    RET                                 ; 00594ec7
    MOV dword ptr [EAX + 0x8],0x1       ; 00594ec8
        ;   Label: LAB_00594ec8
    MOV dword ptr [EAX],EDX             ; 00594ecf
    MOV dword ptr [EAX + 0x4],EDX       ; 00594ed1
    JMP 0x00594eb5                      ; 00594ed4
        ;   XREF to: 00594eb5 (UNCONDITIONAL_JUMP)  ; LAB_00594eb5
    MOV EDX,EBX                         ; 00594ed6
        ;   Label: LAB_00594ed6
    MOV EDI,dword ptr [EAX]             ; 00594ed8
    NEG EDX                             ; 00594eda
    CMP EDX,EDI                         ; 00594edc
    JLE 0x00594ee4                      ; 00594ede
        ;   XREF to: 00594ee4 (CONDITIONAL_JUMP)  ; LAB_00594ee4
    MOV dword ptr [EAX],EDX             ; 00594ee0
    JMP 0x00594eb5                      ; 00594ee2
        ;   XREF to: 00594eb5 (UNCONDITIONAL_JUMP)  ; LAB_00594eb5
    MOV EBP,dword ptr [EAX + 0x8]       ; 00594ee4
        ;   Label: LAB_00594ee4
    MOV EBX,dword ptr [EAX + 0x4]       ; 00594ee7
    CMP EBX,EBP                         ; 00594eea
    JLE 0x00594ef3                      ; 00594eec
        ;   XREF to: 00594ef3 (CONDITIONAL_JUMP)  ; LAB_00594ef3
    MOV dword ptr [EAX + 0x4],EBP       ; 00594eee
    JMP 0x00594eb5                      ; 00594ef1
        ;   XREF to: 00594eb5 (UNCONDITIONAL_JUMP)  ; LAB_00594eb5
    CMP EDX,EBX                         ; 00594ef3
        ;   Label: LAB_00594ef3
    JLE 0x00594eb5                      ; 00594ef5
        ;   XREF to: 00594eb5 (CONDITIONAL_JUMP)  ; LAB_00594eb5
    MOV dword ptr [EAX + 0x4],EDX       ; 00594ef7
    JMP 0x00594eb5                      ; 00594efa
        ;   XREF to: 00594eb5 (UNCONDITIONAL_JUMP)  ; LAB_00594eb5


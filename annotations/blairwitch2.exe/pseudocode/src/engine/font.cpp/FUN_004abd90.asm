; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * engine_font_cpp_FUN_004abd90(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01cb0258
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004abd90
        ;   Label: engine_font.cpp_FUN_004abd90
    PUSH ESI                            ; 004abd91
    MOV EBX,dword ptr [0x01cb0258]      ; 004abd92 | DAT_01cb0258
    MOV ECX,dword ptr [ESP + 0xc]       ; 004abd98
    MOV ESI,dword ptr [ESP + 0x10]      ; 004abd9c
    MOV EAX,0x1cb025c                   ; 004abda0
    XOR EDX,EDX                         ; 004abda5
    TEST EBX,EBX                        ; 004abda7
    JLE 0x004abdbb                      ; 004abda9
        ;   XREF to: 004abdbb (CONDITIONAL_JUMP)  ; LAB_004abdbb
    CMP ECX,dword ptr [EAX]             ; 004abdab
        ;   Label: LAB_004abdab
    JNZ 0x004abdb3                      ; 004abdad
        ;   XREF to: 004abdb3 (CONDITIONAL_JUMP)  ; LAB_004abdb3
    CMP EAX,ESI                         ; 004abdaf
    JNZ 0x004abdbd                      ; 004abdb1
        ;   XREF to: 004abdbd (CONDITIONAL_JUMP)  ; LAB_004abdbd
    INC EDX                             ; 004abdb3
        ;   Label: LAB_004abdb3
    ADD EAX,0x38                        ; 004abdb4
    CMP EDX,EBX                         ; 004abdb7
    JL 0x004abdab                       ; 004abdb9
        ;   XREF to: 004abdab (CONDITIONAL_JUMP)  ; LAB_004abdab
    XOR EAX,EAX                         ; 004abdbb
        ;   Label: LAB_004abdbb
    MOV dword ptr [0x01cb0258],EBX      ; 004abdbd | DAT_01cb0258
        ;   Label: LAB_004abdbd
    POP ESI                             ; 004abdc3
    POP EBX                             ; 004abdc4
    RET                                 ; 004abdc5


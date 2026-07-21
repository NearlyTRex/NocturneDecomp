; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gore_cpp_CGore_createFootstep_FUN_004b06b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[1]:
;   FUN_0040db50 at 0040dc20
;
; Referenced Globals:
;   undefined4 DAT_01c9e53c
;   undefined4 DAT_01c9e540
;
; Called Functions:
;   core_gore.cpp_CFootstep_init_FUN_004af8a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b06b0
        ;   Label: core_gore.cpp_CGore_createFootstep_FUN_004b06b0
    PUSH ESI                            ; 004b06b1
    PUSH EDI                            ; 004b06b2
    PUSH EBP                            ; 004b06b3
    MOV EBP,ESP                         ; 004b06b4
    MOV EDX,0x1c9e544                   ; 004b06b6
    MOV ECX,dword ptr [0x01c9e53c]      ; 004b06bb | DAT_01c9e53c
    MOV EAX,[0x01c9e53c]                ; 004b06c1 | DAT_01c9e53c
    INC ECX                             ; 004b06c6
    SHL EAX,0x6                         ; 004b06c7
    MOV dword ptr [0x01c9e53c],ECX      ; 004b06ca | DAT_01c9e53c
    ADD EDX,EAX                         ; 004b06d0
    CMP ECX,0x3e8                       ; 004b06d2
    JGE 0x004b071d                      ; 004b06d8
        ;   XREF to: 004b071d (CONDITIONAL_JUMP)  ; LAB_004b071d
    MOV EDI,dword ptr [0x01c9e540]      ; 004b06da | DAT_01c9e540
        ;   Label: LAB_004b06da
    CMP EDI,0x3e8                       ; 004b06e0
    JGE 0x004b06f0                      ; 004b06e6
        ;   XREF to: 004b06f0 (CONDITIONAL_JUMP)  ; LAB_004b06f0
    LEA EAX,[EDI + 0x1]                 ; 004b06e8
    MOV [0x01c9e540],EAX                ; 004b06eb | DAT_01c9e540
    MOV ECX,dword ptr [EBP + 0x28]      ; 004b06f0
        ;   Label: LAB_004b06f0
    PUSH ECX                            ; 004b06f3
    MOV EBX,dword ptr [EBP + 0x24]      ; 004b06f4
    MOV ESI,dword ptr [EBP + 0x20]      ; 004b06f7
    PUSH EBX                            ; 004b06fa
    CMP ESI,0xb                         ; 004b06fb
    SETZ AL                             ; 004b06fe
    AND EAX,0xff                        ; 004b0701
    PUSH EAX                            ; 004b0706
    MOV EDI,dword ptr [EBP + 0x1c]      ; 004b0707
    PUSH EDI                            ; 004b070a
    MOV EAX,dword ptr [EBP + 0x18]      ; 004b070b
    PUSH EAX                            ; 004b070e
    PUSH EDX                            ; 004b070f
    CALL core_gore.cpp_CFootstep_init_FUN_004af8a0 ; 004b0710
        ;   XREF to: 004af8a0 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_CFootstep_init_FUN_004af8a0()
    ADD ESP,0x18                        ; 004b0715
    POP EBP                             ; 004b0718
    POP EDI                             ; 004b0719
    POP ESI                             ; 004b071a
    POP EBX                             ; 004b071b
    RET                                 ; 004b071c
    XOR ESI,ESI                         ; 004b071d
        ;   Label: LAB_004b071d
    MOV dword ptr [0x01c9e53c],ESI      ; 004b071f | DAT_01c9e53c
    JMP 0x004b06da                      ; 004b0725
        ;   XREF to: 004b06da (UNCONDITIONAL_JUMP)  ; LAB_004b06da


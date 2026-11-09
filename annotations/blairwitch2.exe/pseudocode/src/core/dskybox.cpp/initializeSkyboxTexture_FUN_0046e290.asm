; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dskybox_cpp_initializeSkyboxTexture_FUN_0046e290(int param_1)
;
;
; XREF[1]:
;   core_dskybox.cpp_staticInit_FUN_0046e260 at 0046e265
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0046e290
        ;   Label: core_dskybox.cpp_initializeSkyboxTexture_FUN_0046e290
    PUSH EDI                            ; 0046e291
    MOV EDX,dword ptr [ESP + 0xc]       ; 0046e292
    MOV ESI,0x5d18f3                    ; 0046e296
    LEA EDI,[EDX + 0xc]                 ; 0046e29b
    MOV dword ptr [EDX + 0x8],0x0       ; 0046e29e
    PUSH EDI                            ; 0046e2a5
    MOV AL,byte ptr [ESI]               ; 0046e2a6
        ;   Label: LAB_0046e2a6
    MOV byte ptr [EDI],AL               ; 0046e2a8
    CMP AL,0x0                          ; 0046e2aa
    JZ 0x0046e2be                       ; 0046e2ac
        ;   XREF to: 0046e2be (CONDITIONAL_JUMP)  ; LAB_0046e2be
    MOV AL,byte ptr [ESI + 0x1]         ; 0046e2ae
    ADD ESI,0x2                         ; 0046e2b1
    MOV byte ptr [EDI + 0x1],AL         ; 0046e2b4
    ADD EDI,0x2                         ; 0046e2b7
    CMP AL,0x0                          ; 0046e2ba
    JNZ 0x0046e2a6                      ; 0046e2bc
        ;   XREF to: 0046e2a6 (CONDITIONAL_JUMP)  ; LAB_0046e2a6
    POP EDI                             ; 0046e2be
        ;   Label: LAB_0046e2be
    MOV EAX,EDX                         ; 0046e2bf
    POP EDI                             ; 0046e2c1
    POP ESI                             ; 0046e2c2
    RET                                 ; 0046e2c3


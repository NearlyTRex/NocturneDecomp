; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00403aa0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0062202c
;   undefined4 DAT_00622030
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403aa0
        ;   Label: FUN_00403aa0
    MOV ECX,dword ptr [ESP + 0x8]       ; 00403aa1
    LEA EDX,[ECX + 0xc]                 ; 00403aa5
    MOV EBX,dword ptr [ECX + 0x8]       ; 00403aa8
    XOR EAX,EAX                         ; 00403aab
    TEST EBX,EBX                        ; 00403aad
    JLE 0x00403adf                      ; 00403aaf
        ;   XREF to: 00403adf (CONDITIONAL_JUMP)  ; LAB_00403adf
    PUSH ESI                            ; 00403ab1
    MOV ESI,dword ptr [ECX + 0x4]       ; 00403ab2
        ;   Label: LAB_00403ab2
    ADD ESI,EAX                         ; 00403ab5
    IMUL ESI,ESI,0x30                   ; 00403ab7
    MOV EBX,dword ptr [EDX]             ; 00403aba
    MOV dword ptr [ESI + 0x62202c],EBX  ; 00403abc | DAT_0062202c
    MOV EBX,dword ptr [ECX + 0x4]       ; 00403ac2
    ADD EBX,EAX                         ; 00403ac5
    IMUL ESI,EBX,0x30                   ; 00403ac7
    MOV EBX,dword ptr [EDX + 0x4]       ; 00403aca
    MOV dword ptr [ESI + 0x622030],EBX  ; 00403acd | DAT_00622030
    INC EAX                             ; 00403ad3
    MOV ESI,dword ptr [ECX + 0x8]       ; 00403ad4
    ADD EDX,0x8                         ; 00403ad7
    CMP EAX,ESI                         ; 00403ada
    JL 0x00403ab2                       ; 00403adc
        ;   XREF to: 00403ab2 (CONDITIONAL_JUMP)  ; LAB_00403ab2
    POP ESI                             ; 00403ade
    MOV EAX,dword ptr [ECX + 0x8]       ; 00403adf
        ;   Label: LAB_00403adf
    ADD ECX,0xc                         ; 00403ae2
    SHL EAX,0x3                         ; 00403ae5
    ADD EAX,ECX                         ; 00403ae8
    POP EBX                             ; 00403aea
    RET                                 ; 00403aeb


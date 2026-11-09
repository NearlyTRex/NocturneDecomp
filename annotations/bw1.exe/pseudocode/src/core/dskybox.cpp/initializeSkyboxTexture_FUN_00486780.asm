; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dskybox_cpp_initializeSkyboxTexture_FUN_00486780(int param_1)
;
;
; XREF[1]:
;   core_dskybox.cpp_staticInit_FUN_00486750 at 00486755
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00486780
        ;   Label: core_dskybox.cpp_initializeSkyboxTexture_FUN_00486780
    PUSH EDI                            ; 00486781
    MOV EDX,dword ptr [ESP + 0xc]       ; 00486782
    MOV ESI,0x5db6ec                    ; 00486786
    LEA EDI,[EDX + 0xc]                 ; 0048678b
    MOV dword ptr [EDX + 0x8],0x0       ; 0048678e
    PUSH EDI                            ; 00486795
    MOV AL,byte ptr [ESI]               ; 00486796
        ;   Label: LAB_00486796
    MOV byte ptr [EDI],AL               ; 00486798
    CMP AL,0x0                          ; 0048679a
    JZ 0x004867ae                       ; 0048679c
        ;   XREF to: 004867ae (CONDITIONAL_JUMP)  ; LAB_004867ae
    MOV AL,byte ptr [ESI + 0x1]         ; 0048679e
    ADD ESI,0x2                         ; 004867a1
    MOV byte ptr [EDI + 0x1],AL         ; 004867a4
    ADD EDI,0x2                         ; 004867a7
    CMP AL,0x0                          ; 004867aa
    JNZ 0x00486796                      ; 004867ac
        ;   XREF to: 00486796 (CONDITIONAL_JUMP)  ; LAB_00486796
    POP EDI                             ; 004867ae
        ;   Label: LAB_004867ae
    MOV EAX,EDX                         ; 004867af
    POP EDI                             ; 004867b1
    POP ESI                             ; 004867b2
    RET                                 ; 004867b3


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_morph_cpp_FUN_004e0290(void)
;
;
; Called Functions:
;   core_morph.cpp_CMorphModel_addPartFromDeformableModel_FUN_004df5b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0xc]       ; 004e0290
        ;   Label: core_morph.cpp_FUN_004e0290
    PUSH EDX                            ; 004e0294
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e0295
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e0299
    SUB EAX,EDX                         ; 004e02a0
    SHL EAX,0x6                         ; 004e02a2
    ADD EAX,EDX                         ; 004e02a5
    MOV ECX,dword ptr [ESP + 0x8]       ; 004e02a7
    SHL EAX,0x3                         ; 004e02ab
    ADD EAX,ECX                         ; 004e02ae
    PUSH EAX                            ; 004e02b0
    CALL core_morph.cpp_CMorphModel_addPartFromDeformableModel_FUN_004df5b0 ; 004e02b1
        ;   XREF to: 004df5b0 (UNCONDITIONAL_CALL)  ; undefined core_morph.cpp_CMorphModel_addPartFromDeformableModel_FUN_004df5b0()
    ADD ESP,0x8                         ; 004e02b6
    RET                                 ; 004e02b9


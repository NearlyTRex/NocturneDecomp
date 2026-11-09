; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005bec40(uint param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   crt_stdio.c_fclose_FUN_005b8af0 at 005b8b5e
;   unkafter_morph.cpp_FUN_005c4080 at 005c40af
;
; Referenced Globals:
;   void* PTR_CloseHandle_005c850c = 001c8c32
;   undefined4 DAT_0061f414
;   undefined4 DAT_0061f418
;   undefined4 DAT_0061f420
;   undefined4 DAT_0061f480
;   undefined4 DAT_0061f4d8
;
; Called Functions:
;   CloseHandle
;   crt_errno.c_setErrno_FUN_005be180
;   crt_unknown.c_FUN_005c0878
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bec40
        ;   Label: crt_unknown.c_FUN_005bec40
    PUSH ESI                            ; 005bec41
    PUSH EDI                            ; 005bec42
    PUSH EBP                            ; 005bec43
    SUB ESP,0x4                         ; 005bec44
    MOV EBX,dword ptr [ESP + 0x18]      ; 005bec47
    TEST EBX,EBX                        ; 005bec4b
    JL 0x005bec57                       ; 005bec4d
        ;   XREF to: 005bec57 (CONDITIONAL_JUMP)  ; LAB_005bec57
    CMP EBX,dword ptr [0x0061f480]      ; 005bec4f | DAT_0061f480
    JBE 0x005bec6b                      ; 005bec55
        ;   XREF to: 005bec6b (CONDITIONAL_JUMP)  ; LAB_005bec6b
    PUSH 0x4                            ; 005bec57
        ;   Label: LAB_005bec57
    CALL crt_errno.c_setErrno_FUN_005be180 ; 005bec59
        ;   XREF to: 005be180 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005be180(int error_code)
    MOV EAX,0xffffffff                  ; 005bec5e
    ADD ESP,0x4                         ; 005bec63
    JMP 0x005becdc                      ; 005bec66
        ;   XREF to: 005becdc (UNCONDITIONAL_JUMP)  ; LAB_005becdc
    MOV ESI,dword ptr [0x0061f4d8]      ; 005bec6b | DAT_0061f4d8
        ;   Label: LAB_005bec6b
    MOV ECX,dword ptr [0x0061f420]      ; 005bec71 | DAT_0061f420
    XOR EBP,EBP                         ; 005bec77
    MOV EAX,dword ptr [ESI + EBX*0x4]   ; 005bec79
    XOR EDI,EDI                         ; 005bec7c
    MOV dword ptr [ESP],EAX             ; 005bec7e
    TEST ECX,ECX                        ; 005bec81
    JZ 0x005becab                       ; 005bec83
        ;   XREF to: 005becab (CONDITIONAL_JUMP)  ; LAB_005becab
    PUSH EBX                            ; 005bec85
    CALL dword ptr [0x0061f414]         ; 005bec86 | DAT_0061f414
    MOV ESI,EAX                         ; 005bec8c
    ADD ESP,0x4                         ; 005bec8e
    TEST EAX,EAX                        ; 005bec91
    JZ 0x005becab                       ; 005bec93
        ;   XREF to: 005becab (CONDITIONAL_JUMP)  ; LAB_005becab
    PUSH EBX                            ; 005bec95
    CALL dword ptr [0x0061f418]         ; 005bec96 | DAT_0061f418
    ADD ESP,0x4                         ; 005bec9c
    PUSH ESI                            ; 005bec9f
    CALL dword ptr [0x0061f420]         ; 005beca0 | DAT_0061f420
    ADD ESP,0x4                         ; 005beca6
    JMP 0x005beccf                      ; 005beca9
        ;   XREF to: 005beccf (UNCONDITIONAL_JUMP)  ; LAB_005beccf
    TEST EBP,EBP                        ; 005becab
        ;   Label: LAB_005becab
    JNZ 0x005beccf                      ; 005becad
        ;   XREF to: 005beccf (CONDITIONAL_JUMP)  ; LAB_005beccf
    MOV ESI,dword ptr [ESP]             ; 005becaf
    PUSH ESI                            ; 005becb2
    CALL dword ptr CS:[0x5c850c]        ; 005becb3 | PTR_CloseHandle_005c850c
    TEST EAX,EAX                        ; 005becba
    JNZ 0x005beccf                      ; 005becbc
        ;   XREF to: 005beccf (CONDITIONAL_JUMP)  ; LAB_005beccf
    PUSH 0x4                            ; 005becbe
    MOV EDI,0xffffffff                  ; 005becc0
    CALL crt_errno.c_setErrno_FUN_005be180 ; 005becc5
        ;   XREF to: 005be180 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005be180(int error_code)
    ADD ESP,0x4                         ; 005becca
    JMP 0x005becda                      ; 005beccd
        ;   XREF to: 005becda (UNCONDITIONAL_JUMP)  ; LAB_005becda
    PUSH 0x0                            ; 005beccf
        ;   Label: LAB_005beccf
    PUSH EBX                            ; 005becd1
    CALL crt_unknown.c_FUN_005c0878     ; 005becd2
        ;   XREF to: 005c0878 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0878()
    ADD ESP,0x8                         ; 005becd7
    MOV EAX,EDI                         ; 005becda
        ;   Label: LAB_005becda
    ADD ESP,0x4                         ; 005becdc
        ;   Label: LAB_005becdc
    POP EBP                             ; 005becdf
    POP EDI                             ; 005bece0
    POP ESI                             ; 005bece1
    POP EBX                             ; 005bece2
    RET                                 ; 005bece3


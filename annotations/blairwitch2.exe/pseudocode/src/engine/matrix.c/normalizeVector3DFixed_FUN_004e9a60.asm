; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_matrix_c_normalizeVector3DFixed_FUN_004e9a60(int *param_1)
;
;
; XREF[2]:
;   engine_3d.c_FUN_00405450 at 0040547a
;   engine_3d.c_renderPolygonTexturedUVLit_FUN_00405370 at 0040539a
;
; Called Functions:
;   engine_matrix.c_integerSquareRoot_FUN_004e9980
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e9a60
        ;   Label: engine_matrix.c_normalizeVector3DFixed_FUN_004e9a60
    PUSH EDI                            ; 004e9a61
    PUSH EBP                            ; 004e9a62
    SUB ESP,0xc                         ; 004e9a63
    MOV EBP,ESI                         ; 004e9a66
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004e9a68
    MOV EAX,dword ptr [ESI + 0x4]       ; 004e9a6c
    IMUL EAX,EAX                        ; 004e9a6f
    MOV ECX,dword ptr [ESI]             ; 004e9a72
    IMUL ECX,ECX                        ; 004e9a74
    ADD EAX,ECX                         ; 004e9a77
    MOV ECX,dword ptr [ESI + 0x8]       ; 004e9a79
    IMUL ECX,ECX                        ; 004e9a7c
    ADD EAX,ECX                         ; 004e9a7f
    PUSH EAX                            ; 004e9a81
    CALL engine_matrix.c_integerSquareRoot_FUN_004e9980 ; 004e9a82
        ;   XREF to: 004e9980 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_integerSquareRoot_FUN_004e9980(int value)
    MOV EDX,0x7fff                      ; 004e9a87
    MOV ECX,EAX                         ; 004e9a8c
    ADD ESP,0x4                         ; 004e9a8e
    MOV EBX,ECX                         ; 004e9a91
    MOV EAX,dword ptr [ESI]             ; 004e9a93
    IMUL EDX                            ; 004e9a95
    IDIV EBX                            ; 004e9a97
    MOV EDX,0x7fff                      ; 004e9a99
    ADD EAX,EAX                         ; 004e9a9e
    MOV EBX,ECX                         ; 004e9aa0
    MOV dword ptr [ESP],EAX             ; 004e9aa2
    MOV EAX,dword ptr [ESI + 0x4]       ; 004e9aa5
    IMUL EDX                            ; 004e9aa8
    IDIV EBX                            ; 004e9aaa
    MOV EDX,0x7fff                      ; 004e9aac
    ADD EAX,EAX                         ; 004e9ab1
    MOV EBX,ECX                         ; 004e9ab3
    MOV dword ptr [ESP + 0x4],EAX       ; 004e9ab5
    MOV EAX,dword ptr [ESI + 0x8]       ; 004e9ab9
    MOV EDI,EBP                         ; 004e9abc
    IMUL EDX                            ; 004e9abe
    IDIV EBX                            ; 004e9ac0
    ADD EAX,EAX                         ; 004e9ac2
    MOV ESI,ESP                         ; 004e9ac4
    MOV dword ptr [ESP + 0x8],EAX       ; 004e9ac6
    MOVSD ES:EDI,ESI                    ; 004e9aca
    MOVSD ES:EDI,ESI                    ; 004e9acb
    MOVSD ES:EDI,ESI                    ; 004e9acc
    MOV EAX,EBP                         ; 004e9acd
    ADD ESP,0xc                         ; 004e9acf
    POP EBP                             ; 004e9ad2
    POP EDI                             ; 004e9ad3
    POP EBX                             ; 004e9ad4
    RET                                 ; 004e9ad5


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_matrix_c_normalizeVector3DFixed_FUN_004e6140(int *param_1)
;
;
; XREF[2]:
;   engine_3d.c_renderPolygonTexturedNormalizedUVLit2_FUN_00405280 at 004052aa
;   engine_3d.c_renderPolygonTexturedUVLit_FUN_004051a0 at 004051ca
;
; Called Functions:
;   engine_matrix.c_integerSquareRoot_FUN_004e6060
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e6140
        ;   Label: engine_matrix.c_normalizeVector3DFixed_FUN_004e6140
    PUSH EDI                            ; 004e6141
    PUSH EBP                            ; 004e6142
    SUB ESP,0xc                         ; 004e6143
    MOV EBP,ESI                         ; 004e6146
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004e6148
    MOV EAX,dword ptr [ESI + 0x4]       ; 004e614c
    IMUL EAX,EAX                        ; 004e614f
    MOV ECX,dword ptr [ESI]             ; 004e6152
    IMUL ECX,ECX                        ; 004e6154
    ADD EAX,ECX                         ; 004e6157
    MOV ECX,dword ptr [ESI + 0x8]       ; 004e6159
    IMUL ECX,ECX                        ; 004e615c
    ADD EAX,ECX                         ; 004e615f
    PUSH EAX                            ; 004e6161
    CALL engine_matrix.c_integerSquareRoot_FUN_004e6060 ; 004e6162
        ;   XREF to: 004e6060 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_integerSquareRoot_FUN_004e6060(int value)
    MOV EDX,0x7fff                      ; 004e6167
    MOV ECX,EAX                         ; 004e616c
    ADD ESP,0x4                         ; 004e616e
    MOV EBX,ECX                         ; 004e6171
    MOV EAX,dword ptr [ESI]             ; 004e6173
    IMUL EDX                            ; 004e6175
    IDIV EBX                            ; 004e6177
    MOV EDX,0x7fff                      ; 004e6179
    ADD EAX,EAX                         ; 004e617e
    MOV EBX,ECX                         ; 004e6180
    MOV dword ptr [ESP],EAX             ; 004e6182
    MOV EAX,dword ptr [ESI + 0x4]       ; 004e6185
    IMUL EDX                            ; 004e6188
    IDIV EBX                            ; 004e618a
    MOV EDX,0x7fff                      ; 004e618c
    ADD EAX,EAX                         ; 004e6191
    MOV EBX,ECX                         ; 004e6193
    MOV dword ptr [ESP + 0x4],EAX       ; 004e6195
    MOV EAX,dword ptr [ESI + 0x8]       ; 004e6199
    MOV EDI,EBP                         ; 004e619c
    IMUL EDX                            ; 004e619e
    IDIV EBX                            ; 004e61a0
    ADD EAX,EAX                         ; 004e61a2
    MOV ESI,ESP                         ; 004e61a4
    MOV dword ptr [ESP + 0x8],EAX       ; 004e61a6
    MOVSD ES:EDI,ESI                    ; 004e61aa
    MOVSD ES:EDI,ESI                    ; 004e61ab
    MOVSD ES:EDI,ESI                    ; 004e61ac
    MOV EAX,EBP                         ; 004e61ad
    ADD ESP,0xc                         ; 004e61af
    POP EBP                             ; 004e61b2
    POP EDI                             ; 004e61b3
    POP EBX                             ; 004e61b4
    RET                                 ; 004e61b5


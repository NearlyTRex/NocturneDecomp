; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_matrix_c_normalizeVector3DFixed_FUN_004cde10(int *param_1)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[3]:
;   engine_3d.c_FUN_00406a00 at 00406a2a
;   engine_3d.c_FUN_00406b80 at 00406baa
;   engine_3d.c_renderPolygonTexturedUVLit_FUN_00406920 at 0040694a
;
; Called Functions:
;   engine_matrix.c_integerSquareRoot_FUN_004cdd30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cde10
        ;   Label: engine_matrix.c_normalizeVector3DFixed_FUN_004cde10
    PUSH EDI                            ; 004cde11
    PUSH EBP                            ; 004cde12
    SUB ESP,0xc                         ; 004cde13
    MOV EBP,ESI                         ; 004cde16
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004cde18
    MOV EAX,dword ptr [ESI + 0x4]       ; 004cde1c
    IMUL EAX,EAX                        ; 004cde1f
    MOV ECX,dword ptr [ESI]             ; 004cde22
    IMUL ECX,ECX                        ; 004cde24
    ADD EAX,ECX                         ; 004cde27
    MOV ECX,dword ptr [ESI + 0x8]       ; 004cde29
    IMUL ECX,ECX                        ; 004cde2c
    ADD EAX,ECX                         ; 004cde2f
    PUSH EAX                            ; 004cde31
    CALL engine_matrix.c_integerSquareRoot_FUN_004cdd30 ; 004cde32
        ;   XREF to: 004cdd30 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_integerSquareRoot_FUN_004cdd30(int value)
    MOV EDX,0x7fff                      ; 004cde37
    MOV ECX,EAX                         ; 004cde3c
    ADD ESP,0x4                         ; 004cde3e
    MOV EBX,ECX                         ; 004cde41
    MOV EAX,dword ptr [ESI]             ; 004cde43
    IMUL EDX                            ; 004cde45
    IDIV EBX                            ; 004cde47
    MOV EDX,0x7fff                      ; 004cde49
    ADD EAX,EAX                         ; 004cde4e
    MOV EBX,ECX                         ; 004cde50
    MOV dword ptr [ESP],EAX             ; 004cde52
    MOV EAX,dword ptr [ESI + 0x4]       ; 004cde55
    IMUL EDX                            ; 004cde58
    IDIV EBX                            ; 004cde5a
    MOV EDX,0x7fff                      ; 004cde5c
    ADD EAX,EAX                         ; 004cde61
    MOV EBX,ECX                         ; 004cde63
    MOV dword ptr [ESP + 0x4],EAX       ; 004cde65
    MOV EAX,dword ptr [ESI + 0x8]       ; 004cde69
    MOV EDI,EBP                         ; 004cde6c
    IMUL EDX                            ; 004cde6e
    IDIV EBX                            ; 004cde70
    ADD EAX,EAX                         ; 004cde72
    MOV ESI,ESP                         ; 004cde74
    MOV dword ptr [ESP + 0x8],EAX       ; 004cde76
    MOVSD ES:EDI,ESI                    ; 004cde7a
    MOVSD ES:EDI,ESI                    ; 004cde7b
    MOVSD ES:EDI,ESI                    ; 004cde7c
    MOV EAX,EBP                         ; 004cde7d
    ADD ESP,0xc                         ; 004cde7f
    POP EBP                             ; 004cde82
    POP EDI                             ; 004cde83
    POP EBX                             ; 004cde84
    RET                                 ; 004cde85


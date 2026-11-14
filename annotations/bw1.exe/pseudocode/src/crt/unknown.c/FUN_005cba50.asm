; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005cba50(void)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005c69a8 at 005c69a8
;   crt_unknown.c_FUN_005caecc at 005caf10
;
; Referenced Globals:
;   undefined4 DAT_00626220
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626618 = 005c50d4
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626620 = 005c50d4
;
; Called Functions:
;   crt_unknown.c_FUN_005c50d4
;   crt_unknown.c_FUN_005cbaec
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cba50
        ;   Label: crt_unknown.c_FUN_005cba50
    PUSH ESI                            ; 005cba51
    CALL dword ptr [0x00626618]         ; 005cba52 | PTR_crt_unknown.c_FUN_005c50d4_00626618
    MOV EAX,[0x00626220]                ; 005cba58 | DAT_00626220
    TEST EAX,EAX                        ; 005cba5d
    JZ 0x005cba81                       ; 005cba5f
        ;   XREF to: 005cba81 (CONDITIONAL_JUMP)  ; LAB_005cba81
    MOV EDX,dword ptr [EAX]             ; 005cba61
        ;   Label: LAB_005cba61
    MOV ECX,dword ptr [EAX + 0x24]      ; 005cba63
    SUB EDX,0x2c                        ; 005cba66
    MOV ESI,dword ptr [ECX]             ; 005cba69
    MOV EBX,dword ptr [EAX + 0x8]       ; 005cba6b
    CMP EDX,ESI                         ; 005cba6e
    JNZ 0x005cba7b                      ; 005cba70
        ;   XREF to: 005cba7b (CONDITIONAL_JUMP)  ; LAB_005cba7b
    PUSH EAX                            ; 005cba72
    CALL crt_unknown.c_FUN_005cbaec     ; 005cba73
        ;   XREF to: 005cbaec (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cbaec()
    ADD ESP,0x4                         ; 005cba78
    MOV EAX,EBX                         ; 005cba7b
        ;   Label: LAB_005cba7b
    TEST EBX,EBX                        ; 005cba7d
    JNZ 0x005cba61                      ; 005cba7f
        ;   XREF to: 005cba61 (CONDITIONAL_JUMP)  ; LAB_005cba61
    CALL dword ptr [0x00626620]         ; 005cba81 | PTR_crt_unknown.c_FUN_005c50d4_00626620
        ;   Label: LAB_005cba81
    XOR EAX,EAX                         ; 005cba87
    POP ESI                             ; 005cba89
    POP EBX                             ; 005cba8a
    RET                                 ; 005cba8b


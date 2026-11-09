; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_morph_cpp_FUN_005c4c44(void)
;
;
; XREF[1]:
;   unkafter_morph.cpp_FUN_005c4cb0 at 005c4cb0
;
; Referenced Globals:
;   undefined4 DAT_026810b0
;
; Called Functions:
;   crt_unknown.c_FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c4c44
        ;   Label: unkafter_morph.cpp_FUN_005c4c44
    PUSH ESI                            ; 005c4c45
    MOV EBX,dword ptr [0x026810b0]      ; 005c4c46 | DAT_026810b0
    TEST EBX,EBX                        ; 005c4c4c
    JZ 0x005c4c74                       ; 005c4c4e
        ;   XREF to: 005c4c74 (CONDITIONAL_JUMP)  ; LAB_005c4c74
    MOV EDX,dword ptr [EBX + 0xc]       ; 005c4c50
        ;   Label: LAB_005c4c50
    MOV ESI,dword ptr [EBX]             ; 005c4c53
    TEST EDX,EDX                        ; 005c4c55
    JZ 0x005c4c65                       ; 005c4c57
        ;   XREF to: 005c4c65 (CONDITIONAL_JUMP)  ; LAB_005c4c65
    MOV ECX,dword ptr [EBX + 0x8]       ; 005c4c59
    PUSH ECX                            ; 005c4c5c
    CALL crt_unknown.c_FUN_005b86a0     ; 005c4c5d
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 005c4c62
    PUSH EBX                            ; 005c4c65
        ;   Label: LAB_005c4c65
    CALL crt_unknown.c_FUN_005b86a0     ; 005c4c66
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 005c4c6b
    MOV EBX,ESI                         ; 005c4c6e
    TEST ESI,ESI                        ; 005c4c70
    JNZ 0x005c4c50                      ; 005c4c72
        ;   XREF to: 005c4c50 (CONDITIONAL_JUMP)  ; LAB_005c4c50
    POP ESI                             ; 005c4c74
        ;   Label: LAB_005c4c74
    POP EBX                             ; 005c4c75
    RET                                 ; 005c4c76


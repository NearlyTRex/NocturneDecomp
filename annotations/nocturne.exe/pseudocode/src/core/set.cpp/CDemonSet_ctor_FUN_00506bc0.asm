; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * core_set_cpp_CDemonSet_ctor_FUN_00506bc0(int param_1)
;
;
; XREF[1]:
;   FUN_00506b40 at 00506b45
;
; Referenced Globals:
;   TerminatedCString s_none_005900ee
;   undefined4 s_one_005900ee+1
;   undefined4 s_ne_005900ee+2
;   undefined4 s_e_005900ee+3
;   TerminatedCString s_none_005900f3
;   undefined4 s_one_005900f3+1
;   undefined4 s_ne_005900f3+2
;   undefined4 s_e_005900f3+3
;   undefined4 DAT_005a1970
;   undefined4 DAT_005a1990
;   undefined4 DAT_005a19b0
;   undefined4 DAT_005a19d0
;
; Called Functions:
;   core_setcolid.cpp_CDemonSet_init_FUN_00511750
;   crt_memory.c___arrinit_FUN_005644a7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00506bc0
        ;   Label: core_set.cpp_CDemonSet_ctor_FUN_00506bc0
    PUSH ESI                            ; 00506bc1
    PUSH EDI                            ; 00506bc2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00506bc3
    PUSH 0x5a1970                       ; 00506bc7 | DAT_005a1970
    PUSH 0xfa                           ; 00506bcc
    ADD EBX,0x4                         ; 00506bd1
    PUSH EBX                            ; 00506bd4
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 00506bd5
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    ADD ESP,0xc                         ; 00506bda
    PUSH 0x5a1990                       ; 00506bdd | DAT_005a1990
    PUSH 0xc8                           ; 00506be2
    ADD EAX,0x19644                     ; 00506be7
    PUSH EAX                            ; 00506bec
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 00506bed
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    ADD ESP,0xc                         ; 00506bf2
    PUSH 0x5a19b0                       ; 00506bf5 | DAT_005a19b0
    PUSH 0x14                           ; 00506bfa
    ADD EAX,0x141490                    ; 00506bfc
    PUSH EAX                            ; 00506c01
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 00506c02
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    ADD ESP,0xc                         ; 00506c07
    PUSH 0x5a19d0                       ; 00506c0a | DAT_005a19d0
    PUSH 0xfa                           ; 00506c0f
    ADD EAX,0x554                       ; 00506c14
    PUSH EAX                            ; 00506c19
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 00506c1a
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    LEA EBX,[EAX + 0xffea4fd4]          ; 00506c1f
    MOV dword ptr [EBX],0x0             ; 00506c25
    MOV dword ptr [EBX + 0x19644],0x0   ; 00506c2b
    MOV dword ptr [EBX + 0x15aab0],0xffffffff ; 00506c35
    MOV dword ptr [EBX + 0x15aab4],0xffffffff ; 00506c3f
    MOV byte ptr [EBX + 0x14cd08],0x0   ; 00506c49
    MOV dword ptr [EBX + 0x14cd6c],0x0  ; 00506c50
    MOV dword ptr [EBX + 0x14ecb0],0x0  ; 00506c5a
    MOV dword ptr [EBX + 0x150bf4],0x0  ; 00506c64
    MOV dword ptr [EBX + 0x152b38],0x0  ; 00506c6e
    MOV dword ptr [EBX + 0x154a7c],0x0  ; 00506c78
    MOV dword ptr [EBX + 0x15f2fc],0x0  ; 00506c82
    MOV dword ptr [EBX + 0x1569c0],0x0  ; 00506c8c
    MOV dword ptr [EBX + 0x158904],0x0  ; 00506c96
    MOV dword ptr [EBX + 0x15aab8],0x1  ; 00506ca0
    MOV dword ptr [EBX + 0x15aabc],0xffffffff ; 00506caa
    MOV dword ptr [EBX + 0x15aac0],0xffffffff ; 00506cb4
    MOV dword ptr [EBX + 0x15aac4],0x0  ; 00506cbe
    MOV dword ptr [EBX + 0x15aad0],0x0  ; 00506cc8
    MOV dword ptr [EBX + 0x15aad4],0x0  ; 00506cd2
    ADD ESP,0xc                         ; 00506cdc
    MOV dword ptr [EBX + 0x15a898],0x0  ; 00506cdf
    MOV dword ptr [EBX + 0x15a89c],0x0  ; 00506ce9
    MOV dword ptr [EBX + 0x15a8a4],0x0  ; 00506cf3
    MOV ESI,0x5900ee                    ; 00506cfd | = "none"
    MOV dword ptr [EBX + 0x15a8a8],0x0  ; 00506d02
    LEA EDI,[EBX + 0x15a8b0]            ; 00506d0c
    MOV dword ptr [EBX + 0x15a8ac],0x0  ; 00506d12
    PUSH EDI                            ; 00506d1c
    MOV AL,byte ptr [ESI]               ; 00506d1d | = "none" | s_ne_005900ee+2
        ;   Label: LAB_00506d1d
    MOV byte ptr [EDI],AL               ; 00506d1f
    CMP AL,0x0                          ; 00506d21
    JZ 0x00506d35                       ; 00506d23
        ;   XREF to: 00506d35 (CONDITIONAL_JUMP)  ; LAB_00506d35
    MOV AL,byte ptr [ESI + 0x1]         ; 00506d25 | s_one_005900ee+1 | s_e_005900ee+3
    ADD ESI,0x2                         ; 00506d28
    MOV byte ptr [EDI + 0x1],AL         ; 00506d2b
    ADD EDI,0x2                         ; 00506d2e
    CMP AL,0x0                          ; 00506d31
    JNZ 0x00506d1d                      ; 00506d33
        ;   XREF to: 00506d1d (CONDITIONAL_JUMP)  ; LAB_00506d1d
    POP EDI                             ; 00506d35
        ;   Label: LAB_00506d35
    PUSH EBX                            ; 00506d36
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00511750 ; 00506d37
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_init_FUN_00511750()
    MOV dword ptr [EBX + 0x15f2f8],0x0  ; 00506d3c
    MOV dword ptr [EBX + 0x15a8c4],0x0  ; 00506d46
    MOV dword ptr [EBX + 0x15f294],0x2  ; 00506d50
    MOV dword ptr [EBX + 0x15aacc],0x0  ; 00506d5a
    MOV dword ptr [EBX + 0x15a8c8],0x0  ; 00506d64
    MOV dword ptr [EBX + 0x161240],0x0  ; 00506d6e
    MOV dword ptr [EBX + 0x15a8cc],0x0  ; 00506d78
    MOV dword ptr [EBX + 0x16126c],0x0  ; 00506d82
    MOV dword ptr [EBX + 0x15b028],0x0  ; 00506d8c
    MOV dword ptr [EBX + 0x15aaa0],0x10000 ; 00506d96
    MOV dword ptr [EBX + 0x15aaa4],0x10000 ; 00506da0
    MOV ESI,0x5900f3                    ; 00506daa | = "none"
    MOV dword ptr [EBX + 0x15aaa8],0x10000 ; 00506daf
    ADD ESP,0x4                         ; 00506db9
    MOV dword ptr [EBX + 0x161270],0x0  ; 00506dbc
    LEA EDI,[EBX + 0x15aa68]            ; 00506dc6
    MOV dword ptr [EBX + 0x15aa64],0x0  ; 00506dcc
    PUSH EDI                            ; 00506dd6
    MOV AL,byte ptr [ESI]               ; 00506dd7 | = "none" | s_ne_005900f3+2
        ;   Label: LAB_00506dd7
    MOV byte ptr [EDI],AL               ; 00506dd9
    CMP AL,0x0                          ; 00506ddb
    JZ 0x00506def                       ; 00506ddd
        ;   XREF to: 00506def (CONDITIONAL_JUMP)  ; LAB_00506def
    MOV AL,byte ptr [ESI + 0x1]         ; 00506ddf | s_one_005900f3+1 | s_e_005900f3+3
    ADD ESI,0x2                         ; 00506de2
    MOV byte ptr [EDI + 0x1],AL         ; 00506de5
    ADD EDI,0x2                         ; 00506de8
    CMP AL,0x0                          ; 00506deb
    JNZ 0x00506dd7                      ; 00506ded
        ;   XREF to: 00506dd7 (CONDITIONAL_JUMP)  ; LAB_00506dd7
    POP EDI                             ; 00506def
        ;   Label: LAB_00506def
    MOV dword ptr [EBX + 0x15a8a0],0x0  ; 00506df0
    MOV dword ptr [EBX + 0x15a894],0x0  ; 00506dfa
    MOV dword ptr [EBX + 0x15aa88],0x0  ; 00506e04
    MOV dword ptr [EBX + 0x15aa8c],0xffff6f78 ; 00506e0e
    MOV dword ptr [EBX + 0x15aa90],0xffff6f78 ; 00506e18
    MOV dword ptr [EBX + 0x15aa94],0x9088 ; 00506e22
    MOV dword ptr [EBX + 0x15aa98],0x280 ; 00506e2c
    MOV dword ptr [EBX + 0x15aa9c],0x0  ; 00506e36
    MOV EAX,EBX                         ; 00506e40
    MOV dword ptr [EBX + 0x15a890],0x0  ; 00506e42
    POP EDI                             ; 00506e4c
    POP ESI                             ; 00506e4d
    POP EBX                             ; 00506e4e
    RET                                 ; 00506e4f


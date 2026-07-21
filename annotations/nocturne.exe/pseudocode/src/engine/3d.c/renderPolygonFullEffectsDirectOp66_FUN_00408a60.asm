; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_3d_c_renderPolygonFullEffectsDirectOp66_FUN_00408a60(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_005b763c
;   undefined4 DAT_005c5014
;   undefined4 DAT_005c5018
;   undefined4 DAT_006b494c
;   undefined4 DAT_006b4950
;   undefined4 DAT_006b4954
;   undefined4 DAT_006b4958
;   undefined4 DAT_006b495c
;   undefined4 DAT_006b4960
;   undefined4 DAT_006b4988
;   undefined4 DAT_006b4a18
;   undefined4 DAT_006b4a1c
;   undefined4 DAT_006b4a60
;   undefined4 DAT_006b4a64
;   ... and 6 more
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_texture.cpp_getCurrentTexture_FUN_00545ad0
;   FUN_00432cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408a60
        ;   Label: engine_3d.c_renderPolygonFullEffectsDirectOp66_FUN_00408a60
    PUSH ESI                            ; 00408a61
    PUSH EDI                            ; 00408a62
    PUSH EBP                            ; 00408a63
    SUB ESP,0x4                         ; 00408a64
    MOV EAX,dword ptr [ESP + 0x18]      ; 00408a67
    ADD EAX,0x8                         ; 00408a6b
    MOV EBX,dword ptr [ESP + 0x18]      ; 00408a6e
    PUSH EAX                            ; 00408a72
    ADD EBX,0x18                        ; 00408a73
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 00408a76
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00404610()
    ADD ESP,0x4                         ; 00408a7b
    TEST EAX,EAX                        ; 00408a7e
    JZ 0x00408b98                       ; 00408a80
        ;   XREF to: 00408b98 (CONDITIONAL_JUMP)  ; LAB_00408b98
    CMP dword ptr [0x01c03948],0x0      ; 00408a86 | DAT_01c03948
    JNZ 0x00408bcf                      ; 00408a8d
        ;   XREF to: 00408bcf (CONDITIONAL_JUMP)  ; LAB_00408bcf
    CMP dword ptr [0x005b7624],0x20     ; 00408a93 | DAT_005b7624
    JNZ 0x00408bc0                      ; 00408a9a
        ;   XREF to: 00408bc0 (CONDITIONAL_JUMP)  ; LAB_00408bc0
    MOV dword ptr [0x01c00c7c],0x5300ec ; 00408aa0 | DAT_01c00c7c | LAB_005300ec
    MOV ESI,0x1                         ; 00408aaa
        ;   Label: LAB_00408aaa
    MOV ECX,0x1e7                       ; 00408aaf
    MOV EDI,dword ptr [0x006b494c]      ; 00408ab4 | DAT_006b494c
    MOV dword ptr [0x01c039a4],ESI      ; 00408aba | DAT_01c039a4
    MOV dword ptr [0x01c039a0],ECX      ; 00408ac0 | DAT_01c039a0
    TEST EDI,EDI                        ; 00408ac6
    JZ 0x00408bf6                       ; 00408ac8
        ;   XREF to: 00408bf6 (CONDITIONAL_JUMP)  ; LAB_00408bf6
    MOV EBP,dword ptr [0x006b4950]      ; 00408ace | DAT_006b4950
    CMP EBP,0x9c4                       ; 00408ad4
    JGE 0x00408bf6                      ; 00408ada
        ;   XREF to: 00408bf6 (CONDITIONAL_JUMP)  ; LAB_00408bf6
    MOV EAX,dword ptr [ESP + 0x18]      ; 00408ae0
    CMP dword ptr [EAX + 0x4],0x4       ; 00408ae4
    JG 0x00408bf6                       ; 00408ae8
        ;   XREF to: 00408bf6 (CONDITIONAL_JUMP)  ; LAB_00408bf6
    LEA EAX,[EBP*0x8 + 0x0]             ; 00408aee
    ADD EAX,EBP                         ; 00408af5
    SHL EAX,0x2                         ; 00408af7
    SUB EAX,EBP                         ; 00408afa
    MOV EDX,0x6b4954                    ; 00408afc | DAT_006b4954
    SHL EAX,0x3                         ; 00408b01
    MOV ESI,dword ptr [0x006b4950]      ; 00408b04 | DAT_006b4950
    ADD EDX,EAX                         ; 00408b0a
    MOV EAX,dword ptr [ESP + 0x18]      ; 00408b0c
    INC ESI                             ; 00408b10
    MOV EAX,dword ptr [EAX + 0x4]       ; 00408b11
    MOV dword ptr [0x006b4950],ESI      ; 00408b14 | DAT_006b4950
    MOV dword ptr [EDX],EAX             ; 00408b1a | DAT_006b4954
    MOV EAX,dword ptr [ESP + 0x18]      ; 00408b1c
    MOV EBP,0x7fffffff                  ; 00408b20
    MOV dword ptr [ESP],EDX             ; 00408b25
    MOV EDI,dword ptr [EAX + 0x4]       ; 00408b28
    XOR EDX,EDX                         ; 00408b2b
    TEST EDI,EDI                        ; 00408b2d
    JLE 0x00408b62                      ; 00408b2f
        ;   XREF to: 00408b62 (CONDITIONAL_JUMP)  ; LAB_00408b62
    MOV EAX,dword ptr [ESP]             ; 00408b31
    IMUL ESI,dword ptr [EBX],0x30       ; 00408b34
        ;   Label: LAB_00408b34
    MOV ECX,0xc                         ; 00408b37
    LEA EDI,[EAX + 0x4]                 ; 00408b3c
    LEA ESI,[ESI + 0x5c5014]            ; 00408b3f | DAT_005c5014
    MOVSD.REP ES:EDI,ESI                ; 00408b45 | DAT_005c5014 | DAT_006b4958 | DAT_005c5018
    MOV ECX,dword ptr [EAX + 0xc]       ; 00408b47 | DAT_006b4960
    CMP EBP,ECX                         ; 00408b4a
    JLE 0x00408b50                      ; 00408b4c
        ;   XREF to: 00408b50 (CONDITIONAL_JUMP)  ; LAB_00408b50
    MOV EBP,ECX                         ; 00408b4e
    MOV ESI,dword ptr [ESP + 0x18]      ; 00408b50
        ;   Label: LAB_00408b50
    ADD EAX,0x30                        ; 00408b54
    INC EDX                             ; 00408b57
    MOV ECX,dword ptr [ESI + 0x4]       ; 00408b58
    ADD EBX,0x4                         ; 00408b5b
    CMP EDX,ECX                         ; 00408b5e
    JL 0x00408b34                       ; 00408b60
        ;   XREF to: 00408b34 (CONDITIONAL_JUMP)  ; LAB_00408b34
    CALL engine_texture.cpp_getCurrentTexture_FUN_00545ad0 ; 00408b62
        ;   XREF to: 00545ad0 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_getCurrentTexture_FUN_00545ad0()
        ;   Label: LAB_00408b62
    MOV EDI,dword ptr [ESP]             ; 00408b67
    MOV ECX,0x12                        ; 00408b6a
    MOV ESI,EAX                         ; 00408b6f
    LEA EDI,[EDI + 0xc4]                ; 00408b71
    MOV EDX,dword ptr [ESP]             ; 00408b77
    MOV EAX,[0x005b763c]                ; 00408b7a | DAT_005b763c
    MOVSD.REP ES:EDI,ESI                ; 00408b7f | DAT_006b4a18 | DAT_006b4a1c
    MOV dword ptr [EDX + 0x10c],EAX     ; 00408b81 | DAT_006b4a60
    MOV dword ptr [EDX + 0x114],EBP     ; 00408b87 | DAT_006b4a68
    MOV EAX,[0x01c03998]                ; 00408b8d | DAT_01c03998
    MOV dword ptr [EDX + 0x110],EAX     ; 00408b92 | DAT_006b4a64
    MOV EDX,dword ptr [ESP + 0x18]      ; 00408b98
        ;   Label: LAB_00408b98
    MOV EDX,dword ptr [EDX + 0x4]       ; 00408b9c
    LEA EAX,[EDX*0x4 + 0x0]             ; 00408b9f
    SUB EAX,EDX                         ; 00408ba6
    LEA EDX,[EAX*0x4 + 0x0]             ; 00408ba8
    MOV EAX,dword ptr [ESP + 0x18]      ; 00408baf
    ADD EAX,0x18                        ; 00408bb3
    ADD EAX,EDX                         ; 00408bb6
    ADD ESP,0x4                         ; 00408bb8
    POP EBP                             ; 00408bbb
    POP EDI                             ; 00408bbc
    POP ESI                             ; 00408bbd
    POP EBX                             ; 00408bbe
    RET                                 ; 00408bbf
    MOV dword ptr [0x01c00c7c],0x530322 ; 00408bc0 | DAT_01c00c7c | LAB_00530322
        ;   Label: LAB_00408bc0
    JMP 0x00408aaa                      ; 00408bca
        ;   XREF to: 00408aaa (UNCONDITIONAL_JUMP)  ; LAB_00408aaa
    CMP dword ptr [0x005b7624],0x20     ; 00408bcf | DAT_005b7624
        ;   Label: LAB_00408bcf
    JNZ 0x00408be7                      ; 00408bd6
        ;   XREF to: 00408be7 (CONDITIONAL_JUMP)  ; LAB_00408be7
    MOV dword ptr [0x01c00c7c],0x52f031 ; 00408bd8 | DAT_01c00c7c | LAB_0052f031
    JMP 0x00408aaa                      ; 00408be2
        ;   XREF to: 00408aaa (UNCONDITIONAL_JUMP)  ; LAB_00408aaa
    MOV dword ptr [0x01c00c7c],0x52f823 ; 00408be7 | DAT_01c00c7c | LAB_0052f823
        ;   Label: LAB_00408be7
    JMP 0x00408aaa                      ; 00408bf1
        ;   XREF to: 00408aaa (UNCONDITIONAL_JUMP)  ; LAB_00408aaa
    MOV EAX,dword ptr [ESP + 0x18]      ; 00408bf6
        ;   Label: LAB_00408bf6
    PUSH EBX                            ; 00408bfa
    MOV ECX,dword ptr [EAX + 0x4]       ; 00408bfb
    PUSH ECX                            ; 00408bfe
    CALL FUN_00432cd0                   ; 00408bff
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00432cd0()
    ADD ESP,0x8                         ; 00408c04
    JMP 0x00408b98                      ; 00408c07
        ;   XREF to: 00408b98 (UNCONDITIONAL_JUMP)  ; LAB_00408b98


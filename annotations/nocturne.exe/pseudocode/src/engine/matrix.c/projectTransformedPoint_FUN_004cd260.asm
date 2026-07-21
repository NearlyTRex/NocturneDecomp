; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_projectTransformedPoint_FUN_004cd260(int *param_1)
;
;
; XREF[3]:
;   FUN_0048d5d0 at 0048dd8a
;   FUN_005125a0 at 00512f23
;   engine_matrix.c_projectCachedPoint_FUN_004cd240 at 004cd256
;
; Referenced Globals:
;   undefined4 DAT_01c00c48
;   undefined4 DAT_01c00c4c
;   undefined4 DAT_01c00c50
;   undefined4 DAT_01c00c54
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004cd260
        ;   Label: engine_matrix.c_projectTransformedPoint_FUN_004cd260
    PUSH EDI                            ; 004cd261
    PUSH EBP                            ; 004cd262
    MOV ESI,dword ptr [ESP + 0x10]      ; 004cd263
    MOV EBP,dword ptr [ESI + 0x4]       ; 004cd267
    MOV ECX,dword ptr [ESI + 0x8]       ; 004cd26a
    MOV EDI,dword ptr [ESI]             ; 004cd26d
    TEST ECX,ECX                        ; 004cd26f
    JLE 0x004cd2f3                      ; 004cd271
        ;   XREF to: 004cd2f3 (CONDITIONAL_JUMP)  ; LAB_004cd2f3
    XOR EAX,EAX                         ; 004cd277
    CMP EDI,ECX                         ; 004cd279
    JLE 0x004cd282                      ; 004cd27b
        ;   XREF to: 004cd282 (CONDITIONAL_JUMP)  ; LAB_004cd282
    MOV EAX,0x1                         ; 004cd27d
    MOV EDX,ECX                         ; 004cd282
        ;   Label: LAB_004cd282
    NEG EDX                             ; 004cd284
    CMP EDI,EDX                         ; 004cd286
    JGE 0x004cd28c                      ; 004cd288
        ;   XREF to: 004cd28c (CONDITIONAL_JUMP)  ; LAB_004cd28c
    OR AL,0x2                           ; 004cd28a
    CMP EBP,ECX                         ; 004cd28c
        ;   Label: LAB_004cd28c
    JLE 0x004cd292                      ; 004cd28e
        ;   XREF to: 004cd292 (CONDITIONAL_JUMP)  ; LAB_004cd292
    OR AL,0x4                           ; 004cd290
    MOV EDX,ECX                         ; 004cd292
        ;   Label: LAB_004cd292
    NEG EDX                             ; 004cd294
    CMP EBP,EDX                         ; 004cd296
    JGE 0x004cd29c                      ; 004cd298
        ;   XREF to: 004cd29c (CONDITIONAL_JUMP)  ; LAB_004cd29c
    OR AL,0x8                           ; 004cd29a
    TEST EAX,EAX                        ; 004cd29c
        ;   Label: LAB_004cd29c
    JZ 0x004cd2ac                       ; 004cd29e
        ;   XREF to: 004cd2ac (CONDITIONAL_JUMP)  ; LAB_004cd2ac
    OR EAX,0x80000000                   ; 004cd2a0
    MOV dword ptr [ESI + 0x10],EAX      ; 004cd2a5
    POP EBP                             ; 004cd2a8
    POP EDI                             ; 004cd2a9
    POP ESI                             ; 004cd2aa
    RET                                 ; 004cd2ab
    PUSH EBX                            ; 004cd2ac
        ;   Label: LAB_004cd2ac
    MOV EAX,0x7fffffff                  ; 004cd2ad
    MOV EDX,EAX                         ; 004cd2b2
    SAR EDX,0x1f                        ; 004cd2b4
    IDIV ECX                            ; 004cd2b7
    MOV EBX,ECX                         ; 004cd2b9
    MOV EDX,dword ptr [0x01c00c48]      ; 004cd2bb | DAT_01c00c48
    MOV dword ptr [ESI + 0xc],EAX       ; 004cd2c1
    MOV EAX,EDI                         ; 004cd2c4
    IMUL EDX                            ; 004cd2c6
    IDIV EBX                            ; 004cd2c8
    MOV EDX,dword ptr [0x01c00c50]      ; 004cd2ca | DAT_01c00c50
    MOV EBX,ECX                         ; 004cd2d0
    ADD EAX,EDX                         ; 004cd2d2
    MOV EDX,dword ptr [0x01c00c4c]      ; 004cd2d4 | DAT_01c00c4c
    MOV dword ptr [ESI + 0x10],EAX      ; 004cd2da
    MOV EAX,EBP                         ; 004cd2dd
    IMUL EDX                            ; 004cd2df
    IDIV EBX                            ; 004cd2e1
    MOV EDX,dword ptr [0x01c00c54]      ; 004cd2e3 | DAT_01c00c54
    ADD EAX,EDX                         ; 004cd2e9
    MOV dword ptr [ESI + 0x14],EAX      ; 004cd2eb
    POP EBX                             ; 004cd2ee
    POP EBP                             ; 004cd2ef
    POP EDI                             ; 004cd2f0
    POP ESI                             ; 004cd2f1
    RET                                 ; 004cd2f2
    MOV dword ptr [ESI + 0x10],0x80000010 ; 004cd2f3
        ;   Label: LAB_004cd2f3
    POP EBP                             ; 004cd2fa
    POP EDI                             ; 004cd2fb
    POP ESI                             ; 004cd2fc
    RET                                 ; 004cd2fd


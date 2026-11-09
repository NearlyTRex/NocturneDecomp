; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_asgaya_cpp_FUN_005ae248(PEXCEPTION_RECORD param_1,undefined4 param_2,PCONTEXT param_3)
;
;
; XREF[1]:
;   unkafter_asgaya.cpp_FUN_005ae418 at 005ae441
;
; Referenced Globals:
;   void* switchdataD_005ae22c = 005ae292
;   void* PTR_ExitProcess_005b3540 = 001b3cfe
;   void* PTR_UnhandledExceptionFilter_005b3670 = 001b4288
;   undefined4 DAT_00607df0
;   undefined4 DAT_00607df4
;   undefined4 DAT_02d261c4
;
; Called Functions:
;   ExitProcess
;   UnhandledExceptionFilter
;   unkafter_2d.cpp_FUN_005b0048
;   unkafter_asgaya.cpp_FUN_005afe70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ae248
        ;   Label: unkafter_asgaya.cpp_FUN_005ae248
    PUSH ESI                            ; 005ae249
    PUSH EDI                            ; 005ae24a
    SUB ESP,0x8                         ; 005ae24b
    MOV ESI,dword ptr [ESP + 0x18]      ; 005ae24e
    MOV EDI,dword ptr [ESP + 0x20]      ; 005ae252
    TEST byte ptr [ESI + 0x4],0x6       ; 005ae256
    JNZ 0x005ae40a                      ; 005ae25a
        ;   XREF to: 005ae40a (CONDITIONAL_JUMP)  ; LAB_005ae40a
    MOV EAX,dword ptr [ESI]             ; 005ae260
    ADD EAX,0x3fffff73                  ; 005ae262
    CMP EAX,0x6                         ; 005ae267
    JA 0x005ae392                       ; 005ae26a
        ;   XREF to: 005ae392 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr CS:[EAX*0x4 + 0x5ae22c] ; 005ae270 | caseD_c000008d | caseD_c000008e | caseD_c000008f
        ;   Label: switchD
    TEST byte ptr [EDI + 0x21],0x2      ; 005ae278
        ;   Label: caseD_c0000092
    JZ 0x005ae288                       ; 005ae27c
        ;   XREF to: 005ae288 (CONDITIONAL_JUMP)  ; LAB_005ae288
    MOV EBX,0x8a                        ; 005ae27e
    JMP 0x005ae353                      ; 005ae283
        ;   XREF to: 005ae353 (UNCONDITIONAL_JUMP)  ; LAB_005ae353
    MOV EBX,0x8b                        ; 005ae288
        ;   Label: LAB_005ae288
    JMP 0x005ae353                      ; 005ae28d
        ;   XREF to: 005ae353 (UNCONDITIONAL_JUMP)  ; LAB_005ae353
    MOV EBX,0x82                        ; 005ae292
        ;   Label: caseD_c000008d
    JMP 0x005ae353                      ; 005ae297
        ;   XREF to: 005ae353 (UNCONDITIONAL_JUMP)  ; LAB_005ae353
    MOV EBX,0x86                        ; 005ae29c
        ;   Label: caseD_c000008f
    JMP 0x005ae353                      ; 005ae2a1
        ;   XREF to: 005ae353 (UNCONDITIONAL_JUMP)  ; LAB_005ae353
    MOV EBX,0x84                        ; 005ae2a6
        ;   Label: caseD_c0000091
    JMP 0x005ae353                      ; 005ae2ab
        ;   XREF to: 005ae353 (UNCONDITIONAL_JUMP)  ; LAB_005ae353
    MOV EBX,0x85                        ; 005ae2b0
        ;   Label: caseD_c0000093
    JMP 0x005ae353                      ; 005ae2b5
        ;   XREF to: 005ae353 (UNCONDITIONAL_JUMP)  ; LAB_005ae353
    MOV EAX,dword ptr [EDI + 0x28]      ; 005ae2ba
        ;   Label: caseD_c0000090
    MOV DX,word ptr [EAX]               ; 005ae2bd
    MOV EBX,0x81                        ; 005ae2c0
    CMP DX,0xfad9                       ; 005ae2c5
    JNZ 0x005ae2d6                      ; 005ae2ca
        ;   XREF to: 005ae2d6 (CONDITIONAL_JUMP)  ; LAB_005ae2d6
    MOV EBX,0x88                        ; 005ae2cc
    JMP 0x005ae353                      ; 005ae2d1
        ;   XREF to: 005ae353 (UNCONDITIONAL_JUMP)  ; LAB_005ae353
    CMP DX,0xf1d9                       ; 005ae2d6
        ;   Label: LAB_005ae2d6
    JNZ 0x005ae2e7                      ; 005ae2db
        ;   XREF to: 005ae2e7 (CONDITIONAL_JUMP)  ; LAB_005ae2e7
    MOV EBX,0x8e                        ; 005ae2dd
    JMP 0x005ae353                      ; 005ae2e2
        ;   XREF to: 005ae353 (UNCONDITIONAL_JUMP)  ; LAB_005ae353
    JNZ 0x005ae2f3                      ; 005ae2e7
        ;   XREF to: 005ae2f3 (CONDITIONAL_JUMP)  ; LAB_005ae2f3
        ;   Label: LAB_005ae2e7
    MOV EBX,0x8f                        ; 005ae2e9
    JMP 0x005ae353                      ; 005ae2ee
        ;   XREF to: 005ae353 (UNCONDITIONAL_JUMP)  ; LAB_005ae353
    MOV DH,byte ptr [EAX]               ; 005ae2f3
        ;   Label: LAB_005ae2f3
    CMP DH,0xdb                         ; 005ae2f5
    JZ 0x005ae2ff                       ; 005ae2f8
        ;   XREF to: 005ae2ff (CONDITIONAL_JUMP)  ; LAB_005ae2ff
    CMP DH,0xdf                         ; 005ae2fa
    JNZ 0x005ae30f                      ; 005ae2fd
        ;   XREF to: 005ae30f (CONDITIONAL_JUMP)  ; LAB_005ae30f
    MOV CL,byte ptr [EAX + 0x1]         ; 005ae2ff
        ;   Label: LAB_005ae2ff
    AND CL,0x30                         ; 005ae302
    CMP CL,0x10                         ; 005ae305
    JNZ 0x005ae30f                      ; 005ae308
        ;   XREF to: 005ae30f (CONDITIONAL_JUMP)  ; LAB_005ae30f
    MOV EBX,0x8d                        ; 005ae30a
    TEST byte ptr [EAX],0x1             ; 005ae30f
        ;   Label: LAB_005ae30f
    JNZ 0x005ae34e                      ; 005ae312
        ;   XREF to: 005ae34e (CONDITIONAL_JUMP)  ; LAB_005ae34e
    MOV AL,byte ptr [EAX + 0x1]         ; 005ae314
    AND AL,0x30                         ; 005ae317
    CMP AL,0x30                         ; 005ae319
    JNZ 0x005ae34e                      ; 005ae31b
        ;   XREF to: 005ae34e (CONDITIONAL_JUMP)  ; LAB_005ae34e
    MOV ECX,dword ptr [EDI + 0x20]      ; 005ae31d
    AND ECX,0xffff                      ; 005ae320
    MOV EAX,dword ptr [EDI + 0x24]      ; 005ae326
    SHL ECX,0x2                         ; 005ae329
    AND EAX,0xffff                      ; 005ae32c
    SHR CX,0xd                          ; 005ae331
    AND ECX,0xffff                      ; 005ae335
    ADD ECX,ECX                         ; 005ae33b
    SHR EAX,CL                          ; 005ae33d
    AND EAX,0x1                         ; 005ae33f
    CMP EAX,0x1                         ; 005ae342
    JNZ 0x005ae34e                      ; 005ae345
        ;   XREF to: 005ae34e (CONDITIONAL_JUMP)  ; LAB_005ae34e
    MOV EBX,0x83                        ; 005ae347
        ;   Label: caseD_c000008e
    JMP 0x005ae353                      ; 005ae34c
        ;   XREF to: 005ae353 (UNCONDITIONAL_JUMP)  ; LAB_005ae353
    CMP EBX,-0x1                        ; 005ae34e
        ;   Label: LAB_005ae34e
    JZ 0x005ae392                       ; 005ae351
        ;   XREF to: 005ae392 (CONDITIONAL_JUMP)  ; default
    MOV byte ptr [0x02d261c4],0x1       ; 005ae353 | DAT_02d261c4
        ;   Label: LAB_005ae353
    CALL unkafter_asgaya.cpp_FUN_005afe70 ; 005ae35a
        ;   XREF to: 005afe70 (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005afe70()
    PUSH EBX                            ; 005ae35f
    CALL unkafter_2d.cpp_FUN_005b0048   ; 005ae360
        ;   XREF to: 005b0048 (UNCONDITIONAL_CALL)  ; undefined unkafter_2d.cpp_FUN_005b0048()
    ADD ESP,0x4                         ; 005ae365
    CMP EAX,-0x1                        ; 005ae368
    JZ 0x005ae3eb                       ; 005ae36b
        ;   XREF to: 005ae3eb (CONDITIONAL_JUMP)  ; LAB_005ae3eb
    CMP byte ptr [0x02d261c4],0x0       ; 005ae371 | DAT_02d261c4
    JZ 0x005ae3eb                       ; 005ae378
        ;   XREF to: 005ae3eb (CONDITIONAL_JUMP)  ; LAB_005ae3eb
    MOV BX,word ptr [EDI + 0x20]        ; 005ae37e
    XOR BL,BL                           ; 005ae382
    AND BH,0x7f                         ; 005ae384
    XOR EAX,EAX                         ; 005ae387
    MOV word ptr [EDI + 0x20],BX        ; 005ae389
    JMP 0x005ae40f                      ; 005ae38d
        ;   XREF to: 005ae40f (UNCONDITIONAL_JUMP)  ; LAB_005ae40f
    CMP dword ptr [0x00607df4],0x0      ; 005ae392 | DAT_00607df4
        ;   Label: default
    JZ 0x005ae3eb                       ; 005ae399
        ;   XREF to: 005ae3eb (CONDITIONAL_JUMP)  ; LAB_005ae3eb
    MOV EBX,0x1                         ; 005ae39b
    MOV ECX,dword ptr [ESI]             ; 005ae3a0
        ;   Label: LAB_005ae3a0
    PUSH ECX                            ; 005ae3a2
    PUSH EBX                            ; 005ae3a3
    CALL dword ptr [0x00607df0]         ; 005ae3a4 | DAT_00607df0
    ADD ESP,0x8                         ; 005ae3aa
    TEST EAX,EAX                        ; 005ae3ad
    JZ 0x005ae3e5                       ; 005ae3af
        ;   XREF to: 005ae3e5 (CONDITIONAL_JUMP)  ; LAB_005ae3e5
    CMP EAX,0x1                         ; 005ae3b1
    JZ 0x005ae3eb                       ; 005ae3b4
        ;   XREF to: 005ae3eb (CONDITIONAL_JUMP)  ; LAB_005ae3eb
    CMP EAX,0x2                         ; 005ae3b6
    JZ 0x005ae3eb                       ; 005ae3b9
        ;   XREF to: 005ae3eb (CONDITIONAL_JUMP)  ; LAB_005ae3eb
    CMP EAX,0x3                         ; 005ae3bb
    JZ 0x005ae3eb                       ; 005ae3be
        ;   XREF to: 005ae3eb (CONDITIONAL_JUMP)  ; LAB_005ae3eb
    MOV DL,0x1                          ; 005ae3c0
    PUSH EBX                            ; 005ae3c2
    MOV byte ptr [0x02d261c4],DL        ; 005ae3c3 | DAT_02d261c4
    CALL dword ptr [0x00607df4]         ; 005ae3c9 | DAT_00607df4
    MOV DH,byte ptr [0x02d261c4]        ; 005ae3cf | DAT_02d261c4
    ADD ESP,0x4                         ; 005ae3d5
    TEST DH,DH                          ; 005ae3d8
    JZ 0x005ae3e5                       ; 005ae3da
        ;   XREF to: 005ae3e5 (CONDITIONAL_JUMP)  ; LAB_005ae3e5
    XOR EAX,EAX                         ; 005ae3dc
    ADD ESP,0x8                         ; 005ae3de
    POP EDI                             ; 005ae3e1
    POP ESI                             ; 005ae3e2
    POP EBX                             ; 005ae3e3
    RET                                 ; 005ae3e4
    INC EBX                             ; 005ae3e5
        ;   Label: LAB_005ae3e5
    CMP EBX,0xc                         ; 005ae3e6
    JLE 0x005ae3a0                      ; 005ae3e9
        ;   XREF to: 005ae3a0 (CONDITIONAL_JUMP)  ; LAB_005ae3a0
    MOV EAX,ESP                         ; 005ae3eb
        ;   Label: LAB_005ae3eb
    PUSH EAX                            ; 005ae3ed
    MOV dword ptr [ESP + 0x4],ESI       ; 005ae3ee
    MOV dword ptr [ESP + 0x8],EDI       ; 005ae3f2
    CALL dword ptr CS:[0x5b3670]        ; 005ae3f6 | PTR_UnhandledExceptionFilter_005b3670
    TEST EAX,EAX                        ; 005ae3fd
    JZ 0x005ae40a                       ; 005ae3ff
        ;   XREF to: 005ae40a (CONDITIONAL_JUMP)  ; LAB_005ae40a
    PUSH -0x1                           ; 005ae401
    CALL dword ptr CS:[0x5b3540]        ; 005ae403 | PTR_ExitProcess_005b3540
    MOV EAX,0x1                         ; 005ae40a
        ;   Label: LAB_005ae40a
    ADD ESP,0x8                         ; 005ae40f
        ;   Label: LAB_005ae40f
    POP EDI                             ; 005ae412
    POP ESI                             ; 005ae413
    POP EBX                             ; 005ae414
    RET                                 ; 005ae415


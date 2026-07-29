; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl engine_3d_c_renderPolygonTexturedUVLitPlaneMasked_FUN_00405340(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; XREF[1]:
;   engine_3d.c_FUN_00405b40 at 00405c6a
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_005c502c
;   undefined4 DAT_005c5030
;   undefined4 DAT_006b0264
;   undefined4 DAT_006b029c
;   undefined4 DAT_006b02a0
;   undefined4 DAT_01c00c7c
;   undefined4 DAT_01c03948
;   undefined4 DAT_01c039a0
;   undefined4 DAT_01c039a4
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_00404710
;   engine_clipper.c_FUN_00432cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00405340
        ;   Label: engine_3d.c_renderPolygonTexturedUVLitPlaneMasked_FUN_00405340
    PUSH ESI                            ; 00405341
    PUSH EDI                            ; 00405342
    PUSH EBP                            ; 00405343
    MOV EBP,dword ptr [0x006b0264]      ; 00405344 | DAT_006b0264
    MOV EDI,dword ptr [ESP + 0x14]      ; 0040534a
    MOV EDX,dword ptr [0x01c03948]      ; 0040534e | DAT_01c03948
    LEA ESI,[EDI + 0x18]                ; 00405354
    TEST EDX,EDX                        ; 00405357
    JNZ 0x004053e3                      ; 00405359
        ;   XREF to: 004053e3 (CONDITIONAL_JUMP)  ; LAB_004053e3
    CMP dword ptr [0x005b7624],0x20     ; 0040535f | DAT_005b7624
    JNZ 0x004053d7                      ; 00405366
        ;   XREF to: 004053d7 (CONDITIONAL_JUMP)  ; LAB_004053d7
    MOV dword ptr [0x01c00c7c],0x5300ec ; 00405368 | DAT_01c00c7c
    MOV EAX,0x1                         ; 00405372
        ;   Label: LAB_00405372
    PUSH EDI                            ; 00405377
    XOR EDX,EDX                         ; 00405378
    XOR EBX,EBX                         ; 0040537a
    MOV [0x01c039a0],EAX                ; 0040537c | DAT_01c039a0
    MOV dword ptr [0x01c039a4],EDX      ; 00405381 | DAT_01c039a4
    CALL engine_3d.c_calculatePolygonLighting_FUN_00404710 ; 00405387
        ;   XREF to: 00404710 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_00404710(SMRGLHeaderPrimitive * prim)
    MOV ECX,0x6b029c                    ; 0040538c | DAT_006b029c
    ADD ESP,0x4                         ; 00405391
    MOV EAX,ESI                         ; 00405394
    MOV EDX,dword ptr [EDI + 0x4]       ; 00405396
        ;   Label: LAB_00405396
    LEA EDX,[EDX + EDX*0x2]             ; 00405399
    MOV EBP,dword ptr [0x006b0264]      ; 0040539c | DAT_006b0264
    CMP EBX,EDX                         ; 004053a2
    JGE 0x0040540a                      ; 004053a4
        ;   XREF to: 0040540a (CONDITIONAL_JUMP)  ; LAB_0040540a
    MOV EDX,dword ptr [EAX]             ; 004053a6
    ADD EDX,EBP                         ; 004053a8
    MOV dword ptr [ECX],EDX             ; 004053aa | DAT_006b029c | DAT_006b02a0
    MOV EDX,dword ptr [EAX]             ; 004053ac
    ADD EDX,EBP                         ; 004053ae
    IMUL EDX,EDX,0x30                   ; 004053b0
    MOV ESI,dword ptr [EAX + 0x4]       ; 004053b3
    MOV dword ptr [EDX + 0x5c502c],ESI  ; 004053b6 | DAT_005c502c
    MOV EDX,dword ptr [EAX]             ; 004053bc
    ADD EDX,EBP                         ; 004053be
    IMUL ESI,EDX,0x30                   ; 004053c0
    ADD EAX,0xc                         ; 004053c3
    ADD ECX,0x4                         ; 004053c6
    MOV EDX,dword ptr [EAX + -0x4]      ; 004053c9
    ADD EBX,0x3                         ; 004053cc
    MOV dword ptr [ESI + 0x5c5030],EDX  ; 004053cf | DAT_005c5030
    JMP 0x00405396                      ; 004053d5
        ;   XREF to: 00405396 (UNCONDITIONAL_JUMP)  ; LAB_00405396
    MOV dword ptr [0x01c00c7c],0x530322 ; 004053d7 | DAT_01c00c7c
        ;   Label: LAB_004053d7
    JMP 0x00405372                      ; 004053e1
        ;   XREF to: 00405372 (UNCONDITIONAL_JUMP)  ; LAB_00405372
    CMP dword ptr [0x005b7624],0x20     ; 004053e3 | DAT_005b7624
        ;   Label: LAB_004053e3
    JNZ 0x004053fb                      ; 004053ea
        ;   XREF to: 004053fb (CONDITIONAL_JUMP)  ; LAB_004053fb
    MOV dword ptr [0x01c00c7c],0x52f031 ; 004053ec | DAT_01c00c7c
    JMP 0x00405372                      ; 004053f6
        ;   XREF to: 00405372 (UNCONDITIONAL_JUMP)  ; LAB_00405372
    MOV dword ptr [0x01c00c7c],0x52f823 ; 004053fb | DAT_01c00c7c
        ;   Label: LAB_004053fb
    JMP 0x00405372                      ; 00405405
        ;   XREF to: 00405372 (UNCONDITIONAL_JUMP)  ; LAB_00405372
    PUSH 0x6b029c                       ; 0040540a | DAT_006b029c
        ;   Label: LAB_0040540a
    MOV ECX,dword ptr [EDI + 0x4]       ; 0040540f
    PUSH ECX                            ; 00405412
    CALL engine_clipper.c_FUN_00432cd0  ; 00405413
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_FUN_00432cd0()
    MOV EDX,dword ptr [EDI + 0x4]       ; 00405418
    LEA EAX,[EDX*0x4 + 0x0]             ; 0040541b
    ADD EDI,0x18                        ; 00405422
    SUB EAX,EDX                         ; 00405425
    MOV EBP,dword ptr [0x006b0264]      ; 00405427 | DAT_006b0264
    SHL EAX,0x2                         ; 0040542d
    ADD ESP,0x8                         ; 00405430
    ADD EAX,EDI                         ; 00405433
    POP EBP                             ; 00405435
    POP EDI                             ; 00405436
    POP ESI                             ; 00405437
    POP EBX                             ; 00405438
    RET                                 ; 00405439


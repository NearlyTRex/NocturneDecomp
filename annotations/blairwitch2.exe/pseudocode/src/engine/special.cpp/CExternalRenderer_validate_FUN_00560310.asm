; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_CExternalRenderer_validate_FUN_00560310(CExternalRenderer *this_ptr,CExternalRenderer *capabilities)
;
; Parameters:
; CExternalRenderer * Stack[0x4]:4   this_ptr
; CExternalRenderer * Stack[0x8]:4   capabilities
;
; XREF[1]:
;   engine_special.cpp_loadExternalRenderer_FUN_0055e8c0 at 0055e965
;
; Called Functions:
;   crt_string.c__strcmp_FUN_005b8c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00560310
        ;   Label: engine_special.cpp_CExternalRenderer_validate_FUN_00560310
    PUSH ESI                            ; 00560311
    PUSH EDI                            ; 00560312
    MOV EDI,dword ptr [ESP + 0x10]      ; 00560313
    MOV ESI,dword ptr [ESP + 0x14]      ; 00560317
    TEST ESI,ESI                        ; 0056031b
    SETZ AL                             ; 0056031d
    XOR EBX,EBX                         ; 00560320
    MOV BL,AL                           ; 00560322
    TEST ESI,ESI                        ; 00560324
    JZ 0x00560428                       ; 00560326
        ;   XREF to: 00560428 (CONDITIONAL_JUMP)  ; LAB_00560428
    MOV DX,word ptr [EDI + 0x204]       ; 0056032c
    CMP DX,word ptr [ESI + 0x204]       ; 00560333
    JNZ 0x0056042e                      ; 0056033a
        ;   XREF to: 0056042e (CONDITIONAL_JUMP)  ; LAB_0056042e
    MOV EAX,0x1                         ; 00560340
        ;   Label: LAB_00560340
    MOV EBX,EAX                         ; 00560345
        ;   Label: LAB_00560345
    TEST EAX,EAX                        ; 00560347
    JZ 0x00560361                       ; 00560349
        ;   XREF to: 00560361 (CONDITIONAL_JUMP)  ; LAB_00560361
    MOV EAX,dword ptr [EDI + 0x208]     ; 0056034b
    MOV EDX,dword ptr [ESI + 0x208]     ; 00560351
    NOT EAX                             ; 00560357
    AND EAX,EDX                         ; 00560359
    JNZ 0x0056043f                      ; 0056035b
        ;   XREF to: 0056043f (CONDITIONAL_JUMP)  ; LAB_0056043f
    TEST EBX,EBX                        ; 00560361
        ;   Label: LAB_00560361
    JZ 0x005603bf                       ; 00560363
        ;   XREF to: 005603bf (CONDITIONAL_JUMP)  ; LAB_005603bf
    CMP word ptr [ESI + 0x200],0x0      ; 00560365
    JZ 0x00560390                       ; 0056036d
        ;   XREF to: 00560390 (CONDITIONAL_JUMP)  ; LAB_00560390
    MOV EAX,dword ptr [EDI + 0x1fe]     ; 0056036f
    MOV EDX,dword ptr [ESI + 0x1fe]     ; 00560375
    SAR EAX,0x10                        ; 0056037b
    SAR EDX,0x10                        ; 0056037e
    SAR EAX,0x8                         ; 00560381
    SAR EDX,0x8                         ; 00560384
    XOR EBX,EBX                         ; 00560387
    CMP EAX,EDX                         ; 00560389
    SETZ AL                             ; 0056038b
    MOV BL,AL                           ; 0056038e
    TEST EBX,EBX                        ; 00560390
        ;   Label: LAB_00560390
    JZ 0x005603bf                       ; 00560392
        ;   XREF to: 005603bf (CONDITIONAL_JUMP)  ; LAB_005603bf
    CMP word ptr [ESI + 0x202],0x0      ; 00560394
    JZ 0x005603bf                       ; 0056039c
        ;   XREF to: 005603bf (CONDITIONAL_JUMP)  ; LAB_005603bf
    MOV EDX,dword ptr [EDI + 0x200]     ; 0056039e
    MOV EAX,dword ptr [ESI + 0x200]     ; 005603a4
    SAR EDX,0x10                        ; 005603aa
    SAR EAX,0x10                        ; 005603ad
    SAR EDX,0x8                         ; 005603b0
    SAR EAX,0x8                         ; 005603b3
    XOR EBX,EBX                         ; 005603b6
    CMP EDX,EAX                         ; 005603b8
    SETZ AL                             ; 005603ba
    MOV BL,AL                           ; 005603bd
    TEST EBX,EBX                        ; 005603bf
        ;   Label: LAB_005603bf
    JZ 0x005603eb                       ; 005603c1
        ;   XREF to: 005603eb (CONDITIONAL_JUMP)  ; LAB_005603eb
    CMP byte ptr [ESI + 0x100],0x0      ; 005603c3
    JZ 0x005603eb                       ; 005603ca
        ;   XREF to: 005603eb (CONDITIONAL_JUMP)  ; LAB_005603eb
    LEA EAX,[EDI + 0x100]               ; 005603cc
    PUSH EAX                            ; 005603d2
    LEA EAX,[ESI + 0x100]               ; 005603d3
    PUSH EAX                            ; 005603d9
    XOR EBX,EBX                         ; 005603da
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 005603dc
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 005603e1
    TEST EAX,EAX                        ; 005603e4
    SETZ AL                             ; 005603e6
    MOV BL,AL                           ; 005603e9
    TEST EBX,EBX                        ; 005603eb
        ;   Label: LAB_005603eb
    JZ 0x00560428                       ; 005603ed
        ;   XREF to: 00560428 (CONDITIONAL_JUMP)  ; LAB_00560428
    CMP dword ptr [EDI + 0x20c],0x10    ; 005603ef
    JNZ 0x0056043f                      ; 005603f6
        ;   XREF to: 0056043f (CONDITIONAL_JUMP)  ; LAB_0056043f
    XOR EDX,EDX                         ; 005603f8
    TEST EBX,EBX                        ; 005603fa
    JZ 0x00560428                       ; 005603fc
        ;   XREF to: 00560428 (CONDITIONAL_JUMP)  ; LAB_00560428
    MOV EAX,ESI                         ; 005603fe
    MOV ECX,EDI                         ; 00560400
    MOV EDI,dword ptr [ECX + 0x210]     ; 00560402
        ;   Label: LAB_00560402
    MOV ESI,dword ptr [EAX + 0x210]     ; 00560408
    ADD ECX,0x4                         ; 0056040e
    CMP ESI,EDI                         ; 00560411
    SETZ BL                             ; 00560413
    ADD EAX,0x4                         ; 00560416
    MOVZX ESI,BL                        ; 00560419
    INC EDX                             ; 0056041c
    MOV EBX,ESI                         ; 0056041d
    CMP EDX,0x10                        ; 0056041f
    JGE 0x00560428                      ; 00560422
        ;   XREF to: 00560428 (CONDITIONAL_JUMP)  ; LAB_00560428
    TEST ESI,ESI                        ; 00560424
    JNZ 0x00560402                      ; 00560426
        ;   XREF to: 00560402 (CONDITIONAL_JUMP)  ; LAB_00560402
    MOV EAX,EBX                         ; 00560428
        ;   Label: LAB_00560428
    POP EDI                             ; 0056042a
    POP ESI                             ; 0056042b
    POP EBX                             ; 0056042c
    RET                                 ; 0056042d
    CMP DX,-0x1                         ; 0056042e
        ;   Label: LAB_0056042e
    JZ 0x00560340                       ; 00560432
        ;   XREF to: 00560340 (CONDITIONAL_JUMP)  ; LAB_00560340
    XOR EAX,EAX                         ; 00560438
    JMP 0x00560345                      ; 0056043a
        ;   XREF to: 00560345 (UNCONDITIONAL_JUMP)  ; LAB_00560345
    XOR EBX,EBX                         ; 0056043f
        ;   Label: LAB_0056043f
    MOV EAX,EBX                         ; 00560441
    POP EDI                             ; 00560443
    POP ESI                             ; 00560444
    POP EBX                             ; 00560445
    RET                                 ; 00560446


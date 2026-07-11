; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_005653e0(byte *param_1,byte *param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_00565630 at 0056563e
;   FUN_00565724 at 00565737
;
; Referenced Globals:
;   undefined4 DAT_005c1aa0
;   undefined4 DAT_005c1d50
;
; Called Functions:
;   FUN_00568e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005653e0
        ;   Label: FUN_005653e0
    PUSH ESI                            ; 005653e1
    PUSH EDI                            ; 005653e2
    PUSH EBP                            ; 005653e3
    SUB ESP,0x4                         ; 005653e4
    MOV ECX,dword ptr [ESP + 0x18]      ; 005653e7
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005653eb
    MOV EDX,0x1                         ; 005653ef
    XOR EBX,EBX                         ; 005653f4
    XOR EDI,EDI                         ; 005653f6
    XOR EBP,EBP                         ; 005653f8
    MOV dword ptr [ESP],EBX             ; 005653fa
    TEST ESI,ESI                        ; 005653fd
    JZ 0x0056540f                       ; 005653ff
        ;   XREF to: 0056540f (CONDITIONAL_JUMP)  ; LAB_0056540f
    CMP EDX,dword ptr [0x005c1d50]      ; 00565401 | DAT_005c1d50
    JNZ 0x0056540d                      ; 00565407
        ;   XREF to: 0056540d (CONDITIONAL_JUMP)  ; LAB_0056540d
    MOV dword ptr [ESI],EDX             ; 00565409
    JMP 0x0056540f                      ; 0056540b
        ;   XREF to: 0056540f (UNCONDITIONAL_JUMP)  ; LAB_0056540f
    MOV dword ptr [ESI],EBX             ; 0056540d
        ;   Label: LAB_0056540d
    MOV AL,byte ptr [ECX]               ; 0056540f
        ;   Label: LAB_0056540f
    CMP AL,0x72                         ; 00565411
    JC 0x0056541d                       ; 00565413
        ;   XREF to: 0056541d (CONDITIONAL_JUMP)  ; LAB_0056541d
    JBE 0x00565423                      ; 00565415
        ;   XREF to: 00565423 (CONDITIONAL_JUMP)  ; LAB_00565423
    CMP AL,0x77                         ; 00565417
    JZ 0x00565428                       ; 00565419
        ;   XREF to: 00565428 (CONDITIONAL_JUMP)  ; LAB_00565428
    JMP 0x00565432                      ; 0056541b
        ;   XREF to: 00565432 (UNCONDITIONAL_JUMP)  ; LAB_00565432
    CMP AL,0x61                         ; 0056541d
        ;   Label: LAB_0056541d
    JZ 0x0056542d                       ; 0056541f
        ;   XREF to: 0056542d (CONDITIONAL_JUMP)  ; LAB_0056542d
    JMP 0x00565432                      ; 00565421
        ;   XREF to: 00565432 (UNCONDITIONAL_JUMP)  ; LAB_00565432
    OR BL,0x1                           ; 00565423
        ;   Label: LAB_00565423
    JMP 0x00565443                      ; 00565426
        ;   XREF to: 00565443 (UNCONDITIONAL_JUMP)  ; LAB_00565443
    OR BL,0x2                           ; 00565428
        ;   Label: LAB_00565428
    JMP 0x00565443                      ; 0056542b
        ;   XREF to: 00565443 (UNCONDITIONAL_JUMP)  ; LAB_00565443
    OR BL,0x82                          ; 0056542d
        ;   Label: LAB_0056542d
    JMP 0x00565443                      ; 00565430
        ;   XREF to: 00565443 (UNCONDITIONAL_JUMP)  ; LAB_00565443
    PUSH 0x9                            ; 00565432
        ;   Label: LAB_00565432
    CALL FUN_00568e80                   ; 00565434
        ;   XREF to: 00568e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00568e80()
    ADD ESP,0x4                         ; 00565439
    XOR EDX,EDX                         ; 0056543c
    JMP 0x00565512                      ; 0056543e
        ;   XREF to: 00565512 (UNCONDITIONAL_JUMP)  ; LAB_00565512
    MOV AH,byte ptr [ECX + 0x1]         ; 00565443
        ;   Label: LAB_00565443
    INC ECX                             ; 00565446
    TEST AH,AH                          ; 00565447
    JZ 0x005654fd                       ; 00565449
        ;   XREF to: 005654fd (CONDITIONAL_JUMP)  ; LAB_005654fd
    TEST EDX,EDX                        ; 0056544f
        ;   Label: LAB_0056544f
    JZ 0x005654fd                       ; 00565451
        ;   XREF to: 005654fd (CONDITIONAL_JUMP)  ; LAB_005654fd
    MOV AL,byte ptr [ECX]               ; 00565457
    CMP AL,0x63                         ; 00565459
    JC 0x0056547a                       ; 0056545b
        ;   XREF to: 0056547a (CONDITIONAL_JUMP)  ; LAB_0056547a
    JBE 0x005654c8                      ; 0056545d
        ;   XREF to: 005654c8 (CONDITIONAL_JUMP)  ; LAB_005654c8
    CMP AL,0x6e                         ; 00565463
    JC 0x005654f1                       ; 00565465
        ;   XREF to: 005654f1 (CONDITIONAL_JUMP)  ; LAB_005654f1
    JBE 0x005654dd                      ; 0056546b
        ;   XREF to: 005654dd (CONDITIONAL_JUMP)  ; LAB_005654dd
    CMP AL,0x74                         ; 00565471
    JZ 0x005654a7                       ; 00565473
        ;   XREF to: 005654a7 (CONDITIONAL_JUMP)  ; LAB_005654a7
    JMP 0x005654f1                      ; 00565475
        ;   XREF to: 005654f1 (UNCONDITIONAL_JUMP)  ; LAB_005654f1
    CMP AL,0x2b                         ; 0056547a
        ;   Label: LAB_0056547a
    JC 0x005654f1                       ; 0056547c
        ;   XREF to: 005654f1 (CONDITIONAL_JUMP)  ; LAB_005654f1
    JBE 0x0056548d                      ; 00565482
        ;   XREF to: 0056548d (CONDITIONAL_JUMP)  ; LAB_0056548d
    CMP AL,0x62                         ; 00565484
    JZ 0x005654b6                       ; 00565486
        ;   XREF to: 005654b6 (CONDITIONAL_JUMP)  ; LAB_005654b6
    JMP 0x005654f1                      ; 00565488
        ;   XREF to: 005654f1 (UNCONDITIONAL_JUMP)  ; LAB_005654f1
    CMP dword ptr [ESP],0x0             ; 0056548d
        ;   Label: LAB_0056548d
    JZ 0x0056549a                       ; 00565491
        ;   XREF to: 0056549a (CONDITIONAL_JUMP)  ; LAB_0056549a
    XOR EDX,EDX                         ; 00565493
    JMP 0x005654f1                      ; 00565495
        ;   XREF to: 005654f1 (UNCONDITIONAL_JUMP)  ; LAB_005654f1
    MOV EAX,0x1                         ; 0056549a
        ;   Label: LAB_0056549a
    OR BL,0x3                           ; 0056549f
    MOV dword ptr [ESP],EAX             ; 005654a2
    JMP 0x005654f1                      ; 005654a5
        ;   XREF to: 005654f1 (UNCONDITIONAL_JUMP)  ; LAB_005654f1
    TEST EDI,EDI                        ; 005654a7
        ;   Label: LAB_005654a7
    JZ 0x005654af                       ; 005654a9
        ;   XREF to: 005654af (CONDITIONAL_JUMP)  ; LAB_005654af
    XOR EDX,EDX                         ; 005654ab
    JMP 0x005654f1                      ; 005654ad
        ;   XREF to: 005654f1 (UNCONDITIONAL_JUMP)  ; LAB_005654f1
    MOV EDI,0x1                         ; 005654af
        ;   Label: LAB_005654af
    JMP 0x005654f1                      ; 005654b4
        ;   XREF to: 005654f1 (UNCONDITIONAL_JUMP)  ; LAB_005654f1
    TEST EDI,EDI                        ; 005654b6
        ;   Label: LAB_005654b6
    JZ 0x005654be                       ; 005654b8
        ;   XREF to: 005654be (CONDITIONAL_JUMP)  ; LAB_005654be
    XOR EDX,EDX                         ; 005654ba
    JMP 0x005654f1                      ; 005654bc
        ;   XREF to: 005654f1 (UNCONDITIONAL_JUMP)  ; LAB_005654f1
    MOV EDI,0x1                         ; 005654be
        ;   Label: LAB_005654be
    OR BL,0x40                          ; 005654c3
    JMP 0x005654f1                      ; 005654c6
        ;   XREF to: 005654f1 (UNCONDITIONAL_JUMP)  ; LAB_005654f1
    TEST EBP,EBP                        ; 005654c8
        ;   Label: LAB_005654c8
    JZ 0x005654d0                       ; 005654ca
        ;   XREF to: 005654d0 (CONDITIONAL_JUMP)  ; LAB_005654d0
    XOR EDX,EDX                         ; 005654cc
    JMP 0x005654f1                      ; 005654ce
        ;   XREF to: 005654f1 (UNCONDITIONAL_JUMP)  ; LAB_005654f1
    MOV AL,byte ptr [ESI]               ; 005654d0
        ;   Label: LAB_005654d0
    OR AL,0x1                           ; 005654d2
    MOV EBP,0x1                         ; 005654d4
    MOV byte ptr [ESI],AL               ; 005654d9
    JMP 0x005654f1                      ; 005654db
        ;   XREF to: 005654f1 (UNCONDITIONAL_JUMP)  ; LAB_005654f1
    TEST EBP,EBP                        ; 005654dd
        ;   Label: LAB_005654dd
    JZ 0x005654e5                       ; 005654df
        ;   XREF to: 005654e5 (CONDITIONAL_JUMP)  ; LAB_005654e5
    XOR EDX,EDX                         ; 005654e1
    JMP 0x005654f1                      ; 005654e3
        ;   XREF to: 005654f1 (UNCONDITIONAL_JUMP)  ; LAB_005654f1
    MOV AH,byte ptr [ESI]               ; 005654e5
        ;   Label: LAB_005654e5
    AND AH,0xfe                         ; 005654e7
    MOV EBP,0x1                         ; 005654ea
    MOV byte ptr [ESI],AH               ; 005654ef
    MOV AL,byte ptr [ECX + 0x1]         ; 005654f1
        ;   Label: LAB_005654f1
    INC ECX                             ; 005654f4
    TEST AL,AL                          ; 005654f5
    JNZ 0x0056544f                      ; 005654f7
        ;   XREF to: 0056544f (CONDITIONAL_JUMP)  ; LAB_0056544f
    TEST EDI,EDI                        ; 005654fd
        ;   Label: LAB_005654fd
    JNZ 0x00565510                      ; 005654ff
        ;   XREF to: 00565510 (CONDITIONAL_JUMP)  ; LAB_00565510
    CMP dword ptr [0x005c1aa0],0x200    ; 00565501 | DAT_005c1aa0
    JNZ 0x00565510                      ; 0056550b
        ;   XREF to: 00565510 (CONDITIONAL_JUMP)  ; LAB_00565510
    OR BL,0x40                          ; 0056550d
    MOV EDX,EBX                         ; 00565510
        ;   Label: LAB_00565510
    MOV EAX,EDX                         ; 00565512
        ;   Label: LAB_00565512
    ADD ESP,0x4                         ; 00565514
    POP EBP                             ; 00565517
    POP EDI                             ; 00565518
    POP ESI                             ; 00565519
    POP EBX                             ; 0056551a
    RET                                 ; 0056551b


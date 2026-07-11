; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056536a(undefined4 *param_1,byte param_2)
;
;
; XREF[2]:
;   FUN_004a3b90 at 004a3e55
;   FUN_004a4170 at 004a4410
;
; Referenced Globals:
;   undefined4 DAT_005a4810
;   undefined4 DAT_005a4818
;   void* PTR_FUN_005a4824 = 005651ca
;   void* PTR_LAB_005a482c = 0056519c
;   void* PTR_LAB_005a4834 = 005651b2
;
; Called Functions:
;   FUN_0056b4a9
;   FUN_0056b503
;   FUN_0056b896
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056536a
        ;   Label: FUN_0056536a
    TEST byte ptr [ESP + 0x8],0x1       ; 0056536e
    JZ 0x005653b8                       ; 00565373
        ;   XREF to: 005653b8 (CONDITIONAL_JUMP)  ; LAB_005653b8
    PUSH 0x1                            ; 00565375
        ;   Label: LAB_00565375
    PUSH EAX                            ; 00565377
    CALL FUN_0056b896                   ; 00565378
        ;   XREF to: 0056b896 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b896()
    ADD ESP,0x8                         ; 0056537d
    PUSH 0x1                            ; 00565380
    ADD EAX,0x44                        ; 00565382
    PUSH EAX                            ; 00565385
    CALL FUN_0056b4a9                   ; 00565386
        ;   XREF to: 0056b4a9 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b4a9()
    SUB EAX,0x44                        ; 0056538b
    MOV EDX,dword ptr [EAX]             ; 0056538e
    MOV EDX,dword ptr [EDX + 0x4]       ; 00565390
    LEA ECX,[EAX + EDX*0x1]             ; 00565393
    MOV dword ptr [ECX + -0x4],EDX      ; 00565396
    MOV dword ptr [EAX + 0x40],0x5a4824 ; 00565399 | PTR_FUN_005a4824
    MOV EDX,dword ptr [EAX]             ; 005653a0
    MOV dword ptr [EAX + 0x48],0x5a482c ; 005653a2 | PTR_LAB_005a482c
    MOV EDX,dword ptr [EDX + 0x4]       ; 005653a9
    ADD ESP,0x8                         ; 005653ac
    MOV dword ptr [EDX + EAX*0x1 + 0x28],0x5a4834 ; 005653af | PTR_LAB_005a4834
    RET                                 ; 005653b7
    MOV dword ptr [EAX],0x5a4810        ; 005653b8 | DAT_005a4810
        ;   Label: LAB_005653b8
    ADD EAX,0x50                        ; 005653be
    PUSH EAX                            ; 005653c1
    MOV dword ptr [EAX + -0xc],0x5a4818 ; 005653c2 | DAT_005a4818
    CALL FUN_0056b503                   ; 005653c9
        ;   XREF to: 0056b503 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b503()
    ADD ESP,0x4                         ; 005653ce
    SUB EAX,0x50                        ; 005653d1
    JMP 0x00565375                      ; 005653d4
        ;   XREF to: 00565375 (UNCONDITIONAL_JUMP)  ; LAB_00565375


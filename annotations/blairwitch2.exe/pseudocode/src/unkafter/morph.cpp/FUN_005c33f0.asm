; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint unkafter_morph_cpp_FUN_005c33f0(WCHAR *param_1,byte *param_2,uint param_3)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   crt_unknown.c_FUN_005bd584 at 005bd643
;   crt_unknown.c_FUN_005bd67c at 005bd76a
;   unkafter_2d.cpp_FUN_005c6910 at 005c6933
;
; Referenced Globals:
;   void* PTR_MultiByteToWideChar_005c85f0 = 001c9048
;   undefined4 DAT_0061f758
;   undefined4 DAT_026807f0
;
; Called Functions:
;   crt_unknown.c_FUN_005c0e50
;   MultiByteToWideChar
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c33f0
        ;   Label: unkafter_morph.cpp_FUN_005c33f0
    PUSH ESI                            ; 005c33f1
    PUSH EDI                            ; 005c33f2
    PUSH EBP                            ; 005c33f3
    MOV EBP,ESP                         ; 005c33f4
    SUB ESP,0x4                         ; 005c33f6
    MOV ESI,dword ptr [EBP + 0x14]      ; 005c33f9
    MOV EBX,dword ptr [EBP + 0x18]      ; 005c33fc
    TEST EBX,EBX                        ; 005c33ff
    JNZ 0x005c340a                      ; 005c3401
        ;   XREF to: 005c340a (CONDITIONAL_JUMP)  ; LAB_005c340a
    XOR EAX,EAX                         ; 005c3403
    JMP 0x005c3495                      ; 005c3405
        ;   XREF to: 005c3495 (UNCONDITIONAL_JUMP)  ; LAB_005c3495
    CMP dword ptr [EBP + 0x1c],0x0      ; 005c340a
        ;   Label: LAB_005c340a
    JBE 0x005c3490                      ; 005c340e
        ;   XREF to: 005c3490 (CONDITIONAL_JUMP)  ; LAB_005c3490
    CMP byte ptr [EBX],0x0              ; 005c3414
    JNZ 0x005c342b                      ; 005c3417
        ;   XREF to: 005c342b (CONDITIONAL_JUMP)  ; LAB_005c342b
    TEST ESI,ESI                        ; 005c3419
    JZ 0x005c3422                       ; 005c341b
        ;   XREF to: 005c3422 (CONDITIONAL_JUMP)  ; LAB_005c3422
    MOV word ptr [ESI],0x0              ; 005c341d
    XOR EAX,EAX                         ; 005c3422
        ;   Label: LAB_005c3422
    MOV ESP,EBP                         ; 005c3424
    POP EBP                             ; 005c3426
    POP EDI                             ; 005c3427
    POP ESI                             ; 005c3428
    POP EBX                             ; 005c3429
    RET                                 ; 005c342a
    CMP dword ptr [0x026807f0],0x0      ; 005c342b | DAT_026807f0
        ;   Label: LAB_005c342b
    JZ 0x005c344d                       ; 005c3432
        ;   XREF to: 005c344d (CONDITIONAL_JUMP)  ; LAB_005c344d
    XOR EAX,EAX                         ; 005c3434
    MOV AL,byte ptr [EBX]               ; 005c3436
    MOV AL,byte ptr [EAX + 0x2680801]   ; 005c3438
    AND AL,0x1                          ; 005c343e
    AND EAX,0xff                        ; 005c3440
    JZ 0x005c344d                       ; 005c3445
        ;   XREF to: 005c344d (CONDITIONAL_JUMP)  ; LAB_005c344d
    CMP byte ptr [EBX + 0x1],0x0        ; 005c3447
    JZ 0x005c3490                       ; 005c344b
        ;   XREF to: 005c3490 (CONDITIONAL_JUMP)  ; LAB_005c3490
    PUSH EBX                            ; 005c344d
        ;   Label: LAB_005c344d
    CALL crt_unknown.c_FUN_005c0e50     ; 005c344e
        ;   XREF to: 005c0e50 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0e50()
    ADD ESP,0x4                         ; 005c3453
    PUSH 0x1                            ; 005c3456
    LEA EDX,[EBP + -0x4]                ; 005c3458
    PUSH EDX                            ; 005c345b
    MOV EDX,dword ptr [EBP + 0x1c]      ; 005c345c
    MOV EDI,EAX                         ; 005c345f
    CMP EAX,EDX                         ; 005c3461
    JBE 0x005c3467                      ; 005c3463
        ;   XREF to: 005c3467 (CONDITIONAL_JUMP)  ; LAB_005c3467
    MOV EAX,EDX                         ; 005c3465
    PUSH EAX                            ; 005c3467
        ;   Label: LAB_005c3467
    PUSH EBX                            ; 005c3468
    PUSH 0x8                            ; 005c3469
    MOV EBX,dword ptr [0x0061f758]      ; 005c346b | DAT_0061f758
    PUSH EBX                            ; 005c3471
    CALL dword ptr CS:[0x5c85f0]        ; 005c3472 | PTR_MultiByteToWideChar_005c85f0
    TEST EAX,EAX                        ; 005c3479
    JZ 0x005c3490                       ; 005c347b
        ;   XREF to: 005c3490 (CONDITIONAL_JUMP)  ; LAB_005c3490
    TEST ESI,ESI                        ; 005c347d
    JZ 0x005c3487                       ; 005c347f
        ;   XREF to: 005c3487 (CONDITIONAL_JUMP)  ; LAB_005c3487
    MOV EAX,dword ptr [EBP + -0x4]      ; 005c3481
    MOV word ptr [ESI],AX               ; 005c3484
    MOV EAX,EDI                         ; 005c3487
        ;   Label: LAB_005c3487
    MOV ESP,EBP                         ; 005c3489
    POP EBP                             ; 005c348b
    POP EDI                             ; 005c348c
    POP ESI                             ; 005c348d
    POP EBX                             ; 005c348e
    RET                                 ; 005c348f
    MOV EAX,0xffffffff                  ; 005c3490
        ;   Label: LAB_005c3490
    MOV ESP,EBP                         ; 005c3495
        ;   Label: LAB_005c3495
    POP EBP                             ; 005c3497
    POP EDI                             ; 005c3498
    POP ESI                             ; 005c3499
    POP EBX                             ; 005c349a
    RET                                 ; 005c349b


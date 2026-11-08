; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00589430(void)
;
;
; XREF[2]:
;   FUN_00401010 at 0040106f
;   FUN_00588a50 at 00588d90
;
; Referenced Globals:
;   TerminatedCString s_wincore_wddvmem_cpp_005ee3b9
;   TerminatedCString s_setpal_Unable_to_create_005ee3d0
;   TerminatedCString s_wincore_wddvmem_cpp_005ee3f9
;   TerminatedCString s_setpal_Unable_to_set_fro_005ee410
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c35838
;   undefined4 DAT_01c35839
;   undefined4 DAT_01c3583a
;   undefined4 DAT_01c37788
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_0264bc2c
;   undefined4 DAT_02661ae0
;   undefined4 DAT_02661ae4
;   undefined4 DAT_02661aec
;
; Called Functions:
;   FUN_004d0d10
;   FUN_004e4500
;   FUN_00589270
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00589430
        ;   Label: FUN_00589430
    PUSH EDI                            ; 00589431
    PUSH EBP                            ; 00589432
    CMP dword ptr [0x01c37788],0x0      ; 00589433 | DAT_01c37788
    JNZ 0x00589520                      ; 0058943a
        ;   XREF to: 00589520 (CONDITIONAL_JUMP)  ; LAB_00589520
    MOV ECX,dword ptr [0x02661aec]      ; 00589440 | DAT_02661aec
    TEST ECX,ECX                        ; 00589446
    JNZ 0x0058953c                      ; 00589448
        ;   XREF to: 0058953c (CONDITIONAL_JUMP)  ; LAB_0058953c
    CMP dword ptr [0x006141c0],0x8      ; 0058944e | DAT_006141c0
        ;   Label: LAB_0058944e
    JNZ 0x00589513                      ; 00589455
        ;   XREF to: 00589513 (CONDITIONAL_JUMP)  ; LAB_00589513
    XOR EDX,EDX                         ; 0058945b
    XOR EAX,EAX                         ; 0058945d
    ADD EAX,0x4                         ; 0058945f
        ;   Label: LAB_0058945f
    MOV BL,byte ptr [EDX + 0x1c35838]   ; 00589462 | DAT_01c35838
    MOV byte ptr [EAX + 0x2661afc],BL   ; 00589468
    MOV BL,byte ptr [EDX + 0x1c35839]   ; 0058946e | DAT_01c35839
    MOV byte ptr [EAX + 0x2661afd],BL   ; 00589474
    MOV BL,byte ptr [EDX + 0x1c3583a]   ; 0058947a | DAT_01c3583a
    MOV byte ptr [EAX + 0x2661afe],BL   ; 00589480
    MOV BL,0x1                          ; 00589486
    ADD EDX,0x3                         ; 00589488
    MOV byte ptr [EAX + 0x2661aff],BL   ; 0058948b
    CMP EAX,0x400                       ; 00589491
    JNZ 0x0058945f                      ; 00589496
        ;   XREF to: 0058945f (CONDITIONAL_JUMP)  ; LAB_0058945f
    PUSH 0x0                            ; 00589498
    PUSH 0x2661aec                      ; 0058949a | DAT_02661aec
    PUSH 0x2661b00                      ; 0058949f
    MOV EAX,[0x02661ae0]                ; 005894a4 | DAT_02661ae0
    PUSH 0x4                            ; 005894a9
    MOV EDX,dword ptr [EAX]             ; 005894ab
    PUSH EAX                            ; 005894ad
    CALL dword ptr [EDX + 0x14]         ; 005894ae
    TEST EAX,EAX                        ; 005894b1
    JZ 0x005894d8                       ; 005894b3
        ;   XREF to: 005894d8 (CONDITIONAL_JUMP)  ; LAB_005894d8
    MOV EDI,0x5ee3b9                    ; 005894b5 | = "..\\wincore\\wddvmem.cpp"
    MOV EBP,0x2d7                       ; 005894ba
    PUSH 0x5ee3d0                       ; 005894bf | = "setpal - Unable to create palette object"
    MOV dword ptr [0x01d046a0],EDI      ; 005894c4 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 005894ca | DAT_01d046a4
    CALL FUN_004e4500                   ; 005894d0
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 005894d5
    MOV ECX,dword ptr [0x02661aec]      ; 005894d8 | DAT_02661aec
        ;   Label: LAB_005894d8
    MOV EAX,[0x02661ae4]                ; 005894de | DAT_02661ae4
    PUSH ECX                            ; 005894e3
    MOV EDX,dword ptr [EAX]             ; 005894e4
    PUSH EAX                            ; 005894e6
    CALL dword ptr [EDX + 0x7c]         ; 005894e7
    TEST EAX,EAX                        ; 005894ea
    JZ 0x00589513                       ; 005894ec
        ;   XREF to: 00589513 (CONDITIONAL_JUMP)  ; LAB_00589513
    PUSH ESI                            ; 005894ee
    MOV EBX,0x5ee3f9                    ; 005894ef | = "..\\wincore\\wddvmem.cpp"
    MOV ESI,0x2dd                       ; 005894f4
    PUSH 0x5ee410                       ; 005894f9 | = "setpal - Unable to set front buffer p..."
    MOV dword ptr [0x01d046a0],EBX      ; 005894fe | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00589504 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0058950a
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0058950f
    POP ESI                             ; 00589512
    CMP dword ptr [0x006141c0],0x8      ; 00589513 | DAT_006141c0
        ;   Label: LAB_00589513
    JG 0x0058954f                       ; 0058951a
        ;   XREF to: 0058954f (CONDITIONAL_JUMP)  ; LAB_0058954f
    POP EBP                             ; 0058951c
    POP EDI                             ; 0058951d
    POP EBX                             ; 0058951e
    RET                                 ; 0058951f
    PUSH 0x1c34910                      ; 00589520
        ;   Label: LAB_00589520
    PUSH 0x1c35838                      ; 00589525 | DAT_01c35838
    CALL dword ptr [0x0264bc2c]         ; 0058952a | DAT_0264bc2c
    ADD ESP,0x8                         ; 00589530
    CALL FUN_004d0d10                   ; 00589533
        ;   XREF to: 004d0d10 (UNCONDITIONAL_CALL)  ; undefined FUN_004d0d10()
    POP EBP                             ; 00589538
    POP EDI                             ; 00589539
    POP EBX                             ; 0058953a
    RET                                 ; 0058953b
    PUSH ECX                            ; 0058953c
        ;   Label: LAB_0058953c
    MOV EDX,dword ptr [ECX]             ; 0058953d
    XOR EBX,EBX                         ; 0058953f
    CALL dword ptr [EDX + 0x8]          ; 00589541
    MOV dword ptr [0x02661aec],EBX      ; 00589544 | DAT_02661aec
    JMP 0x0058944e                      ; 0058954a
        ;   XREF to: 0058944e (UNCONDITIONAL_JUMP)  ; LAB_0058944e
    CALL FUN_00589270                   ; 0058954f
        ;   XREF to: 00589270 (UNCONDITIONAL_CALL)  ; undefined FUN_00589270()
        ;   Label: LAB_0058954f
    POP EBP                             ; 00589554
    POP EDI                             ; 00589555
    POP EBX                             ; 00589556
    RET                                 ; 00589557


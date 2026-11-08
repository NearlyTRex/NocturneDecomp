; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040d460(int *param_1,int param_2,int param_3)
;
;
; XREF[2]:
;   FUN_0040d5a0 at 0040d5c2
;   FUN_004a38e0 at 004a3987
;
; Referenced Globals:
;   TerminatedCString s_engine_alphabit_cpp_005caf66
;   TerminatedCString s_CAlphaBitmap_allocate_Ou_005caf7d
;   TerminatedCString s_engine_alphabit_cpp_005cafa4
;   TerminatedCString s_CAlphaBitmap_allocate_Ou_005cafbb
;   TerminatedCString s_engine_alphabit_cpp_005cafe2
;   TerminatedCString s_CAlphaBitmap_allocate_Ou_005caff9
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_0040d540
;   FUN_004e4500
;   FUN_005b8580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d460
        ;   Label: FUN_0040d460
    PUSH ESI                            ; 0040d461
    PUSH EDI                            ; 0040d462
    PUSH EBP                            ; 0040d463
    MOV EBX,dword ptr [ESP + 0x14]      ; 0040d464
    MOV EDI,dword ptr [ESP + 0x18]      ; 0040d468
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0040d46c
    PUSH EBX                            ; 0040d470
    CALL FUN_0040d540                   ; 0040d471
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d540()
    MOV EAX,EDI                         ; 0040d476
    IMUL EAX,ESI                        ; 0040d478
    ADD ESP,0x4                         ; 0040d47b
    MOV dword ptr [EBX + 0xc],EDI       ; 0040d47e
    PUSH EAX                            ; 0040d481
    MOV dword ptr [EBX + 0x10],ESI      ; 0040d482
    CALL FUN_005b8580                   ; 0040d485
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8580()
    ADD ESP,0x4                         ; 0040d48a
    MOV dword ptr [EBX],EAX             ; 0040d48d
    TEST EAX,EAX                        ; 0040d48f
    JZ 0x0040d4e4                       ; 0040d491
        ;   XREF to: 0040d4e4 (CONDITIONAL_JUMP)  ; LAB_0040d4e4
    MOV EAX,EDI                         ; 0040d493
        ;   Label: LAB_0040d493
    IMUL EAX,ESI                        ; 0040d495
    PUSH EAX                            ; 0040d498
    CALL FUN_005b8580                   ; 0040d499
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8580()
    ADD ESP,0x4                         ; 0040d49e
    MOV dword ptr [EBX + 0x4],EAX       ; 0040d4a1
    TEST EAX,EAX                        ; 0040d4a4
    JNZ 0x0040d4cb                      ; 0040d4a6
        ;   XREF to: 0040d4cb (CONDITIONAL_JUMP)  ; LAB_0040d4cb
    MOV EDX,0x5cafa4                    ; 0040d4a8 | = "..\\engine\\alphabit.cpp"
    MOV ECX,0xb3                        ; 0040d4ad
    PUSH 0x5cafbb                       ; 0040d4b2 | = "CAlphaBitmap::allocate - Out of memory"
    MOV dword ptr [0x01d046a0],EDX      ; 0040d4b7 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0040d4bd | DAT_01d046a4
    CALL FUN_004e4500                   ; 0040d4c3
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0040d4c8
    PUSH 0x400                          ; 0040d4cb
        ;   Label: LAB_0040d4cb
    CALL FUN_005b8580                   ; 0040d4d0
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8580()
    ADD ESP,0x4                         ; 0040d4d5
    MOV dword ptr [EBX + 0x8],EAX       ; 0040d4d8
    TEST EAX,EAX                        ; 0040d4db
    JZ 0x0040d509                       ; 0040d4dd
        ;   XREF to: 0040d509 (CONDITIONAL_JUMP)  ; LAB_0040d509
    POP EBP                             ; 0040d4df
    POP EDI                             ; 0040d4e0
    POP ESI                             ; 0040d4e1
    POP EBX                             ; 0040d4e2
    RET                                 ; 0040d4e3
    MOV ECX,0x5caf66                    ; 0040d4e4 | = "..\\engine\\alphabit.cpp"
        ;   Label: LAB_0040d4e4
    MOV EBP,0xb0                        ; 0040d4e9
    PUSH 0x5caf7d                       ; 0040d4ee | = "CAlphaBitmap::allocate - Out of memory"
    MOV dword ptr [0x01d046a0],ECX      ; 0040d4f3 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 0040d4f9 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0040d4ff
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0040d504
    JMP 0x0040d493                      ; 0040d507
        ;   XREF to: 0040d493 (UNCONDITIONAL_JUMP)  ; LAB_0040d493
    MOV EDI,0x5cafe2                    ; 0040d509 | = "..\\engine\\alphabit.cpp"
        ;   Label: LAB_0040d509
    MOV EBP,0xb6                        ; 0040d50e
    PUSH 0x5caff9                       ; 0040d513 | = "CAlphaBitmap::allocate - Out of memory"
    MOV dword ptr [0x01d046a0],EDI      ; 0040d518 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 0040d51e | DAT_01d046a4
    CALL FUN_004e4500                   ; 0040d524
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0040d529
    POP EBP                             ; 0040d52c
    POP EDI                             ; 0040d52d
    POP ESI                             ; 0040d52e
    POP EBX                             ; 0040d52f
    RET                                 ; 0040d530


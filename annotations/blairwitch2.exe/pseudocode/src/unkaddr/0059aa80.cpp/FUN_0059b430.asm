; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkaddr_0059aa80_cpp_FUN_0059b430(int *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005ef584
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 DAT_01c2a37c
;   undefined4 DAT_01c2a380
;
; Called Functions:
;   core_actor.cpp_FUN_0040d0c0
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900
;   engine_special.cpp_clearScreen_FUN_0055b1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059b430
        ;   Label: unkaddr_0059aa80.cpp_FUN_0059b430
    PUSH ESI                            ; 0059b431
    PUSH EDI                            ; 0059b432
    PUSH EBP                            ; 0059b433
    SUB ESP,0xc                         ; 0059b434
    MOV EDI,dword ptr [ESP + 0x20]      ; 0059b437
    CALL engine_special.cpp_clearScreen_FUN_0055b1f0 ; 0059b43b
        ;   XREF to: 0055b1f0 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0055b1f0()
    PUSH 0xffff                         ; 0059b440
    PUSH 0x0                            ; 0059b445
    PUSH 0x0                            ; 0059b447
    LEA EAX,[EDI + 0x4]                 ; 0059b449
    PUSH EAX                            ; 0059b44c
    XOR ESI,ESI                         ; 0059b44d
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900 ; 0059b44f
        ;   XREF to: 0040d900 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    MOV EDX,dword ptr [EDI + 0x1c]      ; 0059b454
    ADD ESP,0x10                        ; 0059b457
    TEST EDX,EDX                        ; 0059b45a
    JLE 0x0059b47b                      ; 0059b45c
        ;   XREF to: 0059b47b (CONDITIONAL_JUMP)  ; LAB_0059b47b
    LEA EBP,[EDI + 0x4c]                ; 0059b45e
    MOV EBX,EDI                         ; 0059b461
    IMUL ECX,ESI,0x2c                   ; 0059b463
        ;   Label: LAB_0059b463
    CMP dword ptr [EBX + 0x74],0x1      ; 0059b466
    JZ 0x0059b581                       ; 0059b46a
        ;   XREF to: 0059b581 (CONDITIONAL_JUMP)  ; LAB_0059b581
    INC ESI                             ; 0059b470
        ;   Label: LAB_0059b470
    MOV ECX,dword ptr [EDI + 0x1c]      ; 0059b471
    ADD EBX,0x2c                        ; 0059b474
    CMP ESI,ECX                         ; 0059b477
    JL 0x0059b463                       ; 0059b479
        ;   XREF to: 0059b463 (CONDITIONAL_JUMP)  ; LAB_0059b463
    CMP dword ptr [EDI + 0x30],0x0      ; 0059b47b
        ;   Label: LAB_0059b47b
    JNZ 0x0059b4a8                      ; 0059b47f
        ;   XREF to: 0059b4a8 (CONDITIONAL_JUMP)  ; LAB_0059b4a8
    MOV EAX,dword ptr [EDI + 0x40]      ; 0059b481
    MOV EDX,dword ptr [0x00616494]      ; 0059b484 | g_CGamePtr
    INC EAX                             ; 0059b48a
    FLD float ptr [EDX + 0x284]         ; 0059b48b
    MOV dword ptr [ESP + 0x8],EAX       ; 0059b491
    FMUL double ptr [0x005ef584]        ; 0059b495 | DAT_005ef584
    FILD dword ptr [ESP + 0x8]          ; 0059b49b
    FMULP                               ; 0059b49f
    LEA EAX,[EDI + 0x48]                ; 0059b4a1
    FADD float ptr [EAX]                ; 0059b4a4
    FSTP float ptr [EAX]                ; 0059b4a6
    CMP dword ptr [EDI + 0x30],0x2      ; 0059b4a8
        ;   Label: LAB_0059b4a8
    JNZ 0x0059b4d5                      ; 0059b4ac
        ;   XREF to: 0059b4d5 (CONDITIONAL_JUMP)  ; LAB_0059b4d5
    MOV EAX,dword ptr [EDI + 0x40]      ; 0059b4ae
    MOV EDX,dword ptr [0x00616494]      ; 0059b4b1 | g_CGamePtr
    INC EAX                             ; 0059b4b7
    FLD float ptr [EDX + 0x284]         ; 0059b4b8
    MOV dword ptr [ESP + 0x8],EAX       ; 0059b4be
    FMUL double ptr [0x005ef584]        ; 0059b4c2 | DAT_005ef584
    FILD dword ptr [ESP + 0x8]          ; 0059b4c8
    FMULP                               ; 0059b4cc
    LEA EAX,[EDI + 0x48]                ; 0059b4ce
    FSUBR float ptr [EAX]               ; 0059b4d1
    FSTP float ptr [EAX]                ; 0059b4d3
    PUSH dword ptr [EDI + 0x48]         ; 0059b4d5
        ;   Label: LAB_0059b4d5
    CALL core_actor.cpp_FUN_0040d0c0    ; 0059b4d8
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040d0c0()
    MOV dword ptr [ESP + 0xc],EAX       ; 0059b4dd
    FLD float ptr [ESP + 0xc]           ; 0059b4e1
    ADD ESP,0x4                         ; 0059b4e5
    PUSH 0x0                            ; 0059b4e8
    FSTP float ptr [EDI + 0x48]         ; 0059b4ea
    PUSH dword ptr [EDI + 0x48]         ; 0059b4ed
    PUSH 0x8                            ; 0059b4f0
    PUSH 0x1                            ; 0059b4f2
    MOV EAX,dword ptr [EDI]             ; 0059b4f4
    PUSH EDI                            ; 0059b4f6
    CALL dword ptr [EAX + 0x3c]         ; 0059b4f7
    ADD ESP,0x14                        ; 0059b4fa
    PUSH 0x1                            ; 0059b4fd
    PUSH dword ptr [EDI + 0x48]         ; 0059b4ff
    PUSH 0x4                            ; 0059b502
    PUSH 0x4                            ; 0059b504
    MOV EAX,dword ptr [EDI]             ; 0059b506
    PUSH EDI                            ; 0059b508
    CALL dword ptr [EAX + 0x3c]         ; 0059b509
    ADD ESP,0x14                        ; 0059b50c
    PUSH 0x0                            ; 0059b50f
    PUSH dword ptr [EDI + 0x48]         ; 0059b511
    PUSH 0x8                            ; 0059b514
    PUSH 0x17d                          ; 0059b516
    MOV EAX,dword ptr [EDI]             ; 0059b51b
    PUSH EDI                            ; 0059b51d
    CALL dword ptr [EAX + 0x3c]         ; 0059b51e
    ADD ESP,0x14                        ; 0059b521
    PUSH 0x1                            ; 0059b524
    PUSH dword ptr [EDI + 0x48]         ; 0059b526
    PUSH 0x4                            ; 0059b529
    PUSH 0x181                          ; 0059b52b
    MOV EAX,dword ptr [EDI]             ; 0059b530
    PUSH EDI                            ; 0059b532
    CALL dword ptr [EAX + 0x3c]         ; 0059b533
    MOV EDX,dword ptr [EDI + 0x18]      ; 0059b536
    ADD ESP,0x14                        ; 0059b539
    MOV EAX,[0x01c2a380]                ; 0059b53c | DAT_01c2a380
    MOV ECX,dword ptr [EDI + EDX*0x4 + 0x87c] ; 0059b541
    PUSH 0xffff                         ; 0059b548
    SUB EAX,ECX                         ; 0059b54d
    MOV EBX,dword ptr [EDI + EDX*0x4 + 0x86c] ; 0059b54f
    PUSH EAX                            ; 0059b556
    MOV EAX,[0x01c2a37c]                ; 0059b557 | DAT_01c2a37c
    SUB EAX,EBX                         ; 0059b55c
    PUSH EAX                            ; 0059b55e
    LEA EAX,[EDX*0x4 + 0x0]             ; 0059b55f
    ADD EAX,EDX                         ; 0059b566
    SHL EAX,0x2                         ; 0059b568
    ADD EAX,0x26677ec                   ; 0059b56b
    PUSH EAX                            ; 0059b570
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900 ; 0059b571
        ;   XREF to: 0040d900 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 0059b576
    ADD ESP,0xc                         ; 0059b579
    POP EBP                             ; 0059b57c
    POP EDI                             ; 0059b57d
    POP ESI                             ; 0059b57e
    POP EBX                             ; 0059b57f
    RET                                 ; 0059b580
    PUSH 0xffff                         ; 0059b581
        ;   Label: LAB_0059b581
    MOV EAX,dword ptr [EBX + 0x68]      ; 0059b586
    PUSH EAX                            ; 0059b589
    MOV EDX,dword ptr [EBX + 0x64]      ; 0059b58a
    PUSH EDX                            ; 0059b58d
    LEA EAX,[ECX + EBP*0x1]             ; 0059b58e
    PUSH EAX                            ; 0059b591
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900 ; 0059b592
        ;   XREF to: 0040d900 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 0059b597
    JMP 0x0059b470                      ; 0059b59a
        ;   XREF to: 0059b470 (UNCONDITIONAL_JUMP)  ; LAB_0059b470


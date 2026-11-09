; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004ee430(int param_1,int param_2,undefined4 param_3,int param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01d76c34
;   undefined4 DAT_01d76f60
;   undefined4 DAT_01d7a694
;   undefined4 DAT_01ed3198
;   undefined4 DAT_02cf60bc
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   engine_mini3d.cpp_FUN_004edcc0
;   engine_mini3d.cpp_FUN_004ede40
;   engine_mini3d.cpp_FUN_004eea30
;   engine_mini3d.cpp_FUN_004ef890
;   engine_mini3d.cpp_FUN_004f2430
;   engine_mini3d.cpp_FUN_004f2490
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ee430
        ;   Label: engine_mini3d.cpp_FUN_004ee430
    PUSH ESI                            ; 004ee431
    PUSH EDI                            ; 004ee432
    PUSH EBP                            ; 004ee433
    MOV ESI,dword ptr [ESP + 0x14]      ; 004ee434
    MOV EBX,dword ptr [ESP + 0x20]      ; 004ee438
    MOV EDX,dword ptr [0x01ed3198]      ; 004ee43c | DAT_01ed3198
    MOV ECX,dword ptr [0x01d76c34]      ; 004ee442 | DAT_01d76c34
    ADD EDX,EBX                         ; 004ee448
    MOV EBX,dword ptr [ESP + 0x18]      ; 004ee44a
    MOV dword ptr [0x01ed3198],EDX      ; 004ee44e | DAT_01ed3198
    ADD ECX,EBX                         ; 004ee454
    MOV EBX,dword ptr [0x01d7a694]      ; 004ee456 | DAT_01d7a694
    MOV dword ptr [0x01d76c34],ECX      ; 004ee45c | DAT_01d76c34
    TEST EBX,EBX                        ; 004ee462
    JNZ 0x004ee54c                      ; 004ee464
        ;   XREF to: 004ee54c (CONDITIONAL_JUMP)  ; LAB_004ee54c
    CMP dword ptr [0x02cf60bc],0x0      ; 004ee46a | DAT_02cf60bc
    JZ 0x004ee480                       ; 004ee471
        ;   XREF to: 004ee480 (CONDITIONAL_JUMP)  ; LAB_004ee480
    CMP dword ptr [0x01c6cee8],0x0      ; 004ee473 | DAT_01c6cee8
    JNZ 0x004ee563                      ; 004ee47a
        ;   XREF to: 004ee563 (CONDITIONAL_JUMP)  ; LAB_004ee563
    CALL engine_mini3d.cpp_FUN_004edcc0 ; 004ee480
        ;   XREF to: 004edcc0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004edcc0()
        ;   Label: LAB_004ee480
    CALL engine_mini3d.cpp_FUN_004f2430 ; 004ee485
        ;   XREF to: 004f2430 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f2430()
    CALL engine_mini3d.cpp_FUN_004ede40 ; 004ee48a
        ;   XREF to: 004ede40 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004ede40()
    MOV EAX,dword ptr [ESP + 0x18]      ; 004ee48f
    CMP EAX,0x2710                      ; 004ee493
    JLE 0x004ee4be                      ; 004ee498
        ;   XREF to: 004ee4be (CONDITIONAL_JUMP)  ; LAB_004ee4be
    PUSH EAX                            ; 004ee49a
    MOV EDX,0x5c80f8                    ; 004ee49b
    MOV ECX,0x7e6                       ; 004ee4a0
    PUSH 0x5c810d                       ; 004ee4a5
    MOV dword ptr [0x01d71de0],EDX      ; 004ee4aa | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004ee4b0 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004ee4b6
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 004ee4bb
    MOV EAX,dword ptr [ESP + 0x18]      ; 004ee4be
        ;   Label: LAB_004ee4be
    MOV EBX,dword ptr [0x01d76f60]      ; 004ee4c2 | DAT_01d76f60
    XOR EDI,EDI                         ; 004ee4c8
    XOR EBP,EBP                         ; 004ee4ca
    TEST EAX,EAX                        ; 004ee4cc
    JLE 0x004ee520                      ; 004ee4ce
        ;   XREF to: 004ee520 (CONDITIONAL_JUMP)  ; LAB_004ee520
    PUSH EBX                            ; 004ee4d0
        ;   Label: LAB_004ee4d0
    PUSH ESI                            ; 004ee4d1
    CALL engine_mini3d.cpp_FUN_004eea30 ; 004ee4d2
        ;   XREF to: 004eea30 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004eea30()
    ADD ESP,0x8                         ; 004ee4d7
    PUSH EBX                            ; 004ee4da
    ADD ESI,0x24                        ; 004ee4db
    INC EDI                             ; 004ee4de
    CALL engine_mini3d.cpp_FUN_004ef890 ; 004ee4df
        ;   XREF to: 004ef890 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004ef890()
    FLD float ptr [ESI + -0x8]          ; 004ee4e4
    ADD ESP,0x4                         ; 004ee4e7
    MOV ECX,dword ptr [EBX + 0x10]      ; 004ee4ea
    FSTP float ptr [EBX + 0x1c]         ; 004ee4ed
    ADD EBX,0x40                        ; 004ee4f0
    FLD float ptr [ESI + -0x4]          ; 004ee4f3
    MOV EAX,dword ptr [ESP + 0x18]      ; 004ee4f6
    OR EBP,ECX                          ; 004ee4fa
    FSTP float ptr [EBX + -0x20]        ; 004ee4fc
    MOV EDX,dword ptr [ESI + -0x18]     ; 004ee4ff
    MOV dword ptr [EBX + -0x1c],EDX     ; 004ee502
    MOV EDX,dword ptr [ESI + -0x14]     ; 004ee505
    MOV dword ptr [EBX + -0x18],EDX     ; 004ee508
    MOV EDX,dword ptr [ESI + -0x10]     ; 004ee50b
    MOV dword ptr [EBX + -0x14],EDX     ; 004ee50e
    MOV EDX,dword ptr [ESI + -0xc]      ; 004ee511
    MOV dword ptr [EBX + -0x10],EDX     ; 004ee514
    CMP EDI,EAX                         ; 004ee517
    JL 0x004ee4d0                       ; 004ee519
        ;   XREF to: 004ee4d0 (CONDITIONAL_JUMP)  ; LAB_004ee4d0
    LEA EAX,[EAX]                       ; 004ee51b
    MOV EBP,dword ptr [ESP + 0x20]      ; 004ee54c
        ;   Label: LAB_004ee54c
    PUSH EBP                            ; 004ee550
    MOV EAX,dword ptr [ESP + 0x20]      ; 004ee551
    PUSH EAX                            ; 004ee555
    MOV EDX,dword ptr [ESP + 0x20]      ; 004ee556
    PUSH EDX                            ; 004ee55a
    PUSH ESI                            ; 004ee55b
    CALL engine_mini3d.cpp_FUN_004f2490 ; 004ee55c
        ;   XREF to: 004f2490 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f2490()
    JMP 0x004ee544                      ; 004ee561
        ;   XREF to: 004ee544 (UNCONDITIONAL_JUMP)  ; LAB_004ee544
    MOV EDX,dword ptr [0x01c6e2b4]      ; 004ee563 | DAT_01c6e2b4
        ;   Label: LAB_004ee563
    PUSH EDX                            ; 004ee569
    MOV ECX,dword ptr [ESP + 0x24]      ; 004ee56a
    PUSH ECX                            ; 004ee56e
    MOV EBX,dword ptr [ESP + 0x24]      ; 004ee56f
    PUSH EBX                            ; 004ee573
    MOV EDI,dword ptr [ESP + 0x24]      ; 004ee574
    PUSH EDI                            ; 004ee578
    PUSH ESI                            ; 004ee579
    CALL dword ptr [0x02cf60bc]         ; 004ee57a | DAT_02cf60bc
    ADD ESP,0x14                        ; 004ee580
    POP EBP                             ; 004ee583
    POP EDI                             ; 004ee584
    POP ESI                             ; 004ee585
    POP EBX                             ; 004ee586
    RET                                 ; 004ee587


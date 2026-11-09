; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_winrun_cpp_FUN_005b44a0(undefined4 param_1)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005bfb40
;   engine_ini.cpp_FUN_004f4d70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b44a0
        ;   Label: unkafter_winrun.cpp_FUN_005b44a0
    PUSH ESI                            ; 005b44a1
    PUSH EDI                            ; 005b44a2
    PUSH EBP                            ; 005b44a3
    SUB ESP,0x110                       ; 005b44a4
    MOV EBP,dword ptr [ESP + 0x124]     ; 005b44aa
    XOR EDI,EDI                         ; 005b44b1
    MOV dword ptr [ESP + 0x108],EDI     ; 005b44b3
    MOV dword ptr [ESP + 0x100],EDI     ; 005b44ba
    MOV dword ptr [ESP + 0x104],EDI     ; 005b44c1
    PUSH EDI                            ; 005b44c8
        ;   Label: LAB_005b44c8
    PUSH 0x5f9edb                       ; 005b44c9
    LEA EAX,[ESP + 0x8]                 ; 005b44ce
    PUSH EAX                            ; 005b44d2
    CALL crt_unknown.c_FUN_005bfb40     ; 005b44d3
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0xc                         ; 005b44d8
    MOV EAX,dword ptr [ESP + 0x108]     ; 005b44db
    MOV ESI,dword ptr [EAX + 0x2c9cf14] ; 005b44e2
    PUSH ESI                            ; 005b44e8
    LEA EAX,[ESP + 0x4]                 ; 005b44e9
    PUSH EAX                            ; 005b44ed
    PUSH EBP                            ; 005b44ee
    CALL engine_ini.cpp_FUN_004f4d70    ; 005b44ef
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    ADD ESP,0xc                         ; 005b44f4
    MOV EAX,dword ptr [ESP + 0x108]     ; 005b44f7
    CMP dword ptr [EAX + 0x2c9cf14],0x0 ; 005b44fe
    JNZ 0x005b454e                      ; 005b4505
        ;   XREF to: 005b454e (CONDITIONAL_JUMP)  ; LAB_005b454e
    MOV ESI,dword ptr [ESP + 0x100]     ; 005b4507
        ;   Label: LAB_005b4507
    MOV EAX,dword ptr [ESP + 0x104]     ; 005b450e
    MOV EBX,dword ptr [ESP + 0x108]     ; 005b4515
    INC EDI                             ; 005b451c
    ADD ESI,0x30                        ; 005b451d
    ADD EAX,0x4                         ; 005b4520
    ADD EBX,0xac                        ; 005b4523
    MOV dword ptr [ESP + 0x100],ESI     ; 005b4529
    MOV dword ptr [ESP + 0x104],EAX     ; 005b4530
    MOV dword ptr [ESP + 0x108],EBX     ; 005b4537
    CMP EDI,0x4                         ; 005b453e
    JL 0x005b44c8                       ; 005b4541
        ;   XREF to: 005b44c8 (CONDITIONAL_JUMP)  ; LAB_005b44c8
    ADD ESP,0x110                       ; 005b4543
    POP EBP                             ; 005b4549
    POP EDI                             ; 005b454a
    POP ESI                             ; 005b454b
    POP EBX                             ; 005b454c
    RET                                 ; 005b454d
    PUSH EDI                            ; 005b454e
        ;   Label: LAB_005b454e
    PUSH 0x5f9eee                       ; 005b454f
    LEA EAX,[ESP + 0x8]                 ; 005b4554
    PUSH EAX                            ; 005b4558
    CALL crt_unknown.c_FUN_005bfb40     ; 005b4559
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0xc                         ; 005b455e
    MOV EAX,dword ptr [ESP + 0x104]     ; 005b4561
    MOV ECX,dword ptr [EAX + 0x2c9d1c4] ; 005b4568
    PUSH ECX                            ; 005b456e
    LEA EAX,[ESP + 0x4]                 ; 005b456f
    PUSH EAX                            ; 005b4573
    PUSH EBP                            ; 005b4574
    CALL engine_ini.cpp_FUN_004f4d70    ; 005b4575
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    ADD ESP,0xc                         ; 005b457a
    XOR EBX,EBX                         ; 005b457d
    MOV EAX,dword ptr [ESP + 0x108]     ; 005b457f
    MOV ESI,dword ptr [ESP + 0x100]     ; 005b4586
    MOV dword ptr [ESP + 0x10c],EAX     ; 005b458d
    MOV EAX,dword ptr [ESP + 0x10c]     ; 005b4594
        ;   Label: LAB_005b4594
    MOV EDX,dword ptr [EAX + 0x2c9cf14] ; 005b459b
    TEST EDX,EDX                        ; 005b45a1
    JNZ 0x005b45b4                      ; 005b45a3
        ;   XREF to: 005b45b4 (CONDITIONAL_JUMP)  ; LAB_005b45b4
    INC EBX                             ; 005b45a5
        ;   Label: LAB_005b45a5
    ADD ESI,0xc                         ; 005b45a6
    CMP EBX,0x4                         ; 005b45a9
    JGE 0x005b4507                      ; 005b45ac
        ;   XREF to: 005b4507 (CONDITIONAL_JUMP)  ; LAB_005b4507
    JMP 0x005b4594                      ; 005b45b2
        ;   XREF to: 005b4594 (UNCONDITIONAL_JUMP)  ; LAB_005b4594
    CMP EDX,0x4                         ; 005b45b4
        ;   Label: LAB_005b45b4
    JZ 0x005b45a5                       ; 005b45b7
        ;   XREF to: 005b45a5 (CONDITIONAL_JUMP)  ; LAB_005b45a5
    PUSH EBX                            ; 005b45b9
    PUSH EDI                            ; 005b45ba
    PUSH 0x5f9f05                       ; 005b45bb
    LEA EAX,[ESP + 0xc]                 ; 005b45c0
    PUSH EAX                            ; 005b45c4
    CALL crt_unknown.c_FUN_005bfb40     ; 005b45c5
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0x10                        ; 005b45ca
    MOV EAX,dword ptr [ESI + 0x2c9d1d4] ; 005b45cd
    PUSH EAX                            ; 005b45d3
    LEA EAX,[ESP + 0x4]                 ; 005b45d4
    PUSH EAX                            ; 005b45d8
    PUSH EBP                            ; 005b45d9
    CALL engine_ini.cpp_FUN_004f4d70    ; 005b45da
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    ADD ESP,0xc                         ; 005b45df
    PUSH EBX                            ; 005b45e2
    PUSH EDI                            ; 005b45e3
    PUSH 0x5f9f1f                       ; 005b45e4
    LEA EAX,[ESP + 0xc]                 ; 005b45e9
    PUSH EAX                            ; 005b45ed
    CALL crt_unknown.c_FUN_005bfb40     ; 005b45ee
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0x10                        ; 005b45f3
    MOV EDX,dword ptr [ESI + 0x2c9d1d8] ; 005b45f6
    PUSH EDX                            ; 005b45fc
    LEA EAX,[ESP + 0x4]                 ; 005b45fd
    PUSH EAX                            ; 005b4601
    PUSH EBP                            ; 005b4602
    CALL engine_ini.cpp_FUN_004f4d70    ; 005b4603
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    ADD ESP,0xc                         ; 005b4608
    PUSH EBX                            ; 005b460b
    PUSH EDI                            ; 005b460c
    PUSH 0x5f9f39                       ; 005b460d
    LEA EAX,[ESP + 0xc]                 ; 005b4612
    PUSH EAX                            ; 005b4616
    CALL crt_unknown.c_FUN_005bfb40     ; 005b4617
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0x10                        ; 005b461c
    MOV ECX,dword ptr [ESI + 0x2c9d1dc] ; 005b461f
    PUSH ECX                            ; 005b4625
    LEA EAX,[ESP + 0x4]                 ; 005b4626
    PUSH EAX                            ; 005b462a
    PUSH EBP                            ; 005b462b
    CALL engine_ini.cpp_FUN_004f4d70    ; 005b462c
        ;   XREF to: 004f4d70 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d70()
    ADD ESP,0xc                         ; 005b4631
    INC EBX                             ; 005b4634
    ADD ESI,0xc                         ; 005b4635
    CMP EBX,0x4                         ; 005b4638
    JGE 0x005b4507                      ; 005b463b
        ;   XREF to: 005b4507 (CONDITIONAL_JUMP)  ; LAB_005b4507
    JMP 0x005b4594                      ; 005b4641
        ;   XREF to: 005b4594 (UNCONDITIONAL_JUMP)  ; LAB_005b4594


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c8510(void)
;
;
; XREF[1]:
;   FUN_004d23d0 at 004d270d
;
; Referenced Globals:
;   TerminatedCString s_Nocturne_R_Debug_editor_00587b08
;   TerminatedCString s_s_1_Play_a_mission_00587b26
;   TerminatedCString s_Z_Display_memory_usage_i_00587b38
;   undefined4 DAT_005b6d50
;   undefined4 DAT_005b9354
;   undefined4 DAT_01c775ec
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_00565e20
;   engine_2d.c_clearInputAndWait_FUN_00403f50
;   engine_2d.c_drawText_FUN_00402600
;   FUN_0046fe60
;   FUN_004a4b50
;   shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004736d0
;   wincore_wddvmem.cpp_swapBuffers_FUN_00553910
;   wincore_windll.cpp_clearScreen_FUN_0052ee70
;   wincore_winrun.cpp_getNextKeypress_FUN_00558b00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c8510
        ;   Label: FUN_004c8510
    PUSH ESI                            ; 004c8511
    PUSH EDI                            ; 004c8512
    SUB ESP,0x100                       ; 004c8513
    XOR ESI,ESI                         ; 004c8519
    CALL wincore_windll.cpp_clearScreen_FUN_0052ee70 ; 004c851b
        ;   XREF to: 0052ee70 (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_clearScreen_FUN_0052ee70()
        ;   Label: LAB_004c851b
    PUSH ESI                            ; 004c8520
    PUSH ESI                            ; 004c8521
    PUSH 0x587b08                       ; 004c8522 | = "Nocturne(R) Debug/editor Menu"
    CALL engine_2d.c_drawText_FUN_00402600 ; 004c8527
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_drawText_FUN_00402600()
    ADD ESP,0xc                         ; 004c852c
    PUSH 0x16                           ; 004c852f
    PUSH ESI                            ; 004c8531
    PUSH 0x587b26                       ; 004c8532 | = "1. Play a mission"
    CALL engine_2d.c_drawText_FUN_00402600 ; 004c8537
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_drawText_FUN_00402600()
    ADD ESP,0xc                         ; 004c853c
    PUSH 0xbb                           ; 004c853f
    PUSH ESI                            ; 004c8544
    PUSH 0x587b38                       ; 004c8545 | = "Z. Display memory usage info"
    CALL engine_2d.c_drawText_FUN_00402600 ; 004c854a
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_drawText_FUN_00402600()
    ADD ESP,0xc                         ; 004c854f
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 004c8552
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
    CALL engine_2d.c_clearInputAndWait_FUN_00403f50 ; 004c8557
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_clearInputAndWait_FUN_00403f50()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_00558b00 ; 004c855c
        ;   XREF to: 00558b00 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getNextKeypress_FUN_00558b00()
    AND EAX,0xff                        ; 004c8561
    PUSH EAX                            ; 004c8566
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004c8567
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; undefined crt_ctype.c_toupper_FUN_00565e20()
    ADD ESP,0x4                         ; 004c856c
    MOV EBX,EAX                         ; 004c856f
    CMP EAX,0x34                        ; 004c8571
    JNC 0x004c85c7                      ; 004c8574
        ;   XREF to: 004c85c7 (CONDITIONAL_JUMP)  ; LAB_004c85c7
    CMP EAX,0x31                        ; 004c8576
    JNC 0x004c85d7                      ; 004c8579
        ;   XREF to: 004c85d7 (CONDITIONAL_JUMP)  ; LAB_004c85d7
    CMP EBX,0x1b                        ; 004c857b
        ;   Label: LAB_004c857b
    JNZ 0x004c851b                      ; 004c857e
        ;   XREF to: 004c851b (CONDITIONAL_JUMP)  ; LAB_004c851b
    CALL engine_2d.c_clearInputAndWait_FUN_00403f50 ; 004c8580
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_clearInputAndWait_FUN_00403f50()
    ADD ESP,0x100                       ; 004c8585
    POP EDI                             ; 004c858b
    POP ESI                             ; 004c858c
    POP EBX                             ; 004c858d
    RET                                 ; 004c858e
    PUSH ESI                            ; 004c858f
        ;   Label: LAB_004c858f
    MOV EDI,dword ptr [0x005b9354]      ; 004c8590 | DAT_005b9354
    PUSH EDI                            ; 004c8596 | DAT_01c775ec
    CALL FUN_004a4b50                   ; 004c8597
        ;   XREF to: 004a4b50 (UNCONDITIONAL_CALL)  ; undefined FUN_004a4b50()
    ADD ESP,0x8                         ; 004c859c
    JMP 0x004c857b                      ; 004c859f
        ;   XREF to: 004c857b (UNCONDITIONAL_JUMP)  ; LAB_004c857b
    MOV EAX,ESP                         ; 004c85a1
        ;   Label: LAB_004c85a1
    PUSH EAX                            ; 004c85a3
    MOV EDX,dword ptr [0x005b6d50]      ; 004c85a4 | DAT_005b6d50
    PUSH EDX                            ; 004c85aa
    CALL shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004736d0 ; 004c85ab
        ;   XREF to: 004736d0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004736d0()
    ADD ESP,0x8                         ; 004c85b0
    MOV EAX,ESP                         ; 004c85b3
    PUSH EAX                            ; 004c85b5
    MOV ECX,dword ptr [0x005b6d50]      ; 004c85b6 | DAT_005b6d50
    PUSH ECX                            ; 004c85bc
    CALL FUN_0046fe60                   ; 004c85bd
        ;   XREF to: 0046fe60 (UNCONDITIONAL_CALL)  ; undefined FUN_0046fe60()
    ADD ESP,0x8                         ; 004c85c2
    JMP 0x004c857b                      ; 004c85c5
        ;   XREF to: 004c857b (UNCONDITIONAL_JUMP)  ; LAB_004c857b
    JBE 0x004c857b                      ; 004c85c7
        ;   XREF to: 004c857b (CONDITIONAL_JUMP)  ; LAB_004c857b
        ;   Label: LAB_004c85c7
    CMP EAX,0x41                        ; 004c85c9
    JC 0x004c857b                       ; 004c85cc
        ;   XREF to: 004c857b (CONDITIONAL_JUMP)  ; LAB_004c857b
    JBE 0x004c857b                      ; 004c85ce
        ;   XREF to: 004c857b (CONDITIONAL_JUMP)  ; LAB_004c857b
    CMP EAX,0x5a                        ; 004c85d0
    JZ 0x004c85a1                       ; 004c85d3
        ;   XREF to: 004c85a1 (CONDITIONAL_JUMP)  ; LAB_004c85a1
    JMP 0x004c857b                      ; 004c85d5
        ;   XREF to: 004c857b (UNCONDITIONAL_JUMP)  ; LAB_004c857b
    JBE 0x004c858f                      ; 004c85d7
        ;   XREF to: 004c858f (CONDITIONAL_JUMP)  ; LAB_004c858f
        ;   Label: LAB_004c85d7
    JMP 0x004c857b                      ; 004c85d9
        ;   XREF to: 004c857b (UNCONDITIONAL_JUMP)  ; LAB_004c857b


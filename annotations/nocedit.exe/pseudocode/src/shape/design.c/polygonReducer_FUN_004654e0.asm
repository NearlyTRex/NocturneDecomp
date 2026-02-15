; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_polygonReducer_FUN_004654e0(void)
;
; Local Variables:
; undefined1       Stack[-0x64]:1  local_64
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_showShapeEditorMenu_FUN_0046f290 at 0046f6dc
;
; Referenced Globals:
;   TerminatedCString s_Enter_1_for_full_pass_or_0061c4d9
;
; Called Functions:
;   crt_stdlib.c_atoi_FUN_005ffef0
;   engine_2d.c_getInputWithPrompt_FUN_004032c0
;   shape_design.c_configureFullPassPolygonReduction_FUN_00465810
;   shape_design.c_configureSinglePassPolygonReduction_FUN_00465560
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004654e0
        ;   Label: shape_design.c_polygonReducer_FUN_004654e0
    PUSH ESI                            ; 004654e1
    PUSH EDI                            ; 004654e2
    PUSH EBP                            ; 004654e3
    MOV EBP,ESP                         ; 004654e4
    SUB ESP,0x54                        ; 004654e6
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 004654ec
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    MOV EAX,0x61c4d9                    ; 004654f1 | = "Enter 1 for full pass or 2 for single..."
    PUSH EAX                            ; 004654f6 | = "Enter 1 for full pass or 2 for single..."
    PUSH 0x0                            ; 004654f7
    PUSH 0x0                            ; 004654f9
    PUSH 0x14                           ; 004654fb
    LEA EAX,[EBP + -0x54]               ; 004654fd
    PUSH EAX                            ; 00465500
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 00465501
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 00465506
    CMP EAX,0x1b                        ; 00465509
    JNZ 0x00465510                      ; 0046550c
        ;   XREF to: 00465510 (CONDITIONAL_JUMP)  ; LAB_00465510
    JMP 0x00465559                      ; 0046550e
        ;   XREF to: 00465559 (UNCONDITIONAL_JUMP)  ; LAB_00465559
    MOV dword ptr [EBP + -0x4],0x1      ; 00465510
        ;   Label: LAB_00465510
    LEA EDI,[EBP + -0x54]               ; 00465517
    SUB ECX,ECX                         ; 0046551a
    DEC ECX                             ; 0046551c
    XOR EAX,EAX                         ; 0046551d
    SCASB.REPNE ES:EDI                  ; 0046551f
    NOT ECX                             ; 00465521
    DEC ECX                             ; 00465523
    TEST ECX,ECX                        ; 00465524
    JZ 0x00465537                       ; 00465526
        ;   XREF to: 00465537 (CONDITIONAL_JUMP)  ; LAB_00465537
    LEA EAX,[EBP + -0x54]               ; 00465528
    PUSH EAX                            ; 0046552b
    CALL crt_stdlib.c_atoi_FUN_005ffef0 ; 0046552c
        ;   XREF to: 005ffef0 (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_atoi_FUN_005ffef0(char * string_ptr)
    ADD ESP,0x4                         ; 00465531
    MOV dword ptr [EBP + -0x4],EAX      ; 00465534
    CMP dword ptr [EBP + -0x4],0x1      ; 00465537
        ;   Label: LAB_00465537
    JNZ 0x00465549                      ; 0046553b
        ;   XREF to: 00465549 (CONDITIONAL_JUMP)  ; LAB_00465549
    PUSH 0x1                            ; 0046553d
    CALL shape_design.c_configureFullPassPolygonReduction_FUN_00465810 ; 0046553f
        ;   XREF to: 00465810 (UNCONDITIONAL_CALL)  ; void shape_design.c_configureFullPassPolygonReduction_FUN_00465810(int ui_mode)
    ADD ESP,0x4                         ; 00465544
    JMP 0x00465559                      ; 00465547
        ;   XREF to: 00465559 (UNCONDITIONAL_JUMP)  ; LAB_00465559
    CMP dword ptr [EBP + -0x4],0x2      ; 00465549
        ;   Label: LAB_00465549
    JNZ 0x00465559                      ; 0046554d
        ;   XREF to: 00465559 (CONDITIONAL_JUMP)  ; LAB_00465559
    PUSH 0x1                            ; 0046554f
    CALL shape_design.c_configureSinglePassPolygonReduction_FUN_00465560 ; 00465551
        ;   XREF to: 00465560 (UNCONDITIONAL_CALL)  ; void shape_design.c_configureSinglePassPolygonReduction_FUN_00465560(int ui_mode)
    ADD ESP,0x4                         ; 00465556
    MOV ESP,EBP                         ; 00465559
        ;   Label: LAB_00465559
    POP EBP                             ; 0046555b
    POP EDI                             ; 0046555c
    POP ESI                             ; 0046555d
    POP EBX                             ; 0046555e
    RET                                 ; 0046555f


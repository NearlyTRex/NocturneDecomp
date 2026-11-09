; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_game_cpp_checkCheatCode_FUN_004d24c0(char *cheat_string)
;
; Parameters:
; char *           Stack[0x4]:4   cheat_string
;
; Referenced Globals:
;   undefined4 DAT_01cd0c68
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_005c12b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d24c0
        ;   Label: core_game.cpp_checkCheatCode_FUN_004d24c0
    PUSH ESI                            ; 004d24c1
    PUSH EDI                            ; 004d24c2
    PUSH EBP                            ; 004d24c3
    SUB ESP,0x8                         ; 004d24c4
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004d24c7
    MOV EDI,ESI                         ; 004d24cb
    SUB ECX,ECX                         ; 004d24cd
    DEC ECX                             ; 004d24cf
    XOR EAX,EAX                         ; 004d24d0
    SCASB.REPNE ES:EDI                  ; 004d24d2
    NOT ECX                             ; 004d24d4
    DEC ECX                             ; 004d24d6
    XOR EBP,EBP                         ; 004d24d7
    MOV dword ptr [ESP],ECX             ; 004d24d9
    TEST ECX,ECX                        ; 004d24dc
    JLE 0x004d250f                      ; 004d24de
        ;   XREF to: 004d250f (CONDITIONAL_JUMP)  ; LAB_004d250f
    MOV EAX,ECX                         ; 004d24e0
    NEG EAX                             ; 004d24e2
    MOV EBX,ECX                         ; 004d24e4
    ADD ECX,EAX                         ; 004d24e6
    MOV dword ptr [ESP + 0x4],ECX       ; 004d24e8
    XOR EAX,EAX                         ; 004d24ec
        ;   Label: LAB_004d24ec
    MOV AL,byte ptr [ESI]               ; 004d24ee
    PUSH EAX                            ; 004d24f0
    MOVZX EDI,byte ptr [EBX + 0x1cd0c67] ; 004d24f1
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004d24f8
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004d24fd
    CMP EDI,EAX                         ; 004d2500
    JNZ 0x004d2505                      ; 004d2502
        ;   XREF to: 004d2505 (CONDITIONAL_JUMP)  ; LAB_004d2505
    INC EBP                             ; 004d2504
    MOV EDX,dword ptr [ESP + 0x4]       ; 004d2505
        ;   Label: LAB_004d2505
    DEC EBX                             ; 004d2509
    INC ESI                             ; 004d250a
    CMP EBX,EDX                         ; 004d250b
    JG 0x004d24ec                       ; 004d250d
        ;   XREF to: 004d24ec (CONDITIONAL_JUMP)  ; LAB_004d24ec
    CMP EBP,dword ptr [ESP]             ; 004d250f
        ;   Label: LAB_004d250f
    JNZ 0x004d2529                      ; 004d2512
        ;   XREF to: 004d2529 (CONDITIONAL_JUMP)  ; LAB_004d2529
    XOR AH,AH                           ; 004d2514
    MOV byte ptr [0x01cd0c68],AH        ; 004d2516 | DAT_01cd0c68
    MOV EAX,0x1                         ; 004d251c
    ADD ESP,0x8                         ; 004d2521
    POP EBP                             ; 004d2524
    POP EDI                             ; 004d2525
    POP ESI                             ; 004d2526
    POP EBX                             ; 004d2527
    RET                                 ; 004d2528
    XOR EAX,EAX                         ; 004d2529
        ;   Label: LAB_004d2529
    ADD ESP,0x8                         ; 004d252b
    POP EBP                             ; 004d252e
    POP EDI                             ; 004d252f
    POP ESI                             ; 004d2530
    POP EBX                             ; 004d2531
    RET                                 ; 004d2532


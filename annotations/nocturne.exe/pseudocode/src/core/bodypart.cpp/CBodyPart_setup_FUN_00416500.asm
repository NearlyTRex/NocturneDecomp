; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bodypart_cpp_CBodyPart_setup_FUN_00416500(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00409fc0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00416500
        ;   Label: core_bodypart.cpp_CBodyPart_setup_FUN_00416500
    PUSH EDI                            ; 00416501
    PUSH EBP                            ; 00416502
    MOV EDI,dword ptr [ESP + 0x10]      ; 00416503
    PUSH EDI                            ; 00416507
    CALL core_actor.cpp_CDemonActor_setup_FUN_00409fc0 ; 00416508
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_setup_FUN_00409fc0()
    XOR EBX,EBX                         ; 0041650d
    MOV EDX,dword ptr [EDI + 0x184]     ; 0041650f
    ADD ESP,0x4                         ; 00416515
    TEST EDX,EDX                        ; 00416518
    JLE 0x00416542                      ; 0041651a
        ;   XREF to: 00416542 (CONDITIONAL_JUMP)  ; LAB_00416542
    PUSH ESI                            ; 0041651c
    LEA ESI,[EDI + 0x188]               ; 0041651d
    PUSH ESI                            ; 00416523
        ;   Label: LAB_00416523
    MOV ECX,dword ptr [0x005ae704]      ; 00416524 | DAT_005ae704
    PUSH ECX                            ; 0041652a | DAT_01b4d738
    INC EBX                             ; 0041652b
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 0041652c
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0()
    ADD ESI,0x18                        ; 00416531
    MOV EBP,dword ptr [EDI + 0x184]     ; 00416534
    ADD ESP,0x8                         ; 0041653a
    CMP EBX,EBP                         ; 0041653d
    JL 0x00416523                       ; 0041653f
        ;   XREF to: 00416523 (CONDITIONAL_JUMP)  ; LAB_00416523
    POP ESI                             ; 00416541
    CMP dword ptr [EDI + 0xc9c],0x0     ; 00416542
        ;   Label: LAB_00416542
    JNZ 0x00416558                      ; 00416549
        ;   XREF to: 00416558 (CONDITIONAL_JUMP)  ; LAB_00416558
    CMP dword ptr [EDI + 0x744],0x0     ; 0041654b
    JNZ 0x00416558                      ; 00416552
        ;   XREF to: 00416558 (CONDITIONAL_JUMP)  ; LAB_00416558
    POP EBP                             ; 00416554
    POP EDI                             ; 00416555
    POP EBX                             ; 00416556
    RET                                 ; 00416557
    MOV dword ptr [EDI + 0xfc],0x1      ; 00416558
        ;   Label: LAB_00416558
    POP EBP                             ; 00416562
    POP EDI                             ; 00416563
    POP EBX                             ; 00416564
    RET                                 ; 00416565


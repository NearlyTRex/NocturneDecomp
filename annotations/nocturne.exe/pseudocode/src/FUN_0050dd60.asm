; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0050dd60(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_005b9354
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01c775ec
;   undefined4 DAT_01c777dc
;   undefined4 DAT_01c777e0
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;   engine_drender.cpp_CDemonRenderer_renderTriangleBatch_FUN_004613d0
;   FUN_0050d640
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050dd60
        ;   Label: FUN_0050dd60
    PUSH EBP                            ; 0050dd61
    MOV EAX,[0x005b9354]                ; 0050dd62 | DAT_005b9354 | DAT_01c775ec
    CMP dword ptr [EAX + 0x1f0],0x0     ; 0050dd67 | DAT_01c777dc
    JNZ 0x0050ddaa                      ; 0050dd6e
        ;   XREF to: 0050ddaa (CONDITIONAL_JUMP)  ; LAB_0050ddaa
    CMP dword ptr [EAX + 0x1f4],0x0     ; 0050dd70 | DAT_01c777e0
    JZ 0x0050dd8c                       ; 0050dd77
        ;   XREF to: 0050dd8c (CONDITIONAL_JUMP)  ; LAB_0050dd8c
    MOV EBX,dword ptr [0x005ae704]      ; 0050dd79 | DAT_005ae704
    PUSH EBX                            ; 0050dd7f | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 0050dd80
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090()
    ADD ESP,0x4                         ; 0050dd85
    TEST EAX,EAX                        ; 0050dd88
    JZ 0x0050ddad                       ; 0050dd8a
        ;   XREF to: 0050ddad (CONDITIONAL_JUMP)  ; LAB_0050ddad
    MOV EAX,dword ptr [ESP + 0x18]      ; 0050dd8c
        ;   Label: LAB_0050dd8c
    PUSH EAX                            ; 0050dd90
    MOV EDX,dword ptr [ESP + 0x18]      ; 0050dd91
    PUSH EDX                            ; 0050dd95
    MOV ECX,dword ptr [ESP + 0x18]      ; 0050dd96
    PUSH ECX                            ; 0050dd9a
    MOV EBX,dword ptr [0x005ae704]      ; 0050dd9b | DAT_005ae704
    PUSH EBX                            ; 0050dda1 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_renderTriangleBatch_FUN_004613d0 ; 0050dda2
        ;   XREF to: 004613d0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_renderTriangleBatch_FUN_004613d0()
    ADD ESP,0x10                        ; 0050dda7
    POP EBP                             ; 0050ddaa
        ;   Label: LAB_0050ddaa
    POP EBX                             ; 0050ddab
    RET                                 ; 0050ddac
    PUSH EDI                            ; 0050ddad
        ;   Label: LAB_0050ddad
    PUSH ESI                            ; 0050ddae
    PUSH 0xffff                         ; 0050ddaf
    MOV ESI,dword ptr [ESP + 0x20]      ; 0050ddb4
    PUSH ESI                            ; 0050ddb8
    MOV EDI,dword ptr [ESP + 0x20]      ; 0050ddb9
    PUSH EDI                            ; 0050ddbd
    MOV EBP,dword ptr [ESP + 0x20]      ; 0050ddbe
    PUSH EBP                            ; 0050ddc2
    CALL FUN_0050d640                   ; 0050ddc3
        ;   XREF to: 0050d640 (UNCONDITIONAL_CALL)  ; undefined FUN_0050d640()
    ADD ESP,0x10                        ; 0050ddc8
    POP ESI                             ; 0050ddcb
    POP EDI                             ; 0050ddcc
    POP EBP                             ; 0050ddcd
    POP EBX                             ; 0050ddce
    RET                                 ; 0050ddcf


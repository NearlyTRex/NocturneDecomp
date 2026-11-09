; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004ee51e(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d76f60
;   undefined4 DAT_01d7a698
;
; Called Functions:
;   engine_mini3d.cpp_FUN_004f12b0
;   engine_mini3d.cpp_FUN_004f2e30
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 004ee51e
        ;   Label: engine_mini3d.cpp_FUN_004ee51e
    CMP dword ptr [0x01d7a698],0x0      ; 004ee520 | DAT_01d7a698
        ;   Label: LAB_004ee520
    JZ 0x004ee588                       ; 004ee527
        ;   XREF to: 004ee588 (CONDITIONAL_JUMP)  ; LAB_004ee588
    MOV EBP,dword ptr [ESP + 0x20]      ; 004ee529
    PUSH EBP                            ; 004ee52d
    MOV EAX,dword ptr [ESP + 0x20]      ; 004ee52e
    PUSH EAX                            ; 004ee532
    MOV EDX,dword ptr [ESP + 0x20]      ; 004ee533
    PUSH EDX                            ; 004ee537
    MOV ECX,dword ptr [0x01d76f60]      ; 004ee538 | DAT_01d76f60
    PUSH ECX                            ; 004ee53e
    CALL engine_mini3d.cpp_FUN_004f2e30 ; 004ee53f
        ;   XREF to: 004f2e30 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f2e30()
    ADD ESP,0x10                        ; 004ee544
        ;   Label: LAB_004ee544
    POP EBP                             ; 004ee547
    POP EDI                             ; 004ee548
    POP ESI                             ; 004ee549
    POP EBX                             ; 004ee54a
    RET                                 ; 004ee54b
    PUSH EBP                            ; 004ee588
        ;   Label: LAB_004ee588
    MOV ECX,dword ptr [ESP + 0x24]      ; 004ee589
    PUSH ECX                            ; 004ee58d
    MOV EBX,dword ptr [ESP + 0x24]      ; 004ee58e
    PUSH EBX                            ; 004ee592
    MOV ESI,dword ptr [ESP + 0x24]      ; 004ee593
    PUSH ESI                            ; 004ee597
    MOV EDI,dword ptr [0x01d76f60]      ; 004ee598 | DAT_01d76f60
    PUSH EDI                            ; 004ee59e
    CALL engine_mini3d.cpp_FUN_004f12b0 ; 004ee59f
        ;   XREF to: 004f12b0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f12b0()
    ADD ESP,0x14                        ; 004ee5a4
    POP EBP                             ; 004ee5a7
    POP EDI                             ; 004ee5a8
    POP ESI                             ; 004ee5a9
    POP EBX                             ; 004ee5aa
    RET                                 ; 004ee5ab


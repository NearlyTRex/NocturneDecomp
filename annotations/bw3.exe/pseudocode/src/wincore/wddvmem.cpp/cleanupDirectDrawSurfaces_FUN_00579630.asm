; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_wddvmem_cpp_cleanupDirectDrawSurfaces_FUN_00579630(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02d0bce4
;   undefined4 DAT_02d0bce8
;   undefined4 DAT_02d0bcec
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00579630
        ;   Label: wincore_wddvmem.cpp_cleanupDirectDrawSurfaces_FUN_00579630
    PUSH EDI                            ; 00579631
    PUSH EBP                            ; 00579632
    MOV EDX,dword ptr [0x02d0bcec]      ; 00579633 | DAT_02d0bcec
    TEST EDX,EDX                        ; 00579639
    JNZ 0x00579665                      ; 0057963b
        ;   XREF to: 00579665 (CONDITIONAL_JUMP)  ; LAB_00579665
    MOV EBX,dword ptr [0x02d0bce8]      ; 0057963d | DAT_02d0bce8
        ;   Label: LAB_0057963d
    TEST EBX,EBX                        ; 00579643
    JZ 0x00579657                       ; 00579645
        ;   XREF to: 00579657 (CONDITIONAL_JUMP)  ; LAB_00579657
    PUSH ESI                            ; 00579647
    PUSH EBX                            ; 00579648
    MOV EDX,dword ptr [EBX]             ; 00579649
    XOR ESI,ESI                         ; 0057964b
    CALL dword ptr [EDX + 0x8]          ; 0057964d
    MOV dword ptr [0x02d0bce8],ESI      ; 00579650 | DAT_02d0bce8
    POP ESI                             ; 00579656
    MOV EDI,dword ptr [0x02d0bce4]      ; 00579657 | DAT_02d0bce4
        ;   Label: LAB_00579657
    TEST EDI,EDI                        ; 0057965d
    JNZ 0x00579677                      ; 0057965f
        ;   XREF to: 00579677 (CONDITIONAL_JUMP)  ; LAB_00579677
    POP EBP                             ; 00579661
    POP EDI                             ; 00579662
    POP EBX                             ; 00579663
    RET                                 ; 00579664
    MOV EAX,EDX                         ; 00579665
        ;   Label: LAB_00579665
    PUSH EAX                            ; 00579667
    MOV EDX,dword ptr [EDX]             ; 00579668
    CALL dword ptr [EDX + 0x8]          ; 0057966a
    XOR ECX,ECX                         ; 0057966d
    MOV dword ptr [0x02d0bcec],ECX      ; 0057966f | DAT_02d0bcec
    JMP 0x0057963d                      ; 00579675
        ;   XREF to: 0057963d (UNCONDITIONAL_JUMP)  ; LAB_0057963d
    PUSH EDI                            ; 00579677
        ;   Label: LAB_00579677
    MOV EDX,dword ptr [EDI]             ; 00579678
    XOR EBP,EBP                         ; 0057967a
    CALL dword ptr [EDX + 0x8]          ; 0057967c
    MOV dword ptr [0x02d0bce4],EBP      ; 0057967f | DAT_02d0bce4
    POP EBP                             ; 00579685
    POP EDI                             ; 00579686
    POP EBX                             ; 00579687
    RET                                 ; 00579688


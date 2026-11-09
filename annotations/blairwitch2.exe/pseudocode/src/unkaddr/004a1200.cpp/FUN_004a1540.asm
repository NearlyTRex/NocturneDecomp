; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkaddr_004a1200_cpp_FUN_004a1540(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00616040
;   undefined4 DAT_01caf488
;   undefined4 DAT_01caf4a0
;   undefined4 DAT_01caf568
;
; *****************************************************************************

section .text

    MOV ECX,0xffffffff                  ; 004a1540
        ;   Label: unkaddr_004a1200.cpp_FUN_004a1540
    XOR AH,AH                           ; 004a1545
    XOR EDX,EDX                         ; 004a1547
    MOV byte ptr [0x01caf4a0],AH        ; 004a1549 | DAT_01caf4a0
    MOV dword ptr [0x00616040],ECX      ; 004a154f | DAT_00616040
    MOV dword ptr [0x01caf568],EDX      ; 004a1555 | DAT_01caf568
    MOV dword ptr [0x01caf488],EDX      ; 004a155b | DAT_01caf488
    RET                                 ; 004a1561


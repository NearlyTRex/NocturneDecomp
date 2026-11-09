; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f44d0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   engine_mini3d.cpp_FUN_004f8ffe at 004f90b9
;
; Referenced Globals:
;   undefined4 DAT_01c37788
;   undefined4 DAT_01c38b54
;   undefined4 DAT_0264bcb0
;
; Called Functions:
;   engine_mini3d.cpp_FUN_004f3740
;   engine_mini3d.cpp_FUN_004f7da0
;
; *****************************************************************************

section .text

    CALL engine_mini3d.cpp_FUN_004f3740 ; 004f44d0
        ;   XREF to: 004f3740 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3740()
        ;   Label: engine_mini3d.cpp_FUN_004f44d0
    CALL engine_mini3d.cpp_FUN_004f7da0 ; 004f44d5
        ;   XREF to: 004f7da0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7da0()
    CMP dword ptr [0x0264bcb0],0x0      ; 004f44da | DAT_0264bcb0
    JZ 0x004f44ec                       ; 004f44e1
        ;   XREF to: 004f44ec (CONDITIONAL_JUMP)  ; LAB_004f44ec
    CMP dword ptr [0x01c37788],0x0      ; 004f44e3 | DAT_01c37788
    JNZ 0x004f44ed                      ; 004f44ea
        ;   XREF to: 004f44ed (CONDITIONAL_JUMP)  ; LAB_004f44ed
    RET                                 ; 004f44ec
        ;   Label: LAB_004f44ec
    PUSH EDI                            ; 004f44ed
        ;   Label: LAB_004f44ed
    PUSH ESI                            ; 004f44ee
    PUSH EBX                            ; 004f44ef
    MOV EBX,dword ptr [0x01c38b54]      ; 004f44f0 | DAT_01c38b54
    PUSH EBX                            ; 004f44f6
    MOV ESI,dword ptr [ESP + 0x18]      ; 004f44f7
    PUSH ESI                            ; 004f44fb
    MOV EDI,dword ptr [ESP + 0x18]      ; 004f44fc
    PUSH EDI                            ; 004f4500
    CALL dword ptr [0x0264bcb0]         ; 004f4501 | DAT_0264bcb0
    ADD ESP,0xc                         ; 004f4507
    POP EBX                             ; 004f450a
    POP ESI                             ; 004f450b
    POP EDI                             ; 004f450c
    RET                                 ; 004f450d


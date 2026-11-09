; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f3ff0(void)
;
;
; XREF[1]:
;   engine_mini3d.cpp_FUN_004f3ef0 at 004f3f9c
;
; Referenced Globals:
;   undefined4 DAT_01d09b7c
;   undefined4 DAT_01d0d2b8
;
; Called Functions:
;   engine_mini3d.cpp_FUN_004f6d00
;   engine_mini3d.cpp_FUN_004f8750
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01d0d2b8],0x0      ; 004f3ff0 | DAT_01d0d2b8
        ;   Label: engine_mini3d.cpp_FUN_004f3ff0
    JZ 0x004f4073                       ; 004f3ff7
        ;   XREF to: 004f4073 (CONDITIONAL_JUMP)  ; LAB_004f4073
    MOV EAX,dword ptr [ESP + 0x20]      ; 004f3ff9
    PUSH EAX                            ; 004f3ffd
    MOV EDX,dword ptr [ESP + 0x20]      ; 004f3ffe
    PUSH EDX                            ; 004f4002
    MOV ECX,dword ptr [ESP + 0x20]      ; 004f4003
    PUSH ECX                            ; 004f4007
    MOV EBX,dword ptr [0x01d09b7c]      ; 004f4008 | DAT_01d09b7c
    PUSH EBX                            ; 004f400e
    CALL engine_mini3d.cpp_FUN_004f8750 ; 004f400f
        ;   XREF to: 004f8750 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8750()
    ADD ESP,0x10                        ; 004f4014
        ;   Label: LAB_004f4014
    POP EBP                             ; 004f4017
    POP EDI                             ; 004f4018
    POP ESI                             ; 004f4019
    POP EBX                             ; 004f401a
    RET                                 ; 004f401b
    PUSH EBP                            ; 004f4073
        ;   Label: LAB_004f4073
    MOV EBX,dword ptr [ESP + 0x24]      ; 004f4074
    PUSH EBX                            ; 004f4078
    MOV ESI,dword ptr [ESP + 0x24]      ; 004f4079
    PUSH ESI                            ; 004f407d
    MOV EDI,dword ptr [ESP + 0x24]      ; 004f407e
    PUSH EDI                            ; 004f4082
    MOV EBP,dword ptr [0x01d09b7c]      ; 004f4083 | DAT_01d09b7c
    PUSH EBP                            ; 004f4089
    CALL engine_mini3d.cpp_FUN_004f6d00 ; 004f408a
        ;   XREF to: 004f6d00 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f6d00()
    ADD ESP,0x14                        ; 004f408f
    POP EBP                             ; 004f4092
    POP EDI                             ; 004f4093
    POP ESI                             ; 004f4094
    POP EBX                             ; 004f4095
    RET                                 ; 004f4096


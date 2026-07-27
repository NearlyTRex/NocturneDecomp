; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl engine_special_cpp_restoreZBuffer_FUN_00532c90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_00440710 at 00440978
;   core_dcamera.cpp_CDemonCamera_restoreZBufferRect_FUN_00440610 at 004406fc
;
; Referenced Globals:
;   undefined4 DAT_01c02594
;   undefined4 DAT_02dc9dec
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00532c90
        ;   Label: engine_special.cpp_restoreZBuffer_FUN_00532c90
    CMP dword ptr [0x01c02594],0x0      ; 00532c91 | DAT_01c02594
    JNZ 0x00532c9e                      ; 00532c98
        ;   XREF to: 00532c9e (CONDITIONAL_JUMP)  ; LAB_00532c9e
    XOR EAX,EAX                         ; 00532c9a
    POP EBP                             ; 00532c9c
    RET                                 ; 00532c9d
    PUSH EDI                            ; 00532c9e
        ;   Label: LAB_00532c9e
    PUSH ESI                            ; 00532c9f
    PUSH EBX                            ; 00532ca0
    MOV ECX,dword ptr [ESP + 0x24]      ; 00532ca1
    PUSH ECX                            ; 00532ca5
    MOV EBX,dword ptr [ESP + 0x24]      ; 00532ca6
    PUSH EBX                            ; 00532caa
    MOV ESI,dword ptr [ESP + 0x24]      ; 00532cab
    PUSH ESI                            ; 00532caf
    MOV EDI,dword ptr [ESP + 0x24]      ; 00532cb0
    PUSH EDI                            ; 00532cb4
    MOV EBP,dword ptr [ESP + 0x24]      ; 00532cb5
    PUSH EBP                            ; 00532cb9
    CALL dword ptr [0x02dc9dec]         ; 00532cba | DAT_02dc9dec
    ADD ESP,0x14                        ; 00532cc0
    POP EBX                             ; 00532cc3
    POP ESI                             ; 00532cc4
    POP EDI                             ; 00532cc5
    POP EBP                             ; 00532cc6
    RET                                 ; 00532cc7


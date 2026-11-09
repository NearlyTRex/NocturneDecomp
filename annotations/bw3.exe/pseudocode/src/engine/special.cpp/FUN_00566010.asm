; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_special_cpp_FUN_00566010(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_02cf603c
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c6cee8],0x0      ; 00566010 | DAT_01c6cee8
        ;   Label: engine_special.cpp_FUN_00566010
    JNZ 0x0056601c                      ; 00566017
        ;   XREF to: 0056601c (CONDITIONAL_JUMP)  ; LAB_0056601c
    XOR EAX,EAX                         ; 00566019
    RET                                 ; 0056601b
    PUSH ESI                            ; 0056601c
        ;   Label: LAB_0056601c
    PUSH EBX                            ; 0056601d
    MOV ECX,dword ptr [ESP + 0x14]      ; 0056601e
    PUSH ECX                            ; 00566022
    MOV EBX,dword ptr [ESP + 0x14]      ; 00566023
    PUSH EBX                            ; 00566027
    MOV ESI,dword ptr [ESP + 0x14]      ; 00566028
    PUSH ESI                            ; 0056602c
    CALL dword ptr [0x02cf603c]         ; 0056602d | DAT_02cf603c
    ADD ESP,0xc                         ; 00566033
    POP EBX                             ; 00566036
    POP ESI                             ; 00566037
    RET                                 ; 00566038


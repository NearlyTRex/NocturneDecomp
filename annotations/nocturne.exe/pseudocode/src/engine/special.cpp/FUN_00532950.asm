; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_special_cpp_FUN_00532950(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c02594
;   undefined4 DAT_02dc9dc0
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c02594],0x0      ; 00532950 | DAT_01c02594
        ;   Label: engine_special.cpp_FUN_00532950
    JNZ 0x0053295c                      ; 00532957
        ;   XREF to: 0053295c (CONDITIONAL_JUMP)  ; LAB_0053295c
    XOR EAX,EAX                         ; 00532959
    RET                                 ; 0053295b
    PUSH ESI                            ; 0053295c
        ;   Label: LAB_0053295c
    PUSH EBX                            ; 0053295d
    MOV ECX,dword ptr [ESP + 0x14]      ; 0053295e
    PUSH ECX                            ; 00532962
    MOV EBX,dword ptr [ESP + 0x14]      ; 00532963
    PUSH EBX                            ; 00532967
    MOV ESI,dword ptr [ESP + 0x14]      ; 00532968
    PUSH ESI                            ; 0053296c
    CALL dword ptr [0x02dc9dc0]         ; 0053296d | DAT_02dc9dc0
    ADD ESP,0xc                         ; 00532973
    POP EBX                             ; 00532976
    POP ESI                             ; 00532977
    RET                                 ; 00532978


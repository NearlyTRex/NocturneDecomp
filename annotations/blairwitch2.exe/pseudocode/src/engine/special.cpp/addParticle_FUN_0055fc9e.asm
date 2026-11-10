; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_special_cpp_addParticle_FUN_0055fc9e(undefined4 param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01c37788
;   undefined4 DAT_0264bc08
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 0055fc9e
        ;   Label: engine_special.cpp_addParticle_FUN_0055fc9e
    CMP dword ptr [0x01c37788],0x0      ; 0055fca0 | DAT_01c37788
    JNZ 0x0055fcac                      ; 0055fca7
        ;   XREF to: 0055fcac (CONDITIONAL_JUMP)  ; LAB_0055fcac
    XOR EAX,EAX                         ; 0055fca9
    RET                                 ; 0055fcab
    PUSH EBX                            ; 0055fcac
        ;   Label: LAB_0055fcac
    MOV ECX,dword ptr [ESP + 0xc]       ; 0055fcad
    PUSH ECX                            ; 0055fcb1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0055fcb2
    PUSH EBX                            ; 0055fcb6
    CALL dword ptr [0x0264bc08]         ; 0055fcb7 | DAT_0264bc08
    ADD ESP,0x8                         ; 0055fcbd
    POP EBX                             ; 0055fcc0
    RET                                 ; 0055fcc1


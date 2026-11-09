; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_special_cpp_FUN_005664c0(undefined4 param_1)
;
;
; XREF[1]:
;   core_game.cpp_FUN_004b6f30 at 004b7764
;
; Referenced Globals:
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_02cf6088
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c6cee8],0x0      ; 005664c0 | DAT_01c6cee8
        ;   Label: engine_special.cpp_FUN_005664c0
    JNZ 0x005664cc                      ; 005664c7
        ;   XREF to: 005664cc (CONDITIONAL_JUMP)  ; LAB_005664cc
    XOR EAX,EAX                         ; 005664c9
    RET                                 ; 005664cb
    MOV ECX,dword ptr [ESP + 0x4]       ; 005664cc
        ;   Label: LAB_005664cc
    PUSH ECX                            ; 005664d0
    CALL dword ptr [0x02cf6088]         ; 005664d1 | DAT_02cf6088
    ADD ESP,0x4                         ; 005664d7
    RET                                 ; 005664da


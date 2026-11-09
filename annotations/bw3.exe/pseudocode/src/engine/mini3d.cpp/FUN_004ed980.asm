; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004ed980(undefined4 param_1)
;
;
; XREF[3]:
;   engine_font.cpp_FUN_004b13a0 at 004b13f2
;   engine_mini3d.cpp_FUN_004f37e0 at 004f3a10
;   engine_mini3d.cpp_FUN_004f3a4e at 004f3a55
;
; Referenced Globals:
;   undefined4 DAT_01d7a694
;
; Called Functions:
;   engine_texture.cpp_FUN_0056aa10
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01d7a694],0x0      ; 004ed980 | DAT_01d7a694
        ;   Label: engine_mini3d.cpp_FUN_004ed980
    JZ 0x004ed98a                       ; 004ed987
        ;   XREF to: 004ed98a (CONDITIONAL_JUMP)  ; LAB_004ed98a
    RET                                 ; 004ed989
    MOV ECX,dword ptr [ESP + 0x4]       ; 004ed98a
        ;   Label: LAB_004ed98a
    PUSH ECX                            ; 004ed98e
    CALL engine_texture.cpp_FUN_0056aa10 ; 004ed98f
        ;   XREF to: 0056aa10 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_0056aa10()
    ADD ESP,0x4                         ; 004ed994
    RET                                 ; 004ed997


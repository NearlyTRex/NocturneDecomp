; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_005121b0(undefined4 param_1)
;
;
; XREF[3]:
;   engine_font.cpp_FUN_004c2750 at 004c27a2
;   engine_mini3d.cpp_FUN_00518010 at 00518240
;   engine_mini3d.cpp_FUN_0051827e at 00518285
;
; Referenced Globals:
;   undefined4 DAT_01d25f14
;
; Called Functions:
;   engine_texture.cpp_FUN_00597a20
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01d25f14],0x0      ; 005121b0 | DAT_01d25f14
        ;   Label: engine_mini3d.cpp_FUN_005121b0
    JZ 0x005121ba                       ; 005121b7
        ;   XREF to: 005121ba (CONDITIONAL_JUMP)  ; LAB_005121ba
    RET                                 ; 005121b9
    MOV ECX,dword ptr [ESP + 0x4]       ; 005121ba
        ;   Label: LAB_005121ba
    PUSH ECX                            ; 005121be
    CALL engine_texture.cpp_FUN_00597a20 ; 005121bf
        ;   XREF to: 00597a20 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00597a20()
    ADD ESP,0x4                         ; 005121c4
    RET                                 ; 005121c7


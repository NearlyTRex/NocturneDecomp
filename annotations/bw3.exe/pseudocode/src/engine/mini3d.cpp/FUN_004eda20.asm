; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004eda20(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_02cf60e8
;
; Called Functions:
;   engine_texture.cpp_FUN_0056ac20
;
; *****************************************************************************

section .text

    CALL engine_texture.cpp_FUN_0056ac20 ; 004eda20
        ;   XREF to: 0056ac20 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_0056ac20()
        ;   Label: engine_mini3d.cpp_FUN_004eda20
    CMP dword ptr [0x02cf60e8],0x0      ; 004eda25 | DAT_02cf60e8
    JZ 0x004eda37                       ; 004eda2c
        ;   XREF to: 004eda37 (CONDITIONAL_JUMP)  ; LAB_004eda37
    CMP dword ptr [0x01c6cee8],0x0      ; 004eda2e | DAT_01c6cee8
    JNZ 0x004eda38                      ; 004eda35
        ;   XREF to: 004eda38 (CONDITIONAL_JUMP)  ; LAB_004eda38
    RET                                 ; 004eda37
        ;   Label: LAB_004eda37
    CALL dword ptr [0x02cf60e8]         ; 004eda38 | DAT_02cf60e8
        ;   Label: LAB_004eda38
    RET                                 ; 004eda3e


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gargoyle_cpp_FUN_004c0b30(undefined4 param_1)
;
;
; Called Functions:
;   core_charactr.cpp_FUN_004254b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004c0b30
        ;   Label: core_gargoyle.cpp_FUN_004c0b30
    PUSH EDX                            ; 004c0b34
    CALL core_charactr.cpp_FUN_004254b0 ; 004c0b35
        ;   XREF to: 004254b0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004254b0()
    ADD ESP,0x4                         ; 004c0b3a
    RET                                 ; 004c0b3d


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_00514ae0(void)
;
;
; XREF[1]:
;   engine_font.cpp_FUN_004c2750 at 004c27b4
;
; Referenced Globals:
;   undefined4 DAT_01c50948
;   undefined4 DAT_01d25000
;   undefined4 DAT_02c83494
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 00514ae0
        ;   Label: engine_mini3d.cpp_FUN_00514ae0
    MOV ECX,dword ptr [0x02c83494]      ; 00514ae2 | DAT_02c83494
    MOV dword ptr [0x01d25000],EDX      ; 00514ae8 | DAT_01d25000
    TEST ECX,ECX                        ; 00514aee
    JZ 0x00514afb                       ; 00514af0
        ;   XREF to: 00514afb (CONDITIONAL_JUMP)  ; LAB_00514afb
    CMP dword ptr [0x01c50948],0x0      ; 00514af2 | DAT_01c50948
    JNZ 0x00514afc                      ; 00514af9
        ;   XREF to: 00514afc (CONDITIONAL_JUMP)  ; LAB_00514afc
    RET                                 ; 00514afb
        ;   Label: LAB_00514afb
    PUSH EDX                            ; 00514afc
        ;   Label: LAB_00514afc
    CALL dword ptr [0x02c83494]         ; 00514afd | DAT_02c83494
    ADD ESP,0x4                         ; 00514b03
    RET                                 ; 00514b06


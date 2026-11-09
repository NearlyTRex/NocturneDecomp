; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_004929dc(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c3eb50
;   undefined4 DAT_01c3f538
;   undefined4 DAT_01c3f53c
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   engine_font.cpp_FUN_004c4510
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 004929dc
        ;   Label: shape_edittool.cpp_FUN_004929dc
    CMP dword ptr [0x01c3eb50],0x0      ; 004929e0 | DAT_01c3eb50
    JZ 0x00492a0b                       ; 004929e7
        ;   XREF to: 00492a0b (CONDITIONAL_JUMP)  ; LAB_00492a0b
    MOV EAX,[0x01c3eb50]                ; 004929e9 | DAT_01c3eb50
        ;   Label: LAB_004929e9
    PUSH 0x6a                           ; 004929ee
    MOV EDX,dword ptr [EAX + 0x41e8]    ; 004929f0
    PUSH EAX                            ; 004929f6
    MOV dword ptr [0x01c3f538],EDX      ; 004929f7 | DAT_01c3f538
    CALL engine_font.cpp_FUN_004c4510   ; 004929fd
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004c4510(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 00492a02
    MOV [0x01c3f53c],EAX                ; 00492a05 | DAT_01c3f53c
    RET                                 ; 00492a0a
    PUSH EBX                            ; 00492a0b
        ;   Label: LAB_00492a0b
    MOV ECX,0x5dbc68                    ; 00492a0c
    MOV EBX,0xa4                        ; 00492a11
    PUSH 0x5dbc7e                       ; 00492a16
    MOV dword ptr [0x01d1d400],ECX      ; 00492a1b | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 00492a21 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00492a27
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00492a2c
    POP EBX                             ; 00492a2f
    JMP 0x004929e9                      ; 00492a30
        ;   XREF to: 004929e9 (UNCONDITIONAL_JUMP)  ; LAB_004929e9


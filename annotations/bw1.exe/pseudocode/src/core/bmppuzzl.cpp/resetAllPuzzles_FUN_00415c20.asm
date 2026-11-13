; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bmppuzzl_cpp_resetAllPuzzles_FUN_00415c20(void)
;
;
; XREF[2]:
;   core_main.c_FUN_005032a0 at 0050398e
;   core_main.c_FUN_00503a30 at 00503a33
;
; Referenced Globals:
;   undefined4 DAT_007c394c
;   undefined4 DAT_007c3950
;   undefined4 DAT_007c3954
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415c20
        ;   Label: core_bmppuzzl.cpp_resetAllPuzzles_FUN_00415c20
    MOV EDX,dword ptr [0x007c394c]      ; 00415c21 | DAT_007c394c
    XOR EBX,EBX                         ; 00415c27
    TEST EDX,EDX                        ; 00415c29
    JLE 0x00415c4e                      ; 00415c2b
        ;   XREF to: 00415c4e (CONDITIONAL_JUMP)  ; LAB_00415c4e
    PUSH ESI                            ; 00415c2d
    XOR ESI,ESI                         ; 00415c2e
    MOV EAX,dword ptr [ESI + 0x7c3950]  ; 00415c30 | DAT_007c3950 | DAT_007c3954
        ;   Label: LAB_00415c30
    PUSH EAX                            ; 00415c36
    MOV EDX,dword ptr [EAX]             ; 00415c37
    ADD ESI,0x4                         ; 00415c39
    INC EBX                             ; 00415c3c
    CALL dword ptr [EDX + 0x8]          ; 00415c3d
    MOV ECX,dword ptr [0x007c394c]      ; 00415c40 | DAT_007c394c
    ADD ESP,0x4                         ; 00415c46
    CMP EBX,ECX                         ; 00415c49
    JL 0x00415c30                       ; 00415c4b
        ;   XREF to: 00415c30 (CONDITIONAL_JUMP)  ; LAB_00415c30
    POP ESI                             ; 00415c4d
    POP EBX                             ; 00415c4e
        ;   Label: LAB_00415c4e
    RET                                 ; 00415c4f


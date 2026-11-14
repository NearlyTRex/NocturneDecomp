; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bmppuzzl_cpp_resetAllPuzzles_FUN_004119e0(void)
;
;
; XREF[2]:
;   core_main.c_FUN_004e4c70 at 004e4c73
;   core_main.c_initializeGameSystems_FUN_004e44e0 at 004e4bce
;
; Referenced Globals:
;   undefined4 DAT_007dff88
;   undefined4 DAT_007dff8c
;   undefined4 DAT_007dff90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004119e0
        ;   Label: core_bmppuzzl.cpp_resetAllPuzzles_FUN_004119e0
    MOV EDX,dword ptr [0x007dff88]      ; 004119e1 | DAT_007dff88
    XOR EBX,EBX                         ; 004119e7
    TEST EDX,EDX                        ; 004119e9
    JLE 0x00411a0e                      ; 004119eb
        ;   XREF to: 00411a0e (CONDITIONAL_JUMP)  ; LAB_00411a0e
    PUSH ESI                            ; 004119ed
    XOR ESI,ESI                         ; 004119ee
    MOV EAX,dword ptr [ESI + 0x7dff8c]  ; 004119f0 | DAT_007dff8c | DAT_007dff90
        ;   Label: LAB_004119f0
    PUSH EAX                            ; 004119f6
    MOV EDX,dword ptr [EAX]             ; 004119f7
    ADD ESI,0x4                         ; 004119f9
    INC EBX                             ; 004119fc
    CALL dword ptr [EDX + 0x8]          ; 004119fd
    MOV ECX,dword ptr [0x007dff88]      ; 00411a00 | DAT_007dff88
    ADD ESP,0x4                         ; 00411a06
    CMP EBX,ECX                         ; 00411a09
    JL 0x004119f0                       ; 00411a0b
        ;   XREF to: 004119f0 (CONDITIONAL_JUMP)  ; LAB_004119f0
    POP ESI                             ; 00411a0d
    POP EBX                             ; 00411a0e
        ;   Label: LAB_00411a0e
    RET                                 ; 00411a0f


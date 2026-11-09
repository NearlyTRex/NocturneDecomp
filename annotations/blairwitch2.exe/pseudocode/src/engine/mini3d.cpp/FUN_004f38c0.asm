; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f38c0(void)
;
;
; XREF[5]:
;   engine_mini3d.cpp_FUN_004f3920 at 004f3998
;   engine_mini3d.cpp_FUN_004f3c40 at 004f3cc0
;   engine_mini3d.cpp_FUN_004f3ef0 at 004f3f5b
;   engine_mini3d.cpp_FUN_004f40a0 at 004f4109
;   engine_mini3d.cpp_FUN_004f7e00 at 004f7e2b
;
; Referenced Globals:
;   TerminatedCString s_engine_mini3d_cpp_005ddc4c
;   TerminatedCString s_CMini3D_allocVertexList_005ddc61
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01d09b78
;   undefined4 DAT_01d09b7c
;   undefined4 DAT_01d09b80
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_unknown.c_FUN_005b8580
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01d09b78],0x0      ; 004f38c0 | DAT_01d09b78
        ;   Label: engine_mini3d.cpp_FUN_004f38c0
    JZ 0x004f38ca                       ; 004f38c7
        ;   XREF to: 004f38ca (CONDITIONAL_JUMP)  ; LAB_004f38ca
    RET                                 ; 004f38c9
    PUSH 0x9c440                        ; 004f38ca
        ;   Label: LAB_004f38ca
    CALL crt_unknown.c_FUN_005b8580     ; 004f38cf
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 004f38d4
    MOV [0x01d09b78],EAX                ; 004f38d7 | DAT_01d09b78
    TEST EAX,EAX                        ; 004f38dc
    JNZ 0x004f3905                      ; 004f38de
        ;   XREF to: 004f3905 (CONDITIONAL_JUMP)  ; LAB_004f3905
    PUSH EBX                            ; 004f38e0
    MOV ECX,0x5ddc4c                    ; 004f38e1 | = "..\\engine\\mini3d.cpp"
    MOV EBX,0x692                       ; 004f38e6
    PUSH 0x5ddc61                       ; 004f38eb | = "CMini3D::allocVertexList - Out of mem..."
    MOV dword ptr [0x01d046a0],ECX      ; 004f38f0 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 004f38f6 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004f38fc
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004f3901
    POP EBX                             ; 004f3904
    MOV EAX,[0x01d09b78]                ; 004f3905 | DAT_01d09b78
        ;   Label: LAB_004f3905
    ADD EAX,0x3f                        ; 004f390a
    AND AL,0xc0                         ; 004f390d
    MOV [0x01d09b7c],EAX                ; 004f390f | DAT_01d09b7c
    MOV [0x01d09b80],EAX                ; 004f3914 | DAT_01d09b80
    RET                                 ; 004f3919


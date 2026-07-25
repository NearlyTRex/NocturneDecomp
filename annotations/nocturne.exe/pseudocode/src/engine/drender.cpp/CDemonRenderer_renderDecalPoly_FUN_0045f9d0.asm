; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_drender_cpp_CDemonRenderer_renderDecalPoly_FUN_0045f9d0(int *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_water.cpp_CWater_render_FUN_00550cb0 at 00551191
;
; Referenced Globals:
;   undefined4 DAT_01b4d76c
;   undefined4 DAT_01b4d770
;   undefined4 DAT_01c00c7c
;   undefined4 DAT_01c039a0
;   undefined4 DAT_01c039a4
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045f9d0
        ;   Label: engine_drender.cpp_CDemonRenderer_renderDecalPoly_FUN_0045f9d0
    PUSH EBP                            ; 0045f9d1
    SUB ESP,0x4                         ; 0045f9d2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0045f9d5
    CMP dword ptr [EBX + 0xc],0x0       ; 0045f9d9
    JNZ 0x0045fa61                      ; 0045f9dd
        ;   XREF to: 0045fa61 (CONDITIONAL_JUMP)  ; LAB_0045fa61
    PUSH EDI                            ; 0045f9e3
        ;   Label: LAB_0045f9e3
    PUSH ESI                            ; 0045f9e4
    MOV ECX,dword ptr [EBX + 0x4]       ; 0045f9e5
    TEST ECX,ECX                        ; 0045f9e8
    JZ 0x0045fa7a                       ; 0045f9ea
        ;   XREF to: 0045fa7a (CONDITIONAL_JUMP)  ; LAB_0045fa7a
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0045f9f0
    MOV EDI,dword ptr [EDX + 0x4]       ; 0045f9f4
    XOR EAX,EAX                         ; 0045f9f7
    TEST EDI,EDI                        ; 0045f9f9
    JLE 0x0045fa20                      ; 0045f9fb
        ;   XREF to: 0045fa20 (CONDITIONAL_JUMP)  ; LAB_0045fa20
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0045f9fd
    XOR EDX,EDX                         ; 0045fa01
    MOV ESI,dword ptr [ECX + 0x18]      ; 0045fa03
        ;   Label: LAB_0045fa03
    MOV dword ptr [EDX + 0x1b4d76c],ESI ; 0045fa06 | DAT_01b4d76c | DAT_01b4d770
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0045fa0c
    ADD EDX,0x4                         ; 0045fa10
    INC EAX                             ; 0045fa13
    MOV EBP,dword ptr [ESI + 0x4]       ; 0045fa14
    ADD ECX,0xc                         ; 0045fa17
    CMP EAX,EBP                         ; 0045fa1a
    JL 0x0045fa03                       ; 0045fa1c
        ;   XREF to: 0045fa03 (CONDITIONAL_JUMP)  ; LAB_0045fa03
    MOV EAX,EAX                         ; 0045fa1e
    CMP dword ptr [EBX + 0x4],0x0       ; 0045fa20
        ;   Label: LAB_0045fa20
    JZ 0x0045fad3                       ; 0045fa24
        ;   XREF to: 0045fad3 (CONDITIONAL_JUMP)  ; LAB_0045fad3
    XOR EBP,EBP                         ; 0045fa2a
    MOV EDI,0x463a79                    ; 0045fa2c
    MOV dword ptr [0x01c039a0],EBP      ; 0045fa31 | DAT_01c039a0
    MOV dword ptr [0x01c039a4],EBP      ; 0045fa37 | DAT_01c039a4
    MOV dword ptr [0x01c00c7c],EDI      ; 0045fa3d | DAT_01c00c7c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0045fa43
        ;   Label: LAB_0045fa43
    PUSH 0x1b4d76c                      ; 0045fa47 | DAT_01b4d76c
    MOV EDX,dword ptr [EAX + 0x4]       ; 0045fa4c
    PUSH EDX                            ; 0045fa4f
    PUSH EBX                            ; 0045fa50
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80 ; 0045fa51
        ;   XREF to: 0045ed80 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80()
    ADD ESP,0xc                         ; 0045fa56
    POP ESI                             ; 0045fa59
    POP EDI                             ; 0045fa5a
    ADD ESP,0x4                         ; 0045fa5b
        ;   Label: LAB_0045fa5b
    POP EBP                             ; 0045fa5e
    POP EBX                             ; 0045fa5f
    RET                                 ; 0045fa60
    MOV EAX,dword ptr [ESP + 0x14]      ; 0045fa61
        ;   Label: LAB_0045fa61
    ADD EAX,0x8                         ; 0045fa65
    PUSH EAX                            ; 0045fa68
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 0045fa69
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00404610()
    ADD ESP,0x4                         ; 0045fa6e
    TEST EAX,EAX                        ; 0045fa71
    JZ 0x0045fa5b                       ; 0045fa73
        ;   XREF to: 0045fa5b (CONDITIONAL_JUMP)  ; LAB_0045fa5b
    JMP 0x0045f9e3                      ; 0045fa75
        ;   XREF to: 0045f9e3 (UNCONDITIONAL_JUMP)  ; LAB_0045f9e3
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0045fa7a
        ;   Label: LAB_0045fa7a
    CMP dword ptr [EAX + 0x4],0x0       ; 0045fa7e
    JLE 0x0045fa20                      ; 0045fa82
        ;   XREF to: 0045fa20 (CONDITIONAL_JUMP)  ; LAB_0045fa20
    XOR EDX,EDX                         ; 0045fa84
    MOV EDI,dword ptr [EBX + 0x20]      ; 0045fa86
        ;   Label: LAB_0045fa86
    MOV ESI,dword ptr [EAX + 0x18]      ; 0045fa89
    TEST EDI,EDI                        ; 0045fa8c
    JZ 0x0045faae                       ; 0045fa8e
        ;   XREF to: 0045faae (CONDITIONAL_JUMP)  ; LAB_0045faae
    MOV dword ptr [EDX + 0x1b4d76c],ESI ; 0045fa90 | DAT_01b4d76c | DAT_01b4d770
        ;   Label: LAB_0045fa90
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0045fa96
    ADD EAX,0xc                         ; 0045fa9a
    INC ECX                             ; 0045fa9d
    MOV EBP,dword ptr [ESI + 0x4]       ; 0045fa9e
    ADD EDX,0x4                         ; 0045faa1
    CMP ECX,EBP                         ; 0045faa4
    JGE 0x0045fa20                      ; 0045faa6
        ;   XREF to: 0045fa20 (CONDITIONAL_JUMP)  ; LAB_0045fa20
    JMP 0x0045fa86                      ; 0045faac
        ;   XREF to: 0045fa86 (UNCONDITIONAL_JUMP)  ; LAB_0045fa86
    IMUL EDI,ESI,0x30                   ; 0045faae
        ;   Label: LAB_0045faae
    MOV dword ptr [ESP + 0x8],EDI       ; 0045fab1
    MOV EBP,dword ptr [ESP + 0x8]       ; 0045fab5
    MOV EDI,dword ptr [EBX]             ; 0045fab9
    ADD EBP,EDI                         ; 0045fabb
    MOV EDI,dword ptr [EAX + 0x1c]      ; 0045fabd
    MOV dword ptr [EBP + 0x18],EDI      ; 0045fac0
    MOV EDI,dword ptr [ESP + 0x8]       ; 0045fac3
    MOV EBP,dword ptr [EBX]             ; 0045fac7
    ADD EBP,EDI                         ; 0045fac9
    MOV EDI,dword ptr [EAX + 0x20]      ; 0045facb
    MOV dword ptr [EBP + 0x1c],EDI      ; 0045face
    JMP 0x0045fa90                      ; 0045fad1
        ;   XREF to: 0045fa90 (UNCONDITIONAL_JUMP)  ; LAB_0045fa90
    MOV ECX,0x41                        ; 0045fad3
        ;   Label: LAB_0045fad3
    MOV ESI,0x6                         ; 0045fad8
    MOV EDX,0x4649dd                    ; 0045fadd
    MOV dword ptr [0x01c039a0],ECX      ; 0045fae2 | DAT_01c039a0
    MOV dword ptr [0x01c039a4],ESI      ; 0045fae8 | DAT_01c039a4
    MOV dword ptr [0x01c00c7c],EDX      ; 0045faee | DAT_01c00c7c
    JMP 0x0045fa43                      ; 0045faf4
        ;   XREF to: 0045fa43 (UNCONDITIONAL_JUMP)  ; LAB_0045fa43


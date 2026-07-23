; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl engine_drender_cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_0045f090(int *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_005125a0 at 00513209
;
; Referenced Globals:
;   TerminatedCString s_engine_drender_cpp_0057dbbe
;   TerminatedCString s_Can_t_use_demonZFacetCou_0057dbd4
;   undefined4 DAT_01b4d764
;   undefined4 DAT_01b4d76c
;   undefined4 DAT_01b4d770
;   undefined4 DAT_01c00c7c
;   undefined4 DAT_01c039a0
;   undefined4 DAT_01c039a4
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045f090
        ;   Label: engine_drender.cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_0045f090
    PUSH ESI                            ; 0045f091
    PUSH EDI                            ; 0045f092
    PUSH EBP                            ; 0045f093
    SUB ESP,0x4                         ; 0045f094
    MOV EBP,dword ptr [ESP + 0x18]      ; 0045f097
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0045f09b
    XOR EDX,EDX                         ; 0045f09f
    MOV ECX,dword ptr [EBP + 0xc]       ; 0045f0a1
    MOV dword ptr [0x01b4d764],EDX      ; 0045f0a4 | DAT_01b4d764
    TEST ECX,ECX                        ; 0045f0aa
    JNZ 0x0045f145                      ; 0045f0ac
        ;   XREF to: 0045f145 (CONDITIONAL_JUMP)  ; LAB_0045f145
    MOV EBX,0xffffffff                  ; 0045f0b2
        ;   Label: LAB_0045f0b2
    MOV ESI,dword ptr [EDI + 0x4]       ; 0045f0b7
    XOR EAX,EAX                         ; 0045f0ba
    MOV dword ptr [ESP],EBX             ; 0045f0bc
    TEST ESI,ESI                        ; 0045f0bf
    JLE 0x0045f0f0                      ; 0045f0c1
        ;   XREF to: 0045f0f0 (CONDITIONAL_JUMP)  ; LAB_0045f0f0
    MOV EDX,EDI                         ; 0045f0c3
    XOR ECX,ECX                         ; 0045f0c5
    MOV EBX,dword ptr [EDX + 0x18]      ; 0045f0c7
        ;   Label: LAB_0045f0c7
    MOV dword ptr [ECX + 0x1b4d76c],EBX ; 0045f0ca | DAT_01b4d76c | DAT_01b4d770
    IMUL ESI,EBX,0x30                   ; 0045f0d0
    MOV EBX,dword ptr [EBP]             ; 0045f0d3
    ADD ECX,0x4                         ; 0045f0d6
    ADD EDX,0xc                         ; 0045f0d9
    MOV EBX,dword ptr [ESI + EBX*0x1 + 0x10] ; 0045f0dc
    MOV ESI,dword ptr [ESP]             ; 0045f0e0
    INC EAX                             ; 0045f0e3
    AND ESI,EBX                         ; 0045f0e4
    MOV EBX,dword ptr [EDI + 0x4]       ; 0045f0e6
    MOV dword ptr [ESP],ESI             ; 0045f0e9
    CMP EAX,EBX                         ; 0045f0ec
    JL 0x0045f0c7                       ; 0045f0ee
        ;   XREF to: 0045f0c7 (CONDITIONAL_JUMP)  ; LAB_0045f0c7
    TEST byte ptr [ESP + 0x3],0x80      ; 0045f0f0
        ;   Label: LAB_0045f0f0
    JZ 0x0045f0fd                       ; 0045f0f5
        ;   XREF to: 0045f0fd (CONDITIONAL_JUMP)  ; LAB_0045f0fd
    TEST byte ptr [ESP],0x1f            ; 0045f0f7
    JNZ 0x0045f15b                      ; 0045f0fb
        ;   XREF to: 0045f15b (CONDITIONAL_JUMP)  ; LAB_0045f15b
    CMP dword ptr [EBP + 0x4],0x0       ; 0045f0fd
        ;   Label: LAB_0045f0fd
    JZ 0x0045f15f                       ; 0045f101
        ;   XREF to: 0045f15f (CONDITIONAL_JUMP)  ; LAB_0045f15f
    MOV EBX,0x57dbbe                    ; 0045f103 | = "..\\engine\\drender.cpp"
    MOV ESI,0x29c                       ; 0045f108
    PUSH 0x57dbd4                       ; 0045f10d | = "Can't use demonZFacetCount in shadow ..."
    MOV dword ptr [0x01cc4800],EBX      ; 0045f112 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 0045f118 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0045f11e
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0045f123
    PUSH 0x1b4d76c                      ; 0045f126 | DAT_01b4d76c
        ;   Label: LAB_0045f126
    MOV EAX,dword ptr [EDI + 0x4]       ; 0045f12b
    PUSH EAX                            ; 0045f12e
    PUSH EBP                            ; 0045f12f
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80 ; 0045f130
        ;   XREF to: 0045ed80 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80()
    MOV EAX,[0x01b4d764]                ; 0045f135 | DAT_01b4d764
    ADD ESP,0xc                         ; 0045f13a
    ADD ESP,0x4                         ; 0045f13d
        ;   Label: LAB_0045f13d
    POP EBP                             ; 0045f140
    POP EDI                             ; 0045f141
    POP ESI                             ; 0045f142
    POP EBX                             ; 0045f143
    RET                                 ; 0045f144
    LEA EAX,[EDI + 0x8]                 ; 0045f145
        ;   Label: LAB_0045f145
    PUSH EAX                            ; 0045f148
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 0045f149
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00404610()
    ADD ESP,0x4                         ; 0045f14e
    TEST EAX,EAX                        ; 0045f151
    JNZ 0x0045f0b2                      ; 0045f153
        ;   XREF to: 0045f0b2 (CONDITIONAL_JUMP)  ; LAB_0045f0b2
    JMP 0x0045f13d                      ; 0045f159
        ;   XREF to: 0045f13d (UNCONDITIONAL_JUMP)  ; LAB_0045f13d
    XOR EAX,EAX                         ; 0045f15b
        ;   Label: LAB_0045f15b
    JMP 0x0045f13d                      ; 0045f15d
        ;   XREF to: 0045f13d (UNCONDITIONAL_JUMP)  ; LAB_0045f13d
    MOV EDX,0xc0                        ; 0045f15f
        ;   Label: LAB_0045f15f
    MOV ECX,0x6                         ; 0045f164
    MOV EAX,0x464075                    ; 0045f169 | LAB_00464075
    MOV dword ptr [0x01c039a0],EDX      ; 0045f16e | DAT_01c039a0
    MOV dword ptr [0x01c039a4],ECX      ; 0045f174 | DAT_01c039a4
    MOV [0x01c00c7c],EAX                ; 0045f17a | DAT_01c00c7c
    JMP 0x0045f126                      ; 0045f17f
        ;   XREF to: 0045f126 (UNCONDITIONAL_JUMP)  ; LAB_0045f126


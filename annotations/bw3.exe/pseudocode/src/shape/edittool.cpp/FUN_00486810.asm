; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00486810(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01c5b0e0
;   undefined4 DAT_01c5baec
;   undefined4 DAT_01c6af98
;   undefined4 DAT_01c6af99
;   undefined4 DAT_01c6af9a
;   undefined4 DAT_01c6b5c0
;
; Called Functions:
;   engine_2d.c_clipLineGlobal_FUN_00402ca0
;   engine_font.cpp_FUN_004b0a20
;   engine_font.cpp_FUN_004b2b30
;   engine_mini3d.cpp_FUN_004f3520
;   shape_edittool.cpp_FUN_004850a0
;   shape_edittool.cpp_FUN_00486780
;   shape_edittool.cpp_FUN_004867c0
;   shape_edittool.cpp_FUN_004867f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00486810
        ;   Label: shape_edittool.cpp_FUN_00486810
    PUSH ESI                            ; 00486811
    PUSH EDI                            ; 00486812
    PUSH EBP                            ; 00486813
    SUB ESP,0x8                         ; 00486814
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00486817
    PUSH EBX                            ; 0048681b
    MOV ESI,dword ptr [EBX + 0x14]      ; 0048681c
    MOV ECX,dword ptr [EBX + 0x1c]      ; 0048681f
    MOV EDI,dword ptr [EBX + 0x10]      ; 00486822
    ADD ESI,ECX                         ; 00486825
    CALL shape_edittool.cpp_FUN_004867c0 ; 00486827
        ;   XREF to: 004867c0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004867c0()
    MOV EDX,ESI                         ; 0048682c
    SUB EDX,EAX                         ; 0048682e
    MOV EAX,EDX                         ; 00486830
    SAR EDX,0x1f                        ; 00486832
    SUB EAX,EDX                         ; 00486835
    SAR EAX,0x1                         ; 00486837
    ADD ESP,0x4                         ; 00486839
    PUSH EBX                            ; 0048683c
    MOV ESI,EAX                         ; 0048683d
    CALL shape_edittool.cpp_FUN_00486780 ; 0048683f
        ;   XREF to: 00486780 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00486780()
    ADD ESP,0x4                         ; 00486844
    PUSH EBX                            ; 00486847
    LEA EBP,[EDI + EAX*0x1]             ; 00486848
    CALL shape_edittool.cpp_FUN_004867c0 ; 0048684b
        ;   XREF to: 004867c0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004867c0()
    MOV EDX,ESI                         ; 00486850
    ADD ESP,0x4                         ; 00486852
    ADD EDX,EAX                         ; 00486855
    LEA EAX,[EBX + 0x24]                ; 00486857
    PUSH EAX                            ; 0048685a
    MOV dword ptr [ESP + 0x8],EDX       ; 0048685b
    MOV EDX,dword ptr [0x01c5b0e0]      ; 0048685f | DAT_01c5b0e0
    PUSH EDX                            ; 00486865
    MOV dword ptr [ESP + 0x8],EAX       ; 00486866
    CALL engine_font.cpp_FUN_004b2b30   ; 0048686a
        ;   XREF to: 004b2b30 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004b2b30(CBitFont * this_ptr, char * text_string)
    ADD ESP,0x8                         ; 0048686f
    PUSH -0x1                           ; 00486872
    MOV ECX,dword ptr [EBX + 0xc]       ; 00486874
    MOV EDX,dword ptr [EBX + 0x14]      ; 00486877
    PUSH ECX                            ; 0048687a
    ADD EDX,dword ptr [EBX + 0x1c]      ; 0048687b
    SUB EDX,EAX                         ; 0048687e
    MOV EAX,EDX                         ; 00486880
    SAR EDX,0x1f                        ; 00486882
    SUB EAX,EDX                         ; 00486885
    SAR EAX,0x1                         ; 00486887
    PUSH EAX                            ; 00486889
    PUSH EBX                            ; 0048688a
    CALL shape_edittool.cpp_FUN_004867f0 ; 0048688b
        ;   XREF to: 004867f0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004867f0()
    ADD ESP,0x4                         ; 00486890
    ADD EAX,EBP                         ; 00486893
    PUSH EAX                            ; 00486895
    MOV EAX,dword ptr [ESP + 0x10]      ; 00486896
    PUSH EAX                            ; 0048689a
    MOV EDX,dword ptr [0x01c5b0e0]      ; 0048689b | DAT_01c5b0e0
    PUSH EDX                            ; 004868a1
    CALL engine_font.cpp_FUN_004b0a20   ; 004868a2
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004868a7
    MOV ECX,dword ptr [EBX + 0x20]      ; 004868aa
    PUSH ECX                            ; 004868ad
    MOV EAX,dword ptr [ESP + 0x8]       ; 004868ae
    PUSH EAX                            ; 004868b2
    PUSH EBP                            ; 004868b3
    PUSH ESI                            ; 004868b4
    PUSH EDI                            ; 004868b5
    CALL shape_edittool.cpp_FUN_004850a0 ; 004868b6
        ;   XREF to: 004850a0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004850a0()
    MOV EDX,dword ptr [EBX + 0x20]      ; 004868bb
    ADD ESP,0x14                        ; 004868be
    TEST EDX,EDX                        ; 004868c1
    JZ 0x00486909                       ; 004868c3
        ;   XREF to: 00486909 (CONDITIONAL_JUMP)  ; LAB_00486909
    INC ESI                             ; 004868c5
    INC EDI                             ; 004868c6
    CMP dword ptr [EBX + 0x4],0x1       ; 004868c7
        ;   Label: LAB_004868c7
    JNZ 0x00486901                      ; 004868cb
        ;   XREF to: 00486901 (CONDITIONAL_JUMP)  ; LAB_00486901
    MOV EDX,dword ptr [0x01c5baec]      ; 004868cd | DAT_01c5baec
    TEST EDX,EDX                        ; 004868d3
    JNZ 0x00486915                      ; 004868d5
        ;   XREF to: 00486915 (CONDITIONAL_JUMP)  ; LAB_00486915
    MOV dword ptr [0x01c6b5c0],EDX      ; 004868d7 | DAT_01c6b5c0
    MOV EBX,dword ptr [ESP + 0x4]       ; 004868dd
        ;   Label: LAB_004868dd
    SUB EBX,0x2                         ; 004868e1
    PUSH EBX                            ; 004868e4
    SUB EBP,0x2                         ; 004868e5
    PUSH EBP                            ; 004868e8
    INC ESI                             ; 004868e9
    PUSH ESI                            ; 004868ea
    INC EDI                             ; 004868eb
    PUSH EDI                            ; 004868ec
    CALL engine_2d.c_clipLineGlobal_FUN_00402ca0 ; 004868ed
        ;   XREF to: 00402ca0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clipLineGlobal_FUN_00402ca0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 004868f2
    PUSH EBX                            ; 004868f5
    PUSH EDI                            ; 004868f6
    PUSH ESI                            ; 004868f7
    PUSH EBP                            ; 004868f8
    CALL engine_2d.c_clipLineGlobal_FUN_00402ca0 ; 004868f9
        ;   XREF to: 00402ca0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clipLineGlobal_FUN_00402ca0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 004868fe
    ADD ESP,0x8                         ; 00486901
        ;   Label: LAB_00486901
    POP EBP                             ; 00486904
    POP EDI                             ; 00486905
    POP ESI                             ; 00486906
    POP EBX                             ; 00486907
    RET                                 ; 00486908
    MOV ECX,dword ptr [ESP + 0x4]       ; 00486909
        ;   Label: LAB_00486909
    DEC ECX                             ; 0048690d
    DEC EBP                             ; 0048690e
    MOV dword ptr [ESP + 0x4],ECX       ; 0048690f
    JMP 0x004868c7                      ; 00486913
        ;   XREF to: 004868c7 (UNCONDITIONAL_JUMP)  ; LAB_004868c7
    XOR EDX,EDX                         ; 00486915
        ;   Label: LAB_00486915
    XOR EAX,EAX                         ; 00486917
    MOV DL,byte ptr [0x01c6af99]        ; 00486919 | DAT_01c6af99
    MOV AL,[0x01c6af98]                 ; 0048691f | DAT_01c6af98
    SHL EDX,0x8                         ; 00486924
    SHL EAX,0x10                        ; 00486927
    OR EDX,EAX                          ; 0048692a
    XOR EAX,EAX                         ; 0048692c
    MOV AL,[0x01c6af9a]                 ; 0048692e | DAT_01c6af9a
    OR EAX,EDX                          ; 00486933
    PUSH EAX                            ; 00486935
    CALL engine_mini3d.cpp_FUN_004f3520 ; 00486936
        ;   XREF to: 004f3520 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3520()
    ADD ESP,0x4                         ; 0048693b
    JMP 0x004868dd                      ; 0048693e
        ;   XREF to: 004868dd (UNCONDITIONAL_JUMP)  ; LAB_004868dd


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bugs_cpp_CBugs_renderGroundHeightGrid_FUN_004217c0(CBugs *this_ptr)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005b7769
;   undefined4 DAT_005dcbb0
;   undefined4 DAT_005dcbc8
;   undefined4 DAT_005f2afc
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046d550
;   engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046d3c0
;   engine_special.cpp_FUN_005632a3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004217c0
        ;   Label: core_bugs.cpp_CBugs_renderGroundHeightGrid_FUN_004217c0
    PUSH ESI                            ; 004217c1
    PUSH EDI                            ; 004217c2
    PUSH EBP                            ; 004217c3
    MOV EBP,ESP                         ; 004217c4
    SUB ESP,0x34                        ; 004217c6
    AND ESP,0xfffffff8                  ; 004217c9
    XOR EDX,EDX                         ; 004217cc
    MOV EAX,dword ptr [EBP + 0x14]      ; 004217ce
    MOV dword ptr [ESP + 0x20],EDX      ; 004217d1
    MOV dword ptr [ESP + 0x1c],EAX      ; 004217d5
    MOV EAX,dword ptr [ESP + 0x20]      ; 004217d9
        ;   Label: LAB_004217d9
    MOV dword ptr [ESP + 0x30],EAX      ; 004217dd
    FILD dword ptr [ESP + 0x30]         ; 004217e1
    FMUL float ptr [0x005dcbc8]         ; 004217e5 | DAT_005dcbc8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004217eb
    MOV ECX,dword ptr [ESP + 0x20]      ; 004217ee
    FADD float ptr [EAX + 0x1be88]      ; 004217f2
    IMUL EAX,ECX,0x30                   ; 004217f8
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004217fb
    XOR ESI,ESI                         ; 004217ff
    FSTP float ptr [ESP]                ; 00421801
    MOV dword ptr [ESP + 0x2c],EAX      ; 00421804
    MOV dword ptr [ESP + 0x30],ESI      ; 00421808
        ;   Label: LAB_00421808
    FILD dword ptr [ESP + 0x30]         ; 0042180c
    FMUL float ptr [0x005dcbc8]         ; 00421810 | DAT_005dcbc8
    MOV EAX,dword ptr [EBP + 0x14]      ; 00421816
    LEA EBX,[ESP + 0xc]                 ; 00421819
    FADD float ptr [EAX + 0x1be8c]      ; 0042181d
    MOV EDX,dword ptr [0x005f2afc]      ; 00421823 | DAT_005f2afc
    FSTP float ptr [ESP + 0x8]          ; 00421829
    FLD float ptr [EDI + 0x135dc]       ; 0042182d
    FADD double ptr [0x005b7769]        ; 00421833 | DAT_005b7769
    MOV EAX,ESP                         ; 00421839
    FSTP float ptr [ESP + 0x4]          ; 0042183b
    FLD float ptr [EAX]                 ; 0042183f
    FMUL float ptr [0x005dcbb0]         ; 00421841 | DAT_005dcbb0
    FISTP dword ptr [EBX]               ; 00421847
    FLD float ptr [EAX + 0x4]           ; 00421849
    FMUL float ptr [0x005dcbb0]         ; 0042184c | DAT_005dcbb0
    FISTP dword ptr [EBX + 0x4]         ; 00421852
    FLD float ptr [EAX + 0x8]           ; 00421855
    FMUL float ptr [0x005dcbb0]         ; 00421858 | DAT_005dcbb0
    FISTP dword ptr [EBX + 0x8]         ; 0042185e
    LEA EAX,[ESP + 0xc]                 ; 00421861
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00421865
    PUSH EAX                            ; 00421869
    MOV EAX,dword ptr [EDX]             ; 0042186a
    ADD EAX,EBX                         ; 0042186c
    PUSH EAX                            ; 0042186e
    CALL engine_special.cpp_FUN_005632a3 ; 0042186f
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00421874
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00421877
    ADD EDI,0x4                         ; 0042187b
    ADD EAX,0x240                       ; 0042187e
    INC ESI                             ; 00421883
    MOV dword ptr [ESP + 0x2c],EAX      ; 00421884
    CMP ESI,0xc                         ; 00421888
    JL 0x00421808                       ; 0042188b
        ;   XREF to: 00421808 (CONDITIONAL_JUMP)  ; LAB_00421808
    MOV ECX,dword ptr [ESP + 0x20]      ; 00421891
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00421895
    INC ECX                             ; 00421899
    ADD EDX,0x30                        ; 0042189a
    MOV dword ptr [ESP + 0x20],ECX      ; 0042189d
    MOV dword ptr [ESP + 0x1c],EDX      ; 004218a1
    CMP ECX,0xc                         ; 004218a5
    JL 0x004217d9                       ; 004218a8
        ;   XREF to: 004217d9 (CONDITIONAL_JUMP)  ; LAB_004217d9
    PUSH -0x1                           ; 004218ae
    MOV ESI,dword ptr [0x005f2afc]      ; 004218b0 | DAT_005f2afc
    PUSH ESI                            ; 004218b6
    MOV EDI,0xc                         ; 004218b7
    CALL engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046d3c0 ; 004218bc
        ;   XREF to: 0046d3c0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046d3c0(CDemonRenderer * this_ptr, int color)
    ADD ESP,0x8                         ; 004218c1
    MOV dword ptr [ESP + 0x24],EDI      ; 004218c4
    MOV EAX,dword ptr [ESP + 0x24]      ; 004218c8
        ;   Label: LAB_004218c8
    MOV dword ptr [ESP + 0x28],EAX      ; 004218cc
    LEA EDI,[EAX + -0xb]                ; 004218d0
    MOV ESI,0x1                         ; 004218d3
    MOV EBX,EAX                         ; 004218d8
    MOV EAX,dword ptr [ESP + 0x28]      ; 004218da
        ;   Label: LAB_004218da
    PUSH EBX                            ; 004218de
    ADD EAX,ESI                         ; 004218df
    PUSH EAX                            ; 004218e1
    MOV EDX,dword ptr [0x005f2afc]      ; 004218e2 | DAT_005f2afc
    PUSH EDX                            ; 004218e8
    MOV dword ptr [ESP + 0x24],EAX      ; 004218e9
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046d550 ; 004218ed
        ;   XREF to: 0046d550 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046d550(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
    ADD ESP,0xc                         ; 004218f2
    PUSH EDI                            ; 004218f5
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004218f6
    PUSH ECX                            ; 004218fa
    MOV EAX,[0x005f2afc]                ; 004218fb | DAT_005f2afc
    INC EBX                             ; 00421900
    PUSH EAX                            ; 00421901
    INC ESI                             ; 00421902
    INC EDI                             ; 00421903
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046d550 ; 00421904
        ;   XREF to: 0046d550 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046d550(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
    ADD ESP,0xc                         ; 00421909
    CMP ESI,0xc                         ; 0042190c
    JL 0x004218da                       ; 0042190f
        ;   XREF to: 004218da (CONDITIONAL_JUMP)  ; LAB_004218da
    MOV EDX,dword ptr [ESP + 0x24]      ; 00421911
    ADD EDX,0xc                         ; 00421915
    MOV dword ptr [ESP + 0x24],EDX      ; 00421918
    CMP EDX,0x90                        ; 0042191c
    JNZ 0x004218c8                      ; 00421922
        ;   XREF to: 004218c8 (CONDITIONAL_JUMP)  ; LAB_004218c8
    MOV ESP,EBP                         ; 00421924
    POP EBP                             ; 00421926
    POP EDI                             ; 00421927
    POP ESI                             ; 00421928
    POP EBX                             ; 00421929
    RET                                 ; 0042192a


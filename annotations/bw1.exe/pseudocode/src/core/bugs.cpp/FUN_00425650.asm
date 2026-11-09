; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bugs_cpp_FUN_00425650(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d5048
;   undefined4 DAT_005fd210
;   undefined4 DAT_005fd228
;   undefined4 DAT_00612560
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_00483e70
;   engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00483ce0
;   engine_special.cpp_FUN_00580173
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00425650
        ;   Label: core_bugs.cpp_FUN_00425650
    PUSH ESI                            ; 00425651
    PUSH EDI                            ; 00425652
    PUSH EBP                            ; 00425653
    MOV EBP,ESP                         ; 00425654
    SUB ESP,0x34                        ; 00425656
    AND ESP,0xfffffff8                  ; 00425659
    XOR EDX,EDX                         ; 0042565c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042565e
    MOV dword ptr [ESP + 0x20],EDX      ; 00425661
    MOV dword ptr [ESP + 0x1c],EAX      ; 00425665
    MOV EAX,dword ptr [ESP + 0x20]      ; 00425669
        ;   Label: LAB_00425669
    MOV dword ptr [ESP + 0x30],EAX      ; 0042566d
    FILD dword ptr [ESP + 0x30]         ; 00425671
    FMUL float ptr [0x005fd228]         ; 00425675 | DAT_005fd228
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042567b
    MOV ECX,dword ptr [ESP + 0x20]      ; 0042567e
    FADD float ptr [EAX + 0x19d98]      ; 00425682
    IMUL EAX,ECX,0x30                   ; 00425688
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0042568b
    XOR ESI,ESI                         ; 0042568f
    FSTP float ptr [ESP]                ; 00425691
    MOV dword ptr [ESP + 0x2c],EAX      ; 00425694
    MOV dword ptr [ESP + 0x30],ESI      ; 00425698
        ;   Label: LAB_00425698
    FILD dword ptr [ESP + 0x30]         ; 0042569c
    FMUL float ptr [0x005fd228]         ; 004256a0 | DAT_005fd228
    MOV EAX,dword ptr [EBP + 0x14]      ; 004256a6
    LEA EBX,[ESP + 0xc]                 ; 004256a9
    FADD float ptr [EAX + 0x19d9c]      ; 004256ad
    MOV EDX,dword ptr [0x00612560]      ; 004256b3 | DAT_00612560
    FSTP float ptr [ESP + 0x8]          ; 004256b9
    FLD float ptr [EDI + 0x12c64]       ; 004256bd
    FADD double ptr [0x005d5048]        ; 004256c3 | DAT_005d5048
    MOV EAX,ESP                         ; 004256c9
    FSTP float ptr [ESP + 0x4]          ; 004256cb
    FLD float ptr [EAX]                 ; 004256cf
    FMUL float ptr [0x005fd210]         ; 004256d1 | DAT_005fd210
    FISTP dword ptr [EBX]               ; 004256d7
    FLD float ptr [EAX + 0x4]           ; 004256d9
    FMUL float ptr [0x005fd210]         ; 004256dc | DAT_005fd210
    FISTP dword ptr [EBX + 0x4]         ; 004256e2
    FLD float ptr [EAX + 0x8]           ; 004256e5
    FMUL float ptr [0x005fd210]         ; 004256e8 | DAT_005fd210
    FISTP dword ptr [EBX + 0x8]         ; 004256ee
    LEA EAX,[ESP + 0xc]                 ; 004256f1
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004256f5
    PUSH EAX                            ; 004256f9
    MOV EAX,dword ptr [EDX]             ; 004256fa
    ADD EAX,EBX                         ; 004256fc
    PUSH EAX                            ; 004256fe
    CALL engine_special.cpp_FUN_00580173 ; 004256ff
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00425704
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00425707
    ADD EDI,0x4                         ; 0042570b
    ADD EAX,0x240                       ; 0042570e
    INC ESI                             ; 00425713
    MOV dword ptr [ESP + 0x2c],EAX      ; 00425714
    CMP ESI,0xc                         ; 00425718
    JL 0x00425698                       ; 0042571b
        ;   XREF to: 00425698 (CONDITIONAL_JUMP)  ; LAB_00425698
    MOV ECX,dword ptr [ESP + 0x20]      ; 00425721
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00425725
    INC ECX                             ; 00425729
    ADD EDX,0x30                        ; 0042572a
    MOV dword ptr [ESP + 0x20],ECX      ; 0042572d
    MOV dword ptr [ESP + 0x1c],EDX      ; 00425731
    CMP ECX,0xc                         ; 00425735
    JL 0x00425669                       ; 00425738
        ;   XREF to: 00425669 (CONDITIONAL_JUMP)  ; LAB_00425669
    PUSH -0x1                           ; 0042573e
    MOV ESI,dword ptr [0x00612560]      ; 00425740 | DAT_00612560
    PUSH ESI                            ; 00425746
    MOV EDI,0xc                         ; 00425747
    CALL engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00483ce0 ; 0042574c
        ;   XREF to: 00483ce0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00483ce0(CDemonRenderer * this_ptr, int color)
    ADD ESP,0x8                         ; 00425751
    MOV dword ptr [ESP + 0x24],EDI      ; 00425754
    MOV EAX,dword ptr [ESP + 0x24]      ; 00425758
        ;   Label: LAB_00425758
    MOV dword ptr [ESP + 0x28],EAX      ; 0042575c
    LEA EDI,[EAX + -0xb]                ; 00425760
    MOV ESI,0x1                         ; 00425763
    MOV EBX,EAX                         ; 00425768
    MOV EAX,dword ptr [ESP + 0x28]      ; 0042576a
        ;   Label: LAB_0042576a
    PUSH EBX                            ; 0042576e
    ADD EAX,ESI                         ; 0042576f
    PUSH EAX                            ; 00425771
    MOV EDX,dword ptr [0x00612560]      ; 00425772 | DAT_00612560
    PUSH EDX                            ; 00425778
    MOV dword ptr [ESP + 0x24],EAX      ; 00425779
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_00483e70 ; 0042577d
        ;   XREF to: 00483e70 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_00483e70(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
    ADD ESP,0xc                         ; 00425782
    PUSH EDI                            ; 00425785
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00425786
    PUSH ECX                            ; 0042578a
    MOV EAX,[0x00612560]                ; 0042578b | DAT_00612560
    INC EBX                             ; 00425790
    PUSH EAX                            ; 00425791
    INC ESI                             ; 00425792
    INC EDI                             ; 00425793
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_00483e70 ; 00425794
        ;   XREF to: 00483e70 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_00483e70(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
    ADD ESP,0xc                         ; 00425799
    CMP ESI,0xc                         ; 0042579c
    JL 0x0042576a                       ; 0042579f
        ;   XREF to: 0042576a (CONDITIONAL_JUMP)  ; LAB_0042576a
    MOV EDX,dword ptr [ESP + 0x24]      ; 004257a1
    ADD EDX,0xc                         ; 004257a5
    MOV dword ptr [ESP + 0x24],EDX      ; 004257a8
    CMP EDX,0x90                        ; 004257ac
    JNZ 0x00425758                      ; 004257b2
        ;   XREF to: 00425758 (CONDITIONAL_JUMP)  ; LAB_00425758
    MOV ESP,EBP                         ; 004257b4
    POP EBP                             ; 004257b6
    POP EDI                             ; 004257b7
    POP ESI                             ; 004257b8
    POP EBX                             ; 004257b9
    RET                                 ; 004257ba


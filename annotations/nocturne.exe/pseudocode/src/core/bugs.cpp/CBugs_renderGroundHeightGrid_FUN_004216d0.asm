; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bugs_cpp_CBugs_renderGroundHeightGrid_FUN_004216d0(CBugs *this_ptr)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   double DOUBLE_00579c55 = 0.25
;   undefined4 DAT_0059ae90
;   float FLOAT_0059aea8 = 0.5
;   undefined4 DAT_005ae704
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_004610a0
;   engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00460f10
;   engine_special.cpp_transformAndProjectPoint_FUN_0053075c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004216d0
        ;   Label: core_bugs.cpp_CBugs_renderGroundHeightGrid_FUN_004216d0
    PUSH ESI                            ; 004216d1
    PUSH EDI                            ; 004216d2
    PUSH EBP                            ; 004216d3
    MOV EBP,ESP                         ; 004216d4
    SUB ESP,0x34                        ; 004216d6
    AND ESP,0xfffffff8                  ; 004216d9
    XOR EDX,EDX                         ; 004216dc
    MOV EAX,dword ptr [EBP + 0x14]      ; 004216de
    MOV dword ptr [ESP + 0x20],EDX      ; 004216e1
    MOV dword ptr [ESP + 0x1c],EAX      ; 004216e5
    MOV EAX,dword ptr [ESP + 0x20]      ; 004216e9
        ;   Label: LAB_004216e9
    MOV dword ptr [ESP + 0x30],EAX      ; 004216ed
    FILD dword ptr [ESP + 0x30]         ; 004216f1
    FMUL float ptr [0x0059aea8]         ; 004216f5 | FLOAT_0059aea8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004216fb
    MOV ECX,dword ptr [ESP + 0x20]      ; 004216fe
    FADD float ptr [EAX + 0x19854]      ; 00421702
    IMUL EAX,ECX,0x30                   ; 00421708
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0042170b
    XOR ESI,ESI                         ; 0042170f
    FSTP float ptr [ESP]                ; 00421711
    MOV dword ptr [ESP + 0x2c],EAX      ; 00421714
    MOV dword ptr [ESP + 0x30],ESI      ; 00421718
        ;   Label: LAB_00421718
    FILD dword ptr [ESP + 0x30]         ; 0042171c
    FMUL float ptr [0x0059aea8]         ; 00421720 | FLOAT_0059aea8
    MOV EAX,dword ptr [EBP + 0x14]      ; 00421726
    LEA EBX,[ESP + 0xc]                 ; 00421729
    FADD float ptr [EAX + 0x19858]      ; 0042172d
    MOV EDX,dword ptr [0x005ae704]      ; 00421733 | DAT_005ae704
    FSTP float ptr [ESP + 0x8]          ; 00421739
    FLD float ptr [EDI + 0x12720]       ; 0042173d
    FADD double ptr [0x00579c55]        ; 00421743 | DOUBLE_00579c55
    MOV EAX,ESP                         ; 00421749
    FSTP float ptr [ESP + 0x4]          ; 0042174b
    FLD float ptr [EAX]                 ; 0042174f
    FMUL float ptr [0x0059ae90]         ; 00421751 | DAT_0059ae90
    FISTP dword ptr [EBX]               ; 00421757
    FLD float ptr [EAX + 0x4]           ; 00421759
    FMUL float ptr [0x0059ae90]         ; 0042175c | DAT_0059ae90
    FISTP dword ptr [EBX + 0x4]         ; 00421762
    FLD float ptr [EAX + 0x8]           ; 00421765
    FMUL float ptr [0x0059ae90]         ; 00421768 | DAT_0059ae90
    FISTP dword ptr [EBX + 0x8]         ; 0042176e
    LEA EAX,[ESP + 0xc]                 ; 00421771
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00421775
    PUSH EAX                            ; 00421779
    MOV EAX,dword ptr [EDX]             ; 0042177a
    ADD EAX,EBX                         ; 0042177c
    PUSH EAX                            ; 0042177e
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 0042177f
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00421784
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00421787
    ADD EDI,0x4                         ; 0042178b
    ADD EAX,0x240                       ; 0042178e
    INC ESI                             ; 00421793
    MOV dword ptr [ESP + 0x2c],EAX      ; 00421794
    CMP ESI,0xc                         ; 00421798
    JL 0x00421718                       ; 0042179b
        ;   XREF to: 00421718 (CONDITIONAL_JUMP)  ; LAB_00421718
    MOV ECX,dword ptr [ESP + 0x20]      ; 004217a1
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004217a5
    INC ECX                             ; 004217a9
    ADD EDX,0x30                        ; 004217aa
    MOV dword ptr [ESP + 0x20],ECX      ; 004217ad
    MOV dword ptr [ESP + 0x1c],EDX      ; 004217b1
    CMP ECX,0xc                         ; 004217b5
    JL 0x004216e9                       ; 004217b8
        ;   XREF to: 004216e9 (CONDITIONAL_JUMP)  ; LAB_004216e9
    PUSH -0x1                           ; 004217be
    MOV ESI,dword ptr [0x005ae704]      ; 004217c0 | DAT_005ae704
    PUSH ESI                            ; 004217c6
    MOV EDI,0xc                         ; 004217c7
    CALL engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00460f10 ; 004217cc
        ;   XREF to: 00460f10 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00460f10(CDemonRenderer * this_ptr, int color)
    ADD ESP,0x8                         ; 004217d1
    MOV dword ptr [ESP + 0x24],EDI      ; 004217d4
    MOV EAX,dword ptr [ESP + 0x24]      ; 004217d8
        ;   Label: LAB_004217d8
    MOV dword ptr [ESP + 0x28],EAX      ; 004217dc
    LEA EDI,[EAX + -0xb]                ; 004217e0
    MOV ESI,0x1                         ; 004217e3
    MOV EBX,EAX                         ; 004217e8
    MOV EAX,dword ptr [ESP + 0x28]      ; 004217ea
        ;   Label: LAB_004217ea
    PUSH EBX                            ; 004217ee
    ADD EAX,ESI                         ; 004217ef
    PUSH EAX                            ; 004217f1
    MOV EDX,dword ptr [0x005ae704]      ; 004217f2 | DAT_005ae704
    PUSH EDX                            ; 004217f8
    MOV dword ptr [ESP + 0x24],EAX      ; 004217f9
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_004610a0 ; 004217fd
        ;   XREF to: 004610a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_004610a0(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
    ADD ESP,0xc                         ; 00421802
    PUSH EDI                            ; 00421805
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00421806
    PUSH ECX                            ; 0042180a
    MOV EAX,[0x005ae704]                ; 0042180b | DAT_005ae704
    INC EBX                             ; 00421810
    PUSH EAX                            ; 00421811
    INC ESI                             ; 00421812
    INC EDI                             ; 00421813
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_004610a0 ; 00421814
        ;   XREF to: 004610a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_004610a0(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
    ADD ESP,0xc                         ; 00421819
    CMP ESI,0xc                         ; 0042181c
    JL 0x004217ea                       ; 0042181f
        ;   XREF to: 004217ea (CONDITIONAL_JUMP)  ; LAB_004217ea
    MOV EDX,dword ptr [ESP + 0x24]      ; 00421821
    ADD EDX,0xc                         ; 00421825
    MOV dword ptr [ESP + 0x24],EDX      ; 00421828
    CMP EDX,0x90                        ; 0042182c
    JNZ 0x004217d8                      ; 00421832
        ;   XREF to: 004217d8 (CONDITIONAL_JUMP)  ; LAB_004217d8
    MOV ESP,EBP                         ; 00421834
    POP EBP                             ; 00421836
    POP EDI                             ; 00421837
    POP ESI                             ; 00421838
    POP EBX                             ; 00421839
    RET                                 ; 0042183a


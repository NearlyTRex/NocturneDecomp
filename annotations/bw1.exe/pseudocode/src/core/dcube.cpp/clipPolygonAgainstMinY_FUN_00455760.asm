; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcube_cpp_clipPolygonAgainstMinY_FUN_00455760(float min_y_plane)
;
; Parameters:
; float            Stack[0x4]:4   min_y_plane
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_00455754 = 00455814
;   undefined1* PTR_caseD_3_0045575c = 004557f9
;   int g_INT_0152be10
;   uint g_CubeClipStage2Count
;
; Called Functions:
;   core_dcube.cpp_clipEdgeToPlane_FUN_00455460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00455760
        ;   Label: core_dcube.cpp_clipPolygonAgainstMinY_FUN_00455760
    PUSH ESI                            ; 00455761
    PUSH EDI                            ; 00455762
    PUSH EBP                            ; 00455763
    MOV EBP,ESP                         ; 00455764
    SUB ESP,0x8                         ; 00455766
    AND ESP,0xfffffff8                  ; 00455769
    MOV EBX,dword ptr [0x0152bed4]      ; 0045576c | g_CubeClipStage2Count
    MOV EDX,dword ptr [EBP + 0x14]      ; 00455772
    MOV dword ptr [ESP],EDX             ; 00455775
    MOV EDX,dword ptr [0x0152be10]      ; 00455778 | g_INT_0152be10
    XOR EDI,EDI                         ; 0045577e
    TEST EDX,EDX                        ; 00455780
    JLE 0x00455807                      ; 00455782
        ;   XREF to: 00455807 (CONDITIONAL_JUMP)  ; LAB_00455807
    MOV ESI,0x152be14                   ; 00455788
    MOV EAX,[0x0152be10]                ; 0045578d | g_INT_0152be10
        ;   Label: LAB_0045578d
    LEA ECX,[EDI + 0x1]                 ; 00455792
    CMP ECX,EAX                         ; 00455795
    JNZ 0x0045579b                      ; 00455797
        ;   XREF to: 0045579b (CONDITIONAL_JUMP)  ; LAB_0045579b
    XOR ECX,EAX                         ; 00455799
    IMUL ECX,ECX,0xc                    ; 0045579b
        ;   Label: LAB_0045579b
    MOV EAX,0x152be14                   ; 0045579e
    FLD float ptr [ESI + 0x4]           ; 004557a3
    ADD EAX,ECX                         ; 004557a6
    MOV EDX,ESI                         ; 004557a8
    MOV dword ptr [ESP + 0x4],EAX       ; 004557aa
    XOR ECX,ECX                         ; 004557ae
    FCOMP float ptr [ESP]               ; 004557b0
    FNSTSW AX                           ; 004557b3
    SAHF                                ; 004557b5
    JNC 0x004557bd                      ; 004557b6
        ;   XREF to: 004557bd (CONDITIONAL_JUMP)  ; LAB_004557bd
    MOV ECX,0x1                         ; 004557b8
    MOV EAX,dword ptr [ESP + 0x4]       ; 004557bd
        ;   Label: LAB_004557bd
    FLD float ptr [EAX + 0x4]           ; 004557c1
    FCOMP float ptr [ESP]               ; 004557c4
    FNSTSW AX                           ; 004557c7
    SAHF                                ; 004557c9
    JNC 0x004557cf                      ; 004557ca
        ;   XREF to: 004557cf (CONDITIONAL_JUMP)  ; LAB_004557cf
    OR CL,0x2                           ; 004557cc
    CMP ECX,0x3                         ; 004557cf
        ;   Label: LAB_004557cf
    JA 0x004557f9                       ; 004557d2
        ;   XREF to: 004557f9 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x455750]  ; 004557d4 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 004557db
        ;   Label: caseD_0
    ADD ECX,0x152bed8                   ; 004557de
    CMP ECX,EDX                         ; 004557e4
    JZ 0x004557f8                       ; 004557e6
        ;   XREF to: 004557f8 (CONDITIONAL_JUMP)  ; LAB_004557f8
    MOV EAX,dword ptr [EDX]             ; 004557e8
    MOV dword ptr [ECX],EAX             ; 004557ea
    MOV EAX,dword ptr [EDX + 0x4]       ; 004557ec
    MOV dword ptr [ECX + 0x4],EAX       ; 004557ef
    MOV EAX,dword ptr [EDX + 0x8]       ; 004557f2
    MOV dword ptr [ECX + 0x8],EAX       ; 004557f5
    INC EBX                             ; 004557f8
        ;   Label: LAB_004557f8
    MOV ECX,dword ptr [0x0152be10]      ; 004557f9 | g_INT_0152be10
        ;   Label: caseD_3
    INC EDI                             ; 004557ff
    ADD ESI,0xc                         ; 00455800
    CMP EDI,ECX                         ; 00455803
    JL 0x0045578d                       ; 00455805
        ;   XREF to: 0045578d (CONDITIONAL_JUMP)  ; LAB_0045578d
    MOV dword ptr [0x0152bed4],EBX      ; 00455807 | g_CubeClipStage2Count
        ;   Label: LAB_00455807
    MOV ESP,EBP                         ; 0045580d
    POP EBP                             ; 0045580f
    POP EDI                             ; 00455810
    POP ESI                             ; 00455811
    POP EBX                             ; 00455812
    RET                                 ; 00455813
    IMUL ECX,EBX,0xc                    ; 00455814
        ;   Label: caseD_1
    FLD float ptr [ESP]                 ; 00455817
    SUB ESP,0x8                         ; 0045581a
    FSTP double ptr [ESP]               ; 0045581d
    PUSH 0x0                            ; 00455820
    PUSH 0x0                            ; 00455822
    PUSH 0xbff00000                     ; 00455824
    PUSH 0x0                            ; 00455829
    PUSH 0x0                            ; 0045582b
    PUSH 0x0                            ; 0045582d
    ADD ECX,0x152bed8                   ; 0045582f
    PUSH ECX                            ; 00455835
    PUSH EDX                            ; 00455836
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00455837
    PUSH EAX                            ; 0045583b
    MOV dword ptr [0x0152bed4],EBX      ; 0045583c | g_CubeClipStage2Count
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_00455460 ; 00455842
        ;   XREF to: 00455460 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipEdgeToPlane_FUN_00455460(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, ...)
    MOV EBX,dword ptr [0x0152bed4]      ; 00455847 | g_CubeClipStage2Count
    ADD ESP,0x2c                        ; 0045584d
    JMP 0x004557f8                      ; 00455850
        ;   XREF to: 004557f8 (UNCONDITIONAL_JUMP)  ; LAB_004557f8
    IMUL ECX,EBX,0xc                    ; 00455852
        ;   Label: caseD_2
    ADD ECX,0x152bed8                   ; 00455855
    CMP ECX,EDX                         ; 0045585b
    JZ 0x0045586f                       ; 0045585d
        ;   XREF to: 0045586f (CONDITIONAL_JUMP)  ; LAB_0045586f
    MOV EAX,dword ptr [EDX]             ; 0045585f
    MOV dword ptr [ECX],EAX             ; 00455861
    MOV EAX,dword ptr [EDX + 0x4]       ; 00455863
    MOV dword ptr [ECX + 0x4],EAX       ; 00455866
    MOV EAX,dword ptr [EDX + 0x8]       ; 00455869
    MOV dword ptr [ECX + 0x8],EAX       ; 0045586c
    INC EBX                             ; 0045586f
        ;   Label: LAB_0045586f
    IMUL ECX,EBX,0xc                    ; 00455870
    FLD float ptr [ESP]                 ; 00455873
    SUB ESP,0x8                         ; 00455876
    FSTP double ptr [ESP]               ; 00455879
    PUSH 0x0                            ; 0045587c
    PUSH 0x0                            ; 0045587e
    PUSH 0xbff00000                     ; 00455880
    PUSH 0x0                            ; 00455885
    PUSH 0x0                            ; 00455887
    PUSH 0x0                            ; 00455889
    ADD ECX,0x152bed8                   ; 0045588b
    PUSH ECX                            ; 00455891
    MOV ECX,dword ptr [ESP + 0x28]      ; 00455892
    PUSH ECX                            ; 00455896
    PUSH EDX                            ; 00455897
    MOV dword ptr [0x0152bed4],EBX      ; 00455898 | g_CubeClipStage2Count
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_00455460 ; 0045589e
        ;   XREF to: 00455460 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipEdgeToPlane_FUN_00455460(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, ...)
    MOV EBX,dword ptr [0x0152bed4]      ; 004558a3 | g_CubeClipStage2Count
    ADD ESP,0x2c                        ; 004558a9
    JMP 0x004557f8                      ; 004558ac
        ;   XREF to: 004557f8 (UNCONDITIONAL_JUMP)  ; LAB_004557f8


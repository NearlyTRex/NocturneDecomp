; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcube_cpp_clipPolygonAgainstMaxY_FUN_00455600(float max_y_plane)
;
; Parameters:
; float            Stack[0x4]:4   max_y_plane
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_004555f4 = 004556ac
;   undefined1* PTR_caseD_3_004555fc = 00455691
;   int g_INT_0152bd4c
;   int g_INT_0152be10
;
; Called Functions:
;   core_dcube.cpp_clipEdgeToPlane_FUN_00455460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00455600
        ;   Label: core_dcube.cpp_clipPolygonAgainstMaxY_FUN_00455600
    PUSH ESI                            ; 00455601
    PUSH EDI                            ; 00455602
    PUSH EBP                            ; 00455603
    MOV EBP,ESP                         ; 00455604
    SUB ESP,0x4                         ; 00455606
    AND ESP,0xfffffff8                  ; 00455609
    MOV EBX,dword ptr [0x0152be10]      ; 0045560c | g_INT_0152be10
    MOV EDX,dword ptr [0x0152bd4c]      ; 00455612 | g_INT_0152bd4c
    XOR ESI,ESI                         ; 00455618
    TEST EDX,EDX                        ; 0045561a
    JLE 0x0045569f                      ; 0045561c
        ;   XREF to: 0045569f (CONDITIONAL_JUMP)  ; LAB_0045569f
    MOV EDI,0x152bd50                   ; 00455622
    MOV EAX,[0x0152bd4c]                ; 00455627 | g_INT_0152bd4c
        ;   Label: LAB_00455627
    LEA ECX,[ESI + 0x1]                 ; 0045562c
    CMP ECX,EAX                         ; 0045562f
    JNZ 0x00455635                      ; 00455631
        ;   XREF to: 00455635 (CONDITIONAL_JUMP)  ; LAB_00455635
    XOR ECX,EAX                         ; 00455633
    IMUL ECX,ECX,0xc                    ; 00455635
        ;   Label: LAB_00455635
    MOV EAX,0x152bd50                   ; 00455638
    FLD float ptr [EDI + 0x4]           ; 0045563d
    ADD EAX,ECX                         ; 00455640
    MOV EDX,EDI                         ; 00455642
    MOV dword ptr [ESP],EAX             ; 00455644
    XOR ECX,ECX                         ; 00455647
    FCOMP float ptr [EBP + 0x14]        ; 00455649
    FNSTSW AX                           ; 0045564c
    SAHF                                ; 0045564e
    JBE 0x00455656                      ; 0045564f
        ;   XREF to: 00455656 (CONDITIONAL_JUMP)  ; LAB_00455656
    MOV ECX,0x1                         ; 00455651
    MOV EAX,dword ptr [ESP]             ; 00455656
        ;   Label: LAB_00455656
    FLD float ptr [EAX + 0x4]           ; 00455659
    FCOMP float ptr [EBP + 0x14]        ; 0045565c
    FNSTSW AX                           ; 0045565f
    SAHF                                ; 00455661
    JBE 0x00455667                      ; 00455662
        ;   XREF to: 00455667 (CONDITIONAL_JUMP)  ; LAB_00455667
    OR CL,0x2                           ; 00455664
    CMP ECX,0x3                         ; 00455667
        ;   Label: LAB_00455667
    JA 0x00455691                       ; 0045566a
        ;   XREF to: 00455691 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x4555f0]  ; 0045566c | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 00455673
        ;   Label: caseD_0
    ADD ECX,0x152be14                   ; 00455676
    CMP ECX,EDX                         ; 0045567c
    JZ 0x00455690                       ; 0045567e
        ;   XREF to: 00455690 (CONDITIONAL_JUMP)  ; LAB_00455690
    MOV EAX,dword ptr [EDX]             ; 00455680
    MOV dword ptr [ECX],EAX             ; 00455682
    MOV EAX,dword ptr [EDX + 0x4]       ; 00455684
    MOV dword ptr [ECX + 0x4],EAX       ; 00455687
    MOV EAX,dword ptr [EDX + 0x8]       ; 0045568a
    MOV dword ptr [ECX + 0x8],EAX       ; 0045568d
    INC EBX                             ; 00455690
        ;   Label: LAB_00455690
    MOV ECX,dword ptr [0x0152bd4c]      ; 00455691 | g_INT_0152bd4c
        ;   Label: caseD_3
    INC ESI                             ; 00455697
    ADD EDI,0xc                         ; 00455698
    CMP ESI,ECX                         ; 0045569b
    JL 0x00455627                       ; 0045569d
        ;   XREF to: 00455627 (CONDITIONAL_JUMP)  ; LAB_00455627
    MOV dword ptr [0x0152be10],EBX      ; 0045569f | g_INT_0152be10
        ;   Label: LAB_0045569f
    MOV ESP,EBP                         ; 004556a5
    POP EBP                             ; 004556a7
    POP EDI                             ; 004556a8
    POP ESI                             ; 004556a9
    POP EBX                             ; 004556aa
    RET                                 ; 004556ab
    IMUL ECX,EBX,0xc                    ; 004556ac
        ;   Label: caseD_1
    FLD float ptr [EBP + 0x14]          ; 004556af
    SUB ESP,0x8                         ; 004556b2
    FCHS                                ; 004556b5
    FSTP double ptr [ESP]               ; 004556b7
    PUSH 0x0                            ; 004556ba
    PUSH 0x0                            ; 004556bc
    PUSH 0x3ff00000                     ; 004556be
    PUSH 0x0                            ; 004556c3
    PUSH 0x0                            ; 004556c5
    PUSH 0x0                            ; 004556c7
    ADD ECX,0x152be14                   ; 004556c9
    PUSH ECX                            ; 004556cf
    PUSH EDX                            ; 004556d0
    MOV EAX,dword ptr [ESP + 0x28]      ; 004556d1
    PUSH EAX                            ; 004556d5
    MOV dword ptr [0x0152be10],EBX      ; 004556d6 | g_INT_0152be10
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_00455460 ; 004556dc
        ;   XREF to: 00455460 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipEdgeToPlane_FUN_00455460(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, ...)
    MOV EBX,dword ptr [0x0152be10]      ; 004556e1 | g_INT_0152be10
    ADD ESP,0x2c                        ; 004556e7
    JMP 0x00455690                      ; 004556ea
        ;   XREF to: 00455690 (UNCONDITIONAL_JUMP)  ; LAB_00455690
    IMUL ECX,EBX,0xc                    ; 004556ec
        ;   Label: caseD_2
    ADD ECX,0x152be14                   ; 004556ef
    CMP ECX,EDX                         ; 004556f5
    JZ 0x00455709                       ; 004556f7
        ;   XREF to: 00455709 (CONDITIONAL_JUMP)  ; LAB_00455709
    MOV EAX,dword ptr [EDX]             ; 004556f9
    MOV dword ptr [ECX],EAX             ; 004556fb
    MOV EAX,dword ptr [EDX + 0x4]       ; 004556fd
    MOV dword ptr [ECX + 0x4],EAX       ; 00455700
    MOV EAX,dword ptr [EDX + 0x8]       ; 00455703
    MOV dword ptr [ECX + 0x8],EAX       ; 00455706
    INC EBX                             ; 00455709
        ;   Label: LAB_00455709
    IMUL ECX,EBX,0xc                    ; 0045570a
    FLD float ptr [EBP + 0x14]          ; 0045570d
    SUB ESP,0x8                         ; 00455710
    FCHS                                ; 00455713
    FSTP double ptr [ESP]               ; 00455715
    PUSH 0x0                            ; 00455718
    PUSH 0x0                            ; 0045571a
    PUSH 0x3ff00000                     ; 0045571c
    PUSH 0x0                            ; 00455721
    PUSH 0x0                            ; 00455723
    PUSH 0x0                            ; 00455725
    ADD ECX,0x152be14                   ; 00455727
    PUSH ECX                            ; 0045572d
    MOV ECX,dword ptr [ESP + 0x24]      ; 0045572e
    PUSH ECX                            ; 00455732
    PUSH EDX                            ; 00455733
    MOV dword ptr [0x0152be10],EBX      ; 00455734 | g_INT_0152be10
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_00455460 ; 0045573a
        ;   XREF to: 00455460 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipEdgeToPlane_FUN_00455460(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, ...)
    MOV EBX,dword ptr [0x0152be10]      ; 0045573f | g_INT_0152be10
    ADD ESP,0x2c                        ; 00455745
    JMP 0x00455690                      ; 00455748
        ;   XREF to: 00455690 (UNCONDITIONAL_JUMP)  ; LAB_00455690


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtri_cpp_clipPolygonToNear_FUN_00491520(float z_near)
;
; Parameters:
; float            Stack[0x4]:4   z_near
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_00491514 = 004915d4
;   undefined1* PTR_caseD_3_0049151c = 004915b9
;   int g_ClipBuffer4VertexCount
;   int g_ClipBuffer5VertexCount
;
; Called Functions:
;   core_dtri.cpp_clipLineToPlane_FUN_00490df0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00491520
        ;   Label: core_dtri.cpp_clipPolygonToNear_FUN_00491520
    PUSH ESI                            ; 00491521
    PUSH EDI                            ; 00491522
    PUSH EBP                            ; 00491523
    MOV EBP,ESP                         ; 00491524
    SUB ESP,0x8                         ; 00491526
    AND ESP,0xfffffff8                  ; 00491529
    MOV EBX,dword ptr [0x01c3d814]      ; 0049152c | g_ClipBuffer5VertexCount
    MOV EDX,dword ptr [EBP + 0x14]      ; 00491532
    MOV dword ptr [ESP],EDX             ; 00491535
    MOV EDX,dword ptr [0x01c3d750]      ; 00491538 | g_ClipBuffer4VertexCount
    XOR EDI,EDI                         ; 0049153e
    TEST EDX,EDX                        ; 00491540
    JLE 0x004915c7                      ; 00491542
        ;   XREF to: 004915c7 (CONDITIONAL_JUMP)  ; LAB_004915c7
    MOV ESI,0x1c3d754                   ; 00491548
    MOV EAX,[0x01c3d750]                ; 0049154d | g_ClipBuffer4VertexCount
        ;   Label: LAB_0049154d
    LEA ECX,[EDI + 0x1]                 ; 00491552
    CMP ECX,EAX                         ; 00491555
    JNZ 0x0049155b                      ; 00491557
        ;   XREF to: 0049155b (CONDITIONAL_JUMP)  ; LAB_0049155b
    XOR ECX,EAX                         ; 00491559
    IMUL ECX,ECX,0xc                    ; 0049155b
        ;   Label: LAB_0049155b
    MOV EAX,0x1c3d754                   ; 0049155e
    FLD float ptr [ESI + 0x8]           ; 00491563
    ADD EAX,ECX                         ; 00491566
    MOV EDX,ESI                         ; 00491568
    MOV dword ptr [ESP + 0x4],EAX       ; 0049156a
    XOR ECX,ECX                         ; 0049156e
    FCOMP float ptr [ESP]               ; 00491570
    FNSTSW AX                           ; 00491573
    SAHF                                ; 00491575
    JNC 0x0049157d                      ; 00491576
        ;   XREF to: 0049157d (CONDITIONAL_JUMP)  ; LAB_0049157d
    MOV ECX,0x1                         ; 00491578
    MOV EAX,dword ptr [ESP + 0x4]       ; 0049157d
        ;   Label: LAB_0049157d
    FLD float ptr [EAX + 0x8]           ; 00491581
    FCOMP float ptr [ESP]               ; 00491584
    FNSTSW AX                           ; 00491587
    SAHF                                ; 00491589
    JNC 0x0049158f                      ; 0049158a
        ;   XREF to: 0049158f (CONDITIONAL_JUMP)  ; LAB_0049158f
    OR CL,0x2                           ; 0049158c
    CMP ECX,0x3                         ; 0049158f
        ;   Label: LAB_0049158f
    JA 0x004915b9                       ; 00491592
        ;   XREF to: 004915b9 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x491510]  ; 00491594 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 0049159b
        ;   Label: caseD_0
    ADD ECX,0x1c3d818                   ; 0049159e
    CMP ECX,EDX                         ; 004915a4
    JZ 0x004915b8                       ; 004915a6
        ;   XREF to: 004915b8 (CONDITIONAL_JUMP)  ; LAB_004915b8
    MOV EAX,dword ptr [EDX]             ; 004915a8
    MOV dword ptr [ECX],EAX             ; 004915aa
    MOV EAX,dword ptr [EDX + 0x4]       ; 004915ac
    MOV dword ptr [ECX + 0x4],EAX       ; 004915af
    MOV EAX,dword ptr [EDX + 0x8]       ; 004915b2
    MOV dword ptr [ECX + 0x8],EAX       ; 004915b5
    INC EBX                             ; 004915b8
        ;   Label: LAB_004915b8
    MOV ECX,dword ptr [0x01c3d750]      ; 004915b9 | g_ClipBuffer4VertexCount
        ;   Label: caseD_3
    INC EDI                             ; 004915bf
    ADD ESI,0xc                         ; 004915c0
    CMP EDI,ECX                         ; 004915c3
    JL 0x0049154d                       ; 004915c5
        ;   XREF to: 0049154d (CONDITIONAL_JUMP)  ; LAB_0049154d
    MOV dword ptr [0x01c3d814],EBX      ; 004915c7 | g_ClipBuffer5VertexCount
        ;   Label: LAB_004915c7
    MOV ESP,EBP                         ; 004915cd
    POP EBP                             ; 004915cf
    POP EDI                             ; 004915d0
    POP ESI                             ; 004915d1
    POP EBX                             ; 004915d2
    RET                                 ; 004915d3
    IMUL ECX,EBX,0xc                    ; 004915d4
        ;   Label: caseD_1
    FLD float ptr [ESP]                 ; 004915d7
    SUB ESP,0x8                         ; 004915da
    FSTP double ptr [ESP]               ; 004915dd
    PUSH 0xbff00000                     ; 004915e0
    PUSH 0x0                            ; 004915e5
    PUSH 0x0                            ; 004915e7
    PUSH 0x0                            ; 004915e9
    PUSH 0x0                            ; 004915eb
    PUSH 0x0                            ; 004915ed
    ADD ECX,0x1c3d818                   ; 004915ef
    PUSH ECX                            ; 004915f5
    PUSH EDX                            ; 004915f6
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004915f7
    PUSH EAX                            ; 004915fb
    MOV dword ptr [0x01c3d814],EBX      ; 004915fc | g_ClipBuffer5VertexCount
    CALL core_dtri.cpp_clipLineToPlane_FUN_00490df0 ; 00491602
        ;   XREF to: 00490df0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_00490df0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EBX,dword ptr [0x01c3d814]      ; 00491607 | g_ClipBuffer5VertexCount
    ADD ESP,0x2c                        ; 0049160d
    JMP 0x004915b8                      ; 00491610
        ;   XREF to: 004915b8 (UNCONDITIONAL_JUMP)  ; LAB_004915b8
    IMUL ECX,EBX,0xc                    ; 00491612
        ;   Label: caseD_2
    ADD ECX,0x1c3d818                   ; 00491615
    CMP ECX,EDX                         ; 0049161b
    JZ 0x0049162f                       ; 0049161d
        ;   XREF to: 0049162f (CONDITIONAL_JUMP)  ; LAB_0049162f
    MOV EAX,dword ptr [EDX]             ; 0049161f
    MOV dword ptr [ECX],EAX             ; 00491621
    MOV EAX,dword ptr [EDX + 0x4]       ; 00491623
    MOV dword ptr [ECX + 0x4],EAX       ; 00491626
    MOV EAX,dword ptr [EDX + 0x8]       ; 00491629
    MOV dword ptr [ECX + 0x8],EAX       ; 0049162c
    INC EBX                             ; 0049162f
        ;   Label: LAB_0049162f
    IMUL ECX,EBX,0xc                    ; 00491630
    FLD float ptr [ESP]                 ; 00491633
    SUB ESP,0x8                         ; 00491636
    FSTP double ptr [ESP]               ; 00491639
    PUSH 0xbff00000                     ; 0049163c
    PUSH 0x0                            ; 00491641
    PUSH 0x0                            ; 00491643
    PUSH 0x0                            ; 00491645
    PUSH 0x0                            ; 00491647
    PUSH 0x0                            ; 00491649
    ADD ECX,0x1c3d818                   ; 0049164b
    PUSH ECX                            ; 00491651
    MOV ECX,dword ptr [ESP + 0x28]      ; 00491652
    PUSH ECX                            ; 00491656
    PUSH EDX                            ; 00491657
    MOV dword ptr [0x01c3d814],EBX      ; 00491658 | g_ClipBuffer5VertexCount
    CALL core_dtri.cpp_clipLineToPlane_FUN_00490df0 ; 0049165e
        ;   XREF to: 00490df0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_00490df0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EBX,dword ptr [0x01c3d814]      ; 00491663 | g_ClipBuffer5VertexCount
    ADD ESP,0x2c                        ; 00491669
    JMP 0x004915b8                      ; 0049166c
        ;   XREF to: 004915b8 (UNCONDITIONAL_JUMP)  ; LAB_004915b8


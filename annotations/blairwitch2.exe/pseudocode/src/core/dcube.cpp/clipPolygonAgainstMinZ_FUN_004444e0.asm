; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcube_cpp_clipPolygonAgainstMinZ_FUN_004444e0(float min_z_plane)
;
; Parameters:
; float            Stack[0x4]:4   min_z_plane
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_004444d4 = 00444594
;   undefined1* PTR_caseD_3_004444dc = 00444579
;   undefined4 DAT_01510b5c
;   undefined4 DAT_01510c20
;   undefined4 DAT_01510c24
;   undefined4 DAT_01510c28
;   undefined4 DAT_01510c2c
;
; Called Functions:
;   core_dcube.cpp_clipEdgeToPlane_FUN_00443db0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004444e0
        ;   Label: core_dcube.cpp_clipPolygonAgainstMinZ_FUN_004444e0
    PUSH ESI                            ; 004444e1
    PUSH EDI                            ; 004444e2
    PUSH EBP                            ; 004444e3
    MOV EBP,ESP                         ; 004444e4
    SUB ESP,0x8                         ; 004444e6
    AND ESP,0xfffffff8                  ; 004444e9
    MOV EBX,dword ptr [0x01510c20]      ; 004444ec | DAT_01510c20
    MOV EDX,dword ptr [EBP + 0x14]      ; 004444f2
    MOV dword ptr [ESP],EDX             ; 004444f5
    MOV EDX,dword ptr [0x01510b5c]      ; 004444f8 | DAT_01510b5c
    XOR EDI,EDI                         ; 004444fe
    TEST EDX,EDX                        ; 00444500
    JLE 0x00444587                      ; 00444502
        ;   XREF to: 00444587 (CONDITIONAL_JUMP)  ; LAB_00444587
    MOV ESI,0x1510b60                   ; 00444508
    MOV EAX,[0x01510b5c]                ; 0044450d | DAT_01510b5c
        ;   Label: LAB_0044450d
    LEA ECX,[EDI + 0x1]                 ; 00444512
    CMP ECX,EAX                         ; 00444515
    JNZ 0x0044451b                      ; 00444517
        ;   XREF to: 0044451b (CONDITIONAL_JUMP)  ; LAB_0044451b
    XOR ECX,EAX                         ; 00444519
    IMUL ECX,ECX,0xc                    ; 0044451b
        ;   Label: LAB_0044451b
    MOV EAX,0x1510b60                   ; 0044451e
    FLD float ptr [ESI + 0x8]           ; 00444523
    ADD EAX,ECX                         ; 00444526
    MOV EDX,ESI                         ; 00444528
    MOV dword ptr [ESP + 0x4],EAX       ; 0044452a
    XOR ECX,ECX                         ; 0044452e
    FCOMP float ptr [ESP]               ; 00444530
    FNSTSW AX                           ; 00444533
    SAHF                                ; 00444535
    JNC 0x0044453d                      ; 00444536
        ;   XREF to: 0044453d (CONDITIONAL_JUMP)  ; LAB_0044453d
    MOV ECX,0x1                         ; 00444538
    MOV EAX,dword ptr [ESP + 0x4]       ; 0044453d
        ;   Label: LAB_0044453d
    FLD float ptr [EAX + 0x8]           ; 00444541
    FCOMP float ptr [ESP]               ; 00444544
    FNSTSW AX                           ; 00444547
    SAHF                                ; 00444549
    JNC 0x0044454f                      ; 0044454a
        ;   XREF to: 0044454f (CONDITIONAL_JUMP)  ; LAB_0044454f
    OR CL,0x2                           ; 0044454c
    CMP ECX,0x3                         ; 0044454f
        ;   Label: LAB_0044454f
    JA 0x00444579                       ; 00444552
        ;   XREF to: 00444579 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x4444d0]  ; 00444554 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 0044455b
        ;   Label: caseD_0
    ADD ECX,0x1510c24                   ; 0044455e
    CMP ECX,EDX                         ; 00444564
    JZ 0x00444578                       ; 00444566
        ;   XREF to: 00444578 (CONDITIONAL_JUMP)  ; LAB_00444578
    MOV EAX,dword ptr [EDX]             ; 00444568
    MOV dword ptr [ECX],EAX             ; 0044456a | DAT_01510c24
    MOV EAX,dword ptr [EDX + 0x4]       ; 0044456c
    MOV dword ptr [ECX + 0x4],EAX       ; 0044456f | DAT_01510c28
    MOV EAX,dword ptr [EDX + 0x8]       ; 00444572
    MOV dword ptr [ECX + 0x8],EAX       ; 00444575 | DAT_01510c2c
    INC EBX                             ; 00444578
        ;   Label: LAB_00444578
    MOV ECX,dword ptr [0x01510b5c]      ; 00444579 | DAT_01510b5c
        ;   Label: caseD_3
    INC EDI                             ; 0044457f
    ADD ESI,0xc                         ; 00444580
    CMP EDI,ECX                         ; 00444583
    JL 0x0044450d                       ; 00444585
        ;   XREF to: 0044450d (CONDITIONAL_JUMP)  ; LAB_0044450d
    MOV dword ptr [0x01510c20],EBX      ; 00444587 | DAT_01510c20
        ;   Label: LAB_00444587
    MOV ESP,EBP                         ; 0044458d
    POP EBP                             ; 0044458f
    POP EDI                             ; 00444590
    POP ESI                             ; 00444591
    POP EBX                             ; 00444592
    RET                                 ; 00444593
    IMUL ECX,EBX,0xc                    ; 00444594
        ;   Label: caseD_1
    FLD float ptr [ESP]                 ; 00444597
    SUB ESP,0x8                         ; 0044459a
    FSTP double ptr [ESP]               ; 0044459d
    PUSH 0xbff00000                     ; 004445a0
    PUSH 0x0                            ; 004445a5
    PUSH 0x0                            ; 004445a7
    PUSH 0x0                            ; 004445a9
    PUSH 0x0                            ; 004445ab
    PUSH 0x0                            ; 004445ad
    ADD ECX,0x1510c24                   ; 004445af
    PUSH ECX                            ; 004445b5
    PUSH EDX                            ; 004445b6
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004445b7
    PUSH EAX                            ; 004445bb
    MOV dword ptr [0x01510c20],EBX      ; 004445bc | DAT_01510c20
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_00443db0 ; 004445c2
        ;   XREF to: 00443db0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipEdgeToPlane_FUN_00443db0(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, ...)
    MOV EBX,dword ptr [0x01510c20]      ; 004445c7 | DAT_01510c20
    ADD ESP,0x2c                        ; 004445cd
    JMP 0x00444578                      ; 004445d0
        ;   XREF to: 00444578 (UNCONDITIONAL_JUMP)  ; LAB_00444578
    IMUL ECX,EBX,0xc                    ; 004445d2
        ;   Label: caseD_2
    ADD ECX,0x1510c24                   ; 004445d5
    CMP ECX,EDX                         ; 004445db
    JZ 0x004445ef                       ; 004445dd
        ;   XREF to: 004445ef (CONDITIONAL_JUMP)  ; LAB_004445ef
    MOV EAX,dword ptr [EDX]             ; 004445df
    MOV dword ptr [ECX],EAX             ; 004445e1 | DAT_01510c24
    MOV EAX,dword ptr [EDX + 0x4]       ; 004445e3
    MOV dword ptr [ECX + 0x4],EAX       ; 004445e6 | DAT_01510c28
    MOV EAX,dword ptr [EDX + 0x8]       ; 004445e9
    MOV dword ptr [ECX + 0x8],EAX       ; 004445ec | DAT_01510c2c
    INC EBX                             ; 004445ef
        ;   Label: LAB_004445ef
    IMUL ECX,EBX,0xc                    ; 004445f0
    FLD float ptr [ESP]                 ; 004445f3
    SUB ESP,0x8                         ; 004445f6
    FSTP double ptr [ESP]               ; 004445f9
    PUSH 0xbff00000                     ; 004445fc
    PUSH 0x0                            ; 00444601
    PUSH 0x0                            ; 00444603
    PUSH 0x0                            ; 00444605
    PUSH 0x0                            ; 00444607
    PUSH 0x0                            ; 00444609
    ADD ECX,0x1510c24                   ; 0044460b
    PUSH ECX                            ; 00444611
    MOV ECX,dword ptr [ESP + 0x28]      ; 00444612
    PUSH ECX                            ; 00444616
    PUSH EDX                            ; 00444617
    MOV dword ptr [0x01510c20],EBX      ; 00444618 | DAT_01510c20
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_00443db0 ; 0044461e
        ;   XREF to: 00443db0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipEdgeToPlane_FUN_00443db0(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, ...)
    MOV EBX,dword ptr [0x01510c20]      ; 00444623 | DAT_01510c20
    ADD ESP,0x2c                        ; 00444629
    JMP 0x00444578                      ; 0044462c
        ;   XREF to: 00444578 (UNCONDITIONAL_JUMP)  ; LAB_00444578


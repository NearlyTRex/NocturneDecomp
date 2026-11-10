; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcube_cpp_clipPolygonAgainstMaxZ_FUN_00444650(float max_z_plane)
;
; Parameters:
; float            Stack[0x4]:4   max_z_plane
;
; Referenced Globals:
;   void* PTR_caseD_1_00444638 = 00444704
;   void* PTR_caseD_3_00444640 = 004446e9
;   undefined4 DAT_01510c20
;   undefined4 DAT_01510c24
;   undefined4 DAT_01510c28
;   undefined4 DAT_01510c2c
;   undefined4 DAT_01510c38
;   undefined4 DAT_01510c44
;   undefined4 DAT_01510ce4
;
; Called Functions:
;   core_dcube.cpp_clipEdgeToPlane_FUN_00443db0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00444650
        ;   Label: core_dcube.cpp_clipPolygonAgainstMaxZ_FUN_00444650
    PUSH ESI                            ; 00444651
    PUSH EDI                            ; 00444652
    PUSH EBP                            ; 00444653
    MOV EBP,ESP                         ; 00444654
    SUB ESP,0x8                         ; 00444656
    AND ESP,0xfffffff8                  ; 00444659
    MOV EBX,dword ptr [0x01510ce4]      ; 0044465c | DAT_01510ce4
    MOV EDX,dword ptr [EBP + 0x14]      ; 00444662
    MOV dword ptr [ESP],EDX             ; 00444665
    MOV EDX,dword ptr [0x01510c20]      ; 00444668 | DAT_01510c20
    XOR EDI,EDI                         ; 0044466e
    TEST EDX,EDX                        ; 00444670
    JLE 0x004446f7                      ; 00444672
        ;   XREF to: 004446f7 (CONDITIONAL_JUMP)  ; LAB_004446f7
    MOV ESI,0x1510c24                   ; 00444678
    MOV EAX,[0x01510c20]                ; 0044467d | DAT_01510c20
        ;   Label: LAB_0044467d
    LEA ECX,[EDI + 0x1]                 ; 00444682
    CMP ECX,EAX                         ; 00444685
    JNZ 0x0044468b                      ; 00444687
        ;   XREF to: 0044468b (CONDITIONAL_JUMP)  ; LAB_0044468b
    XOR ECX,EAX                         ; 00444689
    IMUL ECX,ECX,0xc                    ; 0044468b
        ;   Label: LAB_0044468b
    MOV EAX,0x1510c24                   ; 0044468e
    FLD float ptr [ESI + 0x8]           ; 00444693 | DAT_01510c2c | DAT_01510c38
    ADD EAX,ECX                         ; 00444696
    MOV EDX,ESI                         ; 00444698
    MOV dword ptr [ESP + 0x4],EAX       ; 0044469a
    XOR ECX,ECX                         ; 0044469e
    FCOMP float ptr [ESP]               ; 004446a0
    FNSTSW AX                           ; 004446a3
    SAHF                                ; 004446a5
    JBE 0x004446ad                      ; 004446a6
        ;   XREF to: 004446ad (CONDITIONAL_JUMP)  ; LAB_004446ad
    MOV ECX,0x1                         ; 004446a8
    MOV EAX,dword ptr [ESP + 0x4]       ; 004446ad
        ;   Label: LAB_004446ad
    FLD float ptr [EAX + 0x8]           ; 004446b1 | DAT_01510c2c | DAT_01510c44
    FCOMP float ptr [ESP]               ; 004446b4
    FNSTSW AX                           ; 004446b7
    SAHF                                ; 004446b9
    JBE 0x004446bf                      ; 004446ba
        ;   XREF to: 004446bf (CONDITIONAL_JUMP)  ; LAB_004446bf
    OR CL,0x2                           ; 004446bc
    CMP ECX,0x3                         ; 004446bf
        ;   Label: LAB_004446bf
    JA 0x004446e9                       ; 004446c2
        ;   XREF to: 004446e9 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x444634]  ; 004446c4 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 004446cb
        ;   Label: caseD_0
    ADD ECX,0x1510ce8                   ; 004446ce
    CMP ECX,EDX                         ; 004446d4
    JZ 0x004446e8                       ; 004446d6
        ;   XREF to: 004446e8 (CONDITIONAL_JUMP)  ; LAB_004446e8
    MOV EAX,dword ptr [EDX]             ; 004446d8 | DAT_01510c24
    MOV dword ptr [ECX],EAX             ; 004446da
    MOV EAX,dword ptr [EDX + 0x4]       ; 004446dc | DAT_01510c28
    MOV dword ptr [ECX + 0x4],EAX       ; 004446df
    MOV EAX,dword ptr [EDX + 0x8]       ; 004446e2 | DAT_01510c2c
    MOV dword ptr [ECX + 0x8],EAX       ; 004446e5
    INC EBX                             ; 004446e8
        ;   Label: LAB_004446e8
    MOV ECX,dword ptr [0x01510c20]      ; 004446e9 | DAT_01510c20
        ;   Label: caseD_3
    INC EDI                             ; 004446ef
    ADD ESI,0xc                         ; 004446f0
    CMP EDI,ECX                         ; 004446f3
    JL 0x0044467d                       ; 004446f5
        ;   XREF to: 0044467d (CONDITIONAL_JUMP)  ; LAB_0044467d
    MOV dword ptr [0x01510ce4],EBX      ; 004446f7 | DAT_01510ce4
        ;   Label: LAB_004446f7
    MOV ESP,EBP                         ; 004446fd
    POP EBP                             ; 004446ff
    POP EDI                             ; 00444700
    POP ESI                             ; 00444701
    POP EBX                             ; 00444702
    RET                                 ; 00444703
    IMUL ECX,EBX,0xc                    ; 00444704
        ;   Label: caseD_1
    FLD float ptr [ESP]                 ; 00444707
    SUB ESP,0x8                         ; 0044470a
    FSTP double ptr [ESP]               ; 0044470d
    PUSH 0xbff00000                     ; 00444710
    PUSH 0x0                            ; 00444715
    PUSH 0x0                            ; 00444717
    PUSH 0x0                            ; 00444719
    PUSH 0x0                            ; 0044471b
    PUSH 0x0                            ; 0044471d
    ADD ECX,0x1510ce8                   ; 0044471f
    PUSH ECX                            ; 00444725
    PUSH EDX                            ; 00444726 | DAT_01510c24
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00444727
    PUSH EAX                            ; 0044472b
    MOV dword ptr [0x01510ce4],EBX      ; 0044472c | DAT_01510ce4
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_00443db0 ; 00444732
        ;   XREF to: 00443db0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_00443db0()
    MOV EBX,dword ptr [0x01510ce4]      ; 00444737 | DAT_01510ce4
    ADD ESP,0x2c                        ; 0044473d
    JMP 0x004446e8                      ; 00444740
        ;   XREF to: 004446e8 (UNCONDITIONAL_JUMP)  ; LAB_004446e8
    IMUL ECX,EBX,0xc                    ; 00444742
        ;   Label: caseD_2
    ADD ECX,0x1510ce8                   ; 00444745
    CMP ECX,EDX                         ; 0044474b
    JZ 0x0044475f                       ; 0044474d
        ;   XREF to: 0044475f (CONDITIONAL_JUMP)  ; LAB_0044475f
    MOV EAX,dword ptr [EDX]             ; 0044474f | DAT_01510c24
    MOV dword ptr [ECX],EAX             ; 00444751
    MOV EAX,dword ptr [EDX + 0x4]       ; 00444753 | DAT_01510c28
    MOV dword ptr [ECX + 0x4],EAX       ; 00444756
    MOV EAX,dword ptr [EDX + 0x8]       ; 00444759 | DAT_01510c2c
    MOV dword ptr [ECX + 0x8],EAX       ; 0044475c
    INC EBX                             ; 0044475f
        ;   Label: LAB_0044475f
    IMUL ECX,EBX,0xc                    ; 00444760
    FLD float ptr [ESP]                 ; 00444763
    SUB ESP,0x8                         ; 00444766
    FSTP double ptr [ESP]               ; 00444769
    PUSH 0xbff00000                     ; 0044476c
    PUSH 0x0                            ; 00444771
    PUSH 0x0                            ; 00444773
    PUSH 0x0                            ; 00444775
    PUSH 0x0                            ; 00444777
    PUSH 0x0                            ; 00444779
    ADD ECX,0x1510ce8                   ; 0044477b
    PUSH ECX                            ; 00444781
    MOV ECX,dword ptr [ESP + 0x28]      ; 00444782
    PUSH ECX                            ; 00444786
    PUSH EDX                            ; 00444787 | DAT_01510c24
    MOV dword ptr [0x01510ce4],EBX      ; 00444788 | DAT_01510ce4
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_00443db0 ; 0044478e
        ;   XREF to: 00443db0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_00443db0()
    MOV EBX,dword ptr [0x01510ce4]      ; 00444793 | DAT_01510ce4
    ADD ESP,0x2c                        ; 00444799
    JMP 0x004446e8                      ; 0044479c
        ;   XREF to: 004446e8 (UNCONDITIONAL_JUMP)  ; LAB_004446e8


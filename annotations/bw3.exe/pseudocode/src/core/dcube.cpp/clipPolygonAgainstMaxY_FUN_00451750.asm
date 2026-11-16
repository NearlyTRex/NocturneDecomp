; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcube_cpp_clipPolygonAgainstMaxY_FUN_00451750(float max_y_plane)
;
; Parameters:
; float            Stack[0x4]:4   max_y_plane
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_00451744 = 004517fc
;   undefined1* PTR_caseD_3_0045174c = 004517e1
;   undefined4 DAT_015485fc
;   undefined4 DAT_015486c0
;
; Called Functions:
;   core_dcube.cpp_clipEdgeToPlane_FUN_004515b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00451750
        ;   Label: core_dcube.cpp_clipPolygonAgainstMaxY_FUN_00451750
    PUSH ESI                            ; 00451751
    PUSH EDI                            ; 00451752
    PUSH EBP                            ; 00451753
    MOV EBP,ESP                         ; 00451754
    SUB ESP,0x4                         ; 00451756
    AND ESP,0xfffffff8                  ; 00451759
    MOV EBX,dword ptr [0x015486c0]      ; 0045175c | DAT_015486c0
    MOV EDX,dword ptr [0x015485fc]      ; 00451762 | DAT_015485fc
    XOR ESI,ESI                         ; 00451768
    TEST EDX,EDX                        ; 0045176a
    JLE 0x004517ef                      ; 0045176c
        ;   XREF to: 004517ef (CONDITIONAL_JUMP)  ; LAB_004517ef
    MOV EDI,0x1548600                   ; 00451772
    MOV EAX,[0x015485fc]                ; 00451777 | DAT_015485fc
        ;   Label: LAB_00451777
    LEA ECX,[ESI + 0x1]                 ; 0045177c
    CMP ECX,EAX                         ; 0045177f
    JNZ 0x00451785                      ; 00451781
        ;   XREF to: 00451785 (CONDITIONAL_JUMP)  ; LAB_00451785
    XOR ECX,EAX                         ; 00451783
    IMUL ECX,ECX,0xc                    ; 00451785
        ;   Label: LAB_00451785
    MOV EAX,0x1548600                   ; 00451788
    FLD float ptr [EDI + 0x4]           ; 0045178d
    ADD EAX,ECX                         ; 00451790
    MOV EDX,EDI                         ; 00451792
    MOV dword ptr [ESP],EAX             ; 00451794
    XOR ECX,ECX                         ; 00451797
    FCOMP float ptr [EBP + 0x14]        ; 00451799
    FNSTSW AX                           ; 0045179c
    SAHF                                ; 0045179e
    JBE 0x004517a6                      ; 0045179f
        ;   XREF to: 004517a6 (CONDITIONAL_JUMP)  ; LAB_004517a6
    MOV ECX,0x1                         ; 004517a1
    MOV EAX,dword ptr [ESP]             ; 004517a6
        ;   Label: LAB_004517a6
    FLD float ptr [EAX + 0x4]           ; 004517a9
    FCOMP float ptr [EBP + 0x14]        ; 004517ac
    FNSTSW AX                           ; 004517af
    SAHF                                ; 004517b1
    JBE 0x004517b7                      ; 004517b2
        ;   XREF to: 004517b7 (CONDITIONAL_JUMP)  ; LAB_004517b7
    OR CL,0x2                           ; 004517b4
    CMP ECX,0x3                         ; 004517b7
        ;   Label: LAB_004517b7
    JA 0x004517e1                       ; 004517ba
        ;   XREF to: 004517e1 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x451740]  ; 004517bc | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 004517c3
        ;   Label: caseD_0
    ADD ECX,0x15486c4                   ; 004517c6
    CMP ECX,EDX                         ; 004517cc
    JZ 0x004517e0                       ; 004517ce
        ;   XREF to: 004517e0 (CONDITIONAL_JUMP)  ; LAB_004517e0
    MOV EAX,dword ptr [EDX]             ; 004517d0
    MOV dword ptr [ECX],EAX             ; 004517d2
    MOV EAX,dword ptr [EDX + 0x4]       ; 004517d4
    MOV dword ptr [ECX + 0x4],EAX       ; 004517d7
    MOV EAX,dword ptr [EDX + 0x8]       ; 004517da
    MOV dword ptr [ECX + 0x8],EAX       ; 004517dd
    INC EBX                             ; 004517e0
        ;   Label: LAB_004517e0
    MOV ECX,dword ptr [0x015485fc]      ; 004517e1 | DAT_015485fc
        ;   Label: caseD_3
    INC ESI                             ; 004517e7
    ADD EDI,0xc                         ; 004517e8
    CMP ESI,ECX                         ; 004517eb
    JL 0x00451777                       ; 004517ed
        ;   XREF to: 00451777 (CONDITIONAL_JUMP)  ; LAB_00451777
    MOV dword ptr [0x015486c0],EBX      ; 004517ef | DAT_015486c0
        ;   Label: LAB_004517ef
    MOV ESP,EBP                         ; 004517f5
    POP EBP                             ; 004517f7
    POP EDI                             ; 004517f8
    POP ESI                             ; 004517f9
    POP EBX                             ; 004517fa
    RET                                 ; 004517fb
    IMUL ECX,EBX,0xc                    ; 004517fc
        ;   Label: caseD_1
    FLD float ptr [EBP + 0x14]          ; 004517ff
    SUB ESP,0x8                         ; 00451802
    FCHS                                ; 00451805
    FSTP double ptr [ESP]               ; 00451807
    PUSH 0x0                            ; 0045180a
    PUSH 0x0                            ; 0045180c
    PUSH 0x3ff00000                     ; 0045180e
    PUSH 0x0                            ; 00451813
    PUSH 0x0                            ; 00451815
    PUSH 0x0                            ; 00451817
    ADD ECX,0x15486c4                   ; 00451819
    PUSH ECX                            ; 0045181f
    PUSH EDX                            ; 00451820
    MOV EAX,dword ptr [ESP + 0x28]      ; 00451821
    PUSH EAX                            ; 00451825
    MOV dword ptr [0x015486c0],EBX      ; 00451826 | DAT_015486c0
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004515b0 ; 0045182c
        ;   XREF to: 004515b0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipEdgeToPlane_FUN_004515b0(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, ...)
    MOV EBX,dword ptr [0x015486c0]      ; 00451831 | DAT_015486c0
    ADD ESP,0x2c                        ; 00451837
    JMP 0x004517e0                      ; 0045183a
        ;   XREF to: 004517e0 (UNCONDITIONAL_JUMP)  ; LAB_004517e0
    IMUL ECX,EBX,0xc                    ; 0045183c
        ;   Label: caseD_2
    ADD ECX,0x15486c4                   ; 0045183f
    CMP ECX,EDX                         ; 00451845
    JZ 0x00451859                       ; 00451847
        ;   XREF to: 00451859 (CONDITIONAL_JUMP)  ; LAB_00451859
    MOV EAX,dword ptr [EDX]             ; 00451849
    MOV dword ptr [ECX],EAX             ; 0045184b
    MOV EAX,dword ptr [EDX + 0x4]       ; 0045184d
    MOV dword ptr [ECX + 0x4],EAX       ; 00451850
    MOV EAX,dword ptr [EDX + 0x8]       ; 00451853
    MOV dword ptr [ECX + 0x8],EAX       ; 00451856
    INC EBX                             ; 00451859
        ;   Label: LAB_00451859
    IMUL ECX,EBX,0xc                    ; 0045185a
    FLD float ptr [EBP + 0x14]          ; 0045185d
    SUB ESP,0x8                         ; 00451860
    FCHS                                ; 00451863
    FSTP double ptr [ESP]               ; 00451865
    PUSH 0x0                            ; 00451868
    PUSH 0x0                            ; 0045186a
    PUSH 0x3ff00000                     ; 0045186c
    PUSH 0x0                            ; 00451871
    PUSH 0x0                            ; 00451873
    PUSH 0x0                            ; 00451875
    ADD ECX,0x15486c4                   ; 00451877
    PUSH ECX                            ; 0045187d
    MOV ECX,dword ptr [ESP + 0x24]      ; 0045187e
    PUSH ECX                            ; 00451882
    PUSH EDX                            ; 00451883
    MOV dword ptr [0x015486c0],EBX      ; 00451884 | DAT_015486c0
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004515b0 ; 0045188a
        ;   XREF to: 004515b0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipEdgeToPlane_FUN_004515b0(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, ...)
    MOV EBX,dword ptr [0x015486c0]      ; 0045188f | DAT_015486c0
    ADD ESP,0x2c                        ; 00451895
    JMP 0x004517e0                      ; 00451898
        ;   XREF to: 004517e0 (UNCONDITIONAL_JUMP)  ; LAB_004517e0


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcube_cpp_clipPolygonAgainstMinY_FUN_004518b0(float min_y_plane)
;
; Parameters:
; float            Stack[0x4]:4   min_y_plane
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_004518a4 = 00451964
;   undefined1* PTR_caseD_3_004518ac = 00451949
;   int g_INT_015486c0
;   uint g_CubeClipStage2Count
;
; Called Functions:
;   core_dcube.cpp_clipEdgeToPlane_FUN_004515b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004518b0
        ;   Label: core_dcube.cpp_clipPolygonAgainstMinY_FUN_004518b0
    PUSH ESI                            ; 004518b1
    PUSH EDI                            ; 004518b2
    PUSH EBP                            ; 004518b3
    MOV EBP,ESP                         ; 004518b4
    SUB ESP,0x8                         ; 004518b6
    AND ESP,0xfffffff8                  ; 004518b9
    MOV EBX,dword ptr [0x01548784]      ; 004518bc | g_CubeClipStage2Count
    MOV EDX,dword ptr [EBP + 0x14]      ; 004518c2
    MOV dword ptr [ESP],EDX             ; 004518c5
    MOV EDX,dword ptr [0x015486c0]      ; 004518c8 | g_INT_015486c0
    XOR EDI,EDI                         ; 004518ce
    TEST EDX,EDX                        ; 004518d0
    JLE 0x00451957                      ; 004518d2
        ;   XREF to: 00451957 (CONDITIONAL_JUMP)  ; LAB_00451957
    MOV ESI,0x15486c4                   ; 004518d8
    MOV EAX,[0x015486c0]                ; 004518dd | g_INT_015486c0
        ;   Label: LAB_004518dd
    LEA ECX,[EDI + 0x1]                 ; 004518e2
    CMP ECX,EAX                         ; 004518e5
    JNZ 0x004518eb                      ; 004518e7
        ;   XREF to: 004518eb (CONDITIONAL_JUMP)  ; LAB_004518eb
    XOR ECX,EAX                         ; 004518e9
    IMUL ECX,ECX,0xc                    ; 004518eb
        ;   Label: LAB_004518eb
    MOV EAX,0x15486c4                   ; 004518ee
    FLD float ptr [ESI + 0x4]           ; 004518f3
    ADD EAX,ECX                         ; 004518f6
    MOV EDX,ESI                         ; 004518f8
    MOV dword ptr [ESP + 0x4],EAX       ; 004518fa
    XOR ECX,ECX                         ; 004518fe
    FCOMP float ptr [ESP]               ; 00451900
    FNSTSW AX                           ; 00451903
    SAHF                                ; 00451905
    JNC 0x0045190d                      ; 00451906
        ;   XREF to: 0045190d (CONDITIONAL_JUMP)  ; LAB_0045190d
    MOV ECX,0x1                         ; 00451908
    MOV EAX,dword ptr [ESP + 0x4]       ; 0045190d
        ;   Label: LAB_0045190d
    FLD float ptr [EAX + 0x4]           ; 00451911
    FCOMP float ptr [ESP]               ; 00451914
    FNSTSW AX                           ; 00451917
    SAHF                                ; 00451919
    JNC 0x0045191f                      ; 0045191a
        ;   XREF to: 0045191f (CONDITIONAL_JUMP)  ; LAB_0045191f
    OR CL,0x2                           ; 0045191c
    CMP ECX,0x3                         ; 0045191f
        ;   Label: LAB_0045191f
    JA 0x00451949                       ; 00451922
        ;   XREF to: 00451949 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x4518a0]  ; 00451924 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 0045192b
        ;   Label: caseD_0
    ADD ECX,0x1548788                   ; 0045192e
    CMP ECX,EDX                         ; 00451934
    JZ 0x00451948                       ; 00451936
        ;   XREF to: 00451948 (CONDITIONAL_JUMP)  ; LAB_00451948
    MOV EAX,dword ptr [EDX]             ; 00451938
    MOV dword ptr [ECX],EAX             ; 0045193a
    MOV EAX,dword ptr [EDX + 0x4]       ; 0045193c
    MOV dword ptr [ECX + 0x4],EAX       ; 0045193f
    MOV EAX,dword ptr [EDX + 0x8]       ; 00451942
    MOV dword ptr [ECX + 0x8],EAX       ; 00451945
    INC EBX                             ; 00451948
        ;   Label: LAB_00451948
    MOV ECX,dword ptr [0x015486c0]      ; 00451949 | g_INT_015486c0
        ;   Label: caseD_3
    INC EDI                             ; 0045194f
    ADD ESI,0xc                         ; 00451950
    CMP EDI,ECX                         ; 00451953
    JL 0x004518dd                       ; 00451955
        ;   XREF to: 004518dd (CONDITIONAL_JUMP)  ; LAB_004518dd
    MOV dword ptr [0x01548784],EBX      ; 00451957 | g_CubeClipStage2Count
        ;   Label: LAB_00451957
    MOV ESP,EBP                         ; 0045195d
    POP EBP                             ; 0045195f
    POP EDI                             ; 00451960
    POP ESI                             ; 00451961
    POP EBX                             ; 00451962
    RET                                 ; 00451963
    IMUL ECX,EBX,0xc                    ; 00451964
        ;   Label: caseD_1
    FLD float ptr [ESP]                 ; 00451967
    SUB ESP,0x8                         ; 0045196a
    FSTP double ptr [ESP]               ; 0045196d
    PUSH 0x0                            ; 00451970
    PUSH 0x0                            ; 00451972
    PUSH 0xbff00000                     ; 00451974
    PUSH 0x0                            ; 00451979
    PUSH 0x0                            ; 0045197b
    PUSH 0x0                            ; 0045197d
    ADD ECX,0x1548788                   ; 0045197f
    PUSH ECX                            ; 00451985
    PUSH EDX                            ; 00451986
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00451987
    PUSH EAX                            ; 0045198b
    MOV dword ptr [0x01548784],EBX      ; 0045198c | g_CubeClipStage2Count
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004515b0 ; 00451992
        ;   XREF to: 004515b0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipEdgeToPlane_FUN_004515b0(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, ...)
    MOV EBX,dword ptr [0x01548784]      ; 00451997 | g_CubeClipStage2Count
    ADD ESP,0x2c                        ; 0045199d
    JMP 0x00451948                      ; 004519a0
        ;   XREF to: 00451948 (UNCONDITIONAL_JUMP)  ; LAB_00451948
    IMUL ECX,EBX,0xc                    ; 004519a2
        ;   Label: caseD_2
    ADD ECX,0x1548788                   ; 004519a5
    CMP ECX,EDX                         ; 004519ab
    JZ 0x004519bf                       ; 004519ad
        ;   XREF to: 004519bf (CONDITIONAL_JUMP)  ; LAB_004519bf
    MOV EAX,dword ptr [EDX]             ; 004519af
    MOV dword ptr [ECX],EAX             ; 004519b1
    MOV EAX,dword ptr [EDX + 0x4]       ; 004519b3
    MOV dword ptr [ECX + 0x4],EAX       ; 004519b6
    MOV EAX,dword ptr [EDX + 0x8]       ; 004519b9
    MOV dword ptr [ECX + 0x8],EAX       ; 004519bc
    INC EBX                             ; 004519bf
        ;   Label: LAB_004519bf
    IMUL ECX,EBX,0xc                    ; 004519c0
    FLD float ptr [ESP]                 ; 004519c3
    SUB ESP,0x8                         ; 004519c6
    FSTP double ptr [ESP]               ; 004519c9
    PUSH 0x0                            ; 004519cc
    PUSH 0x0                            ; 004519ce
    PUSH 0xbff00000                     ; 004519d0
    PUSH 0x0                            ; 004519d5
    PUSH 0x0                            ; 004519d7
    PUSH 0x0                            ; 004519d9
    ADD ECX,0x1548788                   ; 004519db
    PUSH ECX                            ; 004519e1
    MOV ECX,dword ptr [ESP + 0x28]      ; 004519e2
    PUSH ECX                            ; 004519e6
    PUSH EDX                            ; 004519e7
    MOV dword ptr [0x01548784],EBX      ; 004519e8 | g_CubeClipStage2Count
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004515b0 ; 004519ee
        ;   XREF to: 004515b0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipEdgeToPlane_FUN_004515b0(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, ...)
    MOV EBX,dword ptr [0x01548784]      ; 004519f3 | g_CubeClipStage2Count
    ADD ESP,0x2c                        ; 004519f9
    JMP 0x00451948                      ; 004519fc
        ;   XREF to: 00451948 (UNCONDITIONAL_JUMP)  ; LAB_00451948


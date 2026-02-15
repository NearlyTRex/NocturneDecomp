; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtri_cpp_clipPolygonToTop_FUN_0049b860(float y_max)
;
; Parameters:
; float            Stack[0x4]:4   y_max
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   void* PTR_caseD_1_0049b854 = 0049b90c
;   void* PTR_caseD_3_0049b85c = 0049b8f1
;   int g_ClipInputVertexCount
;   CVector3f[16] g_ClipInputVertices
;   undefined4 DAT_02cee5d4
;   undefined4 g_ClipInputVertices[0].z
;   undefined4 g_ClipInputVertices[1].y
;   undefined4 g_ClipInputVertices[2].x
;   undefined4 g_ClipInputVertices[2].y
;   int g_ClipBuffer1VertexCount
;   CVector3f[16] g_ClipBuffer1Vertices
;   undefined4 g_ClipBuffer1Vertices[0].y
;   undefined4 g_ClipBuffer1Vertices[0].z
;
; Called Functions:
;   core_dtri.cpp_clipLineToPlane_FUN_0049b6c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049b860
        ;   Label: core_dtri.cpp_clipPolygonToTop_FUN_0049b860
    PUSH ESI                            ; 0049b861
    PUSH EDI                            ; 0049b862
    PUSH EBP                            ; 0049b863
    MOV EBP,ESP                         ; 0049b864
    SUB ESP,0x4                         ; 0049b866
    AND ESP,0xfffffff8                  ; 0049b869
    MOV EBX,dword ptr [0x02cee690]      ; 0049b86c | g_ClipBuffer1VertexCount
    MOV EDX,dword ptr [0x02cee5cc]      ; 0049b872 | g_ClipInputVertexCount
    XOR ESI,ESI                         ; 0049b878
    TEST EDX,EDX                        ; 0049b87a
    JLE 0x0049b8ff                      ; 0049b87c
        ;   XREF to: 0049b8ff (CONDITIONAL_JUMP)  ; LAB_0049b8ff
    MOV EDI,0x2cee5d0                   ; 0049b882 | g_ClipInputVertices
    MOV EAX,[0x02cee5cc]                ; 0049b887 | g_ClipInputVertexCount
        ;   Label: LAB_0049b887
    LEA ECX,[ESI + 0x1]                 ; 0049b88c
    CMP ECX,EAX                         ; 0049b88f
    JNZ 0x0049b895                      ; 0049b891
        ;   XREF to: 0049b895 (CONDITIONAL_JUMP)  ; LAB_0049b895
    XOR ECX,EAX                         ; 0049b893
    IMUL ECX,ECX,0xc                    ; 0049b895
        ;   Label: LAB_0049b895
    MOV EAX,0x2cee5d0                   ; 0049b898 | g_ClipInputVertices
    FLD float ptr [EDI + 0x4]           ; 0049b89d | DAT_02cee5d4 | g_ClipInputVertices[1].y
    ADD EAX,ECX                         ; 0049b8a0
    MOV EDX,EDI                         ; 0049b8a2 | g_ClipInputVertices
    MOV dword ptr [ESP],EAX             ; 0049b8a4 | g_ClipInputVertices[2].x
    XOR ECX,ECX                         ; 0049b8a7
    FCOMP float ptr [EBP + 0x14]        ; 0049b8a9
    FNSTSW AX                           ; 0049b8ac
    SAHF                                ; 0049b8ae
    JBE 0x0049b8b6                      ; 0049b8af
        ;   XREF to: 0049b8b6 (CONDITIONAL_JUMP)  ; LAB_0049b8b6
    MOV ECX,0x1                         ; 0049b8b1
    MOV EAX,dword ptr [ESP]             ; 0049b8b6
        ;   Label: LAB_0049b8b6
    FLD float ptr [EAX + 0x4]           ; 0049b8b9 | DAT_02cee5d4 | g_ClipInputVertices[2].y
    FCOMP float ptr [EBP + 0x14]        ; 0049b8bc
    FNSTSW AX                           ; 0049b8bf
    SAHF                                ; 0049b8c1
    JBE 0x0049b8c7                      ; 0049b8c2
        ;   XREF to: 0049b8c7 (CONDITIONAL_JUMP)  ; LAB_0049b8c7
    OR CL,0x2                           ; 0049b8c4
    CMP ECX,0x3                         ; 0049b8c7
        ;   Label: LAB_0049b8c7
    JA 0x0049b8f1                       ; 0049b8ca
        ;   XREF to: 0049b8f1 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x49b850]  ; 0049b8cc | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 0049b8d3
        ;   Label: caseD_0
    ADD ECX,0x2cee694                   ; 0049b8d6 | g_ClipBuffer1Vertices
    CMP ECX,EDX                         ; 0049b8dc
    JZ 0x0049b8f0                       ; 0049b8de
        ;   XREF to: 0049b8f0 (CONDITIONAL_JUMP)  ; LAB_0049b8f0
    MOV EAX,dword ptr [EDX]             ; 0049b8e0 | g_ClipInputVertices
    MOV dword ptr [ECX],EAX             ; 0049b8e2 | g_ClipBuffer1Vertices
    MOV EAX,dword ptr [EDX + 0x4]       ; 0049b8e4 | DAT_02cee5d4
    MOV dword ptr [ECX + 0x4],EAX       ; 0049b8e7 | g_ClipBuffer1Vertices[0].y
    MOV EAX,dword ptr [EDX + 0x8]       ; 0049b8ea | g_ClipInputVertices[0].z
    MOV dword ptr [ECX + 0x8],EAX       ; 0049b8ed | g_ClipBuffer1Vertices[0].z
    INC EBX                             ; 0049b8f0
        ;   Label: LAB_0049b8f0
    MOV ECX,dword ptr [0x02cee5cc]      ; 0049b8f1 | g_ClipInputVertexCount
        ;   Label: caseD_3
    INC ESI                             ; 0049b8f7
    ADD EDI,0xc                         ; 0049b8f8
    CMP ESI,ECX                         ; 0049b8fb
    JL 0x0049b887                       ; 0049b8fd
        ;   XREF to: 0049b887 (CONDITIONAL_JUMP)  ; LAB_0049b887
    MOV dword ptr [0x02cee690],EBX      ; 0049b8ff | g_ClipBuffer1VertexCount
        ;   Label: LAB_0049b8ff
    MOV ESP,EBP                         ; 0049b905
    POP EBP                             ; 0049b907
    POP EDI                             ; 0049b908
    POP ESI                             ; 0049b909
    POP EBX                             ; 0049b90a
    RET                                 ; 0049b90b
    IMUL ECX,EBX,0xc                    ; 0049b90c
        ;   Label: caseD_1
    FLD float ptr [EBP + 0x14]          ; 0049b90f
    SUB ESP,0x8                         ; 0049b912
    FCHS                                ; 0049b915
    FSTP double ptr [ESP]               ; 0049b917
    PUSH 0x0                            ; 0049b91a
    PUSH 0x0                            ; 0049b91c
    PUSH 0x3ff00000                     ; 0049b91e
    PUSH 0x0                            ; 0049b923
    PUSH 0x0                            ; 0049b925
    PUSH 0x0                            ; 0049b927
    ADD ECX,0x2cee694                   ; 0049b929 | g_ClipBuffer1Vertices
    PUSH ECX                            ; 0049b92f
    PUSH EDX                            ; 0049b930 | g_ClipInputVertices
    MOV EAX,dword ptr [ESP + 0x28]      ; 0049b931
    PUSH EAX                            ; 0049b935
    MOV dword ptr [0x02cee690],EBX      ; 0049b936 | g_ClipBuffer1VertexCount
    CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0 ; 0049b93c
        ;   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_0049b6c0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EBX,dword ptr [0x02cee690]      ; 0049b941 | g_ClipBuffer1VertexCount
    ADD ESP,0x2c                        ; 0049b947
    JMP 0x0049b8f0                      ; 0049b94a
        ;   XREF to: 0049b8f0 (UNCONDITIONAL_JUMP)  ; LAB_0049b8f0
    IMUL ECX,EBX,0xc                    ; 0049b94c
        ;   Label: caseD_2
    ADD ECX,0x2cee694                   ; 0049b94f | g_ClipBuffer1Vertices
    CMP ECX,EDX                         ; 0049b955
    JZ 0x0049b969                       ; 0049b957
        ;   XREF to: 0049b969 (CONDITIONAL_JUMP)  ; LAB_0049b969
    MOV EAX,dword ptr [EDX]             ; 0049b959 | g_ClipInputVertices
    MOV dword ptr [ECX],EAX             ; 0049b95b | g_ClipBuffer1Vertices
    MOV EAX,dword ptr [EDX + 0x4]       ; 0049b95d | DAT_02cee5d4
    MOV dword ptr [ECX + 0x4],EAX       ; 0049b960 | g_ClipBuffer1Vertices[0].y
    MOV EAX,dword ptr [EDX + 0x8]       ; 0049b963 | g_ClipInputVertices[0].z
    MOV dword ptr [ECX + 0x8],EAX       ; 0049b966 | g_ClipBuffer1Vertices[0].z
    INC EBX                             ; 0049b969
        ;   Label: LAB_0049b969
    IMUL ECX,EBX,0xc                    ; 0049b96a
    FLD float ptr [EBP + 0x14]          ; 0049b96d
    SUB ESP,0x8                         ; 0049b970
    FCHS                                ; 0049b973
    FSTP double ptr [ESP]               ; 0049b975
    PUSH 0x0                            ; 0049b978
    PUSH 0x0                            ; 0049b97a
    PUSH 0x3ff00000                     ; 0049b97c
    PUSH 0x0                            ; 0049b981
    PUSH 0x0                            ; 0049b983
    PUSH 0x0                            ; 0049b985
    ADD ECX,0x2cee694                   ; 0049b987 | g_ClipBuffer1Vertices
    PUSH ECX                            ; 0049b98d
    MOV ECX,dword ptr [ESP + 0x24]      ; 0049b98e
    PUSH ECX                            ; 0049b992
    PUSH EDX                            ; 0049b993 | g_ClipInputVertices
    MOV dword ptr [0x02cee690],EBX      ; 0049b994 | g_ClipBuffer1VertexCount
    CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0 ; 0049b99a
        ;   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_0049b6c0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EBX,dword ptr [0x02cee690]      ; 0049b99f | g_ClipBuffer1VertexCount
    ADD ESP,0x2c                        ; 0049b9a5
    JMP 0x0049b8f0                      ; 0049b9a8
        ;   XREF to: 0049b8f0 (UNCONDITIONAL_JUMP)  ; LAB_0049b8f0


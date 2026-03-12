; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtri_cpp_clipPolygonToBottom_FUN_0049b9c0(float y_min)
;
; Parameters:
; float            Stack[0x4]:4   y_min
;
; Referenced Globals:
;   void* PTR_caseD_1_0049b9b4 = 0049ba74
;   void* PTR_caseD_3_0049b9bc = 0049ba59
;   int g_ClipBuffer1VertexCount
;   CVector3f[16] g_ClipBuffer1Vertices
;   undefined4 g_ClipBuffer1Vertices[0].y
;   undefined4 g_ClipBuffer1Vertices[0].z
;   undefined4 DAT_02cee6a4
;   undefined4 g_ClipBuffer1Vertices[2].x
;   undefined4 DAT_02cee6b0
;   int g_ClipBuffer2VertexCount
;   CVector3f[16] g_ClipBuffer2Vertices
;   undefined4 g_ClipBuffer2Vertices[0].y
;   undefined4 g_ClipBuffer2Vertices[0].z
;
; Called Functions:
;   core_dtri.cpp_clipLineToPlane_FUN_0049b6c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049b9c0
        ;   Label: core_dtri.cpp_clipPolygonToBottom_FUN_0049b9c0
    PUSH ESI                            ; 0049b9c1
    PUSH EDI                            ; 0049b9c2
    PUSH EBP                            ; 0049b9c3
    MOV EBP,ESP                         ; 0049b9c4
    SUB ESP,0x8                         ; 0049b9c6
    AND ESP,0xfffffff8                  ; 0049b9c9
    MOV EBX,dword ptr [0x02cee754]      ; 0049b9cc | g_ClipBuffer2VertexCount
    MOV EDX,dword ptr [EBP + 0x14]      ; 0049b9d2
    MOV dword ptr [ESP],EDX             ; 0049b9d5
    MOV EDX,dword ptr [0x02cee690]      ; 0049b9d8 | g_ClipBuffer1VertexCount
    XOR EDI,EDI                         ; 0049b9de
    TEST EDX,EDX                        ; 0049b9e0
    JLE 0x0049ba67                      ; 0049b9e2
        ;   XREF to: 0049ba67 (CONDITIONAL_JUMP)  ; LAB_0049ba67
    MOV ESI,0x2cee694                   ; 0049b9e8 | g_ClipBuffer1Vertices
    MOV EAX,[0x02cee690]                ; 0049b9ed | g_ClipBuffer1VertexCount
        ;   Label: LAB_0049b9ed
    LEA ECX,[EDI + 0x1]                 ; 0049b9f2
    CMP ECX,EAX                         ; 0049b9f5
    JNZ 0x0049b9fb                      ; 0049b9f7
        ;   XREF to: 0049b9fb (CONDITIONAL_JUMP)  ; LAB_0049b9fb
    XOR ECX,EAX                         ; 0049b9f9
    IMUL ECX,ECX,0xc                    ; 0049b9fb
        ;   Label: LAB_0049b9fb
    MOV EAX,0x2cee694                   ; 0049b9fe | g_ClipBuffer1Vertices
    FLD float ptr [ESI + 0x4]           ; 0049ba03 | g_ClipBuffer1Vertices[0].y | DAT_02cee6a4
    ADD EAX,ECX                         ; 0049ba06
    MOV EDX,ESI                         ; 0049ba08 | g_ClipBuffer1Vertices
    MOV dword ptr [ESP + 0x4],EAX       ; 0049ba0a | g_ClipBuffer1Vertices[2].x
    XOR ECX,ECX                         ; 0049ba0e
    FCOMP float ptr [ESP]               ; 0049ba10
    FNSTSW AX                           ; 0049ba13
    SAHF                                ; 0049ba15
    JNC 0x0049ba1d                      ; 0049ba16
        ;   XREF to: 0049ba1d (CONDITIONAL_JUMP)  ; LAB_0049ba1d
    MOV ECX,0x1                         ; 0049ba18
    MOV EAX,dword ptr [ESP + 0x4]       ; 0049ba1d
        ;   Label: LAB_0049ba1d
    FLD float ptr [EAX + 0x4]           ; 0049ba21 | g_ClipBuffer1Vertices[0].y | DAT_02cee6b0
    FCOMP float ptr [ESP]               ; 0049ba24
    FNSTSW AX                           ; 0049ba27
    SAHF                                ; 0049ba29
    JNC 0x0049ba2f                      ; 0049ba2a
        ;   XREF to: 0049ba2f (CONDITIONAL_JUMP)  ; LAB_0049ba2f
    OR CL,0x2                           ; 0049ba2c
    CMP ECX,0x3                         ; 0049ba2f
        ;   Label: LAB_0049ba2f
    JA 0x0049ba59                       ; 0049ba32
        ;   XREF to: 0049ba59 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x49b9b0]  ; 0049ba34 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 0049ba3b
        ;   Label: caseD_0
    ADD ECX,0x2cee758                   ; 0049ba3e | g_ClipBuffer2Vertices
    CMP ECX,EDX                         ; 0049ba44
    JZ 0x0049ba58                       ; 0049ba46
        ;   XREF to: 0049ba58 (CONDITIONAL_JUMP)  ; LAB_0049ba58
    MOV EAX,dword ptr [EDX]             ; 0049ba48 | g_ClipBuffer1Vertices
    MOV dword ptr [ECX],EAX             ; 0049ba4a | g_ClipBuffer2Vertices
    MOV EAX,dword ptr [EDX + 0x4]       ; 0049ba4c | g_ClipBuffer1Vertices[0].y
    MOV dword ptr [ECX + 0x4],EAX       ; 0049ba4f | g_ClipBuffer2Vertices[0].y
    MOV EAX,dword ptr [EDX + 0x8]       ; 0049ba52 | g_ClipBuffer1Vertices[0].z
    MOV dword ptr [ECX + 0x8],EAX       ; 0049ba55 | g_ClipBuffer2Vertices[0].z
    INC EBX                             ; 0049ba58
        ;   Label: LAB_0049ba58
    MOV ECX,dword ptr [0x02cee690]      ; 0049ba59 | g_ClipBuffer1VertexCount
        ;   Label: caseD_3
    INC EDI                             ; 0049ba5f
    ADD ESI,0xc                         ; 0049ba60
    CMP EDI,ECX                         ; 0049ba63
    JL 0x0049b9ed                       ; 0049ba65
        ;   XREF to: 0049b9ed (CONDITIONAL_JUMP)  ; LAB_0049b9ed
    MOV dword ptr [0x02cee754],EBX      ; 0049ba67 | g_ClipBuffer2VertexCount
        ;   Label: LAB_0049ba67
    MOV ESP,EBP                         ; 0049ba6d
    POP EBP                             ; 0049ba6f
    POP EDI                             ; 0049ba70
    POP ESI                             ; 0049ba71
    POP EBX                             ; 0049ba72
    RET                                 ; 0049ba73
    IMUL ECX,EBX,0xc                    ; 0049ba74
        ;   Label: caseD_1
    FLD float ptr [ESP]                 ; 0049ba77
    SUB ESP,0x8                         ; 0049ba7a
    FSTP double ptr [ESP]               ; 0049ba7d
    PUSH 0x0                            ; 0049ba80
    PUSH 0x0                            ; 0049ba82
    PUSH 0xbff00000                     ; 0049ba84
    PUSH 0x0                            ; 0049ba89
    PUSH 0x0                            ; 0049ba8b
    PUSH 0x0                            ; 0049ba8d
    ADD ECX,0x2cee758                   ; 0049ba8f | g_ClipBuffer2Vertices
    PUSH ECX                            ; 0049ba95
    PUSH EDX                            ; 0049ba96 | g_ClipBuffer1Vertices
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0049ba97
    PUSH EAX                            ; 0049ba9b
    MOV dword ptr [0x02cee754],EBX      ; 0049ba9c | g_ClipBuffer2VertexCount
    CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0 ; 0049baa2
        ;   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_0049b6c0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EBX,dword ptr [0x02cee754]      ; 0049baa7 | g_ClipBuffer2VertexCount
    ADD ESP,0x2c                        ; 0049baad
    JMP 0x0049ba58                      ; 0049bab0
        ;   XREF to: 0049ba58 (UNCONDITIONAL_JUMP)  ; LAB_0049ba58
    IMUL ECX,EBX,0xc                    ; 0049bab2
        ;   Label: caseD_2
    ADD ECX,0x2cee758                   ; 0049bab5 | g_ClipBuffer2Vertices
    CMP ECX,EDX                         ; 0049babb
    JZ 0x0049bacf                       ; 0049babd
        ;   XREF to: 0049bacf (CONDITIONAL_JUMP)  ; LAB_0049bacf
    MOV EAX,dword ptr [EDX]             ; 0049babf | g_ClipBuffer1Vertices
    MOV dword ptr [ECX],EAX             ; 0049bac1 | g_ClipBuffer2Vertices
    MOV EAX,dword ptr [EDX + 0x4]       ; 0049bac3 | g_ClipBuffer1Vertices[0].y
    MOV dword ptr [ECX + 0x4],EAX       ; 0049bac6 | g_ClipBuffer2Vertices[0].y
    MOV EAX,dword ptr [EDX + 0x8]       ; 0049bac9 | g_ClipBuffer1Vertices[0].z
    MOV dword ptr [ECX + 0x8],EAX       ; 0049bacc | g_ClipBuffer2Vertices[0].z
    INC EBX                             ; 0049bacf
        ;   Label: LAB_0049bacf
    IMUL ECX,EBX,0xc                    ; 0049bad0
    FLD float ptr [ESP]                 ; 0049bad3
    SUB ESP,0x8                         ; 0049bad6
    FSTP double ptr [ESP]               ; 0049bad9
    PUSH 0x0                            ; 0049badc
    PUSH 0x0                            ; 0049bade
    PUSH 0xbff00000                     ; 0049bae0
    PUSH 0x0                            ; 0049bae5
    PUSH 0x0                            ; 0049bae7
    PUSH 0x0                            ; 0049bae9
    ADD ECX,0x2cee758                   ; 0049baeb | g_ClipBuffer2Vertices
    PUSH ECX                            ; 0049baf1
    MOV ECX,dword ptr [ESP + 0x28]      ; 0049baf2
    PUSH ECX                            ; 0049baf6
    PUSH EDX                            ; 0049baf7 | g_ClipBuffer1Vertices
    MOV dword ptr [0x02cee754],EBX      ; 0049baf8 | g_ClipBuffer2VertexCount
    CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0 ; 0049bafe
        ;   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_0049b6c0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EBX,dword ptr [0x02cee754]      ; 0049bb03 | g_ClipBuffer2VertexCount
    ADD ESP,0x2c                        ; 0049bb09
    JMP 0x0049ba58                      ; 0049bb0c
        ;   XREF to: 0049ba58 (UNCONDITIONAL_JUMP)  ; LAB_0049ba58


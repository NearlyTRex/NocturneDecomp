; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dtri_cpp_clipPolygonToRight_FUN_0049bb30(float x_max)
;
; Parameters:
; float            Stack[0x4]:4   x_max
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   void* PTR_caseD_1_0049bb18 = 0049bbda
;   void* PTR_caseD_3_0049bb20 = 0049bbbf
;   int g_ClipBuffer2VertexCount
;   CVector3f[16] g_ClipBuffer2Vertices
;   undefined4 g_ClipBuffer2Vertices[0].y
;   undefined4 g_ClipBuffer2Vertices[0].z
;   undefined4 DAT_02cee764
;   undefined4 DAT_02cee770
;   int g_ClipBuffer3VertexCount
;   CVector3f[16] g_ClipBuffer3Vertices
;   undefined4 g_ClipBuffer3Vertices[0].y
;   undefined4 g_ClipBuffer3Vertices[0].z
;
; Called Functions:
;   core_dtri.cpp_clipLineToPlane_FUN_0049b6c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049bb30
        ;   Label: core_dtri.cpp_clipPolygonToRight_FUN_0049bb30
    PUSH ESI                            ; 0049bb31
    PUSH EDI                            ; 0049bb32
    PUSH EBP                            ; 0049bb33
    MOV EBP,ESP                         ; 0049bb34
    SUB ESP,0x4                         ; 0049bb36
    AND ESP,0xfffffff8                  ; 0049bb39
    MOV EBX,dword ptr [0x02cee818]      ; 0049bb3c | g_ClipBuffer3VertexCount
    MOV EDX,dword ptr [0x02cee754]      ; 0049bb42 | g_ClipBuffer2VertexCount
    XOR ESI,ESI                         ; 0049bb48
    TEST EDX,EDX                        ; 0049bb4a
    JLE 0x0049bbcd                      ; 0049bb4c
        ;   XREF to: 0049bbcd (CONDITIONAL_JUMP)  ; LAB_0049bbcd
    MOV EDI,0x2cee758                   ; 0049bb52 | g_ClipBuffer2Vertices
    MOV EAX,[0x02cee754]                ; 0049bb57 | g_ClipBuffer2VertexCount
        ;   Label: LAB_0049bb57
    LEA ECX,[ESI + 0x1]                 ; 0049bb5c
    CMP ECX,EAX                         ; 0049bb5f
    JNZ 0x0049bb65                      ; 0049bb61
        ;   XREF to: 0049bb65 (CONDITIONAL_JUMP)  ; LAB_0049bb65
    XOR ECX,EAX                         ; 0049bb63
    IMUL ECX,ECX,0xc                    ; 0049bb65
        ;   Label: LAB_0049bb65
    MOV EAX,0x2cee758                   ; 0049bb68 | g_ClipBuffer2Vertices
    FLD float ptr [EDI]                 ; 0049bb6d | g_ClipBuffer2Vertices | DAT_02cee764
    ADD EAX,ECX                         ; 0049bb6f
    MOV EDX,EDI                         ; 0049bb71 | g_ClipBuffer2Vertices
    MOV dword ptr [ESP],EAX             ; 0049bb73 | DAT_02cee770
    XOR ECX,ECX                         ; 0049bb76
    FCOMP float ptr [EBP + 0x14]        ; 0049bb78
    FNSTSW AX                           ; 0049bb7b
    SAHF                                ; 0049bb7d
    JBE 0x0049bb85                      ; 0049bb7e
        ;   XREF to: 0049bb85 (CONDITIONAL_JUMP)  ; LAB_0049bb85
    MOV ECX,0x1                         ; 0049bb80
    MOV EAX,dword ptr [ESP]             ; 0049bb85
        ;   Label: LAB_0049bb85
    FLD float ptr [EAX]                 ; 0049bb88 | g_ClipBuffer2Vertices | DAT_02cee770
    FCOMP float ptr [EBP + 0x14]        ; 0049bb8a
    FNSTSW AX                           ; 0049bb8d
    SAHF                                ; 0049bb8f
    JBE 0x0049bb95                      ; 0049bb90
        ;   XREF to: 0049bb95 (CONDITIONAL_JUMP)  ; LAB_0049bb95
    OR CL,0x2                           ; 0049bb92
    CMP ECX,0x3                         ; 0049bb95
        ;   Label: LAB_0049bb95
    JA 0x0049bbbf                       ; 0049bb98
        ;   XREF to: 0049bbbf (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x49bb14]  ; 0049bb9a | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 0049bba1
        ;   Label: caseD_0
    ADD ECX,0x2cee81c                   ; 0049bba4 | g_ClipBuffer3Vertices
    CMP ECX,EDX                         ; 0049bbaa
    JZ 0x0049bbbe                       ; 0049bbac
        ;   XREF to: 0049bbbe (CONDITIONAL_JUMP)  ; LAB_0049bbbe
    MOV EAX,dword ptr [EDX]             ; 0049bbae | g_ClipBuffer2Vertices
    MOV dword ptr [ECX],EAX             ; 0049bbb0 | g_ClipBuffer3Vertices
    MOV EAX,dword ptr [EDX + 0x4]       ; 0049bbb2 | g_ClipBuffer2Vertices[0].y
    MOV dword ptr [ECX + 0x4],EAX       ; 0049bbb5 | g_ClipBuffer3Vertices[0].y
    MOV EAX,dword ptr [EDX + 0x8]       ; 0049bbb8 | g_ClipBuffer2Vertices[0].z
    MOV dword ptr [ECX + 0x8],EAX       ; 0049bbbb | g_ClipBuffer3Vertices[0].z
    INC EBX                             ; 0049bbbe
        ;   Label: LAB_0049bbbe
    MOV ECX,dword ptr [0x02cee754]      ; 0049bbbf | g_ClipBuffer2VertexCount
        ;   Label: caseD_3
    INC ESI                             ; 0049bbc5
    ADD EDI,0xc                         ; 0049bbc6
    CMP ESI,ECX                         ; 0049bbc9
    JL 0x0049bb57                       ; 0049bbcb
        ;   XREF to: 0049bb57 (CONDITIONAL_JUMP)  ; LAB_0049bb57
    MOV dword ptr [0x02cee818],EBX      ; 0049bbcd | g_ClipBuffer3VertexCount
        ;   Label: LAB_0049bbcd
    MOV ESP,EBP                         ; 0049bbd3
    POP EBP                             ; 0049bbd5
    POP EDI                             ; 0049bbd6
    POP ESI                             ; 0049bbd7
    POP EBX                             ; 0049bbd8
    RET                                 ; 0049bbd9
    IMUL ECX,EBX,0xc                    ; 0049bbda
        ;   Label: caseD_1
    FLD float ptr [EBP + 0x14]          ; 0049bbdd
    SUB ESP,0x8                         ; 0049bbe0
    FCHS                                ; 0049bbe3
    FSTP double ptr [ESP]               ; 0049bbe5
    PUSH 0x0                            ; 0049bbe8
    PUSH 0x0                            ; 0049bbea
    PUSH 0x0                            ; 0049bbec
    PUSH 0x0                            ; 0049bbee
    PUSH 0x3ff00000                     ; 0049bbf0
    PUSH 0x0                            ; 0049bbf5
    ADD ECX,0x2cee81c                   ; 0049bbf7 | g_ClipBuffer3Vertices
    PUSH ECX                            ; 0049bbfd
    PUSH EDX                            ; 0049bbfe | g_ClipBuffer2Vertices
    MOV EAX,dword ptr [ESP + 0x28]      ; 0049bbff
    PUSH EAX                            ; 0049bc03
    MOV dword ptr [0x02cee818],EBX      ; 0049bc04 | g_ClipBuffer3VertexCount
    CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0 ; 0049bc0a
        ;   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_0049b6c0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EBX,dword ptr [0x02cee818]      ; 0049bc0f | g_ClipBuffer3VertexCount
    ADD ESP,0x2c                        ; 0049bc15
    JMP 0x0049bbbe                      ; 0049bc18
        ;   XREF to: 0049bbbe (UNCONDITIONAL_JUMP)  ; LAB_0049bbbe
    IMUL ECX,EBX,0xc                    ; 0049bc1a
        ;   Label: caseD_2
    ADD ECX,0x2cee81c                   ; 0049bc1d | g_ClipBuffer3Vertices
    CMP ECX,EDX                         ; 0049bc23
    JZ 0x0049bc37                       ; 0049bc25
        ;   XREF to: 0049bc37 (CONDITIONAL_JUMP)  ; LAB_0049bc37
    MOV EAX,dword ptr [EDX]             ; 0049bc27 | g_ClipBuffer2Vertices
    MOV dword ptr [ECX],EAX             ; 0049bc29 | g_ClipBuffer3Vertices
    MOV EAX,dword ptr [EDX + 0x4]       ; 0049bc2b | g_ClipBuffer2Vertices[0].y
    MOV dword ptr [ECX + 0x4],EAX       ; 0049bc2e | g_ClipBuffer3Vertices[0].y
    MOV EAX,dword ptr [EDX + 0x8]       ; 0049bc31 | g_ClipBuffer2Vertices[0].z
    MOV dword ptr [ECX + 0x8],EAX       ; 0049bc34 | g_ClipBuffer3Vertices[0].z
    INC EBX                             ; 0049bc37
        ;   Label: LAB_0049bc37
    IMUL ECX,EBX,0xc                    ; 0049bc38
    FLD float ptr [EBP + 0x14]          ; 0049bc3b
    SUB ESP,0x8                         ; 0049bc3e
    FCHS                                ; 0049bc41
    FSTP double ptr [ESP]               ; 0049bc43
    PUSH 0x0                            ; 0049bc46
    PUSH 0x0                            ; 0049bc48
    PUSH 0x0                            ; 0049bc4a
    PUSH 0x0                            ; 0049bc4c
    PUSH 0x3ff00000                     ; 0049bc4e
    PUSH 0x0                            ; 0049bc53
    ADD ECX,0x2cee81c                   ; 0049bc55 | g_ClipBuffer3Vertices
    PUSH ECX                            ; 0049bc5b
    MOV ECX,dword ptr [ESP + 0x24]      ; 0049bc5c
    PUSH ECX                            ; 0049bc60
    PUSH EDX                            ; 0049bc61 | g_ClipBuffer2Vertices
    MOV dword ptr [0x02cee818],EBX      ; 0049bc62 | g_ClipBuffer3VertexCount
    CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0 ; 0049bc68
        ;   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_0049b6c0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EBX,dword ptr [0x02cee818]      ; 0049bc6d | g_ClipBuffer3VertexCount
    ADD ESP,0x2c                        ; 0049bc73
    JMP 0x0049bbbe                      ; 0049bc76
        ;   XREF to: 0049bbbe (UNCONDITIONAL_JUMP)  ; LAB_0049bbbe


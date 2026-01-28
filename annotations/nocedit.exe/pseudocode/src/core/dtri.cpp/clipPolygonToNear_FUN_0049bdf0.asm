; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dtri_cpp_clipPolygonToNear_FUN_0049bdf0(float z_near)
;
; Parameters:
; float            Stack[0x4]:4   z_near
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   void* PTR_caseD_1_0049bde4 = 0049bea4
;   void* PTR_caseD_3_0049bdec = 0049be89
;   int g_ClipBuffer4VertexCount
;   CVector3f[16] g_ClipBuffer4Vertices
;   undefined4 g_ClipBuffer4Vertices[0].y
;   undefined4 g_ClipBuffer4Vertices[0].z
;   undefined4 DAT_02cee8f4
;   undefined4 g_ClipBuffer4Vertices[2].x
;   undefined4 DAT_02cee900
;   int g_ClipBuffer5VertexCount
;   CVector3f[16] g_ClipBuffer5Vertices
;   undefined4 g_ClipBuffer5Vertices[0].y
;   undefined4 g_ClipBuffer5Vertices[0].z
;
; Called Functions:
;   core_dtri.cpp_clipLineToPlane_FUN_0049b6c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049bdf0
        ;   Label: core_dtri.cpp_clipPolygonToNear_FUN_0049bdf0
    PUSH ESI                            ; 0049bdf1
    PUSH EDI                            ; 0049bdf2
    PUSH EBP                            ; 0049bdf3
    MOV EBP,ESP                         ; 0049bdf4
    SUB ESP,0x8                         ; 0049bdf6
    AND ESP,0xfffffff8                  ; 0049bdf9
    MOV EBX,dword ptr [0x02cee9a0]      ; 0049bdfc | g_ClipBuffer5VertexCount
    MOV EDX,dword ptr [EBP + 0x14]      ; 0049be02
    MOV dword ptr [ESP],EDX             ; 0049be05
    MOV EDX,dword ptr [0x02cee8dc]      ; 0049be08 | g_ClipBuffer4VertexCount
    XOR EDI,EDI                         ; 0049be0e
    TEST EDX,EDX                        ; 0049be10
    JLE 0x0049be97                      ; 0049be12
        ;   XREF to: 0049be97 (CONDITIONAL_JUMP)  ; LAB_0049be97
    MOV ESI,0x2cee8e0                   ; 0049be18 | g_ClipBuffer4Vertices
    MOV EAX,[0x02cee8dc]                ; 0049be1d | g_ClipBuffer4VertexCount
        ;   Label: LAB_0049be1d
    LEA ECX,[EDI + 0x1]                 ; 0049be22
    CMP ECX,EAX                         ; 0049be25
    JNZ 0x0049be2b                      ; 0049be27
        ;   XREF to: 0049be2b (CONDITIONAL_JUMP)  ; LAB_0049be2b
    XOR ECX,EAX                         ; 0049be29
    IMUL ECX,ECX,0xc                    ; 0049be2b
        ;   Label: LAB_0049be2b
    MOV EAX,0x2cee8e0                   ; 0049be2e | g_ClipBuffer4Vertices
    FLD float ptr [ESI + 0x8]           ; 0049be33 | g_ClipBuffer4Vertices[0].z | DAT_02cee8f4
    ADD EAX,ECX                         ; 0049be36
    MOV EDX,ESI                         ; 0049be38 | g_ClipBuffer4Vertices
    MOV dword ptr [ESP + 0x4],EAX       ; 0049be3a | g_ClipBuffer4Vertices[2].x
    XOR ECX,ECX                         ; 0049be3e
    FCOMP float ptr [ESP]               ; 0049be40
    FNSTSW AX                           ; 0049be43
    SAHF                                ; 0049be45
    JNC 0x0049be4d                      ; 0049be46
        ;   XREF to: 0049be4d (CONDITIONAL_JUMP)  ; LAB_0049be4d
    MOV ECX,0x1                         ; 0049be48
    MOV EAX,dword ptr [ESP + 0x4]       ; 0049be4d
        ;   Label: LAB_0049be4d
    FLD float ptr [EAX + 0x8]           ; 0049be51 | g_ClipBuffer4Vertices[0].z | DAT_02cee900
    FCOMP float ptr [ESP]               ; 0049be54
    FNSTSW AX                           ; 0049be57
    SAHF                                ; 0049be59
    JNC 0x0049be5f                      ; 0049be5a
        ;   XREF to: 0049be5f (CONDITIONAL_JUMP)  ; LAB_0049be5f
    OR CL,0x2                           ; 0049be5c
    CMP ECX,0x3                         ; 0049be5f
        ;   Label: LAB_0049be5f
    JA 0x0049be89                       ; 0049be62
        ;   XREF to: 0049be89 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x49bde0]  ; 0049be64 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 0049be6b
        ;   Label: caseD_0
    ADD ECX,0x2cee9a4                   ; 0049be6e | g_ClipBuffer5Vertices
    CMP ECX,EDX                         ; 0049be74
    JZ 0x0049be88                       ; 0049be76
        ;   XREF to: 0049be88 (CONDITIONAL_JUMP)  ; LAB_0049be88
    MOV EAX,dword ptr [EDX]             ; 0049be78 | g_ClipBuffer4Vertices
    MOV dword ptr [ECX],EAX             ; 0049be7a | g_ClipBuffer5Vertices
    MOV EAX,dword ptr [EDX + 0x4]       ; 0049be7c | g_ClipBuffer4Vertices[0].y
    MOV dword ptr [ECX + 0x4],EAX       ; 0049be7f | g_ClipBuffer5Vertices[0].y
    MOV EAX,dword ptr [EDX + 0x8]       ; 0049be82 | g_ClipBuffer4Vertices[0].z
    MOV dword ptr [ECX + 0x8],EAX       ; 0049be85 | g_ClipBuffer5Vertices[0].z
    INC EBX                             ; 0049be88
        ;   Label: LAB_0049be88
    MOV ECX,dword ptr [0x02cee8dc]      ; 0049be89 | g_ClipBuffer4VertexCount
        ;   Label: caseD_3
    INC EDI                             ; 0049be8f
    ADD ESI,0xc                         ; 0049be90
    CMP EDI,ECX                         ; 0049be93
    JL 0x0049be1d                       ; 0049be95
        ;   XREF to: 0049be1d (CONDITIONAL_JUMP)  ; LAB_0049be1d
    MOV dword ptr [0x02cee9a0],EBX      ; 0049be97 | g_ClipBuffer5VertexCount
        ;   Label: LAB_0049be97
    MOV ESP,EBP                         ; 0049be9d
    POP EBP                             ; 0049be9f
    POP EDI                             ; 0049bea0
    POP ESI                             ; 0049bea1
    POP EBX                             ; 0049bea2
    RET                                 ; 0049bea3
    IMUL ECX,EBX,0xc                    ; 0049bea4
        ;   Label: caseD_1
    FLD float ptr [ESP]                 ; 0049bea7
    SUB ESP,0x8                         ; 0049beaa
    FSTP double ptr [ESP]               ; 0049bead
    PUSH 0xbff00000                     ; 0049beb0
    PUSH 0x0                            ; 0049beb5
    PUSH 0x0                            ; 0049beb7
    PUSH 0x0                            ; 0049beb9
    PUSH 0x0                            ; 0049bebb
    PUSH 0x0                            ; 0049bebd
    ADD ECX,0x2cee9a4                   ; 0049bebf | g_ClipBuffer5Vertices
    PUSH ECX                            ; 0049bec5
    PUSH EDX                            ; 0049bec6 | g_ClipBuffer4Vertices
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0049bec7
    PUSH EAX                            ; 0049becb
    MOV dword ptr [0x02cee9a0],EBX      ; 0049becc | g_ClipBuffer5VertexCount
    CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0 ; 0049bed2
        ;   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_0049b6c0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EBX,dword ptr [0x02cee9a0]      ; 0049bed7 | g_ClipBuffer5VertexCount
    ADD ESP,0x2c                        ; 0049bedd
    JMP 0x0049be88                      ; 0049bee0
        ;   XREF to: 0049be88 (UNCONDITIONAL_JUMP)  ; LAB_0049be88
    IMUL ECX,EBX,0xc                    ; 0049bee2
        ;   Label: caseD_2
    ADD ECX,0x2cee9a4                   ; 0049bee5 | g_ClipBuffer5Vertices
    CMP ECX,EDX                         ; 0049beeb
    JZ 0x0049beff                       ; 0049beed
        ;   XREF to: 0049beff (CONDITIONAL_JUMP)  ; LAB_0049beff
    MOV EAX,dword ptr [EDX]             ; 0049beef | g_ClipBuffer4Vertices
    MOV dword ptr [ECX],EAX             ; 0049bef1 | g_ClipBuffer5Vertices
    MOV EAX,dword ptr [EDX + 0x4]       ; 0049bef3 | g_ClipBuffer4Vertices[0].y
    MOV dword ptr [ECX + 0x4],EAX       ; 0049bef6 | g_ClipBuffer5Vertices[0].y
    MOV EAX,dword ptr [EDX + 0x8]       ; 0049bef9 | g_ClipBuffer4Vertices[0].z
    MOV dword ptr [ECX + 0x8],EAX       ; 0049befc | g_ClipBuffer5Vertices[0].z
    INC EBX                             ; 0049beff
        ;   Label: LAB_0049beff
    IMUL ECX,EBX,0xc                    ; 0049bf00
    FLD float ptr [ESP]                 ; 0049bf03
    SUB ESP,0x8                         ; 0049bf06
    FSTP double ptr [ESP]               ; 0049bf09
    PUSH 0xbff00000                     ; 0049bf0c
    PUSH 0x0                            ; 0049bf11
    PUSH 0x0                            ; 0049bf13
    PUSH 0x0                            ; 0049bf15
    PUSH 0x0                            ; 0049bf17
    PUSH 0x0                            ; 0049bf19
    ADD ECX,0x2cee9a4                   ; 0049bf1b | g_ClipBuffer5Vertices
    PUSH ECX                            ; 0049bf21
    MOV ECX,dword ptr [ESP + 0x28]      ; 0049bf22
    PUSH ECX                            ; 0049bf26
    PUSH EDX                            ; 0049bf27 | g_ClipBuffer4Vertices
    MOV dword ptr [0x02cee9a0],EBX      ; 0049bf28 | g_ClipBuffer5VertexCount
    CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0 ; 0049bf2e
        ;   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_0049b6c0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EBX,dword ptr [0x02cee9a0]      ; 0049bf33 | g_ClipBuffer5VertexCount
    ADD ESP,0x2c                        ; 0049bf39
    JMP 0x0049be88                      ; 0049bf3c
        ;   XREF to: 0049be88 (UNCONDITIONAL_JUMP)  ; LAB_0049be88


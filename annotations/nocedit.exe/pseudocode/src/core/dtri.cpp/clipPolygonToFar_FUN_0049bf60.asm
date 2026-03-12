; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtri_cpp_clipPolygonToFar_FUN_0049bf60(float z_far)
;
; Parameters:
; float            Stack[0x4]:4   z_far
;
; Referenced Globals:
;   void* PTR_caseD_1_0049bf48 = 0049c014
;   void* PTR_caseD_3_0049bf50 = 0049bff9
;   int g_ClipBuffer5VertexCount
;   CVector3f[16] g_ClipBuffer5Vertices
;   undefined4 g_ClipBuffer5Vertices[0].y
;   undefined4 g_ClipBuffer5Vertices[0].z
;   undefined4 DAT_02cee9b8
;   undefined4 g_ClipBuffer5Vertices[2].x
;   undefined4 DAT_02cee9c4
;   int g_ClipOutputVertexCount
;   CVector3f[16] g_ClipOutputVertices
;   undefined4 DAT_02ceea6c
;   undefined4 DAT_02ceea70
;
; Called Functions:
;   core_dtri.cpp_clipLineToPlane_FUN_0049b6c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049bf60
        ;   Label: core_dtri.cpp_clipPolygonToFar_FUN_0049bf60
    PUSH ESI                            ; 0049bf61
    PUSH EDI                            ; 0049bf62
    PUSH EBP                            ; 0049bf63
    MOV EBP,ESP                         ; 0049bf64
    SUB ESP,0x8                         ; 0049bf66
    AND ESP,0xfffffff8                  ; 0049bf69
    MOV EBX,dword ptr [0x02ceea64]      ; 0049bf6c | g_ClipOutputVertexCount
    MOV EDX,dword ptr [EBP + 0x14]      ; 0049bf72
    MOV dword ptr [ESP],EDX             ; 0049bf75
    MOV EDX,dword ptr [0x02cee9a0]      ; 0049bf78 | g_ClipBuffer5VertexCount
    XOR EDI,EDI                         ; 0049bf7e
    TEST EDX,EDX                        ; 0049bf80
    JLE 0x0049c007                      ; 0049bf82
        ;   XREF to: 0049c007 (CONDITIONAL_JUMP)  ; LAB_0049c007
    MOV ESI,0x2cee9a4                   ; 0049bf88 | g_ClipBuffer5Vertices
    MOV EAX,[0x02cee9a0]                ; 0049bf8d | g_ClipBuffer5VertexCount
        ;   Label: LAB_0049bf8d
    LEA ECX,[EDI + 0x1]                 ; 0049bf92
    CMP ECX,EAX                         ; 0049bf95
    JNZ 0x0049bf9b                      ; 0049bf97
        ;   XREF to: 0049bf9b (CONDITIONAL_JUMP)  ; LAB_0049bf9b
    XOR ECX,EAX                         ; 0049bf99
    IMUL ECX,ECX,0xc                    ; 0049bf9b
        ;   Label: LAB_0049bf9b
    MOV EAX,0x2cee9a4                   ; 0049bf9e | g_ClipBuffer5Vertices
    FLD float ptr [ESI + 0x8]           ; 0049bfa3 | g_ClipBuffer5Vertices[0].z | DAT_02cee9b8
    ADD EAX,ECX                         ; 0049bfa6
    MOV EDX,ESI                         ; 0049bfa8 | g_ClipBuffer5Vertices
    MOV dword ptr [ESP + 0x4],EAX       ; 0049bfaa | g_ClipBuffer5Vertices[2].x
    XOR ECX,ECX                         ; 0049bfae
    FCOMP float ptr [ESP]               ; 0049bfb0
    FNSTSW AX                           ; 0049bfb3
    SAHF                                ; 0049bfb5
    JBE 0x0049bfbd                      ; 0049bfb6
        ;   XREF to: 0049bfbd (CONDITIONAL_JUMP)  ; LAB_0049bfbd
    MOV ECX,0x1                         ; 0049bfb8
    MOV EAX,dword ptr [ESP + 0x4]       ; 0049bfbd
        ;   Label: LAB_0049bfbd
    FLD float ptr [EAX + 0x8]           ; 0049bfc1 | g_ClipBuffer5Vertices[0].z | DAT_02cee9c4
    FCOMP float ptr [ESP]               ; 0049bfc4
    FNSTSW AX                           ; 0049bfc7
    SAHF                                ; 0049bfc9
    JBE 0x0049bfcf                      ; 0049bfca
        ;   XREF to: 0049bfcf (CONDITIONAL_JUMP)  ; LAB_0049bfcf
    OR CL,0x2                           ; 0049bfcc
    CMP ECX,0x3                         ; 0049bfcf
        ;   Label: LAB_0049bfcf
    JA 0x0049bff9                       ; 0049bfd2
        ;   XREF to: 0049bff9 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x49bf44]  ; 0049bfd4 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 0049bfdb
        ;   Label: caseD_0
    ADD ECX,0x2ceea68                   ; 0049bfde | g_ClipOutputVertices
    CMP ECX,EDX                         ; 0049bfe4
    JZ 0x0049bff8                       ; 0049bfe6
        ;   XREF to: 0049bff8 (CONDITIONAL_JUMP)  ; LAB_0049bff8
    MOV EAX,dword ptr [EDX]             ; 0049bfe8 | g_ClipBuffer5Vertices
    MOV dword ptr [ECX],EAX             ; 0049bfea | g_ClipOutputVertices
    MOV EAX,dword ptr [EDX + 0x4]       ; 0049bfec | g_ClipBuffer5Vertices[0].y
    MOV dword ptr [ECX + 0x4],EAX       ; 0049bfef | DAT_02ceea6c
    MOV EAX,dword ptr [EDX + 0x8]       ; 0049bff2 | g_ClipBuffer5Vertices[0].z
    MOV dword ptr [ECX + 0x8],EAX       ; 0049bff5 | DAT_02ceea70
    INC EBX                             ; 0049bff8
        ;   Label: LAB_0049bff8
    MOV ECX,dword ptr [0x02cee9a0]      ; 0049bff9 | g_ClipBuffer5VertexCount
        ;   Label: caseD_3
    INC EDI                             ; 0049bfff
    ADD ESI,0xc                         ; 0049c000
    CMP EDI,ECX                         ; 0049c003
    JL 0x0049bf8d                       ; 0049c005
        ;   XREF to: 0049bf8d (CONDITIONAL_JUMP)  ; LAB_0049bf8d
    MOV dword ptr [0x02ceea64],EBX      ; 0049c007 | g_ClipOutputVertexCount
        ;   Label: LAB_0049c007
    MOV ESP,EBP                         ; 0049c00d
    POP EBP                             ; 0049c00f
    POP EDI                             ; 0049c010
    POP ESI                             ; 0049c011
    POP EBX                             ; 0049c012
    RET                                 ; 0049c013
    IMUL ECX,EBX,0xc                    ; 0049c014
        ;   Label: caseD_1
    FLD float ptr [ESP]                 ; 0049c017
    SUB ESP,0x8                         ; 0049c01a
    FSTP double ptr [ESP]               ; 0049c01d
    PUSH 0xbff00000                     ; 0049c020
    PUSH 0x0                            ; 0049c025
    PUSH 0x0                            ; 0049c027
    PUSH 0x0                            ; 0049c029
    PUSH 0x0                            ; 0049c02b
    PUSH 0x0                            ; 0049c02d
    ADD ECX,0x2ceea68                   ; 0049c02f | g_ClipOutputVertices
    PUSH ECX                            ; 0049c035
    PUSH EDX                            ; 0049c036 | g_ClipBuffer5Vertices
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0049c037
    PUSH EAX                            ; 0049c03b
    MOV dword ptr [0x02ceea64],EBX      ; 0049c03c | g_ClipOutputVertexCount
    CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0 ; 0049c042
        ;   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_0049b6c0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EBX,dword ptr [0x02ceea64]      ; 0049c047 | g_ClipOutputVertexCount
    ADD ESP,0x2c                        ; 0049c04d
    JMP 0x0049bff8                      ; 0049c050
        ;   XREF to: 0049bff8 (UNCONDITIONAL_JUMP)  ; LAB_0049bff8
    IMUL ECX,EBX,0xc                    ; 0049c052
        ;   Label: caseD_2
    ADD ECX,0x2ceea68                   ; 0049c055 | g_ClipOutputVertices
    CMP ECX,EDX                         ; 0049c05b
    JZ 0x0049c06f                       ; 0049c05d
        ;   XREF to: 0049c06f (CONDITIONAL_JUMP)  ; LAB_0049c06f
    MOV EAX,dword ptr [EDX]             ; 0049c05f | g_ClipBuffer5Vertices
    MOV dword ptr [ECX],EAX             ; 0049c061 | g_ClipOutputVertices
    MOV EAX,dword ptr [EDX + 0x4]       ; 0049c063 | g_ClipBuffer5Vertices[0].y
    MOV dword ptr [ECX + 0x4],EAX       ; 0049c066 | DAT_02ceea6c
    MOV EAX,dword ptr [EDX + 0x8]       ; 0049c069 | g_ClipBuffer5Vertices[0].z
    MOV dword ptr [ECX + 0x8],EAX       ; 0049c06c | DAT_02ceea70
    INC EBX                             ; 0049c06f
        ;   Label: LAB_0049c06f
    IMUL ECX,EBX,0xc                    ; 0049c070
    FLD float ptr [ESP]                 ; 0049c073
    SUB ESP,0x8                         ; 0049c076
    FSTP double ptr [ESP]               ; 0049c079
    PUSH 0xbff00000                     ; 0049c07c
    PUSH 0x0                            ; 0049c081
    PUSH 0x0                            ; 0049c083
    PUSH 0x0                            ; 0049c085
    PUSH 0x0                            ; 0049c087
    PUSH 0x0                            ; 0049c089
    ADD ECX,0x2ceea68                   ; 0049c08b | g_ClipOutputVertices
    PUSH ECX                            ; 0049c091
    MOV ECX,dword ptr [ESP + 0x28]      ; 0049c092
    PUSH ECX                            ; 0049c096
    PUSH EDX                            ; 0049c097 | g_ClipBuffer5Vertices
    MOV dword ptr [0x02ceea64],EBX      ; 0049c098 | g_ClipOutputVertexCount
    CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0 ; 0049c09e
        ;   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_0049b6c0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EBX,dword ptr [0x02ceea64]      ; 0049c0a3 | g_ClipOutputVertexCount
    ADD ESP,0x2c                        ; 0049c0a9
    JMP 0x0049bff8                      ; 0049c0ac
        ;   XREF to: 0049bff8 (UNCONDITIONAL_JUMP)  ; LAB_0049bff8


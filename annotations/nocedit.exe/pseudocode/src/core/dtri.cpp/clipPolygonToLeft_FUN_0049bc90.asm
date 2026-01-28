; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dtri_cpp_clipPolygonToLeft_FUN_0049bc90(float x_min)
;
; Parameters:
; float            Stack[0x4]:4   x_min
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   void* PTR_caseD_1_0049bc80 = 0049bd42
;   void* PTR_caseD_3_0049bc88 = 0049bd27
;   int g_ClipBuffer3VertexCount
;   CVector3f[16] g_ClipBuffer3Vertices
;   undefined4 g_ClipBuffer3Vertices[0].y
;   undefined4 g_ClipBuffer3Vertices[0].z
;   undefined4 DAT_02cee828
;   undefined4 DAT_02cee834
;   int g_ClipBuffer4VertexCount
;   CVector3f[16] g_ClipBuffer4Vertices
;   undefined4 g_ClipBuffer4Vertices[0].y
;   undefined4 g_ClipBuffer4Vertices[0].z
;
; Called Functions:
;   core_dtri.cpp_clipLineToPlane_FUN_0049b6c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049bc90
        ;   Label: core_dtri.cpp_clipPolygonToLeft_FUN_0049bc90
    PUSH ESI                            ; 0049bc91
    PUSH EDI                            ; 0049bc92
    PUSH EBP                            ; 0049bc93
    MOV EBP,ESP                         ; 0049bc94
    SUB ESP,0x8                         ; 0049bc96
    AND ESP,0xfffffff8                  ; 0049bc99
    MOV EBX,dword ptr [0x02cee8dc]      ; 0049bc9c | g_ClipBuffer4VertexCount
    MOV EDX,dword ptr [EBP + 0x14]      ; 0049bca2
    MOV dword ptr [ESP],EDX             ; 0049bca5
    MOV EDX,dword ptr [0x02cee818]      ; 0049bca8 | g_ClipBuffer3VertexCount
    XOR EDI,EDI                         ; 0049bcae
    TEST EDX,EDX                        ; 0049bcb0
    JLE 0x0049bd35                      ; 0049bcb2
        ;   XREF to: 0049bd35 (CONDITIONAL_JUMP)  ; LAB_0049bd35
    MOV ESI,0x2cee81c                   ; 0049bcb8 | g_ClipBuffer3Vertices
    MOV EAX,[0x02cee818]                ; 0049bcbd | g_ClipBuffer3VertexCount
        ;   Label: LAB_0049bcbd
    LEA ECX,[EDI + 0x1]                 ; 0049bcc2
    CMP ECX,EAX                         ; 0049bcc5
    JNZ 0x0049bccb                      ; 0049bcc7
        ;   XREF to: 0049bccb (CONDITIONAL_JUMP)  ; LAB_0049bccb
    XOR ECX,EAX                         ; 0049bcc9
    IMUL ECX,ECX,0xc                    ; 0049bccb
        ;   Label: LAB_0049bccb
    MOV EAX,0x2cee81c                   ; 0049bcce | g_ClipBuffer3Vertices
    FLD float ptr [ESI]                 ; 0049bcd3 | g_ClipBuffer3Vertices | DAT_02cee828
    ADD EAX,ECX                         ; 0049bcd5
    MOV EDX,ESI                         ; 0049bcd7 | g_ClipBuffer3Vertices
    MOV dword ptr [ESP + 0x4],EAX       ; 0049bcd9 | DAT_02cee834
    XOR ECX,ECX                         ; 0049bcdd
    FCOMP float ptr [ESP]               ; 0049bcdf
    FNSTSW AX                           ; 0049bce2
    SAHF                                ; 0049bce4
    JNC 0x0049bcec                      ; 0049bce5
        ;   XREF to: 0049bcec (CONDITIONAL_JUMP)  ; LAB_0049bcec
    MOV ECX,0x1                         ; 0049bce7
    MOV EAX,dword ptr [ESP + 0x4]       ; 0049bcec
        ;   Label: LAB_0049bcec
    FLD float ptr [EAX]                 ; 0049bcf0 | g_ClipBuffer3Vertices | DAT_02cee834
    FCOMP float ptr [ESP]               ; 0049bcf2
    FNSTSW AX                           ; 0049bcf5
    SAHF                                ; 0049bcf7
    JNC 0x0049bcfd                      ; 0049bcf8
        ;   XREF to: 0049bcfd (CONDITIONAL_JUMP)  ; LAB_0049bcfd
    OR CL,0x2                           ; 0049bcfa
    CMP ECX,0x3                         ; 0049bcfd
        ;   Label: LAB_0049bcfd
    JA 0x0049bd27                       ; 0049bd00
        ;   XREF to: 0049bd27 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x49bc7c]  ; 0049bd02 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 0049bd09
        ;   Label: caseD_0
    ADD ECX,0x2cee8e0                   ; 0049bd0c | g_ClipBuffer4Vertices
    CMP ECX,EDX                         ; 0049bd12
    JZ 0x0049bd26                       ; 0049bd14
        ;   XREF to: 0049bd26 (CONDITIONAL_JUMP)  ; LAB_0049bd26
    MOV EAX,dword ptr [EDX]             ; 0049bd16 | g_ClipBuffer3Vertices
    MOV dword ptr [ECX],EAX             ; 0049bd18 | g_ClipBuffer4Vertices
    MOV EAX,dword ptr [EDX + 0x4]       ; 0049bd1a | g_ClipBuffer3Vertices[0].y
    MOV dword ptr [ECX + 0x4],EAX       ; 0049bd1d | g_ClipBuffer4Vertices[0].y
    MOV EAX,dword ptr [EDX + 0x8]       ; 0049bd20 | g_ClipBuffer3Vertices[0].z
    MOV dword ptr [ECX + 0x8],EAX       ; 0049bd23 | g_ClipBuffer4Vertices[0].z
    INC EBX                             ; 0049bd26
        ;   Label: LAB_0049bd26
    MOV ECX,dword ptr [0x02cee818]      ; 0049bd27 | g_ClipBuffer3VertexCount
        ;   Label: caseD_3
    INC EDI                             ; 0049bd2d
    ADD ESI,0xc                         ; 0049bd2e
    CMP EDI,ECX                         ; 0049bd31
    JL 0x0049bcbd                       ; 0049bd33
        ;   XREF to: 0049bcbd (CONDITIONAL_JUMP)  ; LAB_0049bcbd
    MOV dword ptr [0x02cee8dc],EBX      ; 0049bd35 | g_ClipBuffer4VertexCount
        ;   Label: LAB_0049bd35
    MOV ESP,EBP                         ; 0049bd3b
    POP EBP                             ; 0049bd3d
    POP EDI                             ; 0049bd3e
    POP ESI                             ; 0049bd3f
    POP EBX                             ; 0049bd40
    RET                                 ; 0049bd41
    IMUL ECX,EBX,0xc                    ; 0049bd42
        ;   Label: caseD_1
    FLD float ptr [ESP]                 ; 0049bd45
    SUB ESP,0x8                         ; 0049bd48
    FSTP double ptr [ESP]               ; 0049bd4b
    PUSH 0x0                            ; 0049bd4e
    PUSH 0x0                            ; 0049bd50
    PUSH 0x0                            ; 0049bd52
    PUSH 0x0                            ; 0049bd54
    PUSH 0xbff00000                     ; 0049bd56
    PUSH 0x0                            ; 0049bd5b
    ADD ECX,0x2cee8e0                   ; 0049bd5d | g_ClipBuffer4Vertices
    PUSH ECX                            ; 0049bd63
    PUSH EDX                            ; 0049bd64 | g_ClipBuffer3Vertices
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0049bd65
    PUSH EAX                            ; 0049bd69
    MOV dword ptr [0x02cee8dc],EBX      ; 0049bd6a | g_ClipBuffer4VertexCount
    CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0 ; 0049bd70
        ;   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_0049b6c0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EBX,dword ptr [0x02cee8dc]      ; 0049bd75 | g_ClipBuffer4VertexCount
    ADD ESP,0x2c                        ; 0049bd7b
    JMP 0x0049bd26                      ; 0049bd7e
        ;   XREF to: 0049bd26 (UNCONDITIONAL_JUMP)  ; LAB_0049bd26
    IMUL ECX,EBX,0xc                    ; 0049bd80
        ;   Label: caseD_2
    ADD ECX,0x2cee8e0                   ; 0049bd83 | g_ClipBuffer4Vertices
    CMP ECX,EDX                         ; 0049bd89
    JZ 0x0049bd9d                       ; 0049bd8b
        ;   XREF to: 0049bd9d (CONDITIONAL_JUMP)  ; LAB_0049bd9d
    MOV EAX,dword ptr [EDX]             ; 0049bd8d | g_ClipBuffer3Vertices
    MOV dword ptr [ECX],EAX             ; 0049bd8f | g_ClipBuffer4Vertices
    MOV EAX,dword ptr [EDX + 0x4]       ; 0049bd91 | g_ClipBuffer3Vertices[0].y
    MOV dword ptr [ECX + 0x4],EAX       ; 0049bd94 | g_ClipBuffer4Vertices[0].y
    MOV EAX,dword ptr [EDX + 0x8]       ; 0049bd97 | g_ClipBuffer3Vertices[0].z
    MOV dword ptr [ECX + 0x8],EAX       ; 0049bd9a | g_ClipBuffer4Vertices[0].z
    INC EBX                             ; 0049bd9d
        ;   Label: LAB_0049bd9d
    IMUL ECX,EBX,0xc                    ; 0049bd9e
    FLD float ptr [ESP]                 ; 0049bda1
    SUB ESP,0x8                         ; 0049bda4
    FSTP double ptr [ESP]               ; 0049bda7
    PUSH 0x0                            ; 0049bdaa
    PUSH 0x0                            ; 0049bdac
    PUSH 0x0                            ; 0049bdae
    PUSH 0x0                            ; 0049bdb0
    PUSH 0xbff00000                     ; 0049bdb2
    PUSH 0x0                            ; 0049bdb7
    ADD ECX,0x2cee8e0                   ; 0049bdb9 | g_ClipBuffer4Vertices
    PUSH ECX                            ; 0049bdbf
    MOV ECX,dword ptr [ESP + 0x28]      ; 0049bdc0
    PUSH ECX                            ; 0049bdc4
    PUSH EDX                            ; 0049bdc5 | g_ClipBuffer3Vertices
    MOV dword ptr [0x02cee8dc],EBX      ; 0049bdc6 | g_ClipBuffer4VertexCount
    CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0 ; 0049bdcc
        ;   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_0049b6c0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EBX,dword ptr [0x02cee8dc]      ; 0049bdd1 | g_ClipBuffer4VertexCount
    ADD ESP,0x2c                        ; 0049bdd7
    JMP 0x0049bd26                      ; 0049bdda
        ;   XREF to: 0049bd26 (UNCONDITIONAL_JUMP)  ; LAB_0049bd26


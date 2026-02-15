; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonTriangle * __cdecl core_dtri_cpp_buildClipTriangleFan_FUN_0049cb5a(int triangle_count)
;
; Parameters:
; undefined4       Stack[0x0]:4   local_res0
; int              Stack[0x4]:4   triangle_count
;
; Referenced Globals:
;   CVector3f[16] g_ClipOutputVertices
;   undefined4 g_ClipOutputVertices[1].x
;   undefined4 g_ClipOutputVertices[2].x
;   undefined4 g_ClipOutputVertices[3].x
;   CDemonTriangle[8] g_ClippedTriangleBuffer
;   undefined4 g_ClippedTriangleBuffer[1].vertex1.x
;
; Called Functions:
;   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0049cb5a
        ;   Label: core_dtri.cpp_buildClipTriangleFan_FUN_0049cb5a
    PUSH ESI                            ; 0049cb5b
    PUSH EBX                            ; 0049cb5c
    MOV ESI,0x2ceea68                   ; 0049cb5d | g_ClipOutputVertices
    MOV EDI,0x2ceea68                   ; 0049cb62 | g_ClipOutputVertices
    MOV EBX,0x2ceeb28                   ; 0049cb67 | g_ClippedTriangleBuffer
    ADD ESI,0xc                         ; 0049cb6c
    ADD EDI,0x18                        ; 0049cb6f
    PUSH EDI                            ; 0049cb72 | g_ClipOutputVertices[2].x | g_ClipOutputVertices[3].x
        ;   Label: LAB_0049cb72
    PUSH ESI                            ; 0049cb73 | g_ClipOutputVertices[1].x | g_ClipOutputVertices[2].x
    PUSH 0x2ceea68                      ; 0049cb74 | g_ClipOutputVertices
    PUSH EBX                            ; 0049cb79 | g_ClippedTriangleBuffer | g_ClippedTriangleBuffer[1].vertex1.x
    INC EBP                             ; 0049cb7a
    ADD EDI,0xc                         ; 0049cb7b
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790 ; 0049cb7e
        ;   XREF to: 0049a790 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 0049cb83
    ADD ESI,0xc                         ; 0049cb86
    MOV ECX,dword ptr [ESP + 0xc]       ; 0049cb89
    ADD EBX,0x38                        ; 0049cb8d
    CMP EBP,ECX                         ; 0049cb90
    JL 0x0049cb72                       ; 0049cb92
        ;   XREF to: 0049cb72 (CONDITIONAL_JUMP)  ; LAB_0049cb72
    POP EBX                             ; 0049cb94
    POP ESI                             ; 0049cb95
    POP EDI                             ; 0049cb96
    MOV EAX,0x2ceeb28                   ; 0049cb97 | g_ClippedTriangleBuffer
        ;   Label: LAB_0049cb97
    ADD ESP,0x4                         ; 0049cb9c
    POP EBP                             ; 0049cb9f
    RET                                 ; 0049cba0


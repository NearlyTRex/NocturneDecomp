; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_mini3d_cpp_init_FUN_00511030(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d2ad74
;
; Called Functions:
;   engine_mini3d.cpp_allocVertexBuffer_FUN_00514c90
;
; *****************************************************************************

section .text

    PUSH 0x3e8                          ; 00511030
        ;   Label: engine_mini3d.cpp_init_FUN_00511030
    CALL engine_mini3d.cpp_allocVertexBuffer_FUN_00514c90 ; 00511035
        ;   XREF to: 00514c90 (UNCONDITIONAL_CALL)  ; void * engine_mini3d.cpp_allocVertexBuffer_FUN_00514c90(int vertex_count)
    ADD ESP,0x4                         ; 0051103a
    MOV [0x01d2ad74],EAX                ; 0051103d | DAT_01d2ad74
    XOR EAX,EAX                         ; 00511042
    RET                                 ; 00511044


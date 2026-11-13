; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_polyListD3DL2_FUN_004ee3a0(float *vertices,int vertex_count,ushort *indices,int triangle_count)
;
; Parameters:
; float *          Stack[0x4]:4   vertices
; int              Stack[0x8]:4   vertex_count
; ushort *         Stack[0xc]:4   indices
; int              Stack[0x10]:4   triangle_count
;
; Referenced Globals:
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01d76c34
;   undefined4 DAT_01ed3198
;   undefined4 DAT_02cf60c4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   engine_mini3d.cpp_updateRenderState_FUN_004f2430
;   engine_mini3d.cpp_updateTransform_FUN_004edcc0
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004ee3a0
        ;   Label: engine_mini3d.cpp_polyListD3DL2_FUN_004ee3a0
    PUSH EBP                            ; 004ee3a1
    MOV EAX,dword ptr [ESP + 0x18]      ; 004ee3a2
    MOV EDX,dword ptr [0x01ed3198]      ; 004ee3a6 | DAT_01ed3198
    MOV ECX,dword ptr [0x01d76c34]      ; 004ee3ac | DAT_01d76c34
    ADD EDX,EAX                         ; 004ee3b2
    ADD ECX,dword ptr [ESP + 0x10]      ; 004ee3b4
    MOV dword ptr [0x01ed3198],EDX      ; 004ee3b8 | DAT_01ed3198
    MOV dword ptr [0x01d76c34],ECX      ; 004ee3be | DAT_01d76c34
    CALL engine_mini3d.cpp_updateTransform_FUN_004edcc0 ; 004ee3c4
        ;   XREF to: 004edcc0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_updateTransform_FUN_004edcc0()
    CALL engine_mini3d.cpp_updateRenderState_FUN_004f2430 ; 004ee3c9
        ;   XREF to: 004f2430 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_updateRenderState_FUN_004f2430()
    CMP dword ptr [0x02cf60c4],0x0      ; 004ee3ce | DAT_02cf60c4
    JZ 0x004ee40a                       ; 004ee3d5
        ;   XREF to: 004ee40a (CONDITIONAL_JUMP)  ; LAB_004ee40a
    CMP dword ptr [0x01c6cee8],0x0      ; 004ee3d7 | DAT_01c6cee8
    JZ 0x004ee40a                       ; 004ee3de
        ;   XREF to: 004ee40a (CONDITIONAL_JUMP)  ; LAB_004ee40a
    PUSH ESI                            ; 004ee3e0
    PUSH EBX                            ; 004ee3e1
    MOV EAX,[0x01c6e2b4]                ; 004ee3e2 | DAT_01c6e2b4
    PUSH EAX                            ; 004ee3e7
    MOV EDX,dword ptr [ESP + 0x24]      ; 004ee3e8
    PUSH EDX                            ; 004ee3ec
    MOV ECX,dword ptr [ESP + 0x24]      ; 004ee3ed
    PUSH ECX                            ; 004ee3f1
    MOV EBX,dword ptr [ESP + 0x24]      ; 004ee3f2
    PUSH EBX                            ; 004ee3f6
    MOV ESI,dword ptr [ESP + 0x24]      ; 004ee3f7
    PUSH ESI                            ; 004ee3fb
    CALL dword ptr [0x02cf60c4]         ; 004ee3fc | DAT_02cf60c4
    ADD ESP,0x14                        ; 004ee402
    POP EBX                             ; 004ee405
    POP ESI                             ; 004ee406
    POP EBP                             ; 004ee407
    POP EDI                             ; 004ee408
    RET                                 ; 004ee409
    MOV EDI,0x5c80a9                    ; 004ee40a
        ;   Label: LAB_004ee40a
    MOV EBP,0x7a9                       ; 004ee40f
    PUSH 0x5c80be                       ; 004ee414
    MOV dword ptr [0x01d71de0],EDI      ; 004ee419 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 004ee41f | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004ee425
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004ee42a
    POP EBP                             ; 004ee42d
    POP EDI                             ; 004ee42e
    RET                                 ; 004ee42f


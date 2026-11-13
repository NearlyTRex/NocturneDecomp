; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_polyListD3DL2_FUN_004f3e60(float *vertices,int vertex_count,ushort *indices,int triangle_count)
;
; Parameters:
; float *          Stack[0x4]:4   vertices
; int              Stack[0x8]:4   vertex_count
; ushort *         Stack[0xc]:4   indices
; int              Stack[0x10]:4   triangle_count
;
; Referenced Globals:
;   undefined4 DAT_01c37788
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01d09854
;   undefined4 DAT_01e61b58
;   undefined4 DAT_0264bc98
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   engine_mini3d.cpp_updateRenderState_FUN_004f7da0
;   engine_mini3d.cpp_updateTransform_FUN_004f3740
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004f3e60
        ;   Label: engine_mini3d.cpp_polyListD3DL2_FUN_004f3e60
    PUSH EBP                            ; 004f3e61
    MOV EAX,dword ptr [ESP + 0x18]      ; 004f3e62
    MOV EDX,dword ptr [0x01e61b58]      ; 004f3e66 | DAT_01e61b58
    MOV ECX,dword ptr [0x01d09854]      ; 004f3e6c | DAT_01d09854
    ADD EDX,EAX                         ; 004f3e72
    ADD ECX,dword ptr [ESP + 0x10]      ; 004f3e74
    MOV dword ptr [0x01e61b58],EDX      ; 004f3e78 | DAT_01e61b58
    MOV dword ptr [0x01d09854],ECX      ; 004f3e7e | DAT_01d09854
    CALL engine_mini3d.cpp_updateTransform_FUN_004f3740 ; 004f3e84
        ;   XREF to: 004f3740 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_updateTransform_FUN_004f3740()
    CALL engine_mini3d.cpp_updateRenderState_FUN_004f7da0 ; 004f3e89
        ;   XREF to: 004f7da0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_updateRenderState_FUN_004f7da0()
    CMP dword ptr [0x0264bc98],0x0      ; 004f3e8e | DAT_0264bc98
    JZ 0x004f3eca                       ; 004f3e95
        ;   XREF to: 004f3eca (CONDITIONAL_JUMP)  ; LAB_004f3eca
    CMP dword ptr [0x01c37788],0x0      ; 004f3e97 | DAT_01c37788
    JZ 0x004f3eca                       ; 004f3e9e
        ;   XREF to: 004f3eca (CONDITIONAL_JUMP)  ; LAB_004f3eca
    PUSH ESI                            ; 004f3ea0
    PUSH EBX                            ; 004f3ea1
    MOV EAX,[0x01c38b54]                ; 004f3ea2 | DAT_01c38b54
    PUSH EAX                            ; 004f3ea7
    MOV EDX,dword ptr [ESP + 0x24]      ; 004f3ea8
    PUSH EDX                            ; 004f3eac
    MOV ECX,dword ptr [ESP + 0x24]      ; 004f3ead
    PUSH ECX                            ; 004f3eb1
    MOV EBX,dword ptr [ESP + 0x24]      ; 004f3eb2
    PUSH EBX                            ; 004f3eb6
    MOV ESI,dword ptr [ESP + 0x24]      ; 004f3eb7
    PUSH ESI                            ; 004f3ebb
    CALL dword ptr [0x0264bc98]         ; 004f3ebc | DAT_0264bc98
    ADD ESP,0x14                        ; 004f3ec2
    POP EBX                             ; 004f3ec5
    POP ESI                             ; 004f3ec6
    POP EBP                             ; 004f3ec7
    POP EDI                             ; 004f3ec8
    RET                                 ; 004f3ec9
    MOV EDI,0x5ddd60                    ; 004f3eca
        ;   Label: LAB_004f3eca
    MOV EBP,0x7ca                       ; 004f3ecf
    PUSH 0x5ddd75                       ; 004f3ed4
    MOV dword ptr [0x01d046a0],EDI      ; 004f3ed9 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 004f3edf | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004f3ee5
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004f3eea
    POP EBP                             ; 004f3eed
    POP EDI                             ; 004f3eee
    RET                                 ; 004f3eef


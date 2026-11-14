; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcube_cpp_buildAndRenderTrianglePrimitive_FUN_00457af0(CVector3f **triangle_vertex_pointers,CVector3f *vertex_buffer)
;
; Parameters:
; CVector3f * *    Stack[0x4]:4   triangle_vertex_pointers
; CVector3f *      Stack[0x8]:4   vertex_buffer
; Local Variables:
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_dcube.cpp_CDemonCube_rotateVertices_FUN_00457f70 at 0045813a
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01e82168
;
; Called Functions:
;   core_set.cpp_CDemonSet_renderPrimitiveList_FUN_00555360
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00457af0
        ;   Label: core_dcube.cpp_buildAndRenderTrianglePrimitive_FUN_00457af0
    PUSH ESI                            ; 00457af1
    SUB ESP,0x28                        ; 00457af2
    MOV ESI,dword ptr [ESP + 0x34]      ; 00457af5
    MOV EBX,dword ptr [ESP + 0x38]      ; 00457af9
    MOV EDX,0x3                         ; 00457afd
    XOR ECX,ECX                         ; 00457b02
    MOV dword ptr [ESP + 0x4],EDX       ; 00457b04
    MOV dword ptr [ESP + 0x14],ECX      ; 00457b08
    MOV dword ptr [ESP + 0x10],ECX      ; 00457b0c
    MOV dword ptr [ESP + 0xc],ECX       ; 00457b10
    MOV dword ptr [ESP + 0x8],ECX       ; 00457b14
    MOV ECX,0xc                         ; 00457b18
    MOV EAX,dword ptr [ESI]             ; 00457b1d
    XOR EDX,EDX                         ; 00457b1f
    SUB EAX,EBX                         ; 00457b21
    DIV ECX                             ; 00457b23
    MOV dword ptr [ESP + 0x18],EAX      ; 00457b25
    MOV EAX,dword ptr [ESI + 0x4]       ; 00457b29
    XOR EDX,EDX                         ; 00457b2c
    SUB EAX,EBX                         ; 00457b2e
    DIV ECX                             ; 00457b30
    MOV dword ptr [ESP + 0x1c],EAX      ; 00457b32
    MOV EAX,dword ptr [ESI + 0x8]       ; 00457b36
    XOR EDX,EDX                         ; 00457b39
    SUB EAX,EBX                         ; 00457b3b
    DIV ECX                             ; 00457b3d
    PUSH 0x1                            ; 00457b3f
    MOV dword ptr [ESP + 0x24],EAX      ; 00457b41
    LEA EAX,[ESP + 0x4]                 ; 00457b45
    PUSH EAX                            ; 00457b49
    MOV EDX,dword ptr [0x00622c18]      ; 00457b4a | g_CDemonSetPtr
    PUSH EDX                            ; 00457b50
    CALL core_set.cpp_CDemonSet_renderPrimitiveList_FUN_00555360 ; 00457b51
        ;   XREF to: 00555360 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderPrimitiveList_FUN_00555360(CDemonSet * this_ptr, SMRGLHeaderPrimitive * primitive_array, int primitive_count)
    ADD ESP,0xc                         ; 00457b56
    ADD ESP,0x28                        ; 00457b59
    POP ESI                             ; 00457b5c
    POP EBX                             ; 00457b5d
    RET                                 ; 00457b5e


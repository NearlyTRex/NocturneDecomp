; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcube_cpp_buildAndRenderTrianglePrimitive_FUN_004566e0(CVector3f **triangle_vertex_pointers,CVector3f *vertex_buffer)
;
; Parameters:
; CVector3f * *    Stack[0x4]:4   triangle_vertex_pointers
; CVector3f *      Stack[0x8]:4   vertex_buffer
; Local Variables:
; SMRGLPrimitiveTriangleIndex Stack[-0x30]:36  local_30
;
; XREF[1]:
;   core_dcube.cpp_CDemonCube_rotateVertices_FUN_00457650 at 0045781a
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_set.cpp_CDemonSet_renderPrimitiveList_FUN_005708e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004566e0
        ;   Label: core_dcube.cpp_buildAndRenderTrianglePrimitive_FUN_004566e0
    PUSH ESI                            ; 004566e1
    SUB ESP,0x28                        ; 004566e2
    MOV ESI,dword ptr [ESP + 0x34]      ; 004566e5
    MOV EBX,dword ptr [ESP + 0x38]      ; 004566e9
    MOV EDX,0x3                         ; 004566ed
    XOR ECX,ECX                         ; 004566f2
    MOV dword ptr [ESP + 0x4],EDX       ; 004566f4
    MOV dword ptr [ESP + 0x14],ECX      ; 004566f8
    MOV dword ptr [ESP + 0x10],ECX      ; 004566fc
    MOV dword ptr [ESP + 0xc],ECX       ; 00456700
    MOV dword ptr [ESP + 0x8],ECX       ; 00456704
    MOV ECX,0xc                         ; 00456708
    MOV EAX,dword ptr [ESI]             ; 0045670d
    XOR EDX,EDX                         ; 0045670f
    SUB EAX,EBX                         ; 00456711
    DIV ECX                             ; 00456713
    MOV dword ptr [ESP + 0x18],EAX      ; 00456715
    MOV EAX,dword ptr [ESI + 0x4]       ; 00456719
    XOR EDX,EDX                         ; 0045671c
    SUB EAX,EBX                         ; 0045671e
    DIV ECX                             ; 00456720
    MOV dword ptr [ESP + 0x1c],EAX      ; 00456722
    MOV EAX,dword ptr [ESI + 0x8]       ; 00456726
    XOR EDX,EDX                         ; 00456729
    SUB EAX,EBX                         ; 0045672b
    DIV ECX                             ; 0045672d
    PUSH 0x1                            ; 0045672f
    MOV dword ptr [ESP + 0x24],EAX      ; 00456731
    LEA EAX,[ESP + 0x4]                 ; 00456735
    PUSH EAX                            ; 00456739
    MOV EDX,dword ptr [0x006810c8]      ; 0045673a | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EDX                            ; 00456740 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_renderPrimitiveList_FUN_005708e0 ; 00456741
        ;   XREF to: 005708e0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderPrimitiveList_FUN_005708e0(CDemonSet * this_ptr, SMRGLHeaderPrimitive * primitive_array, int primitive_count)
    ADD ESP,0xc                         ; 00456746
    ADD ESP,0x28                        ; 00456749
    POP ESI                             ; 0045674c
    POP EBX                             ; 0045674d
    RET                                 ; 0045674e


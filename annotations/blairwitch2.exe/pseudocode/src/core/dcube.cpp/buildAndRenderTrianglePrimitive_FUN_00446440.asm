; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcube_cpp_buildAndRenderTrianglePrimitive_FUN_00446440(CVector3f **triangle_vertex_pointers,CVector3f *vertex_buffer)
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
;   core_dcube.cpp_CDemonCube_rotateVertices_FUN_004468c0 at 00446a8a
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_set.cpp_CDemonSet_renderPrimitiveList_FUN_005340b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00446440
        ;   Label: core_dcube.cpp_buildAndRenderTrianglePrimitive_FUN_00446440
    PUSH ESI                            ; 00446441
    SUB ESP,0x28                        ; 00446442
    MOV ESI,dword ptr [ESP + 0x34]      ; 00446445
    MOV EBX,dword ptr [ESP + 0x38]      ; 00446449
    MOV EDX,0x3                         ; 0044644d
    XOR ECX,ECX                         ; 00446452
    MOV dword ptr [ESP + 0x4],EDX       ; 00446454
    MOV dword ptr [ESP + 0x14],ECX      ; 00446458
    MOV dword ptr [ESP + 0x10],ECX      ; 0044645c
    MOV dword ptr [ESP + 0xc],ECX       ; 00446460
    MOV dword ptr [ESP + 0x8],ECX       ; 00446464
    MOV ECX,0xc                         ; 00446468
    MOV EAX,dword ptr [ESI]             ; 0044646d
    XOR EDX,EDX                         ; 0044646f
    SUB EAX,EBX                         ; 00446471
    DIV ECX                             ; 00446473
    MOV dword ptr [ESP + 0x18],EAX      ; 00446475
    MOV EAX,dword ptr [ESI + 0x4]       ; 00446479
    XOR EDX,EDX                         ; 0044647c
    SUB EAX,EBX                         ; 0044647e
    DIV ECX                             ; 00446480
    MOV dword ptr [ESP + 0x1c],EAX      ; 00446482
    MOV EAX,dword ptr [ESI + 0x8]       ; 00446486
    XOR EDX,EDX                         ; 00446489
    SUB EAX,EBX                         ; 0044648b
    DIV ECX                             ; 0044648d
    PUSH 0x1                            ; 0044648f
    MOV dword ptr [ESP + 0x24],EAX      ; 00446491
    LEA EAX,[ESP + 0x4]                 ; 00446495
    PUSH EAX                            ; 00446499
    MOV EDX,dword ptr [0x0061b5a8]      ; 0044649a | g_CDemonSetPtr
    PUSH EDX                            ; 004464a0 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_renderPrimitiveList_FUN_005340b0 ; 004464a1
        ;   XREF to: 005340b0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderPrimitiveList_FUN_005340b0(CDemonSet * this_ptr, SMRGLHeaderPrimitive * primitive_array, int primitive_count)
    ADD ESP,0xc                         ; 004464a6
    ADD ESP,0x28                        ; 004464a9
    POP ESI                             ; 004464ac
    POP EBX                             ; 004464ad
    RET                                 ; 004464ae


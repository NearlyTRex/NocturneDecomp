; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_meshlod_cpp_CLodMesh_renderWireframe_FUN_0051e770(CLodMesh *this_ptr)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; Local Variables:
; SRenderVertex    Stack[-0x7c]:48  local_7c
; SRenderVertex    Stack[-0x4c]:48  local_4c
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_meshlod.cpp_CLodMesh_previewLodGeneration_FUN_0051d520 at 0051d69e
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   engine_3d.c_clipAndDrawLine2D_FUN_00407d70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051e770
        ;   Label: shape_meshlod.cpp_CLodMesh_renderWireframe_FUN_0051e770
    PUSH ESI                            ; 0051e771
    PUSH EDI                            ; 0051e772
    PUSH EBP                            ; 0051e773
    SUB ESP,0xc                         ; 0051e774
    MOV EAX,dword ptr [ESP + 0x20]      ; 0051e777
    XOR EDX,EDX                         ; 0051e77b
    MOV ECX,dword ptr [EAX + 0x8]       ; 0051e77d
    MOV dword ptr [ESP + 0x4],EDX       ; 0051e780
    TEST ECX,ECX                        ; 0051e784
    JLE 0x0051e81f                      ; 0051e786
        ;   XREF to: 0051e81f (CONDITIONAL_JUMP)  ; LAB_0051e81f
    MOV dword ptr [ESP],EDX             ; 0051e78c
    MOV EAX,dword ptr [ESP + 0x20]      ; 0051e78f
        ;   Label: LAB_0051e78f
    MOV EBX,dword ptr [ESP]             ; 0051e793
    MOV EAX,dword ptr [EAX + 0xc]       ; 0051e796
    ADD EBX,EAX                         ; 0051e799
    MOV EDX,dword ptr [EBX + 0x40]      ; 0051e79b
    MOV dword ptr [ESP + 0x8],EBX       ; 0051e79e
    TEST EDX,EDX                        ; 0051e7a2
    JNZ 0x0051e7fb                      ; 0051e7a4
        ;   XREF to: 0051e7fb (CONDITIONAL_JUMP)  ; LAB_0051e7fb
    MOV EBP,dword ptr [ESP + 0x8]       ; 0051e7a6
    XOR EBX,EBX                         ; 0051e7aa
    LEA EDI,[EBX + 0x1]                 ; 0051e7ac
        ;   Label: LAB_0051e7ac
    CMP EDI,0x3                         ; 0051e7af
    JL 0x0051e7b6                       ; 0051e7b2
        ;   XREF to: 0051e7b6 (CONDITIONAL_JUMP)  ; LAB_0051e7b6
    XOR EDI,EDI                         ; 0051e7b4
    MOV ECX,dword ptr [ESP + 0x8]       ; 0051e7b6
        ;   Label: LAB_0051e7b6
    SHL EDI,0x2                         ; 0051e7ba
    ADD EDI,ECX                         ; 0051e7bd
    IMUL ESI,dword ptr [EDI + 0x10],0x30 ; 0051e7bf
    MOV EAX,[0x006703ec]                ; 0051e7c3 | g_CDemonRendererPtr2
    SUB ESP,0x30                        ; 0051e7c8
    MOV ECX,0xc                         ; 0051e7cb
    MOV EAX,dword ptr [EAX]             ; 0051e7d0 | g_CDemonRendererInstance
    MOV EDI,ESP                         ; 0051e7d2
    ADD ESI,EAX                         ; 0051e7d4
    MOVSD.REP ES:EDI,ESI                ; 0051e7d6
    IMUL ESI,dword ptr [EBP + 0x10],0x30 ; 0051e7d8
    SUB ESP,0x30                        ; 0051e7dc
    MOV ECX,0xc                         ; 0051e7df
    MOV EDI,ESP                         ; 0051e7e4
    ADD ESI,EAX                         ; 0051e7e6
    ADD EBP,0x4                         ; 0051e7e8
    INC EBX                             ; 0051e7eb
    MOVSD.REP ES:EDI,ESI                ; 0051e7ec
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 0051e7ee
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 0051e7f3
    CMP EBX,0x3                         ; 0051e7f6
    JL 0x0051e7ac                       ; 0051e7f9
        ;   XREF to: 0051e7ac (CONDITIONAL_JUMP)  ; LAB_0051e7ac
    MOV EBX,dword ptr [ESP]             ; 0051e7fb
        ;   Label: LAB_0051e7fb
    ADD EBX,0x8c                        ; 0051e7fe
    MOV ESI,dword ptr [ESP + 0x4]       ; 0051e804
    MOV dword ptr [ESP],EBX             ; 0051e808
    MOV EBX,dword ptr [ESP + 0x20]      ; 0051e80b
    INC ESI                             ; 0051e80f
    MOV EDI,dword ptr [EBX + 0x8]       ; 0051e810
    MOV dword ptr [ESP + 0x4],ESI       ; 0051e813
    CMP ESI,EDI                         ; 0051e817
    JL 0x0051e78f                       ; 0051e819
        ;   XREF to: 0051e78f (CONDITIONAL_JUMP)  ; LAB_0051e78f
    ADD ESP,0xc                         ; 0051e81f
        ;   Label: LAB_0051e81f
    POP EBP                             ; 0051e822
    POP EDI                             ; 0051e823
    POP ESI                             ; 0051e824
    POP EBX                             ; 0051e825
    RET                                 ; 0051e826


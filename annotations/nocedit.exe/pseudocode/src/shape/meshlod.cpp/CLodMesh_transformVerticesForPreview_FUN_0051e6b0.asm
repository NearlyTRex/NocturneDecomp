; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_meshlod.cpp_CLodMesh_transformVerticesForPreview_FUN_0051e6b0(CLodMesh * this_ptr)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990 at 0051df93
;   shape_meshlod.cpp_CLodMesh_previewLodGeneration_FUN_0051d520 at 0051d677
;
; Referenced Globals:
;   float FLOAT_0066136c = 256
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   shape_meshlod.cpp_CLodMesh_worldToNormalizedSpace_FUN_0051b2e0
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0051e6b0
        ;   Label: shape_meshlod.cpp_CLodMesh_transformVerticesForPreview_FUN_0051e6b0
    SUB ESP,0x18                        ; 0051e6b1
    MOV EAX,dword ptr [ESP + 0x20]      ; 0051e6b4
    MOV EDX,dword ptr [EAX]             ; 0051e6b8
    XOR EBP,EBP                         ; 0051e6ba
    TEST EDX,EDX                        ; 0051e6bc
    JLE 0x0051e767                      ; 0051e6be | LAB_0051e767
        ;   XREF to: 0051e767 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 0051e6c4
    PUSH ESI                            ; 0051e6c5
    PUSH EBX                            ; 0051e6c6
    XOR EDI,EDI                         ; 0051e6c7
    XOR ESI,ESI                         ; 0051e6c9
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0051e6cb
        ;   Label: LAB_0051e6cb
    MOV EAX,dword ptr [EAX + 0x4]       ; 0051e6cf
    ADD EAX,EDI                         ; 0051e6d2
    PUSH EAX                            ; 0051e6d4
    LEA EAX,[ESP + 0x1c]                ; 0051e6d5
    PUSH EAX                            ; 0051e6d9
    MOV ECX,dword ptr [ESP + 0x34]      ; 0051e6da
    PUSH ECX                            ; 0051e6de
    LEA EBX,[ESP + 0x18]                ; 0051e6df
    CALL shape_meshlod.cpp_CLodMesh_worldToNormalizedSpace_FUN_0051b2e0 ; 0051e6e3 | CVector3f * shape_meshlod.cpp_CLodMesh_worldToNormalizedSpace_FUN_0051b2e0(CLodMesh * this_ptr, CVector3f * output_point, CVector3f * input_point)
        ;   XREF to: 0051b2e0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0051e6e8
    LEA EAX,[ESP + 0x18]                ; 0051e6eb
    MOV EDX,dword ptr [0x006703ec]      ; 0051e6ef | CDemonRenderer * g_CDemonRendererPtr
    FLD float ptr [EAX]                 ; 0051e6f5
    FMUL float ptr [0x0066136c]         ; 0051e6f7 | float FLOAT_0066136c
    FISTP dword ptr [EBX]               ; 0051e6fd
    FLD float ptr [EAX + 0x4]           ; 0051e6ff
    FMUL float ptr [0x0066136c]         ; 0051e702 | float FLOAT_0066136c
    FISTP dword ptr [EBX + 0x4]         ; 0051e708
    FLD float ptr [EAX + 0x8]           ; 0051e70b
    FMUL float ptr [0x0066136c]         ; 0051e70e | float FLOAT_0066136c
    FISTP dword ptr [EBX + 0x8]         ; 0051e714
    LEA EAX,[ESP + 0xc]                 ; 0051e717
    PUSH EAX                            ; 0051e71b
    MOV EAX,dword ptr [EDX]             ; 0051e71c | CDemonRenderer g_CDemonRendererInstance
    ADD EAX,ESI                         ; 0051e71e
    PUSH EAX                            ; 0051e720
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 0051e721 | void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)
    MOV EAX,[0x006703ec]                ; 0051e726 | CDemonRenderer * g_CDemonRendererPtr
    MOV EDX,dword ptr [EAX]             ; 0051e72b | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EDX + ESI*0x1 + 0x20],0xffff ; 0051e72d
    MOV EDX,dword ptr [EAX]             ; 0051e735 | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EDX + ESI*0x1 + 0x24],0xffff ; 0051e737
    MOV EAX,dword ptr [EAX]             ; 0051e73f | CDemonRenderer g_CDemonRendererInstance
    ADD ESP,0x8                         ; 0051e741
    MOV dword ptr [ESI + EAX*0x1 + 0x28],0xffff ; 0051e744
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0051e74c
    INC EBP                             ; 0051e750
    ADD EDI,0x4c4                       ; 0051e751
    MOV EBX,dword ptr [EAX]             ; 0051e757
    ADD ESI,0x30                        ; 0051e759
    CMP EBP,EBX                         ; 0051e75c
    JL 0x0051e6cb                       ; 0051e75e | LAB_0051e6cb
        ;   XREF to: 0051e6cb (CONDITIONAL_JUMP)
    POP EBX                             ; 0051e764
    POP ESI                             ; 0051e765
    POP EDI                             ; 0051e766
    ADD ESP,0x18                        ; 0051e767
        ;   Label: LAB_0051e767
    POP EBP                             ; 0051e76a
    RET                                 ; 0051e76b


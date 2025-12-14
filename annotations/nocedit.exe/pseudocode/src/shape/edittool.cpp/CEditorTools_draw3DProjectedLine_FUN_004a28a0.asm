; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_edittool.cpp_CEditorTools_draw3DProjectedLine_FUN_004a28a0(CEditorTools * this_ptr, CQuaternion4f * world_point, int line_length)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; CQuaternion4f *  Stack[0x8]:4   world_point
; int              Stack[0xc]:4   line_length
; Local Variables:
; undefined1       Stack[-0x40]:1  local_40
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   core_door.cpp_CDoor_renderOpaque_FUN_004807d0 at 00480946
;   shape_meshlod.cpp_CLodMesh_previewLodGeneration_FUN_0051d520 at 0051d65e
;
; Referenced Globals:
;   float g_WorldToScreenScale2 = 256
;
; Called Functions:
;   shape_edittool.cpp_CEditorTools_drawPixelLine_FUN_004a2660
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a28a0
        ;   Label: shape_edittool.cpp_CEditorTools_draw3DProjectedLine_FUN_004a28a0
    SUB ESP,0x3c                        ; 004a28a1
    MOV EAX,dword ptr [ESP + 0x48]      ; 004a28a4
    LEA EBX,[ESP + 0x30]                ; 004a28a8
    FLD float ptr [EAX]                 ; 004a28ac
    FMUL float ptr [0x0065d44c]         ; 004a28ae | g_WorldToScreenScale2
    FISTP dword ptr [EBX]               ; 004a28b4
    FLD float ptr [EAX + 0x4]           ; 004a28b6
    FMUL float ptr [0x0065d44c]         ; 004a28b9 | g_WorldToScreenScale2
    FISTP dword ptr [EBX + 0x4]         ; 004a28bf
    FLD float ptr [EAX + 0x8]           ; 004a28c2
    FMUL float ptr [0x0065d44c]         ; 004a28c5 | g_WorldToScreenScale2
    FISTP dword ptr [EBX + 0x8]         ; 004a28cb
    LEA EBX,[ESP + 0x30]                ; 004a28ce
    PUSH EBX                            ; 004a28d2
    LEA EBX,[ESP + 0x4]                 ; 004a28d3
    PUSH EBX                            ; 004a28d7
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004a28d8
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004a28dd
    TEST byte ptr [ESP + 0x13],0x80     ; 004a28e0
    JZ 0x004a28ec                       ; 004a28e5
        ;   XREF to: 004a28ec (CONDITIONAL_JUMP)  ; LAB_004a28ec
    ADD ESP,0x3c                        ; 004a28e7
    POP EBX                             ; 004a28ea
    RET                                 ; 004a28eb
    MOV EDX,dword ptr [ESP + 0x4c]      ; 004a28ec
        ;   Label: LAB_004a28ec
    MOV EBX,dword ptr [ESP + 0x14]      ; 004a28f0
    PUSH EDX                            ; 004a28f4
    SAR EBX,0x10                        ; 004a28f5
    PUSH EBX                            ; 004a28f8
    MOV EBX,dword ptr [ESP + 0x18]      ; 004a28f9
    SAR EBX,0x10                        ; 004a28fd
    PUSH EBX                            ; 004a2900
    MOV ECX,dword ptr [ESP + 0x50]      ; 004a2901
    PUSH ECX                            ; 004a2905
    CALL shape_edittool.cpp_CEditorTools_drawPixelLine_FUN_004a2660 ; 004a2906
        ;   XREF to: 004a2660 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_drawPixelLine_FUN_004a2660(CEditorTools * this_ptr, int start_x, int start_y, int length)
    ADD ESP,0x10                        ; 004a290b
    ADD ESP,0x3c                        ; 004a290e
    POP EBX                             ; 004a2911
    RET                                 ; 004a2912


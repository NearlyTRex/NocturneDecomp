; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_meshlod_cpp_CLodMesh_drawVertexIndexLabel_FUN_0051ecd0(CLodMesh *this_ptr,int vertex_index)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   vertex_index
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
;
; XREF[2]:
;   shape_meshlod.cpp_CLodMesh_drawVertexLabels_FUN_0051ed30 at 0051ed40
;   shape_meshlod.cpp_CLodMesh_previewLodGeneration_FUN_0051d520 at 0051d629
;
; Referenced Globals:
;   TerminatedCString s_d_0063852d
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_2d.c_drawText_FUN_00401fd0
;
; *****************************************************************************

section .text

    SUB ESP,0x28                        ; 0051ecd0
        ;   Label: shape_meshlod.cpp_CLodMesh_drawVertexIndexLabel_FUN_0051ecd0
    MOV ECX,dword ptr [ESP + 0x30]      ; 0051ecd3
    LEA EDX,[ECX*0x4 + 0x0]             ; 0051ecd7
    MOV EAX,[0x006703ec]                ; 0051ecde | g_CDemonRendererPtr2
    SUB EDX,ECX                         ; 0051ece3
    MOV EAX,dword ptr [EAX]             ; 0051ece5 | g_CDemonRendererInstance
    SHL EDX,0x4                         ; 0051ece7
    ADD EAX,EDX                         ; 0051ecea
    TEST byte ptr [EAX + 0x13],0x80     ; 0051ecec
    JZ 0x0051ecf6                       ; 0051ecf0
        ;   XREF to: 0051ecf6 (CONDITIONAL_JUMP)  ; LAB_0051ecf6
    ADD ESP,0x28                        ; 0051ecf2
    RET                                 ; 0051ecf5
    PUSH ESI                            ; 0051ecf6
        ;   Label: LAB_0051ecf6
    PUSH EBX                            ; 0051ecf7
    PUSH ECX                            ; 0051ecf8
    MOV EBX,dword ptr [EAX + 0x10]      ; 0051ecf9
    PUSH 0x63852d                       ; 0051ecfc | = "%d"
    MOV ESI,dword ptr [EAX + 0x14]      ; 0051ed01
    LEA EAX,[ESP + 0x10]                ; 0051ed04
    PUSH EAX                            ; 0051ed08
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0051ed09
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0051ed0e
    SAR ESI,0x10                        ; 0051ed11
    PUSH ESI                            ; 0051ed14
    SAR EBX,0x10                        ; 0051ed15
    PUSH EBX                            ; 0051ed18
    LEA EAX,[ESP + 0x10]                ; 0051ed19
    PUSH EAX                            ; 0051ed1d
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0051ed1e
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0051ed23
    POP EBX                             ; 0051ed26
    POP ESI                             ; 0051ed27
    ADD ESP,0x28                        ; 0051ed28
    RET                                 ; 0051ed2b


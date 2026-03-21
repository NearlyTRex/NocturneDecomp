; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_meshlod_cpp_CLodMesh_renderColorCodedEdges_FUN_0051e830(CLodMesh *this_ptr,int backface_culling_enabled)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   backface_culling_enabled
; Local Variables:
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_meshlod.cpp_CLodMesh_previewLodGeneration_FUN_0051d520 at 0051d603
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;   int g_ActiveRenderColor
;
; Called Functions:
;   engine_3d.c_clipAndDrawLine2D_FUN_00407d70
;   engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051e830
        ;   Label: shape_meshlod.cpp_CLodMesh_renderColorCodedEdges_FUN_0051e830
    PUSH ESI                            ; 0051e831
    PUSH EDI                            ; 0051e832
    PUSH EBP                            ; 0051e833
    SUB ESP,0x8                         ; 0051e834
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0051e837
    XOR EDX,EDX                         ; 0051e83b
    MOV ECX,dword ptr [EAX + 0x44]      ; 0051e83d
    MOV dword ptr [ESP + 0x4],EDX       ; 0051e840
    TEST ECX,ECX                        ; 0051e844
    JLE 0x0051e87d                      ; 0051e846
        ;   XREF to: 0051e87d (CONDITIONAL_JUMP)  ; LAB_0051e87d
    MOV dword ptr [ESP],EDX             ; 0051e848
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0051e84b
        ;   Label: LAB_0051e84b
    MOV EAX,dword ptr [ESP]             ; 0051e84f
    MOV EBP,dword ptr [EBP + 0x48]      ; 0051e852
    ADD EBP,EAX                         ; 0051e855
    CMP dword ptr [EBP + 0x14],0x0      ; 0051e857
    JZ 0x0051e885                       ; 0051e85b
        ;   XREF to: 0051e885 (CONDITIONAL_JUMP)  ; LAB_0051e885
    MOV EBX,dword ptr [ESP]             ; 0051e85d
        ;   Label: LAB_0051e85d
    MOV ESI,dword ptr [ESP + 0x4]       ; 0051e860
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0051e864
    ADD EBX,0xf0                        ; 0051e868
    INC ESI                             ; 0051e86e
    MOV EDI,dword ptr [EDX + 0x44]      ; 0051e86f
    MOV dword ptr [ESP],EBX             ; 0051e872
    MOV dword ptr [ESP + 0x4],ESI       ; 0051e875
    CMP ESI,EDI                         ; 0051e879
    JL 0x0051e84b                       ; 0051e87b
        ;   XREF to: 0051e84b (CONDITIONAL_JUMP)  ; LAB_0051e84b
    ADD ESP,0x8                         ; 0051e87d
        ;   Label: LAB_0051e87d
    POP EBP                             ; 0051e880
    POP EDI                             ; 0051e881
    POP ESI                             ; 0051e882
    POP EBX                             ; 0051e883
    RET                                 ; 0051e884
    CMP dword ptr [ESP + 0x20],0x0      ; 0051e885
        ;   Label: LAB_0051e885
    JZ 0x0051e8e5                       ; 0051e88a
        ;   XREF to: 0051e8e5 (CONDITIONAL_JUMP)  ; LAB_0051e8e5
    MOV ESI,dword ptr [EBP + 0x24]      ; 0051e88c
    XOR EBX,EBX                         ; 0051e88f
    TEST ESI,ESI                        ; 0051e891
    JLE 0x0051e8dc                      ; 0051e893
        ;   XREF to: 0051e8dc (CONDITIONAL_JUMP)  ; LAB_0051e8dc
    MOV ESI,EBP                         ; 0051e895
    IMUL EAX,dword ptr [ESI + 0x28],0x8c ; 0051e897
        ;   Label: LAB_0051e897
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0051e89e
    MOV EDX,dword ptr [EDX + 0xc]       ; 0051e8a2
    ADD EDX,EAX                         ; 0051e8a5
    IMUL ECX,dword ptr [EDX + 0x18],0x30 ; 0051e8a7
    MOV EAX,[0x006703ec]                ; 0051e8ab | g_CDemonRendererPtr2
    MOV EAX,dword ptr [EAX]             ; 0051e8b0 | g_CDemonRendererInstance
    ADD ECX,EAX                         ; 0051e8b2
    MOV EDI,dword ptr [EDX + 0x14]      ; 0051e8b4
    PUSH ECX                            ; 0051e8b7
    IMUL ECX,EDI,0x30                   ; 0051e8b8
    ADD ECX,EAX                         ; 0051e8bb
    PUSH ECX                            ; 0051e8bd
    IMUL EDX,dword ptr [EDX + 0x10],0x30 ; 0051e8be
    ADD EAX,EDX                         ; 0051e8c2
    PUSH EAX                            ; 0051e8c4
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00552150 ; 0051e8c5
        ;   XREF to: 00552150 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_00552150(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 0051e8ca
    TEST EAX,EAX                        ; 0051e8cd
    JZ 0x0051e8dc                       ; 0051e8cf
        ;   XREF to: 0051e8dc (CONDITIONAL_JUMP)  ; LAB_0051e8dc
    INC EBX                             ; 0051e8d1
    MOV EDI,dword ptr [EBP + 0x24]      ; 0051e8d2
    ADD ESI,0x4                         ; 0051e8d5
    CMP EBX,EDI                         ; 0051e8d8
    JL 0x0051e897                       ; 0051e8da
        ;   XREF to: 0051e897 (CONDITIONAL_JUMP)  ; LAB_0051e897
    CMP EBX,dword ptr [EBP + 0x24]      ; 0051e8dc
        ;   Label: LAB_0051e8dc
    JGE 0x0051e85d                      ; 0051e8df
        ;   XREF to: 0051e85d (CONDITIONAL_JUMP)  ; LAB_0051e85d
    MOV EDI,dword ptr [EBP + 0x18]      ; 0051e8e5
        ;   Label: LAB_0051e8e5
    TEST EDI,EDI                        ; 0051e8e8
    JNZ 0x0051e940                      ; 0051e8ea
        ;   XREF to: 0051e940 (CONDITIONAL_JUMP)  ; LAB_0051e940
    CMP dword ptr [EBP + 0x1c],0x0      ; 0051e8ec
    JZ 0x0051e934                       ; 0051e8f0
        ;   XREF to: 0051e934 (CONDITIONAL_JUMP)  ; LAB_0051e934
    MOV dword ptr [0x02d02570],0xfa     ; 0051e8f2 | g_ActiveRenderColor
    IMUL ESI,dword ptr [EBP + 0x4],0x30 ; 0051e8fc
        ;   Label: LAB_0051e8fc
    MOV EAX,[0x006703ec]                ; 0051e900 | g_CDemonRendererPtr2
    JMP 0x0060df11                      ; 0051e905
        ;   XREF to: 0060df11 (UNCONDITIONAL_JUMP)  ; LAB_0060df11
    MOVSD.REP ES:EDI,ESI                ; 0051e913
        ;   Label: LAB_0051e913
    IMUL ESI,dword ptr [EBP],0x30       ; 0051e915
    JMP 0x0060df6a                      ; 0051e919
        ;   XREF to: 0060df6a (UNCONDITIONAL_JUMP)  ; LAB_0060df6a
    MOVSD.REP ES:EDI,ESI                ; 0051e925
        ;   Label: LAB_0051e925
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 0051e927
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 0051e92c
    JMP 0x0051e85d                      ; 0051e92f
        ;   XREF to: 0051e85d (UNCONDITIONAL_JUMP)  ; LAB_0051e85d
    MOV dword ptr [0x02d02570],0x2      ; 0051e934 | g_ActiveRenderColor
        ;   Label: LAB_0051e934
    JMP 0x0051e8fc                      ; 0051e93e
        ;   XREF to: 0051e8fc (UNCONDITIONAL_JUMP)  ; LAB_0051e8fc
    CMP EDI,0x1                         ; 0051e940
        ;   Label: LAB_0051e940
    JNZ 0x0051e963                      ; 0051e943
        ;   XREF to: 0051e963 (CONDITIONAL_JUMP)  ; LAB_0051e963
    CMP dword ptr [EBP + 0x1c],0x0      ; 0051e945
    JZ 0x0051e957                       ; 0051e949
        ;   XREF to: 0051e957 (CONDITIONAL_JUMP)  ; LAB_0051e957
    MOV dword ptr [0x02d02570],0xfb     ; 0051e94b | g_ActiveRenderColor
    JMP 0x0051e8fc                      ; 0051e955
        ;   XREF to: 0051e8fc (UNCONDITIONAL_JUMP)  ; LAB_0051e8fc
    MOV dword ptr [0x02d02570],0x3      ; 0051e957 | g_ActiveRenderColor
        ;   Label: LAB_0051e957
    JMP 0x0051e8fc                      ; 0051e961
        ;   XREF to: 0051e8fc (UNCONDITIONAL_JUMP)  ; LAB_0051e8fc
    CMP dword ptr [EBP + 0x1c],0x0      ; 0051e963
        ;   Label: LAB_0051e963
    JZ 0x0051e975                       ; 0051e967
        ;   XREF to: 0051e975 (CONDITIONAL_JUMP)  ; LAB_0051e975
    MOV dword ptr [0x02d02570],0xf9     ; 0051e969 | g_ActiveRenderColor
    JMP 0x0051e8fc                      ; 0051e973
        ;   XREF to: 0051e8fc (UNCONDITIONAL_JUMP)  ; LAB_0051e8fc
    MOV dword ptr [0x02d02570],0x1      ; 0051e975 | g_ActiveRenderColor
        ;   Label: LAB_0051e975
    JMP 0x0051e8fc                      ; 0051e97f
        ;   XREF to: 0051e8fc (UNCONDITIONAL_JUMP)  ; LAB_0051e8fc
    MOV ECX,0xc                         ; 0060df11
        ;   Label: LAB_0060df11
    SUB ESP,0x30                        ; 0060df16
    MOV EAX,dword ptr [EAX]             ; 0060df19
    MOV EDI,ESP                         ; 0060df1b
    ADD ESI,EAX                         ; 0060df1d
    MOV ECX,dword ptr [ESI]             ; 0060df1f
    MOV dword ptr [EDI],ECX             ; 0060df21
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060df23
    MOV dword ptr [EDI + 0x4],ECX       ; 0060df26
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060df29
    MOV dword ptr [EDI + 0x8],ECX       ; 0060df2c
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060df2f
    MOV dword ptr [EDI + 0xc],ECX       ; 0060df32
    MOV ECX,dword ptr [ESI + 0x10]      ; 0060df35
    MOV dword ptr [EDI + 0x10],ECX      ; 0060df38
    MOV ECX,dword ptr [ESI + 0x14]      ; 0060df3b
    MOV dword ptr [EDI + 0x14],ECX      ; 0060df3e
    MOV ECX,dword ptr [ESI + 0x18]      ; 0060df41
    MOV dword ptr [EDI + 0x18],ECX      ; 0060df44
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0060df47
    MOV dword ptr [EDI + 0x1c],ECX      ; 0060df4a
    MOV ECX,dword ptr [ESI + 0x20]      ; 0060df4d
    MOV dword ptr [EDI + 0x20],ECX      ; 0060df50
    MOV ECX,dword ptr [ESI + 0x24]      ; 0060df53
    MOV dword ptr [EDI + 0x24],ECX      ; 0060df56
    MOV ECX,dword ptr [ESI + 0x28]      ; 0060df59
    MOV dword ptr [EDI + 0x28],ECX      ; 0060df5c
    MOV ECX,dword ptr [ESI + 0x2c]      ; 0060df5f
    MOV dword ptr [EDI + 0x2c],ECX      ; 0060df62
    JMP 0x0051e913                      ; 0060df65
        ;   XREF to: 0051e913 (UNCONDITIONAL_JUMP)  ; LAB_0051e913
    SUB ESP,0x30                        ; 0060df6a
        ;   Label: LAB_0060df6a
    MOV ECX,0xc                         ; 0060df6d
    MOV EDI,ESP                         ; 0060df72
    ADD ESI,EAX                         ; 0060df74
    MOV ECX,dword ptr [ESI]             ; 0060df76
    MOV dword ptr [EDI],ECX             ; 0060df78
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060df7a
    MOV dword ptr [EDI + 0x4],ECX       ; 0060df7d
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060df80
    MOV dword ptr [EDI + 0x8],ECX       ; 0060df83
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060df86
    MOV dword ptr [EDI + 0xc],ECX       ; 0060df89
    MOV ECX,dword ptr [ESI + 0x10]      ; 0060df8c
    MOV dword ptr [EDI + 0x10],ECX      ; 0060df8f
    MOV ECX,dword ptr [ESI + 0x14]      ; 0060df92
    MOV dword ptr [EDI + 0x14],ECX      ; 0060df95
    MOV ECX,dword ptr [ESI + 0x18]      ; 0060df98
    MOV dword ptr [EDI + 0x18],ECX      ; 0060df9b
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0060df9e
    MOV dword ptr [EDI + 0x1c],ECX      ; 0060dfa1
    MOV ECX,dword ptr [ESI + 0x20]      ; 0060dfa4
    MOV dword ptr [EDI + 0x20],ECX      ; 0060dfa7
    MOV ECX,dword ptr [ESI + 0x24]      ; 0060dfaa
    MOV dword ptr [EDI + 0x24],ECX      ; 0060dfad
    MOV ECX,dword ptr [ESI + 0x28]      ; 0060dfb0
    MOV dword ptr [EDI + 0x28],ECX      ; 0060dfb3
    MOV ECX,dword ptr [ESI + 0x2c]      ; 0060dfb6
    MOV dword ptr [EDI + 0x2c],ECX      ; 0060dfb9
    JMP 0x0051e925                      ; 0060dfbc
        ;   XREF to: 0051e925 (UNCONDITIONAL_JUMP)  ; LAB_0051e925


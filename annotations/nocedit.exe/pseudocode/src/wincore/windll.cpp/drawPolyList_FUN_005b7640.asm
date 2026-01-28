; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl wincore_windll_cpp_drawPolyList_FUN_005b7640 (void *vertex_buffer,void **polygons,int polygon_count,int render_flags)
;
; Parameters:
; void *           Stack[0x4]:4   vertex_buffer
; void * *         Stack[0x8]:4   polygons
; int              Stack[0xc]:4   polygon_count
; int              Stack[0x10]:4   render_flags
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   engine_3d.c_dispatchMRGLToRenderer_FUN_00407aa0 at 00407b28
;   engine_3d.c_flushRenderQueue_FUN_00407a30 at 00407a88
;   engine_drender.cpp_CDemonRenderer_renderTriangleFacetList_FUN_0048cf00 at 0048d152
;
; Referenced Globals:
;   int g_UseExternalRenderer
;   int g_RenderedTriangleCount
;   APIDLL_drawPolygon2* g_APIDLL_drawPolygon2
;   APIDLL_drawPolyList* g_APIDLL_drawPolyList
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b7640
        ;   Label: wincore_windll.cpp_drawPolyList_FUN_005b7640
    PUSH ESI                            ; 005b7641
    PUSH EDI                            ; 005b7642
    PUSH EBP                            ; 005b7643
    SUB ESP,0x10                        ; 005b7644
    MOV EBX,dword ptr [ESP + 0x24]      ; 005b7647
    MOV EDX,dword ptr [ESP + 0x28]      ; 005b764b
    MOV EBP,dword ptr [ESP + 0x2c]      ; 005b764f
    CMP dword ptr [0x02d03e94],0x0      ; 005b7653 | g_UseExternalRenderer
    JZ 0x005b7738                       ; 005b765a
        ;   XREF to: 005b7738 (CONDITIONAL_JUMP)  ; LAB_005b7738
    MOV EAX,[0x030e56b8]                ; 005b7660 | g_RenderedTriangleCount
    MOV ESI,dword ptr [0x03f6b8d0]      ; 005b7665 | g_APIDLL_drawPolyList
    ADD EAX,EBP                         ; 005b766b
    TEST ESI,ESI                        ; 005b766d
    JNZ 0x005b7754                      ; 005b766f
        ;   XREF to: 005b7754 (CONDITIONAL_JUMP)  ; LAB_005b7754
    MOV [0x030e56b8],EAX                ; 005b7675 | g_RenderedTriangleCount
    XOR EDI,EDI                         ; 005b767a
    TEST EBP,EBP                        ; 005b767c
    JLE 0x005b7729                      ; 005b767e
        ;   XREF to: 005b7729 (CONDITIONAL_JUMP)  ; LAB_005b7729
    MOV ESI,EDX                         ; 005b7684
    MOV EAX,dword ptr [ESI]             ; 005b7686
        ;   Label: LAB_005b7686
    IMUL EDX,dword ptr [EAX + 0x18],0x30 ; 005b7688
    LEA ECX,[EBX + EDX*0x1]             ; 005b768c
    MOV dword ptr [ESP],ECX             ; 005b768f
    IMUL EDX,dword ptr [EAX + 0x24],0x30 ; 005b7692
    LEA ECX,[EBX + EDX*0x1]             ; 005b7696
    MOV dword ptr [ESP + 0x4],ECX       ; 005b7699
    IMUL EDX,dword ptr [EAX + 0x30],0x30 ; 005b769d
    LEA ECX,[EBX + EDX*0x1]             ; 005b76a1
    MOV dword ptr [ESP + 0x8],ECX       ; 005b76a4
    CMP dword ptr [EAX + 0x4],0x4       ; 005b76a8
    JZ 0x005b7744                       ; 005b76ac
        ;   XREF to: 005b7744 (CONDITIONAL_JUMP)  ; LAB_005b7744
    MOV EDX,dword ptr [ESP]             ; 005b76b2
        ;   Label: LAB_005b76b2
    MOV ECX,dword ptr [EAX + 0x1c]      ; 005b76b5
    MOV dword ptr [EDX + 0x18],ECX      ; 005b76b8
    MOV EDX,dword ptr [ESP]             ; 005b76bb
    MOV ECX,dword ptr [EAX + 0x20]      ; 005b76be
    MOV dword ptr [EDX + 0x1c],ECX      ; 005b76c1
    MOV ECX,dword ptr [ESP + 0x4]       ; 005b76c4
    MOV EDX,dword ptr [EAX + 0x28]      ; 005b76c8
    MOV dword ptr [ECX + 0x18],EDX      ; 005b76cb
    MOV ECX,dword ptr [ESP + 0x4]       ; 005b76ce
    MOV EDX,dword ptr [EAX + 0x2c]      ; 005b76d2
    MOV dword ptr [ECX + 0x1c],EDX      ; 005b76d5
    MOV EDX,dword ptr [ESP + 0x8]       ; 005b76d8
    MOV ECX,dword ptr [EAX + 0x34]      ; 005b76dc
    MOV dword ptr [EDX + 0x18],ECX      ; 005b76df
    MOV EDX,dword ptr [ESP + 0x8]       ; 005b76e2
    MOV ECX,dword ptr [EAX + 0x38]      ; 005b76e6
    MOV dword ptr [EDX + 0x1c],ECX      ; 005b76e9
    CMP dword ptr [EAX + 0x4],0x4       ; 005b76ec
    JNZ 0x005b7706                      ; 005b76f0
        ;   XREF to: 005b7706 (CONDITIONAL_JUMP)  ; LAB_005b7706
    MOV EDX,dword ptr [ESP + 0xc]       ; 005b76f2
    MOV ECX,dword ptr [EAX + 0x40]      ; 005b76f6
    MOV dword ptr [EDX + 0x18],ECX      ; 005b76f9
    MOV EDX,dword ptr [ESP + 0xc]       ; 005b76fc
    MOV ECX,dword ptr [EAX + 0x44]      ; 005b7700
    MOV dword ptr [EDX + 0x1c],ECX      ; 005b7703
    MOV EDX,dword ptr [ESP + 0x30]      ; 005b7706
        ;   Label: LAB_005b7706
    PUSH EDX                            ; 005b770a
    MOV ECX,dword ptr [EAX + 0x4]       ; 005b770b
    PUSH ECX                            ; 005b770e
    LEA EAX,[ESP + 0x8]                 ; 005b770f
    PUSH EAX                            ; 005b7713
    ADD ESI,0x4                         ; 005b7714
    INC EDI                             ; 005b7717
    CALL dword ptr [0x03f6b8cc]         ; 005b7718 | g_APIDLL_drawPolygon2
    ADD ESP,0xc                         ; 005b771e
    CMP EDI,EBP                         ; 005b7721
    JL 0x005b7686                       ; 005b7723
        ;   XREF to: 005b7686 (CONDITIONAL_JUMP)  ; LAB_005b7686
    MOV EDX,0x1                         ; 005b7729
        ;   Label: LAB_005b7729
    MOV EAX,EDX                         ; 005b772e
    ADD ESP,0x10                        ; 005b7730
    POP EBP                             ; 005b7733
    POP EDI                             ; 005b7734
    POP ESI                             ; 005b7735
    POP EBX                             ; 005b7736
    RET                                 ; 005b7737
    XOR EDX,EDX                         ; 005b7738
        ;   Label: LAB_005b7738
    MOV EAX,EDX                         ; 005b773a
    ADD ESP,0x10                        ; 005b773c
    POP EBP                             ; 005b773f
    POP EDI                             ; 005b7740
    POP ESI                             ; 005b7741
    POP EBX                             ; 005b7742
    RET                                 ; 005b7743
    IMUL EDX,dword ptr [EAX + 0x3c],0x30 ; 005b7744
        ;   Label: LAB_005b7744
    LEA ECX,[EBX + EDX*0x1]             ; 005b7748
    MOV dword ptr [ESP + 0xc],ECX       ; 005b774b
    JMP 0x005b76b2                      ; 005b774f
        ;   XREF to: 005b76b2 (UNCONDITIONAL_JUMP)  ; LAB_005b76b2
    MOV EDI,dword ptr [ESP + 0x30]      ; 005b7754
        ;   Label: LAB_005b7754
    PUSH EDI                            ; 005b7758
    PUSH EBP                            ; 005b7759
    PUSH EDX                            ; 005b775a
    PUSH EBX                            ; 005b775b
    MOV [0x030e56b8],EAX                ; 005b775c | g_RenderedTriangleCount
    CALL dword ptr [0x03f6b8d0]         ; 005b7761 | g_APIDLL_drawPolyList
    ADD ESP,0x10                        ; 005b7767
    MOV EDX,EAX                         ; 005b776a
    MOV EAX,EDX                         ; 005b776c
    ADD ESP,0x10                        ; 005b776e
    POP EBP                             ; 005b7771
    POP EDI                             ; 005b7772
    POP ESI                             ; 005b7773
    POP EBX                             ; 005b7774
    RET                                 ; 005b7775


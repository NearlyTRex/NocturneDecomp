; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl wincore_windll_cpp_drawFullScreenQuad_FUN_005b7a50(int color)
;
; Parameters:
; int              Stack[0x4]:4   color
; Local Variables:
; undefined1       Stack[-0xc0]:1  local_c0
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[2]:
;   shape_design.c_showFacetPartEditor_FUN_0045f1d0 at 0045f3de
;   wincore_windll.cpp_clearScreen_FUN_005b3f37 at 005b3f48
;
; Referenced Globals:
;   int g_SystemMemorySize = 0x3c000
;   int g_ClipLeft
;   int g_ClipTop
;   int g_ClipRight
;   int g_ClipBottom
;   int g_ActiveRenderColor
;
; Called Functions:
;   crt_memory.c_memset_FUN_005fde40
;   wincore_windll.cpp_drawPolygon_FUN_005b75e0
;
; *****************************************************************************

section .text

    SUB ESP,0xc0                        ; 005b7a50
        ;   Label: wincore_windll.cpp_drawFullScreenQuad_FUN_005b7a50
    PUSH 0xc0                           ; 005b7a56
    PUSH 0x0                            ; 005b7a5b
    LEA EAX,[ESP + 0x8]                 ; 005b7a5d
    PUSH EAX                            ; 005b7a61
    CALL crt_memory.c_memset_FUN_005fde40 ; 005b7a62
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    MOV EAX,[0x02d02558]                ; 005b7a67 | g_ClipLeft
    ADD ESP,0xc                         ; 005b7a6c
    SHL EAX,0x10                        ; 005b7a6f
    MOV dword ptr [ESP + 0x10],EAX      ; 005b7a72
    MOV EAX,[0x02d0255c]                ; 005b7a76 | g_ClipTop
    SHL EAX,0x10                        ; 005b7a7b
    MOV dword ptr [ESP + 0x14],EAX      ; 005b7a7e
    MOV EAX,[0x02d02560]                ; 005b7a82 | g_ClipRight
    SHL EAX,0x10                        ; 005b7a87
    MOV dword ptr [ESP + 0x40],EAX      ; 005b7a8a
    MOV EAX,dword ptr [ESP + 0x14]      ; 005b7a8e
    MOV dword ptr [ESP + 0x44],EAX      ; 005b7a92
    MOV EAX,dword ptr [ESP + 0x40]      ; 005b7a96
    MOV dword ptr [ESP + 0x70],EAX      ; 005b7a9a
    MOV EAX,[0x02d02564]                ; 005b7a9e | g_ClipBottom
    SHL EAX,0x10                        ; 005b7aa3
    MOV dword ptr [ESP + 0x74],EAX      ; 005b7aa6
    MOV EAX,dword ptr [ESP + 0x10]      ; 005b7aaa
    MOV dword ptr [ESP + 0xa0],EAX      ; 005b7aae
    MOV EAX,dword ptr [ESP + 0x74]      ; 005b7ab5
    MOV dword ptr [ESP + 0xa4],EAX      ; 005b7ab9
    MOV EAX,[0x0068411c]                ; 005b7ac0 | g_SystemMemorySize
    PUSH 0x10                           ; 005b7ac5
    MOV dword ptr [ESP + 0xc],EAX       ; 005b7ac7
    MOV dword ptr [ESP + 0x3c],EAX      ; 005b7acb
    MOV dword ptr [ESP + 0x6c],EAX      ; 005b7acf
    MOV dword ptr [ESP + 0x9c],EAX      ; 005b7ad3
    MOV EAX,dword ptr [ESP + 0xc8]      ; 005b7ada
    PUSH 0x4                            ; 005b7ae1
    MOV [0x02d02570],EAX                ; 005b7ae3 | g_ActiveRenderColor
    LEA EAX,[ESP + 0x8]                 ; 005b7ae8
    PUSH EAX                            ; 005b7aec
    CALL wincore_windll.cpp_drawPolygon_FUN_005b75e0 ; 005b7aed
        ;   XREF to: 005b75e0 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_drawPolygon_FUN_005b75e0(SRenderVertex * vertices, int vertex_count, int render_flags)
    MOV EAX,0x1                         ; 005b7af2
    ADD ESP,0xc                         ; 005b7af7
    ADD ESP,0xc0                        ; 005b7afa
    RET                                 ; 005b7b00


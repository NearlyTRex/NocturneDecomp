; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_texture.cpp_CTextureCache_renderAllTextures_FUN_005dd580(CTextureCache * this_ptr)
;
; Parameters:
; CTextureCache *  Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
;
; XREF[1]:
;   engine_texture.cpp_renderTextureAtlas_FUN_005dd990 at 005dd9a7
;
; Called Functions:
;   engine_texture.cpp_CTextureCache_setupTexture_FUN_005dd200
;   wincore_windll.cpp_drawPolygon_FUN_005b75e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005dd580
        ;   Label: engine_texture.cpp_CTextureCache_renderAllTextures_FUN_005dd580
    PUSH ESI                            ; 005dd581
    PUSH EBP                            ; 005dd582
    SUB ESP,0xc0                        ; 005dd583
    MOV ESI,dword ptr [ESP + 0xd0]      ; 005dd589
    MOV EDX,dword ptr [ESI + 0x14008]   ; 005dd590
    XOR EBX,EBX                         ; 005dd596
    TEST EDX,EDX                        ; 005dd598
    JLE 0x005dd67b                      ; 005dd59a
        ;   XREF to: 005dd67b (CONDITIONAL_JUMP)  ; LAB_005dd67b
    PUSH EDI                            ; 005dd5a0
    MOV EBP,0x5fffa                     ; 005dd5a1
    XOR EDI,EDI                         ; 005dd5a6
    PUSH EBX                            ; 005dd5a8
        ;   Label: LAB_005dd5a8
    PUSH ESI                            ; 005dd5a9
    CALL engine_texture.cpp_CTextureCache_setupTexture_FUN_005dd200 ; 005dd5aa
        ;   XREF to: 005dd200 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_CTextureCache_setupTexture_FUN_005dd200(CTextureCache * cache, int texture_index)
    INC EBX                             ; 005dd5af
    ADD ESP,0x8                         ; 005dd5b0
    MOV ECX,0x3e8                       ; 005dd5b3
    MOV EDX,0x7d0                       ; 005dd5b8
    PUSH 0x1                            ; 005dd5bd
    MOV dword ptr [ESP + 0x8],ECX       ; 005dd5bf
    MOV EAX,ECX                         ; 005dd5c3
    MOV dword ptr [ESP + 0xc],ECX       ; 005dd5c5
    MOV dword ptr [ESP + 0x10],EDX      ; 005dd5c9
    MOV dword ptr [ESP + 0x40],EDX      ; 005dd5cd
    MOV dword ptr [ESP + 0x70],EDX      ; 005dd5d1
    MOV dword ptr [ESP + 0xa0],EDX      ; 005dd5d5
    MOV dword ptr [ESP + 0x48],EBP      ; 005dd5dc
    MOV dword ptr [ESP + 0x78],EBP      ; 005dd5e0
    MOV dword ptr [ESP + 0x7c],EBP      ; 005dd5e4
    MOV dword ptr [ESP + 0xac],EBP      ; 005dd5e8
    MOV dword ptr [ESP + 0x20],EDI      ; 005dd5ef
    MOV dword ptr [ESP + 0x24],EDI      ; 005dd5f3
    MOV dword ptr [ESP + 0x50],EDI      ; 005dd5f7
    MOV dword ptr [ESP + 0x54],EDI      ; 005dd5fb
    MOV dword ptr [ESP + 0x80],EDI      ; 005dd5ff
    MOV dword ptr [ESP + 0x84],EDI      ; 005dd606
    MOV dword ptr [ESP + 0xb0],EDI      ; 005dd60d
    MOV dword ptr [ESP + 0xb4],EDI      ; 005dd614
    MOV ECX,0xfffffc18                  ; 005dd61b
    PUSH 0x4                            ; 005dd620
    MOV dword ptr [ESP + 0x40],EAX      ; 005dd622
    MOV dword ptr [ESP + 0x3c],ECX      ; 005dd626
    MOV dword ptr [ESP + 0x6c],ECX      ; 005dd62a
    MOV EAX,ECX                         ; 005dd62e
    MOV dword ptr [ESP + 0x70],ECX      ; 005dd630
    MOV ECX,0x3e8                       ; 005dd634
    MOV dword ptr [ESP + 0xa0],EAX      ; 005dd639
    LEA EAX,[ESP + 0xc]                 ; 005dd640
    MOV dword ptr [ESP + 0x9c],ECX      ; 005dd644
    MOV ECX,0x4fffb                     ; 005dd64b
    PUSH EAX                            ; 005dd650
    MOV dword ptr [ESP + 0x20],ECX      ; 005dd651
    MOV dword ptr [ESP + 0x24],ECX      ; 005dd655
    MOV dword ptr [ESP + 0x54],ECX      ; 005dd659
    MOV dword ptr [ESP + 0xb0],ECX      ; 005dd65d
    CALL wincore_windll.cpp_drawPolygon_FUN_005b75e0 ; 005dd664
        ;   XREF to: 005b75e0 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_drawPolygon_FUN_005b75e0(SRenderVertex * vertices, int vertex_count, int render_flags)
    MOV EAX,dword ptr [ESI + 0x14008]   ; 005dd669
    ADD ESP,0xc                         ; 005dd66f
    CMP EBX,EAX                         ; 005dd672
    JL 0x005dd5a8                       ; 005dd674
        ;   XREF to: 005dd5a8 (CONDITIONAL_JUMP)  ; LAB_005dd5a8
    POP EDI                             ; 005dd67a
    ADD ESP,0xc0                        ; 005dd67b
        ;   Label: LAB_005dd67b
    POP EBP                             ; 005dd681
    POP ESI                             ; 005dd682
    POP EBX                             ; 005dd683
    RET                                 ; 005dd684


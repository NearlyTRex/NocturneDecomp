; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_texture_cpp_FUN_00545700(int param_1)
;
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
;   engine_texture.cpp_renderTextureAtlas_FUN_00545aa0 at 00545ab7
;
; Called Functions:
;   engine_special.cpp_drawPolygon_FUN_00532620
;   engine_texture.cpp_CTextureCache_setupTexture_FUN_00545410
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00545700
        ;   Label: engine_texture.cpp_FUN_00545700
    PUSH ESI                            ; 00545701
    PUSH EBP                            ; 00545702
    SUB ESP,0xc0                        ; 00545703
    MOV ESI,dword ptr [ESP + 0xd0]      ; 00545709
    MOV EDX,dword ptr [ESI + 0xd3008]   ; 00545710
    XOR EBX,EBX                         ; 00545716
    TEST EDX,EDX                        ; 00545718
    JLE 0x005457fb                      ; 0054571a
        ;   XREF to: 005457fb (CONDITIONAL_JUMP)  ; LAB_005457fb
    PUSH EDI                            ; 00545720
    MOV EBP,0x5fffa                     ; 00545721
    XOR EDI,EDI                         ; 00545726
    PUSH EBX                            ; 00545728
        ;   Label: LAB_00545728
    PUSH ESI                            ; 00545729
    CALL engine_texture.cpp_CTextureCache_setupTexture_FUN_00545410 ; 0054572a
        ;   XREF to: 00545410 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_CTextureCache_setupTexture_FUN_00545410()
    INC EBX                             ; 0054572f
    ADD ESP,0x8                         ; 00545730
    MOV ECX,0x3e8                       ; 00545733
    MOV EDX,0x7d0                       ; 00545738
    PUSH 0x1                            ; 0054573d
    MOV dword ptr [ESP + 0x8],ECX       ; 0054573f
    MOV EAX,ECX                         ; 00545743
    MOV dword ptr [ESP + 0xc],ECX       ; 00545745
    MOV dword ptr [ESP + 0x10],EDX      ; 00545749
    MOV dword ptr [ESP + 0x40],EDX      ; 0054574d
    MOV dword ptr [ESP + 0x70],EDX      ; 00545751
    MOV dword ptr [ESP + 0xa0],EDX      ; 00545755
    MOV dword ptr [ESP + 0x48],EBP      ; 0054575c
    MOV dword ptr [ESP + 0x78],EBP      ; 00545760
    MOV dword ptr [ESP + 0x7c],EBP      ; 00545764
    MOV dword ptr [ESP + 0xac],EBP      ; 00545768
    MOV dword ptr [ESP + 0x20],EDI      ; 0054576f
    MOV dword ptr [ESP + 0x24],EDI      ; 00545773
    MOV dword ptr [ESP + 0x50],EDI      ; 00545777
    MOV dword ptr [ESP + 0x54],EDI      ; 0054577b
    MOV dword ptr [ESP + 0x80],EDI      ; 0054577f
    MOV dword ptr [ESP + 0x84],EDI      ; 00545786
    MOV dword ptr [ESP + 0xb0],EDI      ; 0054578d
    MOV dword ptr [ESP + 0xb4],EDI      ; 00545794
    MOV ECX,0xfffffc18                  ; 0054579b
    PUSH 0x4                            ; 005457a0
    MOV dword ptr [ESP + 0x40],EAX      ; 005457a2
    MOV dword ptr [ESP + 0x3c],ECX      ; 005457a6
    MOV dword ptr [ESP + 0x6c],ECX      ; 005457aa
    MOV EAX,ECX                         ; 005457ae
    MOV dword ptr [ESP + 0x70],ECX      ; 005457b0
    MOV ECX,0x3e8                       ; 005457b4
    MOV dword ptr [ESP + 0xa0],EAX      ; 005457b9
    LEA EAX,[ESP + 0xc]                 ; 005457c0
    MOV dword ptr [ESP + 0x9c],ECX      ; 005457c4
    MOV ECX,0x4fffb                     ; 005457cb
    PUSH EAX                            ; 005457d0
    MOV dword ptr [ESP + 0x20],ECX      ; 005457d1
    MOV dword ptr [ESP + 0x24],ECX      ; 005457d5
    MOV dword ptr [ESP + 0x54],ECX      ; 005457d9
    MOV dword ptr [ESP + 0xb0],ECX      ; 005457dd
    CALL engine_special.cpp_drawPolygon_FUN_00532620 ; 005457e4
        ;   XREF to: 00532620 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_drawPolygon_FUN_00532620(SRenderVertex * vertices, int vertex_count, int render_flags)
    MOV EAX,dword ptr [ESI + 0xd3008]   ; 005457e9
    ADD ESP,0xc                         ; 005457ef
    CMP EBX,EAX                         ; 005457f2
    JL 0x00545728                       ; 005457f4
        ;   XREF to: 00545728 (CONDITIONAL_JUMP)  ; LAB_00545728
    POP EDI                             ; 005457fa
    ADD ESP,0xc0                        ; 005457fb
        ;   Label: LAB_005457fb
    POP EBP                             ; 00545801
    POP ESI                             ; 00545802
    POP EBX                             ; 00545803
    RET                                 ; 00545804


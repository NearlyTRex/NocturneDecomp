; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_inv.cpp_drawWeaponIconBackground_FUN_00500050(int x1, int y1, int x2, int y2, int alpha)
;
; Parameters:
; int              Stack[0x4]:4   x1
; int              Stack[0x8]:4   y1
; int              Stack[0xc]:4   x2
; int              Stack[0x10]:4   y2
; int              Stack[0x14]:4   alpha
; Local Variables:
; undefined1       Stack[-0x48]:1  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_inv.cpp_CInventory_renderSelectedItems_FUN_00500370 at 00500638
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   SMRGLTextureBasic g_Inventory3DTextureAtlas
;   undefined4 DAT_00a00000
;   undefined4 DAT_01000000
;   CDemonRenderer g_CDemonRendererInstance
;   CDemonCamera g_CDemonCameraInstance
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_pushRect_FUN_0044c740
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00500050
        ;   Label: core_inv.cpp_drawWeaponIconBackground_FUN_00500050
    PUSH ESI                            ; 00500051
    PUSH EDI                            ; 00500052
    PUSH EBP                            ; 00500053
    SUB ESP,0x38                        ; 00500054
    PUSH 0x67cf14                       ; 00500057 | SMRGLTextureBasic g_Inventory3DTextureAtlas
    MOV EDX,dword ptr [0x006703ec]      ; 0050005c | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDX                            ; 00500062 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 00500063 | void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00500068
    MOV ECX,dword ptr [ESP + 0x5c]      ; 0050006b
    PUSH ECX                            ; 0050006f
    MOV EBX,dword ptr [0x006703ec]      ; 00500070 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH EBX                            ; 00500076 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 00500077 | void engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0050007c
    MOV EAX,[0x006703ec]                ; 0050007f | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    MOV ECX,dword ptr [ESP + 0x4c]      ; 00500084
    MOV EDX,dword ptr [EAX]             ; 00500088 | CDemonRenderer g_CDemonRendererInstance
    SHL ECX,0x10                        ; 0050008a
    MOV dword ptr [EDX + 0x10],ECX      ; 0050008d
    MOV EBX,dword ptr [ESP + 0x50]      ; 00500090
    MOV EDX,dword ptr [EAX]             ; 00500094 | CDemonRenderer g_CDemonRendererInstance
    SHL EBX,0x10                        ; 00500096
    MOV dword ptr [EDX + 0x14],EBX      ; 00500099
    MOV EDX,dword ptr [EAX]             ; 0050009c | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x8],0x1000    ; 0050009e
    MOV EDX,dword ptr [EAX]             ; 005000a5 | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x18],0x0      ; 005000a7
    MOV EDX,dword ptr [EAX]             ; 005000ae | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x1c],0xa00000 ; 005000b0 | DAT_00a00000
    MOV EDX,dword ptr [ESP + 0x54]      ; 005000b7
    MOV ESI,dword ptr [EAX]             ; 005000bb | CDemonRenderer g_CDemonRendererInstance
    SHL EDX,0x10                        ; 005000bd
    MOV dword ptr [ESI + 0x40],EDX      ; 005000c0
    MOV ESI,dword ptr [EAX]             ; 005000c3 | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [ESI + 0x44],EBX      ; 005000c5
    MOV EBX,dword ptr [EAX]             ; 005000c8 | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x38],0x1000   ; 005000ca
    MOV EBX,dword ptr [EAX]             ; 005000d1 | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x48],0x600000 ; 005000d3
    MOV EBX,dword ptr [EAX]             ; 005000da | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x4c],0xa00000 ; 005000dc | DAT_00a00000
    MOV EBX,dword ptr [EAX]             ; 005000e3 | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x70],EDX      ; 005000e5
    MOV EDX,dword ptr [ESP + 0x58]      ; 005000e8
    MOV EBX,dword ptr [EAX]             ; 005000ec | CDemonRenderer g_CDemonRendererInstance
    SHL EDX,0x10                        ; 005000ee
    MOV dword ptr [EBX + 0x74],EDX      ; 005000f1
    MOV EBX,dword ptr [EAX]             ; 005000f4 | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x68],0x1000   ; 005000f6
    MOV EBX,dword ptr [EAX]             ; 005000fd | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x78],0x600000 ; 005000ff
    MOV EBX,dword ptr [EAX]             ; 00500106 | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x7c],0x1000000 ; 00500108 | DAT_01000000
    MOV EBX,dword ptr [EAX]             ; 0050010f | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EBX + 0xa0],ECX      ; 00500111
    MOV ECX,dword ptr [EAX]             ; 00500117 | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [ECX + 0xa4],EDX      ; 00500119
    MOV EDX,dword ptr [EAX]             ; 0050011f | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x98],0x1000   ; 00500121
    MOV EDX,dword ptr [EAX]             ; 0050012b | CDemonRenderer g_CDemonRendererInstance
    MOV ESI,0x4                         ; 0050012d
    MOV dword ptr [EDX + 0xa8],0x0      ; 00500132
    MOV EBP,0x3                         ; 0050013c
    MOV EDX,dword ptr [EAX]             ; 00500141 | CDemonRenderer g_CDemonRendererInstance
    PUSH 0xa3                           ; 00500143
    XOR EDI,EDI                         ; 00500148
    MOV dword ptr [EDX + 0xac],0x1000000 ; 0050014a | DAT_01000000
    LEA EDX,[ESP + 0x4]                 ; 00500154
    MOV dword ptr [ESP + 0x8],ESI       ; 00500158
    MOV dword ptr [ESP + 0x18],EDI      ; 0050015c
    MOV dword ptr [ESP + 0x14],EDI      ; 00500160
    MOV dword ptr [ESP + 0x10],EDI      ; 00500164
    MOV dword ptr [ESP + 0xc],EDI       ; 00500168
    MOV dword ptr [ESP + 0x1c],EDI      ; 0050016c
    MOV dword ptr [ESP + 0x28],EBP      ; 00500170
    PUSH EDX                            ; 00500174
    MOV ESI,0x1                         ; 00500175
    MOV EDI,0x2                         ; 0050017a
    PUSH EAX                            ; 0050017f | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x28],ESI      ; 00500180
    MOV dword ptr [ESP + 0x2c],EDI      ; 00500184
    CALL engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10 ; 00500188 | void engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info, int render_flags)
        ;   XREF to: 0048ae10 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0050018d
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00500190
    MOV dword ptr [ESP + 0x28],EAX      ; 00500194
    MOV EAX,dword ptr [ESP + 0x50]      ; 00500198
    MOV dword ptr [ESP + 0x30],EAX      ; 0050019c
    MOV EAX,dword ptr [ESP + 0x54]      ; 005001a0
    MOV dword ptr [ESP + 0x2c],EAX      ; 005001a4
    MOV EAX,dword ptr [ESP + 0x58]      ; 005001a8
    PUSH EAX                            ; 005001ac
    MOV EDX,dword ptr [ESP + 0x34]      ; 005001ad
    PUSH EDX                            ; 005001b1
    MOV ECX,dword ptr [ESP + 0x34]      ; 005001b2
    PUSH ECX                            ; 005001b6
    MOV EBX,dword ptr [ESP + 0x34]      ; 005001b7
    PUSH EBX                            ; 005001bb
    PUSH 0x32758e4                      ; 005001bc | CDemonCamera g_CDemonCameraInstance
    MOV dword ptr [ESP + 0x48],EAX      ; 005001c1
    CALL core_dcamera.cpp_CDemonCamera_pushRect_FUN_0044c740 ; 005001c5 | void core_dcamera.cpp_CDemonCamera_pushRect_FUN_0044c740(CDemonCamera * this_ptr, int left, int top, int right, ...)
        ;   XREF to: 0044c740 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 005001ca
    ADD ESP,0x38                        ; 005001cd
    POP EBP                             ; 005001d0
    POP EDI                             ; 005001d1
    POP ESI                             ; 005001d2
    POP EBX                             ; 005001d3
    RET                                 ; 005001d4


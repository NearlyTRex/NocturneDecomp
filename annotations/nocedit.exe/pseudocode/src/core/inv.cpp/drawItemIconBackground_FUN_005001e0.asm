; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_inv.cpp_drawItemIconBackground_FUN_005001e0(int x1, int y1, int x2, int y2, int alpha)
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
;   core_inv.cpp_CInventory_renderSelectedItems_FUN_00500370 at 005004a4
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   SMRGLTextureBasic g_Inventory3DTextureAtlas
;   undefined4 DAT_00f00000
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

    PUSH EBX                            ; 005001e0
        ;   Label: core_inv.cpp_drawItemIconBackground_FUN_005001e0
    PUSH ESI                            ; 005001e1
    PUSH EDI                            ; 005001e2
    PUSH EBP                            ; 005001e3
    SUB ESP,0x38                        ; 005001e4
    PUSH 0x67cf14                       ; 005001e7 | SMRGLTextureBasic g_Inventory3DTextureAtlas
    MOV EDX,dword ptr [0x006703ec]      ; 005001ec | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDX                            ; 005001f2 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 005001f3 | void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005001f8
    MOV ECX,dword ptr [ESP + 0x5c]      ; 005001fb
    PUSH ECX                            ; 005001ff
    MOV EBX,dword ptr [0x006703ec]      ; 00500200 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH EBX                            ; 00500206 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 00500207 | void engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0050020c
    MOV EAX,[0x006703ec]                ; 0050020f | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    MOV ECX,dword ptr [ESP + 0x4c]      ; 00500214
    MOV EDX,dword ptr [EAX]             ; 00500218 | CDemonRenderer g_CDemonRendererInstance
    SHL ECX,0x10                        ; 0050021a
    MOV dword ptr [EDX + 0x10],ECX      ; 0050021d
    MOV EBX,dword ptr [ESP + 0x50]      ; 00500220
    MOV EDX,dword ptr [EAX]             ; 00500224 | CDemonRenderer g_CDemonRendererInstance
    SHL EBX,0x10                        ; 00500226
    MOV dword ptr [EDX + 0x14],EBX      ; 00500229
    MOV EDX,dword ptr [EAX]             ; 0050022c | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x8],0x1000    ; 0050022e
    MOV EDX,dword ptr [EAX]             ; 00500235 | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x18],0x0      ; 00500237
    MOV EDX,dword ptr [EAX]             ; 0050023e | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x1c],0x0      ; 00500240
    MOV EDX,dword ptr [ESP + 0x54]      ; 00500247
    MOV ESI,dword ptr [EAX]             ; 0050024b | CDemonRenderer g_CDemonRendererInstance
    SHL EDX,0x10                        ; 0050024d
    MOV dword ptr [ESI + 0x40],EDX      ; 00500250
    MOV ESI,dword ptr [EAX]             ; 00500253 | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [ESI + 0x44],EBX      ; 00500255
    MOV EBX,dword ptr [EAX]             ; 00500258 | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x38],0x1000   ; 0050025a
    MOV EBX,dword ptr [EAX]             ; 00500261 | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x48],0xf00000 ; 00500263 | DAT_00f00000
    MOV EBX,dword ptr [EAX]             ; 0050026a | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x4c],0x0      ; 0050026c
    MOV EBX,dword ptr [EAX]             ; 00500273 | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x70],EDX      ; 00500275
    MOV EDX,dword ptr [ESP + 0x58]      ; 00500278
    MOV EBX,dword ptr [EAX]             ; 0050027c | CDemonRenderer g_CDemonRendererInstance
    SHL EDX,0x10                        ; 0050027e
    MOV dword ptr [EBX + 0x74],EDX      ; 00500281
    MOV EBX,dword ptr [EAX]             ; 00500284 | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x68],0x1000   ; 00500286
    MOV EBX,dword ptr [EAX]             ; 0050028d | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x78],0xf00000 ; 0050028f | DAT_00f00000
    MOV EBX,dword ptr [EAX]             ; 00500296 | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x7c],0x600000 ; 00500298
    MOV EBX,dword ptr [EAX]             ; 0050029f | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EBX + 0xa0],ECX      ; 005002a1
    MOV ECX,dword ptr [EAX]             ; 005002a7 | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [ECX + 0xa4],EDX      ; 005002a9
    MOV EDX,dword ptr [EAX]             ; 005002af | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x98],0x1000   ; 005002b1
    MOV EDX,dword ptr [EAX]             ; 005002bb | CDemonRenderer g_CDemonRendererInstance
    MOV ESI,0x4                         ; 005002bd
    MOV dword ptr [EDX + 0xa8],0x0      ; 005002c2
    MOV EBP,0x3                         ; 005002cc
    MOV EDX,dword ptr [EAX]             ; 005002d1 | CDemonRenderer g_CDemonRendererInstance
    PUSH 0xa3                           ; 005002d3
    XOR EDI,EDI                         ; 005002d8
    MOV dword ptr [EDX + 0xac],0x600000 ; 005002da
    LEA EDX,[ESP + 0x4]                 ; 005002e4
    MOV dword ptr [ESP + 0x8],ESI       ; 005002e8
    MOV dword ptr [ESP + 0x18],EDI      ; 005002ec
    MOV dword ptr [ESP + 0x14],EDI      ; 005002f0
    MOV dword ptr [ESP + 0x10],EDI      ; 005002f4
    MOV dword ptr [ESP + 0xc],EDI       ; 005002f8
    MOV dword ptr [ESP + 0x1c],EDI      ; 005002fc
    MOV dword ptr [ESP + 0x28],EBP      ; 00500300
    PUSH EDX                            ; 00500304
    MOV ESI,0x1                         ; 00500305
    MOV EDI,0x2                         ; 0050030a
    PUSH EAX                            ; 0050030f | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x28],ESI      ; 00500310
    MOV dword ptr [ESP + 0x2c],EDI      ; 00500314
    CALL engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10 ; 00500318 | void engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info, int render_flags)
        ;   XREF to: 0048ae10 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0050031d
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00500320
    MOV dword ptr [ESP + 0x28],EAX      ; 00500324
    MOV EAX,dword ptr [ESP + 0x50]      ; 00500328
    MOV dword ptr [ESP + 0x30],EAX      ; 0050032c
    MOV EAX,dword ptr [ESP + 0x54]      ; 00500330
    MOV dword ptr [ESP + 0x2c],EAX      ; 00500334
    MOV EAX,dword ptr [ESP + 0x58]      ; 00500338
    PUSH EAX                            ; 0050033c
    MOV EDX,dword ptr [ESP + 0x34]      ; 0050033d
    PUSH EDX                            ; 00500341
    MOV ECX,dword ptr [ESP + 0x34]      ; 00500342
    PUSH ECX                            ; 00500346
    MOV EBX,dword ptr [ESP + 0x34]      ; 00500347
    PUSH EBX                            ; 0050034b
    PUSH 0x32758e4                      ; 0050034c | CDemonCamera g_CDemonCameraInstance
    MOV dword ptr [ESP + 0x48],EAX      ; 00500351
    CALL core_dcamera.cpp_CDemonCamera_pushRect_FUN_0044c740 ; 00500355 | void core_dcamera.cpp_CDemonCamera_pushRect_FUN_0044c740(CDemonCamera * this_ptr, int left, int top, int right, ...)
        ;   XREF to: 0044c740 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0050035a
    ADD ESP,0x38                        ; 0050035d
    POP EBP                             ; 00500360
    POP EDI                             ; 00500361
    POP ESI                             ; 00500362
    POP EBX                             ; 00500363
    RET                                 ; 00500364


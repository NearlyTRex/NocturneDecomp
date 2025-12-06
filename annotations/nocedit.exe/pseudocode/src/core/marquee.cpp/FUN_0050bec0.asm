; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_marquee.cpp_FUN_0050bec0()
;
; Local Variables:
; undefined1       Stack[-0x44]:1  local_44
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
;   core_marquee.cpp_FUN_0050c050 at 0050c2e1
;
; Referenced Globals:
;   undefined4 DAT_00661020
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   undefined4 DAT_00f80000
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
;   wincore_windll.cpp_transformPoint_FUN_005b5a25
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050bec0
        ;   Label: core_marquee.cpp_FUN_0050bec0
    PUSH ESI                            ; 0050bec1
    PUSH EDI                            ; 0050bec2
    PUSH EBP                            ; 0050bec3
    SUB ESP,0x34                        ; 0050bec4
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0050bec7
    MOV ESI,dword ptr [0x006703ec]      ; 0050becb | CDemonRenderer * g_CDemonRendererPtr
    LEA EBX,[ESP + 0x28]                ; 0050bed1
    MOV ESI,dword ptr [ESI]             ; 0050bed5 | CDemonRenderer g_CDemonRendererInstance
    FLD float ptr [EAX]                 ; 0050bed7
    FMUL float ptr [0x00661020]         ; 0050bed9 | DAT_00661020
    FISTP dword ptr [EBX]               ; 0050bedf
    FLD float ptr [EAX + 0x4]           ; 0050bee1
    FMUL float ptr [0x00661020]         ; 0050bee4 | DAT_00661020
    FISTP dword ptr [EBX + 0x4]         ; 0050beea
    FLD float ptr [EAX + 0x8]           ; 0050beed
    FMUL float ptr [0x00661020]         ; 0050bef0 | DAT_00661020
    FISTP dword ptr [EBX + 0x8]         ; 0050bef6
    LEA EAX,[ESP + 0x28]                ; 0050bef9
    PUSH EAX                            ; 0050befd
    PUSH ESI                            ; 0050befe
    CALL wincore_windll.cpp_transformPoint_FUN_005b5a25 ; 0050beff | int wincore_windll.cpp_transformPoint_FUN_005b5a25(SProjectedVertex * output, CVector3i * input)
        ;   XREF to: 005b5a25 (UNCONDITIONAL_CALL)
    MOV EAX,[0x006703ec]                ; 0050bf04 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    MOV ESI,dword ptr [EAX]             ; 0050bf09 | CDemonRenderer g_CDemonRendererInstance
    MOV ECX,0xc                         ; 0050bf0b
    LEA EDI,[ESI + 0x30]                ; 0050bf10
    MOVSD.REP ES:EDI,ESI                ; 0050bf13
    MOV ESI,dword ptr [EAX]             ; 0050bf15 | CDemonRenderer g_CDemonRendererInstance
    MOV ECX,0xc                         ; 0050bf17
    LEA EDI,[ESI + 0x60]                ; 0050bf1c
    MOVSD.REP ES:EDI,ESI                ; 0050bf1f
    MOV ESI,dword ptr [EAX]             ; 0050bf21 | CDemonRenderer g_CDemonRendererInstance
    MOV ECX,0xc                         ; 0050bf23
    LEA EDI,[ESI + 0x90]                ; 0050bf28
    MOVSD.REP ES:EDI,ESI                ; 0050bf2e
    MOV ESI,dword ptr [EAX]             ; 0050bf30 | CDemonRenderer g_CDemonRendererInstance
    ADD dword ptr [ESI],0x80            ; 0050bf32
    MOV ESI,dword ptr [EAX]             ; 0050bf38 | CDemonRenderer g_CDemonRendererInstance
    ADD dword ptr [ESI + 0x4],0x80      ; 0050bf3a
    MOV EBX,dword ptr [EAX]             ; 0050bf41 | CDemonRenderer g_CDemonRendererInstance
    SUB dword ptr [EBX + 0x30],0x80     ; 0050bf43
    MOV ESI,dword ptr [EAX]             ; 0050bf4a | CDemonRenderer g_CDemonRendererInstance
    ADD dword ptr [ESI + 0x34],0x80     ; 0050bf4c
    MOV ESI,dword ptr [EAX]             ; 0050bf53 | CDemonRenderer g_CDemonRendererInstance
    SUB dword ptr [ESI + 0x60],0x80     ; 0050bf55
    MOV ESI,dword ptr [EAX]             ; 0050bf5c | CDemonRenderer g_CDemonRendererInstance
    SUB dword ptr [ESI + 0x64],0x80     ; 0050bf5e
    MOV EBX,dword ptr [EAX]             ; 0050bf65 | CDemonRenderer g_CDemonRendererInstance
    ADD dword ptr [EBX + 0x90],0x80     ; 0050bf67
    MOV EBX,dword ptr [EAX]             ; 0050bf71 | CDemonRenderer g_CDemonRendererInstance
    SUB dword ptr [EBX + 0x94],0x80     ; 0050bf73
    MOV EBX,dword ptr [EAX]             ; 0050bf7d | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x10],0x80000000 ; 0050bf7f
    MOV EBX,dword ptr [EAX]             ; 0050bf86 | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x40],0x80000000 ; 0050bf88
    MOV EBX,dword ptr [EAX]             ; 0050bf8f | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x70],0x80000000 ; 0050bf91
    MOV EBX,dword ptr [EAX]             ; 0050bf98 | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EBX + 0xa0],0x80000000 ; 0050bf9a
    MOV EBX,dword ptr [EAX]             ; 0050bfa4 | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x18],0x80000  ; 0050bfa6
    MOV EBX,dword ptr [EAX]             ; 0050bfad | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x1c],0xf80000 ; 0050bfaf | DAT_00f80000
    MOV EBX,dword ptr [EAX]             ; 0050bfb6 | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x48],0xf80000 ; 0050bfb8 | DAT_00f80000
    MOV EBX,dword ptr [EAX]             ; 0050bfbf | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x4c],0xf80000 ; 0050bfc1 | DAT_00f80000
    MOV EBX,dword ptr [EAX]             ; 0050bfc8 | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x78],0xf80000 ; 0050bfca | DAT_00f80000
    MOV EBX,dword ptr [EAX]             ; 0050bfd1 | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x7c],0x80000  ; 0050bfd3
    ADD ESP,0x8                         ; 0050bfda
    MOV EBX,dword ptr [EAX]             ; 0050bfdd | CDemonRenderer g_CDemonRendererInstance
    PUSH 0x63                           ; 0050bfdf
    MOV dword ptr [EBX + 0xa8],0x80000  ; 0050bfe1
    MOV EDI,0x4                         ; 0050bfeb
    MOV EBX,dword ptr [EAX]             ; 0050bff0 | CDemonRenderer g_CDemonRendererInstance
    XOR EBP,EBP                         ; 0050bff2
    MOV EDX,0x3                         ; 0050bff4
    MOV dword ptr [EBX + 0xac],0x80000  ; 0050bff9
    LEA EBX,[ESP + 0x4]                 ; 0050c003
    MOV dword ptr [ESP + 0x8],EDI       ; 0050c007
    MOV dword ptr [ESP + 0x18],EBP      ; 0050c00b
    MOV dword ptr [ESP + 0x14],EBP      ; 0050c00f
    MOV dword ptr [ESP + 0x10],EBP      ; 0050c013
    MOV dword ptr [ESP + 0xc],EBP       ; 0050c017
    MOV dword ptr [ESP + 0x1c],EBP      ; 0050c01b
    MOV dword ptr [ESP + 0x28],EDX      ; 0050c01f
    PUSH EBX                            ; 0050c023
    MOV EDI,0x1                         ; 0050c024
    MOV EBP,0x2                         ; 0050c029
    PUSH EAX                            ; 0050c02e | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x28],EDI      ; 0050c02f
    MOV dword ptr [ESP + 0x2c],EBP      ; 0050c033
    CALL engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10 ; 0050c037 | void engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info, int render_flags)
        ;   XREF to: 0048ae10 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0050c03c
    ADD ESP,0x34                        ; 0050c03f
    POP EBP                             ; 0050c042
    POP EDI                             ; 0050c043
    POP ESI                             ; 0050c044
    POP EBX                             ; 0050c045
    RET                                 ; 0050c046


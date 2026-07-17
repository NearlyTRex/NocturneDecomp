; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl dll_dx7_cpp_createTexture_FUN_10002f60(int texture_size)
;
; Parameters:
; int              Stack[0x4]:4   texture_size
; Local Variables:
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   dll_dx7.cpp_CDLLTextureCache_init_FUN_10001020 at 10001050
;
; Referenced Globals:
;   GUID g_IID_IDirect3DTexture2 = IDirect3DTexture2 93281502-8cf8-11d0-89ab-00a0c9054129
;   int g_AllowAutoMipMapping = 0x0
;   IDirectDraw4* g_DirectDraw4 = 00000000
;   int g_TextureCount = 0x0
;   TerminatedCString s_D3D_won_t_let_me_convert_10016a4c
;   TerminatedCString s_Too_many_textures_reques_10016a80
;   int g_MipMapFlag = 0x0
;   STextureSurfaceSlot[4096] g_TextureSurfaces
;   undefined4 g_TextureSurfaces[0].surface
;   undefined4 g_ExternalRendererBridge.agp_texture_mode
;   DDPIXELFORMAT g_TexturePixelFormat
;   undefined4 g_TexturePixelFormat.dwFlags
;
; Called Functions:
;   dll_dx7.cpp_fatalError_FUN_10002340
;   dll_dx7.cpp_FUN_10003090
;
; *****************************************************************************

section .text

    SUB ESP,0x7c                        ; 10002f60
        ;   Label: dll_dx7.cpp_createTexture_FUN_10002f60
    XOR EAX,EAX                         ; 10002f63
    MOV ECX,0x1f                        ; 10002f65
    PUSH ESI                            ; 10002f6a
    PUSH EDI                            ; 10002f6b
    LEA EDI,[ESP + 0x8]                 ; 10002f6c
    STOSD.REP ES:EDI                    ; 10002f70
    MOV ESI,0x10226a58                  ; 10002f72 | g_TexturePixelFormat
    LEA EDI,[ESP + 0x50]                ; 10002f77
    MOV ECX,0x8                         ; 10002f7b
    MOVSD.REP ES:EDI,ESI                ; 10002f80 | g_TexturePixelFormat | g_TexturePixelFormat.dwFlags
    MOV dword ptr [ESP + 0x8],0x7c      ; 10002f82
    MOV EAX,[0x1022691c]                ; 10002f8a | g_ExternalRendererBridge.agp_texture_mode
    MOV dword ptr [ESP + 0xc],0x101007  ; 10002f8f
    CMP dword ptr [EAX],0x0             ; 10002f97
    MOV EAX,dword ptr [ESP + 0x88]      ; 10002f9a
    JNZ 0x10002fa9                      ; 10002fa1
        ;   XREF to: 10002fa9 (CONDITIONAL_JUMP)  ; LAB_10002fa9
    CDQ                                 ; 10002fa3
    SUB EAX,EDX                         ; 10002fa4
    SAR EAX,0x1                         ; 10002fa6
    MOV dword ptr [ESP + 0x14],EAX      ; 10002fa9
        ;   Label: LAB_10002fa9
    MOV dword ptr [ESP + 0x10],EAX      ; 10002fad
    MOV dword ptr [ESP + 0x70],0x5000   ; 10002fb1
    CMP dword ptr [0x10060670],0x0      ; 10002fb9 | g_MipMapFlag
    JZ 0x10002fe8                       ; 10002fc0
        ;   XREF to: 10002fe8 (CONDITIONAL_JUMP)  ; LAB_10002fe8
    MOV dword ptr [ESP + 0xc],0x121007  ; 10002fc2
    MOV EAX,dword ptr [ESP + 0x14]      ; 10002fca
    PUSH EAX                            ; 10002fce
    CALL dll_dx7.cpp_FUN_10003090       ; 10002fcf
        ;   XREF to: 10003090 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_10003090()
    OR dword ptr [ESP + 0x74],0x400008  ; 10002fd4
    ADD ESP,0x4                         ; 10002fdc
    SUB EAX,0x3                         ; 10002fdf
    MOV dword ptr [ESP + 0x20],EAX      ; 10002fe2
    JMP 0x10003009                      ; 10002fe6
        ;   XREF to: 10003009 (UNCONDITIONAL_JUMP)  ; LAB_10003009
    CMP dword ptr [0x10014168],0x0      ; 10002fe8 | g_AllowAutoMipMapping
        ;   Label: LAB_10002fe8
    JNZ 0x10003009                      ; 10002fef
        ;   XREF to: 10003009 (CONDITIONAL_JUMP)  ; LAB_10003009
    MOV dword ptr [ESP + 0xc],0x121007  ; 10002ff1
    MOV dword ptr [ESP + 0x20],0x1      ; 10002ff9
    MOV dword ptr [ESP + 0x70],0x405008 ; 10003001
    MOV EAX,[0x10014214]                ; 10003009 | g_TextureCount
        ;   Label: LAB_10003009
    PUSH 0x0                            ; 1000300e
    MOV ECX,dword ptr [0x10014188]      ; 10003010 | g_DirectDraw4
    LEA EDI,[EAX*0x8 + 0x1020de44]      ; 10003016 | g_TextureSurfaces[0].surface
    LEA ESI,[EAX*0x8 + 0x1020de40]      ; 1000301d | g_TextureSurfaces
    PUSH EDI                            ; 10003024
    LEA EAX,[ESP + 0x10]                ; 10003025
    PUSH EAX                            ; 10003029
    PUSH ECX                            ; 1000302a
    MOV EAX,dword ptr [ECX]             ; 1000302b
    CALL dword ptr [EAX + 0x18]         ; 1000302d
    TEST EAX,EAX                        ; 10003030
    JZ 0x1000303f                       ; 10003032
        ;   XREF to: 1000303f (CONDITIONAL_JUMP)  ; LAB_1000303f
    MOV EAX,0xffffffff                  ; 10003034
    POP EDI                             ; 10003039
    POP ESI                             ; 1000303a
    ADD ESP,0x7c                        ; 1000303b
    RET                                 ; 1000303e
    MOV EAX,dword ptr [EDI]             ; 1000303f | g_TextureSurfaces[0].surface
        ;   Label: LAB_1000303f
    PUSH ESI                            ; 10003041
    MOV ESI,dword ptr [EAX]             ; 10003042
    PUSH 0x100121f8                     ; 10003044 | g_IID_IDirect3DTexture2
    PUSH EAX                            ; 10003049
    CALL dword ptr [ESI]                ; 1000304a
    TEST EAX,EAX                        ; 1000304c
    JZ 0x1000305d                       ; 1000304e
        ;   XREF to: 1000305d (CONDITIONAL_JUMP)  ; LAB_1000305d
    PUSH 0x10016a4c                     ; 10003050 | = "D3D won't let me convert a surface to..."
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10003055
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    MOV EAX,[0x10014214]                ; 1000305d | g_TextureCount
        ;   Label: LAB_1000305d
    MOV ESI,EAX                         ; 10003062
    INC EAX                             ; 10003064
    MOV [0x10014214],EAX                ; 10003065 | g_TextureCount
    CMP EAX,0x1000                      ; 1000306a
    JLE 0x1000307e                      ; 1000306f
        ;   XREF to: 1000307e (CONDITIONAL_JUMP)  ; LAB_1000307e
    PUSH 0x10016a80                     ; 10003071 | = "Too many textures requested"
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10003076
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    MOV EAX,ESI                         ; 1000307e
        ;   Label: LAB_1000307e
    POP EDI                             ; 10003080
    POP ESI                             ; 10003081
    ADD ESP,0x7c                        ; 10003082
    RET                                 ; 10003085


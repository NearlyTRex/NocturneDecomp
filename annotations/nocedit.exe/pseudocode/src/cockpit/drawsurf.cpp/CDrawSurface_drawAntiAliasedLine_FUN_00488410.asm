; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAntiAliasedLine_FUN_00488410 (CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x1
; int              Stack[0xc]:4   y1
; int              Stack[0x10]:4   x2
; int              Stack[0x14]:4   y2
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   int g_PaletteColorIndex
;   int g_ClipLeft
;   int g_ClipTop
;   int g_ClipRight
;   int g_ClipBottom
;
; Called Functions:
;   cockpit_ckptutil.c_drawLineAA_FUN_00433c90
;   cockpit_ckptutil.c_isLineClippingDisabled_FUN_00434660
;   cockpit_ckptutil.c_setLineClippingDisabled_FUN_00434680
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00488410
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawAntiAliasedLine_FUN_00488410
    PUSH ESI                            ; 00488411
    PUSH EDI                            ; 00488412
    PUSH EBP                            ; 00488413
    SUB ESP,0x8                         ; 00488414
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00488417
    MOV EDI,dword ptr [0x02d02558]      ; 0048841b | g_ClipLeft
    MOV EBP,dword ptr [0x02d02560]      ; 00488421 | g_ClipRight
    MOV EAX,[0x02d0255c]                ; 00488427 | g_ClipTop
    MOV ESI,dword ptr [EBX + 0x10]      ; 0048842c
    MOV dword ptr [ESP],EAX             ; 0048842f
    MOV EAX,[0x02d02564]                ; 00488432 | g_ClipBottom
    MOV dword ptr [0x02d02558],ESI      ; 00488437 | g_ClipLeft
    MOV dword ptr [ESP + 0x4],EAX       ; 0048843d
    MOV EAX,dword ptr [EBX + 0x18]      ; 00488441
    MOV ESI,dword ptr [EBX + 0x14]      ; 00488444
    MOV [0x02d02560],EAX                ; 00488447 | g_ClipRight
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0048844c
    MOV dword ptr [0x02d0255c],ESI      ; 0048844f | g_ClipTop
    MOV [0x02d02564],EAX                ; 00488455 | g_ClipBottom
    CALL cockpit_ckptutil.c_isLineClippingDisabled_FUN_00434660 ; 0048845a
        ;   XREF to: 00434660 (UNCONDITIONAL_CALL)  ; int cockpit_ckptutil.c_isLineClippingDisabled_FUN_00434660()
    PUSH 0x1                            ; 0048845f
    MOV ESI,EAX                         ; 00488461
    CALL cockpit_ckptutil.c_setLineClippingDisabled_FUN_00434680 ; 00488463
        ;   XREF to: 00434680 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_setLineClippingDisabled_FUN_00434680(int disabled)
    MOV EDX,dword ptr [0x02c6d554]      ; 00488468 | g_PaletteColorIndex
    ADD ESP,0x4                         ; 0048846e
    MOV ECX,dword ptr [EBX + 0xc]       ; 00488471
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00488474
    PUSH EDX                            ; 00488478
    ADD EAX,ECX                         ; 00488479
    MOV EDX,dword ptr [EBX + 0x8]       ; 0048847b
    PUSH EAX                            ; 0048847e
    MOV EAX,dword ptr [ESP + 0x30]      ; 0048847f
    ADD EAX,EDX                         ; 00488483
    PUSH EAX                            ; 00488485
    MOV EAX,dword ptr [ESP + 0x30]      ; 00488486
    ADD EAX,ECX                         ; 0048848a
    PUSH EAX                            ; 0048848c
    MOV EAX,dword ptr [ESP + 0x30]      ; 0048848d
    ADD EAX,EDX                         ; 00488491
    PUSH EAX                            ; 00488493
    CALL cockpit_ckptutil.c_drawLineAA_FUN_00433c90 ; 00488494
        ;   XREF to: 00433c90 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_drawLineAA_FUN_00433c90(int x0, int y0, int x1, int y1, ...)
    ADD ESP,0x14                        ; 00488499
    PUSH ESI                            ; 0048849c
    CALL cockpit_ckptutil.c_setLineClippingDisabled_FUN_00434680 ; 0048849d
        ;   XREF to: 00434680 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_setLineClippingDisabled_FUN_00434680(int disabled)
    ADD ESP,0x4                         ; 004884a2
    MOV EAX,dword ptr [ESP]             ; 004884a5
    MOV dword ptr [0x02d02558],EDI      ; 004884a8 | g_ClipLeft
    MOV [0x02d0255c],EAX                ; 004884ae | g_ClipTop
    MOV EAX,dword ptr [ESP + 0x4]       ; 004884b3
    MOV dword ptr [0x02d02560],EBP      ; 004884b7 | g_ClipRight
    MOV [0x02d02564],EAX                ; 004884bd | g_ClipBottom
    ADD ESP,0x8                         ; 004884c2
    POP EBP                             ; 004884c5
    POP EDI                             ; 004884c6
    POP ESI                             ; 004884c7
    POP EBX                             ; 004884c8
    RET                                 ; 004884c9


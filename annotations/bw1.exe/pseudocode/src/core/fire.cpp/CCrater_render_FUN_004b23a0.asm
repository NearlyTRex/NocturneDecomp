; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CCrater_render_FUN_004b23a0(CCrater *this_ptr)
;
; Parameters:
; CCrater *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x60]:1  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
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
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   core_fire.cpp_CCrater_activate_FUN_004b1fb0 at 004b1fda
;   core_fire.cpp_CFireEffect_renderDecals_FUN_004b54a0 at 004b5564
;
; Referenced Globals:
;   undefined4 DAT_005fff94
;   undefined4 DAT_00612560
;   undefined4 DAT_0061ca94
;   undefined4 DAT_00629014
;   undefined4 DAT_0062902c
;   undefined4 DAT_00629030
;   undefined4 DAT_00629034
;   undefined4 DAT_00629038
;   undefined4 DAT_0062903c
;   undefined4 DAT_00629044
;   undefined4 DAT_0062905c
;   undefined4 DAT_00629060
;   undefined4 DAT_00629064
;   undefined4 DAT_00629068
;   undefined4 DAT_0062906c
;   ... and 13 more
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
;   engine_special.cpp_FUN_0058043c
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004b23a0
        ;   Label: core_fire.cpp_CCrater_render_FUN_004b23a0
    PUSH EBP                            ; 004b23a1
    SUB ESP,0x58                        ; 004b23a2
    MOV ESI,dword ptr [ESP + 0x64]      ; 004b23a5
    CMP dword ptr [ESI],0x0             ; 004b23a9
    JNZ 0x004b23b4                      ; 004b23ac
        ;   XREF to: 004b23b4 (CONDITIONAL_JUMP)  ; LAB_004b23b4
    ADD ESP,0x58                        ; 004b23ae
    POP EBP                             ; 004b23b1
    POP ESI                             ; 004b23b2
    RET                                 ; 004b23b3
    PUSH EDI                            ; 004b23b4
        ;   Label: LAB_004b23b4
    PUSH EBX                            ; 004b23b5
    LEA EAX,[ESI + 0xc]                 ; 004b23b6
    PUSH EAX                            ; 004b23b9
    MOV ECX,dword ptr [0x00612560]      ; 004b23ba | DAT_00612560
    PUSH ECX                            ; 004b23c0 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 004b23c1
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004b23c6
    PUSH 0x61ca94                       ; 004b23c9 | DAT_0061ca94
    MOV EBX,dword ptr [0x00612560]      ; 004b23ce | DAT_00612560
    PUSH EBX                            ; 004b23d4 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004b23d5
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004b23da
    LEA EBX,[ESP + 0x30]                ; 004b23dd
    LEA EAX,[ESI + 0x40]                ; 004b23e1
    FLD float ptr [EAX]                 ; 004b23e4
    FMUL float ptr [0x005fff94]         ; 004b23e6 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b23ec
    FLD float ptr [EAX + 0x4]           ; 004b23ee
    FMUL float ptr [0x005fff94]         ; 004b23f1 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b23f7
    FLD float ptr [EAX + 0x8]           ; 004b23fa
    FMUL float ptr [0x005fff94]         ; 004b23fd | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b2403
    LEA EAX,[ESP + 0x30]                ; 004b2406
    PUSH EAX                            ; 004b240a
    PUSH 0x629014                       ; 004b240b | DAT_00629014
    CALL engine_special.cpp_FUN_0058043c ; 004b2410
        ;   XREF to: 0058043c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0058043c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004b2415
    LEA EBX,[ESP + 0x48]                ; 004b2418
    LEA EAX,[ESI + 0x4c]                ; 004b241c
    FLD float ptr [EAX]                 ; 004b241f
    FMUL float ptr [0x005fff94]         ; 004b2421 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b2427
    FLD float ptr [EAX + 0x4]           ; 004b2429
    FMUL float ptr [0x005fff94]         ; 004b242c | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b2432
    FLD float ptr [EAX + 0x8]           ; 004b2435
    FMUL float ptr [0x005fff94]         ; 004b2438 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b243e
    LEA EAX,[ESP + 0x48]                ; 004b2441
    PUSH EAX                            ; 004b2445
    PUSH 0x629044                       ; 004b2446 | DAT_00629044
    CALL engine_special.cpp_FUN_0058043c ; 004b244b
        ;   XREF to: 0058043c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0058043c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004b2450
    LEA EBX,[ESP + 0x3c]                ; 004b2453
    LEA EAX,[ESI + 0x58]                ; 004b2457
    FLD float ptr [EAX]                 ; 004b245a
    FMUL float ptr [0x005fff94]         ; 004b245c | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b2462
    FLD float ptr [EAX + 0x4]           ; 004b2464
    FMUL float ptr [0x005fff94]         ; 004b2467 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b246d
    FLD float ptr [EAX + 0x8]           ; 004b2470
    FMUL float ptr [0x005fff94]         ; 004b2473 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b2479
    LEA EAX,[ESP + 0x3c]                ; 004b247c
    PUSH EAX                            ; 004b2480
    PUSH 0x629074                       ; 004b2481 | DAT_00629074
    CALL engine_special.cpp_FUN_0058043c ; 004b2486
        ;   XREF to: 0058043c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0058043c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004b248b
    LEA EAX,[ESI + 0x64]                ; 004b248e
    LEA EBX,[ESP + 0x54]                ; 004b2491
    FLD float ptr [EAX]                 ; 004b2495
    FMUL float ptr [0x005fff94]         ; 004b2497 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b249d
    FLD float ptr [EAX + 0x4]           ; 004b249f
    FMUL float ptr [0x005fff94]         ; 004b24a2 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b24a8
    FLD float ptr [EAX + 0x8]           ; 004b24ab
    FMUL float ptr [0x005fff94]         ; 004b24ae | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b24b4
    LEA EAX,[ESP + 0x54]                ; 004b24b7
    PUSH EAX                            ; 004b24bb
    PUSH 0x6290a4                       ; 004b24bc | DAT_006290a4
    MOV ESI,0xffff                      ; 004b24c1
    MOV EDI,0xffff                      ; 004b24c6
    CALL engine_special.cpp_FUN_0058043c ; 004b24cb
        ;   XREF to: 0058043c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0058043c(SProjectedVertex * output, CVector3i * input)
    MOV ECX,0x80000                     ; 004b24d0
    MOV EBX,0xf80000                    ; 004b24d5
    ADD ESP,0x8                         ; 004b24da
    MOV dword ptr [0x00629034],ESI      ; 004b24dd | DAT_00629034
    MOV dword ptr [0x00629038],ESI      ; 004b24e3 | DAT_00629038
    MOV dword ptr [0x0062903c],ESI      ; 004b24e9 | DAT_0062903c
    MOV dword ptr [0x00629064],ESI      ; 004b24ef | DAT_00629064
    MOV dword ptr [0x00629068],ESI      ; 004b24f5 | DAT_00629068
    MOV dword ptr [0x0062906c],ESI      ; 004b24fb | DAT_0062906c
    MOV dword ptr [0x00629094],ESI      ; 004b2501 | DAT_00629094
    MOV dword ptr [0x00629098],ESI      ; 004b2507 | DAT_00629098
    MOV dword ptr [0x0062909c],ESI      ; 004b250d | DAT_0062909c
    MOV dword ptr [0x006290c4],ESI      ; 004b2513 | DAT_006290c4
    MOV dword ptr [0x006290c8],ESI      ; 004b2519 | DAT_006290c8
    MOV dword ptr [0x006290cc],ESI      ; 004b251f | DAT_006290cc
    MOV dword ptr [0x0062902c],ECX      ; 004b2525 | DAT_0062902c
    MOV dword ptr [0x00629030],EBX      ; 004b252b | DAT_00629030
    MOV dword ptr [0x0062905c],EBX      ; 004b2531 | DAT_0062905c
    MOV dword ptr [0x00629060],EBX      ; 004b2537 | DAT_00629060
    MOV dword ptr [0x0062908c],EBX      ; 004b253d | DAT_0062908c
    MOV EAX,ECX                         ; 004b2543
    MOV dword ptr [0x00629090],ECX      ; 004b2545 | DAT_00629090
    MOV EDX,ECX                         ; 004b254b
    MOV dword ptr [0x006290bc],ECX      ; 004b254d | DAT_006290bc
    MOV dword ptr [0x006290c0],ECX      ; 004b2553 | DAT_006290c0
    MOV dword ptr [ESP + 0x14],EDI      ; 004b2559
    PUSH EDI                            ; 004b255d
    XOR ESI,ESI                         ; 004b255e
    MOV EBX,0x3                         ; 004b2560
    MOV dword ptr [ESP + 0x14],ESI      ; 004b2565
    MOV dword ptr [ESP + 0x1c],ESI      ; 004b2569
    XOR EAX,ECX                         ; 004b256d
    XOR EDX,ECX                         ; 004b256f
    MOV ECX,0x1                         ; 004b2571
    MOV ESI,dword ptr [0x00612560]      ; 004b2576 | DAT_00612560
    MOV dword ptr [ESP + 0x10],EBX      ; 004b257c
    MOV dword ptr [ESP + 0x20],EAX      ; 004b2580
    MOV dword ptr [ESP + 0x24],EDX      ; 004b2584
    MOV EBX,0x2                         ; 004b2588
    PUSH ESI                            ; 004b258d | DAT_01bc120c
    MOV dword ptr [ESP + 0x2c],ECX      ; 004b258e
    MOV dword ptr [ESP + 0x30],EBX      ; 004b2592
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0 ; 004b2596
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004b259b
    LEA EAX,[ESP + 0x8]                 ; 004b259e
    PUSH EAX                            ; 004b25a2
    MOV EDI,dword ptr [0x00612560]      ; 004b25a3 | DAT_00612560
    PUSH EDI                            ; 004b25a9 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050 ; 004b25aa
        ;   XREF to: 00483050 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004b25af
    XOR EBP,EBP                         ; 004b25b2
    MOV EDX,0x3                         ; 004b25b4
    PUSH 0xffff                         ; 004b25b9
    MOV ECX,dword ptr [0x00612560]      ; 004b25be | DAT_00612560
    MOV dword ptr [ESP + 0x24],EBP      ; 004b25c4
    PUSH ECX                            ; 004b25c8 | DAT_01bc120c
    MOV dword ptr [ESP + 0x2c],EBX      ; 004b25c9
    MOV dword ptr [ESP + 0x30],EDX      ; 004b25cd
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0 ; 004b25d1
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004b25d6
    LEA EAX,[ESP + 0x8]                 ; 004b25d9
    PUSH EAX                            ; 004b25dd
    MOV EBX,dword ptr [0x00612560]      ; 004b25de | DAT_00612560
    PUSH EBX                            ; 004b25e4 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050 ; 004b25e5
        ;   XREF to: 00483050 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004b25ea
    POP EBX                             ; 004b25ed
    POP EDI                             ; 004b25ee
    ADD ESP,0x58                        ; 004b25ef
    POP EBP                             ; 004b25f2
    POP ESI                             ; 004b25f3
    RET                                 ; 004b25f4


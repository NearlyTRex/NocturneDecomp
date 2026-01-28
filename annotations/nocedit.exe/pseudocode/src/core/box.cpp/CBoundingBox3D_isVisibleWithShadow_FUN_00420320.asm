; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_box_cpp_CBoundingBox3D_isVisibleWithShadow_FUN_00420320(CBoundingBox3D *this_ptr)
;
; Parameters:
; CBoundingBox3D * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 at 00420668
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonLight* g_CurrentShadowLight
;   CDemonRenderer g_CDemonRendererInstance
;   int g_ViewportCenterXFixed
;   int g_ViewportCenterYFixed
;   int g_ViewportRightFixed
;   int g_ViewportBottomFixed
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_testShadowMapRegion_FUN_00476000
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00420320
        ;   Label: core_box.cpp_CBoundingBox3D_isVisibleWithShadow_FUN_00420320
    SUB ESP,0x1c                        ; 00420321
    CMP dword ptr [0x020a5740],0x0      ; 00420324 | g_CurrentShadowLight
    JZ 0x004204ad                       ; 0042032b
        ;   XREF to: 004204ad (CONDITIONAL_JUMP)  ; LAB_004204ad
    PUSH EDI                            ; 00420331
    PUSH ESI                            ; 00420332
    PUSH EBX                            ; 00420333
    MOV EDX,dword ptr [0x006703ec]      ; 00420334 | g_CDemonRendererPtr2
    MOV EAX,[0x02d02550]                ; 0042033a | g_ViewportRightFixed
    MOV ECX,dword ptr [0x02d02548]      ; 0042033f | g_ViewportCenterXFixed
    MOV EDI,dword ptr [0x02d02550]      ; 00420345 | g_ViewportRightFixed
    MOV ESI,dword ptr [0x02d0254c]      ; 0042034b | g_ViewportCenterYFixed
    MOV EBP,dword ptr [0x02d02554]      ; 00420351 | g_ViewportBottomFixed
    MOV EDX,dword ptr [EDX]             ; 00420357 | g_CDemonRendererInstance
    ADD EAX,ECX                         ; 00420359
    SUB EDI,ECX                         ; 0042035b
    MOV dword ptr [ESP + 0x20],EAX      ; 0042035d
    MOV EAX,[0x02d02554]                ; 00420361 | g_ViewportBottomFixed
    ADD EBP,ESI                         ; 00420366
    SUB EAX,ESI                         ; 00420368
    MOV ESI,EDX                         ; 0042036a
    ADD EDX,0x180                       ; 0042036c
    MOV dword ptr [ESP + 0x24],EAX      ; 00420372
    MOV dword ptr [ESP + 0x1c],EDX      ; 00420376
    MOV AH,byte ptr [ESI + 0x13]        ; 0042037a
        ;   Label: LAB_0042037a
    MOV ECX,ESI                         ; 0042037d
    TEST AH,0x80                        ; 0042037f
    JZ 0x004204b7                       ; 00420382
        ;   XREF to: 004204b7 (CONDITIONAL_JUMP)  ; LAB_004204b7
    MOV EAX,dword ptr [ESI + 0x8]       ; 00420388
    MOV EDX,dword ptr [ESI]             ; 0042038b
    NEG EAX                             ; 0042038d
    CMP EAX,EDX                         ; 0042038f
    JGE 0x004203bc                      ; 00420391
        ;   XREF to: 004203bc (CONDITIONAL_JUMP)  ; LAB_004203bc
    MOV EBX,dword ptr [ESI + 0x8]       ; 00420393
    CMP EDX,EBX                         ; 00420396
    JGE 0x004203bc                      ; 00420398
        ;   XREF to: 004203bc (CONDITIONAL_JUMP)  ; LAB_004203bc
    MOV EDX,dword ptr [0x02d02548]      ; 0042039a | g_ViewportCenterXFixed
    MOV EAX,dword ptr [ESI]             ; 004203a0
    IMUL EDX                            ; 004203a2
    IDIV EBX                            ; 004203a4
    ADD EAX,dword ptr [0x02d02550]      ; 004203a6 | g_ViewportRightFixed
    CMP EAX,EDI                         ; 004203ac
    JLE 0x004203b2                      ; 004203ae
        ;   XREF to: 004203b2 (CONDITIONAL_JUMP)  ; LAB_004203b2
    MOV EDI,EAX                         ; 004203b0
    CMP EAX,dword ptr [ESP + 0x20]      ; 004203b2
        ;   Label: LAB_004203b2
    JGE 0x004203bc                      ; 004203b6
        ;   XREF to: 004203bc (CONDITIONAL_JUMP)  ; LAB_004203bc
    MOV dword ptr [ESP + 0x20],EAX      ; 004203b8
    MOV EAX,dword ptr [ECX + 0x8]       ; 004203bc
        ;   Label: LAB_004203bc
    MOV EDX,dword ptr [ECX + 0x4]       ; 004203bf
    NEG EAX                             ; 004203c2
    CMP EAX,EDX                         ; 004203c4
    JGE 0x004203f2                      ; 004203c6
        ;   XREF to: 004203f2 (CONDITIONAL_JUMP)  ; LAB_004203f2
    MOV EBX,dword ptr [ECX + 0x8]       ; 004203c8
    CMP EDX,EBX                         ; 004203cb
    JGE 0x004203f2                      ; 004203cd
        ;   XREF to: 004203f2 (CONDITIONAL_JUMP)  ; LAB_004203f2
    MOV EDX,dword ptr [0x02d0254c]      ; 004203cf | g_ViewportCenterYFixed
    MOV EAX,dword ptr [ECX + 0x4]       ; 004203d5
    IMUL EDX                            ; 004203d8
    IDIV EBX                            ; 004203da
    ADD EAX,dword ptr [0x02d02554]      ; 004203dc | g_ViewportBottomFixed
    CMP EAX,EBP                         ; 004203e2
    JLE 0x004203e8                      ; 004203e4
        ;   XREF to: 004203e8 (CONDITIONAL_JUMP)  ; LAB_004203e8
    MOV EBP,EAX                         ; 004203e6
    CMP EAX,dword ptr [ESP + 0x24]      ; 004203e8
        ;   Label: LAB_004203e8
    JGE 0x004203f2                      ; 004203ec
        ;   XREF to: 004203f2 (CONDITIONAL_JUMP)  ; LAB_004203f2
    MOV dword ptr [ESP + 0x24],EAX      ; 004203ee
    MOV EDX,dword ptr [ECX + 0x8]       ; 004203f2
        ;   Label: LAB_004203f2
    CMP EDX,dword ptr [ECX]             ; 004203f5
    JG 0x00420407                       ; 004203f7
        ;   XREF to: 00420407 (CONDITIONAL_JUMP)  ; LAB_00420407
    MOV EBX,dword ptr [0x02d02550]      ; 004203f9 | g_ViewportRightFixed
    MOV EDI,dword ptr [0x02d02548]      ; 004203ff | g_ViewportCenterXFixed
    ADD EDI,EBX                         ; 00420405
    MOV EAX,dword ptr [ECX + 0x8]       ; 00420407
        ;   Label: LAB_00420407
    MOV EDX,dword ptr [ECX]             ; 0042040a
    NEG EAX                             ; 0042040c
    CMP EAX,EDX                         ; 0042040e
    JL 0x00420423                       ; 00420410
        ;   XREF to: 00420423 (CONDITIONAL_JUMP)  ; LAB_00420423
    MOV EBX,dword ptr [0x02d02548]      ; 00420412 | g_ViewportCenterXFixed
    MOV EAX,[0x02d02550]                ; 00420418 | g_ViewportRightFixed
    SUB EAX,EBX                         ; 0042041d
    MOV dword ptr [ESP + 0x20],EAX      ; 0042041f
    MOV EDX,dword ptr [ECX + 0x8]       ; 00420423
        ;   Label: LAB_00420423
    CMP EDX,dword ptr [ECX + 0x4]       ; 00420426
    JG 0x0042043c                       ; 00420429
        ;   XREF to: 0042043c (CONDITIONAL_JUMP)  ; LAB_0042043c
    MOV EBX,dword ptr [0x02d02554]      ; 0042042b | g_ViewportBottomFixed
    MOV EAX,[0x02d0254c]                ; 00420431 | g_ViewportCenterYFixed
    ADD EAX,EBX                         ; 00420436
    MOV dword ptr [ESP + 0x24],EAX      ; 00420438
    MOV EAX,dword ptr [ECX + 0x8]       ; 0042043c
        ;   Label: LAB_0042043c
    MOV EDX,dword ptr [ECX + 0x4]       ; 0042043f
    NEG EAX                             ; 00420442
    CMP EAX,EDX                         ; 00420444
    JL 0x00420456                       ; 00420446
        ;   XREF to: 00420456 (CONDITIONAL_JUMP)  ; LAB_00420456
    MOV ECX,dword ptr [0x02d0254c]      ; 00420448 | g_ViewportCenterYFixed
    MOV EBP,dword ptr [0x02d02554]      ; 0042044e | g_ViewportBottomFixed
    SUB EBP,ECX                         ; 00420454
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00420456
        ;   Label: LAB_00420456
    ADD ESI,0x30                        ; 0042045a
    CMP ESI,EBX                         ; 0042045d
    JNZ 0x0042037a                      ; 0042045f
        ;   XREF to: 0042037a (CONDITIONAL_JUMP)  ; LAB_0042037a
    MOV ESI,dword ptr [ESP + 0x20]      ; 00420465
    MOV EAX,dword ptr [ESP + 0x24]      ; 00420469
    MOV EDX,dword ptr [0x020a5740]      ; 0042046d | g_CurrentShadowLight
    SAR EDI,0x10                        ; 00420473
    SAR EAX,0x10                        ; 00420476
    SAR EBP,0x10                        ; 00420479
    MOV dword ptr [ESP + 0x24],EAX      ; 0042047c
    MOV dword ptr [ESP + 0x14],EAX      ; 00420480
    LEA EAX,[ESP + 0xc]                 ; 00420484
    SAR ESI,0x10                        ; 00420488
    PUSH EAX                            ; 0042048b
    MOV dword ptr [ESP + 0x14],EDI      ; 0042048c
    MOV dword ptr [ESP + 0x1c],EBP      ; 00420490
    PUSH EDX                            ; 00420494
    MOV dword ptr [ESP + 0x28],ESI      ; 00420495
    MOV dword ptr [ESP + 0x14],ESI      ; 00420499
    CALL core_dlight.cpp_CDemonLight_testShadowMapRegion_FUN_00476000 ; 0042049d
        ;   XREF to: 00476000 (UNCONDITIONAL_CALL)  ; int core_dlight.cpp_CDemonLight_testShadowMapRegion_FUN_00476000(CDemonLight * this_ptr, CRect * rect)
    ADD ESP,0x8                         ; 004204a2
    POP EBX                             ; 004204a5
    POP ESI                             ; 004204a6
    POP EDI                             ; 004204a7
    ADD ESP,0x1c                        ; 004204a8
    POP EBP                             ; 004204ab
    RET                                 ; 004204ac
    MOV EAX,0x1                         ; 004204ad
        ;   Label: LAB_004204ad
    ADD ESP,0x1c                        ; 004204b2
    POP EBP                             ; 004204b5
    RET                                 ; 004204b6
    MOV EAX,dword ptr [ESP + 0x20]      ; 004204b7
        ;   Label: LAB_004204b7
    MOV EDX,dword ptr [ESI + 0x10]      ; 004204bb
    CMP EAX,EDX                         ; 004204be
    JLE 0x004204c6                      ; 004204c0
        ;   XREF to: 004204c6 (CONDITIONAL_JUMP)  ; LAB_004204c6
    MOV dword ptr [ESP + 0x20],EDX      ; 004204c2
    MOV EBX,dword ptr [ECX + 0x10]      ; 004204c6
        ;   Label: LAB_004204c6
    CMP EDI,EBX                         ; 004204c9
    JGE 0x004204cf                      ; 004204cb
        ;   XREF to: 004204cf (CONDITIONAL_JUMP)  ; LAB_004204cf
    MOV EDI,EBX                         ; 004204cd
    MOV EAX,dword ptr [ESP + 0x24]      ; 004204cf
        ;   Label: LAB_004204cf
    MOV EDX,dword ptr [ECX + 0x14]      ; 004204d3
    CMP EAX,EDX                         ; 004204d6
    JLE 0x004204de                      ; 004204d8
        ;   XREF to: 004204de (CONDITIONAL_JUMP)  ; LAB_004204de
    MOV dword ptr [ESP + 0x24],EDX      ; 004204da
    MOV EBX,dword ptr [ECX + 0x14]      ; 004204de
        ;   Label: LAB_004204de
    CMP EBP,EBX                         ; 004204e1
    JGE 0x00420456                      ; 004204e3
        ;   XREF to: 00420456 (CONDITIONAL_JUMP)  ; LAB_00420456
    MOV EBP,EBX                         ; 004204e9
    JMP 0x00420456                      ; 004204eb
        ;   XREF to: 00420456 (UNCONDITIONAL_JUMP)  ; LAB_00420456


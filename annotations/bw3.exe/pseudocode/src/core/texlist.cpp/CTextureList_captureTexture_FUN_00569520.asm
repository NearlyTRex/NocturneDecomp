; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_texlist_cpp_CTextureList_captureTexture_FUN_00569520(CTextureList *this_ptr,uint texture_index)
;
; Parameters:
; CTextureList *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   texture_index
;
; XREF[1]:
;   core_ground.cpp_CGround_setQuadTextureCoordinates_FUN_004d0500 at 004d0526
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00569520
        ;   Label: core_texlist.cpp_CTextureList_captureTexture_FUN_00569520
    AND EDX,0xfff                       ; 00569524
    LEA EAX,[EDX*0x4 + 0x0]             ; 0056952a
    SUB EAX,EDX                         ; 00569531
    MOV EDX,dword ptr [ESP + 0x4]       ; 00569533
    SHL EAX,0x3                         ; 00569537
    ADD EDX,0x4                         ; 0056953a
    ADD EAX,EDX                         ; 0056953d
    PUSH EAX                            ; 0056953f
    MOV EDX,dword ptr [0x005f2afc]      ; 00569540 | DAT_005f2afc
    PUSH EDX                            ; 00569546 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 00569547
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0056954c
    RET                                 ; 0056954f


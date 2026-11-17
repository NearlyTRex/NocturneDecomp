; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setdir_cpp_CZThumb_popRenderingContext_FUN_00538a30(CZThumb *this_ptr)
;
; Parameters:
; CZThumb *        Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_005386e0 at 00538916
;   core_setdir.cpp_CZThumb_saveZBufferTable_FUN_00538470 at 005385c2
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRenderer_PTR_0060b280 = 01ba5c50
;   int g_INT_006141b8 = 0x140
;   int g_INT_006141bc = 0xc8
;   CDemonRenderer g_CDemonRenderer_01ba5c50
;   int g_INT_020b1518
;   int g_INT_020b151c
;
; Called Functions:
;   engine_drender.cpp_popViewport_FUN_0046b740
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0060b280]      ; 00538a30 | g_CDemonRenderer_PTR_0060b280
        ;   Label: core_setdir.cpp_CZThumb_popRenderingContext_FUN_00538a30
    PUSH EDX                            ; 00538a36 | g_CDemonRenderer_01ba5c50
    CALL engine_drender.cpp_popViewport_FUN_0046b740 ; 00538a37
        ;   XREF to: 0046b740 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_popViewport_FUN_0046b740()
    MOV EAX,[0x020b1518]                ; 00538a3c | g_INT_020b1518
    MOV [0x006141b8],EAX                ; 00538a41 | g_INT_006141b8
    MOV EAX,[0x020b151c]                ; 00538a46 | g_INT_020b151c
    ADD ESP,0x4                         ; 00538a4b
    MOV [0x006141bc],EAX                ; 00538a4e | g_INT_006141bc
    RET                                 ; 00538a53


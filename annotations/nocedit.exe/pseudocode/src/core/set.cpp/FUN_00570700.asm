; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_set_cpp_FUN_00570700(void)
;
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CGame* g_CGamePtr = 02d81a9c
;   CDemonRenderer g_CDemonRendererInstance
;   CGame g_CGameInstance
;   undefined4 DAT_02d81c8c
;   undefined4 DAT_02d81c90
;
; Called Functions:
;   core_set.cpp_CDemonSet_FUN_0056ffe0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;   engine_drender.cpp_CDemonRenderer_renderFaceBatch_FUN_0048ce20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570700
        ;   Label: core_set.cpp_FUN_00570700
    PUSH EBP                            ; 00570701
    MOV EAX,[0x0067b654]                ; 00570702 | g_CGamePtr | g_CGameInstance
    CMP dword ptr [EAX + 0x1f0],0x0     ; 00570707 | DAT_02d81c8c
    JNZ 0x0057074a                      ; 0057070e
        ;   XREF to: 0057074a (CONDITIONAL_JUMP)  ; LAB_0057074a
    CMP dword ptr [EAX + 0x1f4],0x0     ; 00570710 | DAT_02d81c90
    JZ 0x0057072c                       ; 00570717
        ;   XREF to: 0057072c (CONDITIONAL_JUMP)  ; LAB_0057072c
    MOV EBX,dword ptr [0x006703ec]      ; 00570719 | g_CDemonRendererPtr2 | g_CDemonRendererInstance
    PUSH EBX                            ; 0057071f | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 00570720
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00570725
    TEST EAX,EAX                        ; 00570728
    JZ 0x0057074d                       ; 0057072a
        ;   XREF to: 0057074d (CONDITIONAL_JUMP)  ; LAB_0057074d
    MOV EAX,dword ptr [ESP + 0x18]      ; 0057072c
        ;   Label: LAB_0057072c
    PUSH EAX                            ; 00570730
    MOV EDX,dword ptr [ESP + 0x18]      ; 00570731
    PUSH EDX                            ; 00570735
    MOV ECX,dword ptr [ESP + 0x18]      ; 00570736
    PUSH ECX                            ; 0057073a
    MOV EBX,dword ptr [0x006703ec]      ; 0057073b | g_CDemonRendererPtr2
    PUSH EBX                            ; 00570741 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderFaceBatch_FUN_0048ce20 ; 00570742
        ;   XREF to: 0048ce20 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_renderFaceBatch_FUN_0048ce20(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * primitive_array, int primitive_count, int render_flags)
    ADD ESP,0x10                        ; 00570747
    POP EBP                             ; 0057074a
        ;   Label: LAB_0057074a
    POP EBX                             ; 0057074b
    RET                                 ; 0057074c
    PUSH EDI                            ; 0057074d
        ;   Label: LAB_0057074d
    PUSH ESI                            ; 0057074e
    PUSH 0xffff                         ; 0057074f
    MOV ESI,dword ptr [ESP + 0x20]      ; 00570754
    PUSH ESI                            ; 00570758
    MOV EDI,dword ptr [ESP + 0x20]      ; 00570759
    PUSH EDI                            ; 0057075d
    MOV EBP,dword ptr [ESP + 0x20]      ; 0057075e
    PUSH EBP                            ; 00570762
    CALL core_set.cpp_CDemonSet_FUN_0056ffe0 ; 00570763
        ;   XREF to: 0056ffe0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0056ffe0(CDemonSet * this_ptr)
    ADD ESP,0x10                        ; 00570768
    POP ESI                             ; 0057076b
    POP EDI                             ; 0057076c
    POP EBP                             ; 0057076d
    POP EBX                             ; 0057076e
    RET                                 ; 0057076f


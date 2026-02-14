; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_set_cpp_CDemonSet_renderPrimitiveList_FUN_005708e0(CDemonSet *this_ptr,SMRGLHeaderPrimitive *primitive_array,int primitive_count)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   primitive_array
; int              Stack[0xc]:4   primitive_count
;
; XREF[1]:
;   core_dcube.cpp_buildAndRenderTrianglePrimitive_FUN_004566e0 at 00456741
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CGame* g_CGamePtr = 02d81a9c
;   CDemonRenderer g_CDemonRendererInstance
;   undefined4 DAT_02c6d590
;   undefined4 DAT_02d81c8c
;
; Called Functions:
;   core_mirror.cpp_CMirror_clipAndRenderReflectedPrimitive_FUN_00522560
;   engine_drender.cpp_CDemonRenderer_renderBasicTextured_FUN_0048a820
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005708e0
        ;   Label: core_set.cpp_CDemonSet_renderPrimitiveList_FUN_005708e0
    PUSH ESI                            ; 005708e1
    PUSH EDI                            ; 005708e2
    PUSH EBP                            ; 005708e3
    MOV EBP,dword ptr [ESP + 0x14]      ; 005708e4
    MOV EAX,dword ptr [ESP + 0x18]      ; 005708e8
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005708ec
    MOV EBX,dword ptr [0x0067b654]      ; 005708f0 | g_CGamePtr
    CMP dword ptr [EBX + 0x1f0],0x0     ; 005708f6 | DAT_02d81c8c
    JNZ 0x00570930                      ; 005708fd
        ;   XREF to: 00570930 (CONDITIONAL_JUMP)  ; LAB_00570930
    MOV EBX,dword ptr [0x006703ec]      ; 005708ff | g_CDemonRendererPtr2
    MOV EBX,dword ptr [EBX + 0x18]      ; 00570905 | DAT_02c6d590
    TEST EBX,EBX                        ; 00570908
    JZ 0x00570935                       ; 0057090a
        ;   XREF to: 00570935 (CONDITIONAL_JUMP)  ; LAB_00570935
    XOR EBX,EBX                         ; 0057090c
    TEST EDI,EDI                        ; 0057090e
    JLE 0x00570930                      ; 00570910
        ;   XREF to: 00570930 (CONDITIONAL_JUMP)  ; LAB_00570930
    MOV ESI,EAX                         ; 00570912
    PUSH ESI                            ; 00570914
        ;   Label: LAB_00570914
    MOV EAX,dword ptr [EBP + 0x161650]  ; 00570915
    PUSH EAX                            ; 0057091b
    INC EBX                             ; 0057091c
    CALL core_mirror.cpp_CMirror_clipAndRenderReflectedPrimitive_FUN_00522560 ; 0057091d
        ;   XREF to: 00522560 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_CMirror_clipAndRenderReflectedPrimitive_FUN_00522560(CMirror * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESI,0x28                        ; 00570922
    ADD ESP,0x8                         ; 00570925
    CMP EBX,EDI                         ; 00570928
    JL 0x00570914                       ; 0057092a
        ;   XREF to: 00570914 (CONDITIONAL_JUMP)  ; LAB_00570914
    LEA EAX,[EAX]                       ; 0057092c
    POP EBP                             ; 00570930
        ;   Label: LAB_00570930
    POP EDI                             ; 00570931
    POP ESI                             ; 00570932
    POP EBX                             ; 00570933
    RET                                 ; 00570934
    XOR ESI,ESI                         ; 00570935
        ;   Label: LAB_00570935
    TEST EDI,EDI                        ; 00570937
    JLE 0x00570930                      ; 00570939
        ;   XREF to: 00570930 (CONDITIONAL_JUMP)  ; LAB_00570930
    MOV EBX,EAX                         ; 0057093b
    PUSH EBX                            ; 0057093d
        ;   Label: LAB_0057093d
    MOV ECX,dword ptr [0x006703ec]      ; 0057093e | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH ECX                            ; 00570944 | g_CDemonRendererInstance
    INC ESI                             ; 00570945
    CALL engine_drender.cpp_CDemonRenderer_renderBasicTextured_FUN_0048a820 ; 00570946
        ;   XREF to: 0048a820 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBasicTextured_FUN_0048a820(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
    ADD EBX,0x28                        ; 0057094b
    ADD ESP,0x8                         ; 0057094e
    CMP ESI,EDI                         ; 00570951
    JL 0x0057093d                       ; 00570953
        ;   XREF to: 0057093d (CONDITIONAL_JUMP)  ; LAB_0057093d
    POP EBP                             ; 00570955
    POP EDI                             ; 00570956
    POP ESI                             ; 00570957
    POP EBX                             ; 00570958
    RET                                 ; 00570959


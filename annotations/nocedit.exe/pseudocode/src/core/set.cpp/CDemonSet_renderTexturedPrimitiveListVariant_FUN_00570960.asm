; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_renderTexturedPrimitiveListVariant_FUN_00570960(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prim,int count)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
; int              Stack[0xc]:4   count
;
; XREF[1]:
;   core_dpart.cpp_CDemonPart_renderFaces_FUN_004828b0 at 004829f2
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CGame* g_CGamePtr = 02d81a9c
;   CDemonRenderer g_CDemonRendererInstance
;   undefined4 g_CDemonRendererInstance.advanced_culling_enabled
;   undefined4 g_CGameInstance.scripted_sequence_active
;
; Called Functions:
;   core_mirror.cpp_CMirror_renderMirroredPrimitive_FUN_005225e0
;   engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570960
        ;   Label: core_set.cpp_CDemonSet_renderTexturedPrimitiveListVariant_FUN_00570960
    PUSH ESI                            ; 00570961
    PUSH EDI                            ; 00570962
    PUSH EBP                            ; 00570963
    MOV EBP,dword ptr [ESP + 0x14]      ; 00570964
    MOV EAX,dword ptr [ESP + 0x18]      ; 00570968
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0057096c
    MOV EBX,dword ptr [0x0067b654]      ; 00570970 | g_CGamePtr
    CMP dword ptr [EBX + 0x1f0],0x0     ; 00570976 | g_CGameInstance.scripted_sequence_active
    JNZ 0x005709b0                      ; 0057097d
        ;   XREF to: 005709b0 (CONDITIONAL_JUMP)  ; LAB_005709b0
    MOV EBX,dword ptr [0x006703ec]      ; 0057097f | g_CDemonRendererPtr2
    MOV EBX,dword ptr [EBX + 0x18]      ; 00570985 | g_CDemonRendererInstance.advanced_culling_enabled
    TEST EBX,EBX                        ; 00570988
    JZ 0x005709b5                       ; 0057098a
        ;   XREF to: 005709b5 (CONDITIONAL_JUMP)  ; LAB_005709b5
    XOR EBX,EBX                         ; 0057098c
    TEST EDI,EDI                        ; 0057098e
    JLE 0x005709b0                      ; 00570990
        ;   XREF to: 005709b0 (CONDITIONAL_JUMP)  ; LAB_005709b0
    MOV ESI,EAX                         ; 00570992
    PUSH ESI                            ; 00570994
        ;   Label: LAB_00570994
    MOV EAX,dword ptr [EBP + 0x161650]  ; 00570995
    PUSH EAX                            ; 0057099b
    INC EBX                             ; 0057099c
    CALL core_mirror.cpp_CMirror_renderMirroredPrimitive_FUN_005225e0 ; 0057099d
        ;   XREF to: 005225e0 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_CMirror_renderMirroredPrimitive_FUN_005225e0(CMirror * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESI,0x48                        ; 005709a2
    ADD ESP,0x8                         ; 005709a5
    CMP EBX,EDI                         ; 005709a8
    JL 0x00570994                       ; 005709aa
        ;   XREF to: 00570994 (CONDITIONAL_JUMP)  ; LAB_00570994
    LEA EAX,[EAX]                       ; 005709ac
    POP EBP                             ; 005709b0
        ;   Label: LAB_005709b0
    POP EDI                             ; 005709b1
    POP ESI                             ; 005709b2
    POP EBX                             ; 005709b3
    RET                                 ; 005709b4
    XOR ESI,ESI                         ; 005709b5
        ;   Label: LAB_005709b5
    TEST EDI,EDI                        ; 005709b7
    JLE 0x005709b0                      ; 005709b9
        ;   XREF to: 005709b0 (CONDITIONAL_JUMP)  ; LAB_005709b0
    MOV EBX,EAX                         ; 005709bb
    PUSH EBX                            ; 005709bd
        ;   Label: LAB_005709bd
    MOV ECX,dword ptr [0x006703ec]      ; 005709be | g_CDemonRendererPtr2
    PUSH ECX                            ; 005709c4 | g_CDemonRendererInstance
    INC ESI                             ; 005709c5
    CALL engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0 ; 005709c6
        ;   XREF to: 0048a8a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD EBX,0x48                        ; 005709cb
    ADD ESP,0x8                         ; 005709ce
    CMP ESI,EDI                         ; 005709d1
    JL 0x005709bd                       ; 005709d3
        ;   XREF to: 005709bd (CONDITIONAL_JUMP)  ; LAB_005709bd
    POP EBP                             ; 005709d5
    POP EDI                             ; 005709d6
    POP ESI                             ; 005709d7
    POP EBX                             ; 005709d8
    RET                                 ; 005709d9


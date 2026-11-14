; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_renderFaceListOrEnvMap_FUN_00534040(CDemonSet *this_ptr,SInputFace *faces,int count,int flags)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; SInputFace *     Stack[0x8]:4   faces
; int              Stack[0xc]:4   count
; int              Stack[0x10]:4   flags
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModel_renderParts_FUN_00541a60 at 00541b95
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 DAT_01ba5c50
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.suppress_set_geometry
;   undefined4 g_CGameInstance.render_mode
;
; Called Functions:
;   core_set.cpp_CDemonSet_renderEnvMapTriangles_FUN_00533a80
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960
;   engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0046bff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00534040
        ;   Label: core_set.cpp_CDemonSet_renderFaceListOrEnvMap_FUN_00534040
    PUSH EBP                            ; 00534041
    MOV EAX,[0x00616494]                ; 00534042 | g_CGamePtr | g_CGameInstance
    CMP dword ptr [EAX + 0x20c],0x0     ; 00534047 | g_CGameInstance.suppress_set_geometry
    JNZ 0x0053408a                      ; 0053404e
        ;   XREF to: 0053408a (CONDITIONAL_JUMP)  ; LAB_0053408a
    CMP dword ptr [EAX + 0x210],0x0     ; 00534050 | g_CGameInstance.render_mode
    JZ 0x0053406c                       ; 00534057
        ;   XREF to: 0053406c (CONDITIONAL_JUMP)  ; LAB_0053406c
    MOV EBX,dword ptr [0x0060b280]      ; 00534059 | DAT_0060b280
    PUSH EBX                            ; 0053405f | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 00534060
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00534065
    TEST EAX,EAX                        ; 00534068
    JZ 0x0053408d                       ; 0053406a
        ;   XREF to: 0053408d (CONDITIONAL_JUMP)  ; LAB_0053408d
    MOV EAX,dword ptr [ESP + 0x18]      ; 0053406c
        ;   Label: LAB_0053406c
    PUSH EAX                            ; 00534070
    MOV EDX,dword ptr [ESP + 0x18]      ; 00534071
    PUSH EDX                            ; 00534075
    MOV ECX,dword ptr [ESP + 0x18]      ; 00534076
    PUSH ECX                            ; 0053407a
    MOV EBX,dword ptr [0x0060b280]      ; 0053407b | DAT_0060b280
    PUSH EBX                            ; 00534081 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0046bff0 ; 00534082
        ;   XREF to: 0046bff0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0046bff0(CDemonRenderer * this_ptr, SInputFace * face_array, int face_count, int render_flags)
    ADD ESP,0x10                        ; 00534087
    POP EBP                             ; 0053408a
        ;   Label: LAB_0053408a
    POP EBX                             ; 0053408b
    RET                                 ; 0053408c
    PUSH EDI                            ; 0053408d
        ;   Label: LAB_0053408d
    PUSH ESI                            ; 0053408e
    PUSH 0xffff                         ; 0053408f
    MOV ESI,dword ptr [ESP + 0x20]      ; 00534094
    PUSH ESI                            ; 00534098
    MOV EDI,dword ptr [ESP + 0x20]      ; 00534099
    PUSH EDI                            ; 0053409d
    MOV EBP,dword ptr [ESP + 0x20]      ; 0053409e
    PUSH EBP                            ; 005340a2
    CALL core_set.cpp_CDemonSet_renderEnvMapTriangles_FUN_00533a80 ; 005340a3
        ;   XREF to: 00533a80 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderEnvMapTriangles_FUN_00533a80(CDemonSet * this_ptr, SInputFace * face_data, int count, int alpha)
    ADD ESP,0x10                        ; 005340a8
    POP ESI                             ; 005340ab
    POP EDI                             ; 005340ac
    POP EBP                             ; 005340ad
    POP EBX                             ; 005340ae
    RET                                 ; 005340af


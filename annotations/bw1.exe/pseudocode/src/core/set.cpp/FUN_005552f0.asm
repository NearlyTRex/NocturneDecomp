; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_FUN_005552f0(CDemonSet *this_ptr,SInputFace *faces,int count,int flags)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; SInputFace *     Stack[0x8]:4   faces
; int              Stack[0xc]:4   count
; int              Stack[0x10]:4   flags
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModel_renderParts_FUN_005640d0 at 00564205
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 DAT_01bc120c
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.field524_0x20c
;   undefined4 g_CGameInstance.field528_0x210
;
; Called Functions:
;   core_set.cpp_FUN_00554d30
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60
;   engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_004844f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005552f0
        ;   Label: core_set.cpp_FUN_005552f0
    PUSH EBP                            ; 005552f1
    MOV EAX,[0x0061d95c]                ; 005552f2 | g_CGamePtr | g_CGameInstance
    CMP dword ptr [EAX + 0x20c],0x0     ; 005552f7 | g_CGameInstance.field524_0x20c
    JNZ 0x0055533a                      ; 005552fe
        ;   XREF to: 0055533a (CONDITIONAL_JUMP)  ; LAB_0055533a
    CMP dword ptr [EAX + 0x210],0x0     ; 00555300 | g_CGameInstance.field528_0x210
    JZ 0x0055531c                       ; 00555307
        ;   XREF to: 0055531c (CONDITIONAL_JUMP)  ; LAB_0055531c
    MOV EBX,dword ptr [0x00612560]      ; 00555309 | DAT_00612560
    PUSH EBX                            ; 0055530f | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 00555310
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00555315
    TEST EAX,EAX                        ; 00555318
    JZ 0x0055533d                       ; 0055531a
        ;   XREF to: 0055533d (CONDITIONAL_JUMP)  ; LAB_0055533d
    MOV EAX,dword ptr [ESP + 0x18]      ; 0055531c
        ;   Label: LAB_0055531c
    PUSH EAX                            ; 00555320
    MOV EDX,dword ptr [ESP + 0x18]      ; 00555321
    PUSH EDX                            ; 00555325
    MOV ECX,dword ptr [ESP + 0x18]      ; 00555326
    PUSH ECX                            ; 0055532a
    MOV EBX,dword ptr [0x00612560]      ; 0055532b | DAT_00612560
    PUSH EBX                            ; 00555331 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_004844f0 ; 00555332
        ;   XREF to: 004844f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_004844f0(CDemonRenderer * this_ptr, SInputFace * face_array, int face_count, int render_flags)
    ADD ESP,0x10                        ; 00555337
    POP EBP                             ; 0055533a
        ;   Label: LAB_0055533a
    POP EBX                             ; 0055533b
    RET                                 ; 0055533c
    PUSH EDI                            ; 0055533d
        ;   Label: LAB_0055533d
    PUSH ESI                            ; 0055533e
    PUSH 0xffff                         ; 0055533f
    MOV ESI,dword ptr [ESP + 0x20]      ; 00555344
    PUSH ESI                            ; 00555348
    MOV EDI,dword ptr [ESP + 0x20]      ; 00555349
    PUSH EDI                            ; 0055534d
    MOV EBP,dword ptr [ESP + 0x20]      ; 0055534e
    PUSH EBP                            ; 00555352
    CALL core_set.cpp_FUN_00554d30      ; 00555353
        ;   XREF to: 00554d30 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_00554d30(CDemonSet * this_ptr, SInputFace * face_data, int count, int alpha)
    ADD ESP,0x10                        ; 00555358
    POP ESI                             ; 0055535b
    POP EDI                             ; 0055535c
    POP EBP                             ; 0055535d
    POP EBX                             ; 0055535e
    RET                                 ; 0055535f


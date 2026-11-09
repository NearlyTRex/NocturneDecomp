; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModel_rotateAndLightVertices_FUN_004672f0(CKeyFramedModel *this_ptr,int frame_index,CKeyFramedModelInstance *instance)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   frame_index
; CKeyFramedModelInstance * Stack[0xc]:4   instance
;
; XREF[1]:
;   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00467270 at 0046728f
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_004672b0
;   core_set.cpp_CDemonSet_lightVerticies_FUN_00553440
;   core_set.cpp_CDemonSet_rotateVerticies_FUN_00553140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004672f0
        ;   Label: core_dmodel.cpp_CKeyFramedModel_rotateAndLightVertices_FUN_004672f0
    PUSH ESI                            ; 004672f1
    PUSH EDI                            ; 004672f2
    PUSH EBP                            ; 004672f3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004672f4
    CMP dword ptr [EBX + 0x110],0x1     ; 004672f8
    JGE 0x00467306                      ; 004672ff
        ;   XREF to: 00467306 (CONDITIONAL_JUMP)  ; LAB_00467306
    POP EBP                             ; 00467301
    POP EDI                             ; 00467302
    POP ESI                             ; 00467303
    POP EBX                             ; 00467304
    RET                                 ; 00467305
    MOV ECX,dword ptr [ESP + 0x18]      ; 00467306
        ;   Label: LAB_00467306
    PUSH ECX                            ; 0046730a
    PUSH EBX                            ; 0046730b
    CALL core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_004672b0 ; 0046730c
        ;   XREF to: 004672b0 (UNCONDITIONAL_CALL)  ; CVector3i * core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_004672b0(CKeyFramedModel * this_ptr, int frame_index)
    ADD ESP,0x8                         ; 00467311
    PUSH EAX                            ; 00467314
    MOV EDI,dword ptr [EBX + 0x104]     ; 00467315
    PUSH EDI                            ; 0046731b
    MOV EBP,dword ptr [0x00622c18]      ; 0046731c | g_CDemonSetPtr
    PUSH EBP                            ; 00467322 | g_CDemonSetInstance
    MOV ESI,EAX                         ; 00467323
    CALL core_set.cpp_CDemonSet_rotateVerticies_FUN_00553140 ; 00467325
        ;   XREF to: 00553140 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_rotateVerticies_FUN_00553140(CDemonSet * this_ptr, int vertex_count, CVector3i * input_vertices)
    MOV EAX,dword ptr [EBX + 0x108]     ; 0046732a
    ADD ESP,0xc                         ; 00467330
    TEST EAX,EAX                        ; 00467333
    JZ 0x00467364                       ; 00467335
        ;   XREF to: 00467364 (CONDITIONAL_JUMP)  ; LAB_00467364
    PUSH EAX                            ; 00467337
    PUSH 0x4                            ; 00467338
    PUSH ESI                            ; 0046733a
    MOV EAX,dword ptr [EBX + 0x114]     ; 0046733b
    PUSH EAX                            ; 00467341
    MOV EDX,dword ptr [EBX + 0x110]     ; 00467342
    PUSH EDX                            ; 00467348
    MOV ECX,dword ptr [EBX + 0x104]     ; 00467349
    PUSH ECX                            ; 0046734f
    MOV EBX,dword ptr [0x00622c18]      ; 00467350 | g_CDemonSetPtr
    PUSH EBX                            ; 00467356 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_lightVerticies_FUN_00553440 ; 00467357
        ;   XREF to: 00553440 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVerticies_FUN_00553440(CDemonSet * this_ptr, int vertex_count, int tri_count, void * face_data, ...)
    ADD ESP,0x1c                        ; 0046735c
    POP EBP                             ; 0046735f
    POP EDI                             ; 00467360
    POP ESI                             ; 00467361
    POP EBX                             ; 00467362
    RET                                 ; 00467363
    PUSH EAX                            ; 00467364
        ;   Label: LAB_00467364
    PUSH 0x4                            ; 00467365
    PUSH ESI                            ; 00467367
    MOV EDX,dword ptr [EBX + 0x114]     ; 00467368
    PUSH EDX                            ; 0046736e
    MOV ECX,dword ptr [EBX + 0x110]     ; 0046736f
    PUSH ECX                            ; 00467375
    MOV ESI,dword ptr [EBX + 0x104]     ; 00467376
    PUSH ESI                            ; 0046737c
    MOV EDI,dword ptr [0x00622c18]      ; 0046737d | g_CDemonSetPtr
    PUSH EDI                            ; 00467383 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_lightVerticies_FUN_00553440 ; 00467384
        ;   XREF to: 00553440 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVerticies_FUN_00553440(CDemonSet * this_ptr, int vertex_count, int tri_count, void * face_data, ...)
    ADD ESP,0x1c                        ; 00467389
    POP EBP                             ; 0046738c
    POP EDI                             ; 0046738d
    POP ESI                             ; 0046738e
    POP EBX                             ; 0046738f
    RET                                 ; 00467390


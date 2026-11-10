; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boxactor_cpp_CBoxActor_setPositionAndOrientation_FUN_0041ce90(CBoxActor *this_ptr,CVector3f *new_position,CVector3f *new_orientation)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   new_position
; CVector3f *      Stack[0xc]:4   new_orientation
;
; XREF[1]:
;   core_doc.cpp_CDoc_renderOpaque_FUN_004599a0 at 00459bd7
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0
;   core_boxactor.cpp_FUN_0041bf10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041ce90
        ;   Label: core_boxactor.cpp_CBoxActor_setPositionAndOrientation_FUN_0041ce90
    PUSH ESI                            ; 0041ce91
    PUSH EDI                            ; 0041ce92
    MOV EDI,dword ptr [ESP + 0x10]      ; 0041ce93
    MOV ESI,dword ptr [ESP + 0x14]      ; 0041ce97
    MOV EBX,dword ptr [ESP + 0x18]      ; 0041ce9b
    LEA EAX,[EDI + 0x20]                ; 0041ce9f
    MOV EDX,dword ptr [ESI]             ; 0041cea2
    MOV dword ptr [EAX],EDX             ; 0041cea4
    MOV EDX,dword ptr [ESI + 0x4]       ; 0041cea6
    MOV dword ptr [EAX + 0x4],EDX       ; 0041cea9
    MOV EDX,dword ptr [ESI + 0x8]       ; 0041ceac
    MOV dword ptr [EAX + 0x8],EDX       ; 0041ceaf
    LEA EAX,[EDI + 0x30]                ; 0041ceb2
    CMP EAX,EBX                         ; 0041ceb5
    JZ 0x0041cec9                       ; 0041ceb7
        ;   XREF to: 0041cec9 (CONDITIONAL_JUMP)  ; LAB_0041cec9
    MOV EDX,dword ptr [EBX]             ; 0041ceb9
    MOV dword ptr [EAX],EDX             ; 0041cebb
    MOV EDX,dword ptr [EBX + 0x4]       ; 0041cebd
    MOV dword ptr [EAX + 0x4],EDX       ; 0041cec0
    MOV EDX,dword ptr [EBX + 0x8]       ; 0041cec3
    MOV dword ptr [EAX + 0x8],EDX       ; 0041cec6
    PUSH EDI                            ; 0041cec9
        ;   Label: LAB_0041cec9
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0 ; 0041ceca
        ;   XREF to: 00408ae0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(CDemonActor * this_ptr)
    LEA EAX,[EDI + 0x4f0]               ; 0041cecf
    ADD ESP,0x4                         ; 0041ced5
    CMP EAX,ESI                         ; 0041ced8
    JZ 0x0041ceec                       ; 0041ceda
        ;   XREF to: 0041ceec (CONDITIONAL_JUMP)  ; LAB_0041ceec
    MOV EDX,dword ptr [ESI]             ; 0041cedc
    MOV dword ptr [EAX],EDX             ; 0041cede
    MOV EDX,dword ptr [ESI + 0x4]       ; 0041cee0
    MOV dword ptr [EAX + 0x4],EDX       ; 0041cee3
    MOV EDX,dword ptr [ESI + 0x8]       ; 0041cee6
    MOV dword ptr [EAX + 0x8],EDX       ; 0041cee9
    LEA EAX,[EDI + 0x4fc]               ; 0041ceec
        ;   Label: LAB_0041ceec
    CMP EAX,EBX                         ; 0041cef2
    JZ 0x0041cf06                       ; 0041cef4
        ;   XREF to: 0041cf06 (CONDITIONAL_JUMP)  ; LAB_0041cf06
    MOV EDX,dword ptr [EBX]             ; 0041cef6
    MOV dword ptr [EAX],EDX             ; 0041cef8
    MOV EDX,dword ptr [EBX + 0x4]       ; 0041cefa
    MOV dword ptr [EAX + 0x4],EDX       ; 0041cefd
    MOV EDX,dword ptr [EBX + 0x8]       ; 0041cf00
    MOV dword ptr [EAX + 0x8],EDX       ; 0041cf03
    PUSH EDI                            ; 0041cf06
        ;   Label: LAB_0041cf06
    CALL core_boxactor.cpp_FUN_0041bf10 ; 0041cf07
        ;   XREF to: 0041bf10 (UNCONDITIONAL_CALL)  ; undefined core_boxactor.cpp_FUN_0041bf10()
    ADD ESP,0x4                         ; 0041cf0c
    POP EDI                             ; 0041cf0f
    POP ESI                             ; 0041cf10
    POP EBX                             ; 0041cf11
    RET                                 ; 0041cf12


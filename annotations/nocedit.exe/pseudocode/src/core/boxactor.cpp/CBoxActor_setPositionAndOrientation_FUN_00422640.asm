; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boxactor_cpp_CBoxActor_setPositionAndOrientation_FUN_00422640(CBoxActor *this_ptr,CVector3f *new_position,CVector3f *new_orientation)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   new_position
; CVector3f *      Stack[0xc]:4   new_orientation
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
;   core_boxactor.cpp_CBoxActor_setupPhysicsBox_FUN_004218d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00422640
        ;   Label: core_boxactor.cpp_CBoxActor_setPositionAndOrientation_FUN_00422640
    PUSH ESI                            ; 00422641
    PUSH EDI                            ; 00422642
    MOV EDI,dword ptr [ESP + 0x10]      ; 00422643
    MOV ESI,dword ptr [ESP + 0x14]      ; 00422647
    MOV EBX,dword ptr [ESP + 0x18]      ; 0042264b
    LEA EAX,[EDI + 0x20]                ; 0042264f
    MOV EDX,dword ptr [ESI]             ; 00422652
    MOV dword ptr [EAX],EDX             ; 00422654
    MOV EDX,dword ptr [ESI + 0x4]       ; 00422656
    MOV dword ptr [EAX + 0x4],EDX       ; 00422659
    MOV EDX,dword ptr [ESI + 0x8]       ; 0042265c
    MOV dword ptr [EAX + 0x8],EDX       ; 0042265f
    LEA EAX,[EDI + 0x30]                ; 00422662
    CMP EAX,EBX                         ; 00422665
    JZ 0x00422679                       ; 00422667
        ;   XREF to: 00422679 (CONDITIONAL_JUMP)  ; LAB_00422679
    MOV EDX,dword ptr [EBX]             ; 00422669
    MOV dword ptr [EAX],EDX             ; 0042266b
    MOV EDX,dword ptr [EBX + 0x4]       ; 0042266d
    MOV dword ptr [EAX + 0x4],EDX       ; 00422670
    MOV EDX,dword ptr [EBX + 0x8]       ; 00422673
    MOV dword ptr [EAX + 0x8],EDX       ; 00422676
    PUSH EDI                            ; 00422679
        ;   Label: LAB_00422679
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 0042267a
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
    LEA EAX,[EDI + 0x394]               ; 0042267f
    ADD ESP,0x4                         ; 00422685
    CMP EAX,ESI                         ; 00422688
    JZ 0x0042269c                       ; 0042268a
        ;   XREF to: 0042269c (CONDITIONAL_JUMP)  ; LAB_0042269c
    MOV EDX,dword ptr [ESI]             ; 0042268c
    MOV dword ptr [EAX],EDX             ; 0042268e
    MOV EDX,dword ptr [ESI + 0x4]       ; 00422690
    MOV dword ptr [EAX + 0x4],EDX       ; 00422693
    MOV EDX,dword ptr [ESI + 0x8]       ; 00422696
    MOV dword ptr [EAX + 0x8],EDX       ; 00422699
    LEA EAX,[EDI + 0x3a0]               ; 0042269c
        ;   Label: LAB_0042269c
    CMP EAX,EBX                         ; 004226a2
    JZ 0x004226b6                       ; 004226a4
        ;   XREF to: 004226b6 (CONDITIONAL_JUMP)  ; LAB_004226b6
    MOV EDX,dword ptr [EBX]             ; 004226a6
    MOV dword ptr [EAX],EDX             ; 004226a8
    MOV EDX,dword ptr [EBX + 0x4]       ; 004226aa
    MOV dword ptr [EAX + 0x4],EDX       ; 004226ad
    MOV EDX,dword ptr [EBX + 0x8]       ; 004226b0
    MOV dword ptr [EAX + 0x8],EDX       ; 004226b3
    PUSH EDI                            ; 004226b6
        ;   Label: LAB_004226b6
    CALL core_boxactor.cpp_CBoxActor_setupPhysicsBox_FUN_004218d0 ; 004226b7
        ;   XREF to: 004218d0 (UNCONDITIONAL_CALL)  ; void core_boxactor.cpp_CBoxActor_setupPhysicsBox_FUN_004218d0(CBoxActor * this_ptr)
    ADD ESP,0x4                         ; 004226bc
    POP EDI                             ; 004226bf
    POP ESI                             ; 004226c0
    POP EBX                             ; 004226c1
    RET                                 ; 004226c2


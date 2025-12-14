; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_actor.cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0(CDemonActor * this_ptr, CVector3f * new_position, CVector3f * new_orientation)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   new_position
; CVector3f *      Stack[0xc]:4   new_orientation
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_FUN_004285d0 at 004285f0
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_006139ad
;
; Called Functions:
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00409fb0
        ;   Label: core_actor.cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0
    PUSH ESI                            ; 00409fb1
    PUSH EDI                            ; 00409fb2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00409fb3
    MOV EDI,dword ptr [ESP + 0x14]      ; 00409fb7
    MOV ESI,dword ptr [ESP + 0x18]      ; 00409fbb
    PUSH 0x56e                          ; 00409fbf
    PUSH 0x6139ad                       ; 00409fc4 | = "..\\core\\actor.cpp"
    PUSH EBX                            ; 00409fc9
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 00409fca
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
    LEA EAX,[EBX + 0x20]                ; 00409fcf
    MOV EDX,dword ptr [EDI]             ; 00409fd2
    MOV dword ptr [EAX],EDX             ; 00409fd4
    MOV EDX,dword ptr [EDI + 0x4]       ; 00409fd6
    MOV dword ptr [EAX + 0x4],EDX       ; 00409fd9
    MOV EDX,dword ptr [EDI + 0x8]       ; 00409fdc
    MOV dword ptr [EAX + 0x8],EDX       ; 00409fdf
    LEA EAX,[EBX + 0x30]                ; 00409fe2
    ADD ESP,0xc                         ; 00409fe5
    CMP EAX,ESI                         ; 00409fe8
    JZ 0x00409ffc                       ; 00409fea
        ;   XREF to: 00409ffc (CONDITIONAL_JUMP)  ; LAB_00409ffc
    MOV EDX,dword ptr [ESI]             ; 00409fec
    MOV dword ptr [EAX],EDX             ; 00409fee
    MOV EDX,dword ptr [ESI + 0x4]       ; 00409ff0
    MOV dword ptr [EAX + 0x4],EDX       ; 00409ff3
    MOV EDX,dword ptr [ESI + 0x8]       ; 00409ff6
    MOV dword ptr [EAX + 0x8],EDX       ; 00409ff9
    PUSH EBX                            ; 00409ffc
        ;   Label: LAB_00409ffc
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 00409ffd
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040a002
    POP EDI                             ; 0040a005
    POP ESI                             ; 0040a006
    POP EBX                             ; 0040a007
    RET                                 ; 0040a008


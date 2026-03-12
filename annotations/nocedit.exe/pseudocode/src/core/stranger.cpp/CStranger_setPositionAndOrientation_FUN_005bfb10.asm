; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_CStranger_setPositionAndOrientation_FUN_005bfb10(CStranger *this_ptr,CVector3f *new_position,CVector3f *new_orientation)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   new_position
; CVector3f *      Stack[0xc]:4   new_orientation
; Local Variables:
; CVector3f        Stack[-0x14]:12  local_14
;
; Called Functions:
;   core_charactr.cpp_CCharacter_setPositionAndOrientation_FUN_004285d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bfb10
        ;   Label: core_stranger.cpp_CStranger_setPositionAndOrientation_FUN_005bfb10
    PUSH ESI                            ; 005bfb11
    SUB ESP,0xc                         ; 005bfb12
    MOV EDX,dword ptr [ESP + 0x20]      ; 005bfb15
    MOV EAX,dword ptr [EDX]             ; 005bfb19
    MOV dword ptr [ESP],EAX             ; 005bfb1b
    LEA EAX,[EDX + 0x4]                 ; 005bfb1e
    MOV EAX,dword ptr [EAX]             ; 005bfb21
    MOV dword ptr [ESP + 0x4],EAX       ; 005bfb23
    LEA EAX,[EDX + 0x8]                 ; 005bfb27
    MOV EAX,dword ptr [EAX]             ; 005bfb2a
    MOV dword ptr [ESP + 0x8],EAX       ; 005bfb2c
    MOV EAX,ESP                         ; 005bfb30
    PUSH EAX                            ; 005bfb32
    MOV EBX,dword ptr [ESP + 0x20]      ; 005bfb33
    PUSH EBX                            ; 005bfb37
    MOV ESI,dword ptr [ESP + 0x20]      ; 005bfb38
    XOR EDX,EDX                         ; 005bfb3c
    PUSH ESI                            ; 005bfb3e
    MOV dword ptr [ESP + 0xc],EDX       ; 005bfb3f
    MOV dword ptr [ESP + 0x14],EDX      ; 005bfb43
    CALL core_charactr.cpp_CCharacter_setPositionAndOrientation_FUN_004285d0 ; 005bfb47
        ;   XREF to: 004285d0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_setPositionAndOrientation_FUN_004285d0(CCharacter * this_ptr, CVector3f * new_position, CVector3f * new_orientation)
    ADD ESP,0xc                         ; 005bfb4c
    ADD ESP,0xc                         ; 005bfb4f
    POP ESI                             ; 005bfb52
    POP EBX                             ; 005bfb53
    RET                                 ; 005bfb54


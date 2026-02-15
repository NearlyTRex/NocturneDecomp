; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_004285d0(CCharacter *this_ptr,CVector3f *new_position,CVector3f *new_orientation)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   new_position
; CVector3f *      Stack[0xc]:4   new_orientation
;
; XREF[1]:
;   core_stranger.cpp_CStranger_setPositionAndOrientation_FUN_005bfb10 at 005bfb47
;
; Referenced Globals:
;   float FLOAT_0065b834 = 9999
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004285d0
        ;   Label: core_charactr.cpp_CCharacter_setPositionAndOrientation_FUN_004285d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004285d1
    PUSH EBX                            ; 004285d5
    MOV EAX,dword ptr [EBX + 0x154]     ; 004285d6
    CALL dword ptr [EAX + 0x10c]        ; 004285dc
    ADD ESP,0x4                         ; 004285e2
    MOV EDX,dword ptr [ESP + 0x10]      ; 004285e5
    PUSH EDX                            ; 004285e9
    MOV ECX,dword ptr [ESP + 0x10]      ; 004285ea
    PUSH ECX                            ; 004285ee
    PUSH EBX                            ; 004285ef
    CALL core_actor.cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0 ; 004285f0
        ;   XREF to: 00409fb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0(CDemonActor * this_ptr, CVector3f * new_position, CVector3f * new_orientation)
    LEA EAX,[EBX + 0x2428]              ; 004285f5
    FLD float ptr [0x0065b834]          ; 004285fb | FLOAT_0065b834
    MOV dword ptr [EAX + 0x8],0x0       ; 00428601
    ADD ESP,0xc                         ; 00428608
    MOV EDX,dword ptr [EAX + 0x8]       ; 0042860b
    MOV dword ptr [EAX + 0x4],EDX       ; 0042860e
    MOV EDX,dword ptr [EAX + 0x4]       ; 00428611
    MOV dword ptr [EAX],EDX             ; 00428614
    FSTP float ptr [EBX + 0x2414]       ; 00428616
    POP EBX                             ; 0042861c
    RET                                 ; 0042861d


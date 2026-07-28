; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_004246e0(CCharacter *this_ptr,CVector3f *new_position,CVector3f *new_orientation)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   new_position
; CVector3f *      Stack[0xc]:4   new_orientation
;
; XREF[1]:
;   core_stranger.cpp_CStranger_setPositionAndOrientation_FUN_00539ac0 at 00539af7
;
; Referenced Globals:
;   float FLOAT_0059b094 = 9999
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setPositionAndOrientation_FUN_0040b150
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004246e0
        ;   Label: core_charactr.cpp_CCharacter_setPositionAndOrientation_FUN_004246e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004246e1
    PUSH EBX                            ; 004246e5
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004246e6
    CALL dword ptr [EAX + 0xf0]         ; 004246ec
    ADD ESP,0x4                         ; 004246f2
    MOV EDX,dword ptr [ESP + 0x10]      ; 004246f5
    PUSH EDX                            ; 004246f9
    MOV ECX,dword ptr [ESP + 0x10]      ; 004246fa
    PUSH ECX                            ; 004246fe
    PUSH EBX                            ; 004246ff
    CALL core_actor.cpp_CDemonActor_setPositionAndOrientation_FUN_0040b150 ; 00424700
        ;   XREF to: 0040b150 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_setPositionAndOrientation_FUN_0040b150()
    LEA EAX,[EBX + 0x2420]              ; 00424705
    FLD float ptr [0x0059b094]          ; 0042470b | FLOAT_0059b094
    MOV dword ptr [EAX + 0x8],0x0       ; 00424711
    ADD ESP,0xc                         ; 00424718
    MOV EDX,dword ptr [EAX + 0x8]       ; 0042471b
    MOV dword ptr [EAX + 0x4],EDX       ; 0042471e
    MOV EDX,dword ptr [EAX + 0x4]       ; 00424721
    MOV dword ptr [EAX],EDX             ; 00424724
    FSTP float ptr [EBX + 0x240c]       ; 00424726
    POP EBX                             ; 0042472c
    RET                                 ; 0042472d


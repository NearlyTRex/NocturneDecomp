; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_blendLayerActionMotion_FUN_004342c0(CCharacter *this_ptr,float blend_weight,int blend_mode)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   blend_weight
; int              Stack[0xc]:4   blend_mode
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_00568100
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004342c0
        ;   Label: core_charactr.cpp_CCharacter_blendLayerActionMotion_FUN_004342c0
    PUSH ESI                            ; 004342c1
    MOV ECX,dword ptr [ESP + 0xc]       ; 004342c2
    MOV EAX,dword ptr [ECX + 0x27c4]    ; 004342c6
    SHL EAX,0x3                         ; 004342cc
    MOV EDX,EAX                         ; 004342cf
    SHL EAX,0x3                         ; 004342d1
    PUSH 0x567360                       ; 004342d4
    SUB EAX,EDX                         ; 004342d9
    MOV EBX,dword ptr [ESP + 0x18]      ; 004342db
    MOV EDX,EAX                         ; 004342df
    LEA EAX,[ECX + 0x27c8]              ; 004342e1
    PUSH EBX                            ; 004342e7
    FILD dword ptr [EDX + EAX*0x1 + 0x30] ; 004342e8
    FMUL float ptr [ECX + 0x2c9c]       ; 004342ec
    PUSH dword ptr [ESP + 0x18]         ; 004342f2
    SUB ESP,0x4                         ; 004342f6
    FSTP float ptr [ESP]                ; 004342f9
    MOV ESI,dword ptr [EDX + EAX*0x1 + 0x2c] ; 004342fc
    PUSH ESI                            ; 00434300
    ADD ECX,0x158                       ; 00434301
    PUSH ECX                            ; 00434307
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_00568100 ; 00434308
        ;   XREF to: 00568100 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_00568100(CDeformableModelInstance * this_ptr, int target_motion_index, float target_frame_number, float blend_weight, ...)
    ADD ESP,0x18                        ; 0043430d
    POP ESI                             ; 00434310
    POP EBX                             ; 00434311
    RET                                 ; 00434312


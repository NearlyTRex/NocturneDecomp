; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CStake_init_FUN_004832b0(CStake *this_ptr,CVector3f *position,CVector3f *orientation)
;
; Parameters:
; CStake *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   orientation
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createStake_FUN_0048b070 at 0048b19e
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004832b0
        ;   Label: core_fire.cpp_CStake_init_FUN_004832b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004832b1
    MOV EDX,dword ptr [ESP + 0xc]       ; 004832b5
    MOV ECX,dword ptr [ESP + 0x10]      ; 004832b9
    LEA EAX,[EBX + 0x4]                 ; 004832bd
    CMP EAX,EDX                         ; 004832c0
    JNZ 0x004832fd                      ; 004832c2
        ;   XREF to: 004832fd (CONDITIONAL_JUMP)  ; LAB_004832fd
    LEA EAX,[EBX + 0x10]                ; 004832c4
        ;   Label: LAB_004832c4
    CMP EAX,ECX                         ; 004832c7
    JZ 0x004832db                       ; 004832c9
        ;   XREF to: 004832db (CONDITIONAL_JUMP)  ; LAB_004832db
    MOV EDX,dword ptr [ECX]             ; 004832cb
    MOV dword ptr [EAX],EDX             ; 004832cd
    MOV EDX,dword ptr [ECX + 0x4]       ; 004832cf
    MOV dword ptr [EAX + 0x4],EDX       ; 004832d2
    MOV EDX,dword ptr [ECX + 0x8]       ; 004832d5
    MOV dword ptr [EAX + 0x8],EDX       ; 004832d8
    LEA EAX,[EBX + 0x10]                ; 004832db
        ;   Label: LAB_004832db
    PUSH EAX                            ; 004832de
    LEA EAX,[EBX + 0x1c]                ; 004832df
    PUSH EAX                            ; 004832e2
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 004832e3
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    MOV dword ptr [EBX],0x0             ; 004832e8
    ADD ESP,0x8                         ; 004832ee
    MOV dword ptr [EBX + 0x258],0x0     ; 004832f1
    POP EBX                             ; 004832fb
    RET                                 ; 004832fc
    PUSH ESI                            ; 004832fd
        ;   Label: LAB_004832fd
    MOV ESI,dword ptr [EDX]             ; 004832fe
    MOV dword ptr [EAX],ESI             ; 00483300
    MOV ESI,dword ptr [EDX + 0x4]       ; 00483302
    MOV dword ptr [EAX + 0x4],ESI       ; 00483305
    MOV ESI,dword ptr [EDX + 0x8]       ; 00483308
    MOV dword ptr [EAX + 0x8],ESI       ; 0048330b
    POP ESI                             ; 0048330e
    JMP 0x004832c4                      ; 0048330f
        ;   XREF to: 004832c4 (UNCONDITIONAL_JUMP)  ; LAB_004832c4


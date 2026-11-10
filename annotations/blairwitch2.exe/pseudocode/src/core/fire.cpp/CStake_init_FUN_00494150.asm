; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CStake_init_FUN_00494150(CStake *this_ptr,CVector3f *position,CVector3f *orientation)
;
; Parameters:
; CStake *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   orientation
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createStake_FUN_0049d2c0 at 0049d429
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00494150
        ;   Label: core_fire.cpp_CStake_init_FUN_00494150
    MOV EBX,dword ptr [ESP + 0x8]       ; 00494151
    MOV EDX,dword ptr [ESP + 0xc]       ; 00494155
    MOV ECX,dword ptr [ESP + 0x10]      ; 00494159
    LEA EAX,[EBX + 0x4]                 ; 0049415d
    CMP EAX,EDX                         ; 00494160
    JNZ 0x0049419d                      ; 00494162
        ;   XREF to: 0049419d (CONDITIONAL_JUMP)  ; LAB_0049419d
    LEA EAX,[EBX + 0x10]                ; 00494164
        ;   Label: LAB_00494164
    CMP EAX,ECX                         ; 00494167
    JZ 0x0049417b                       ; 00494169
        ;   XREF to: 0049417b (CONDITIONAL_JUMP)  ; LAB_0049417b
    MOV EDX,dword ptr [ECX]             ; 0049416b
    MOV dword ptr [EAX],EDX             ; 0049416d
    MOV EDX,dword ptr [ECX + 0x4]       ; 0049416f
    MOV dword ptr [EAX + 0x4],EDX       ; 00494172
    MOV EDX,dword ptr [ECX + 0x8]       ; 00494175
    MOV dword ptr [EAX + 0x8],EDX       ; 00494178
    LEA EAX,[EBX + 0x10]                ; 0049417b
        ;   Label: LAB_0049417b
    PUSH EAX                            ; 0049417e
    LEA EAX,[EBX + 0x1c]                ; 0049417f
    PUSH EAX                            ; 00494182
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280 ; 00494183
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    MOV dword ptr [EBX],0x0             ; 00494188
    ADD ESP,0x8                         ; 0049418e
    MOV dword ptr [EBX + 0x258],0x0     ; 00494191
    POP EBX                             ; 0049419b
    RET                                 ; 0049419c
    PUSH ESI                            ; 0049419d
        ;   Label: LAB_0049419d
    MOV ESI,dword ptr [EDX]             ; 0049419e
    MOV dword ptr [EAX],ESI             ; 004941a0
    MOV ESI,dword ptr [EDX + 0x4]       ; 004941a2
    MOV dword ptr [EAX + 0x4],ESI       ; 004941a5
    MOV ESI,dword ptr [EDX + 0x8]       ; 004941a8
    MOV dword ptr [EAX + 0x8],ESI       ; 004941ab
    POP ESI                             ; 004941ae
    JMP 0x00494164                      ; 004941af
        ;   XREF to: 00494164 (UNCONDITIONAL_JUMP)  ; LAB_00494164


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_gabriela_cpp_CGabriella_getTorsoCenterPosition_FUN_004d4cf0(CGabriella *this_ptr,CVector3f *out_position)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_position
; Local Variables:
; CVector3f[2]     Stack[-0x30]:24  local_30
; CVector3f        Stack[-0x18]:12  local_18
;
; XREF[1]:
;   core_gabriela.cpp_CGabriella_process_FUN_004d2ea0 at 004d3564
;
; Referenced Globals:
;   float FLOAT_0062af6d = 0.5
;   int INT_02d7b888
;   int INT_02d7b88c
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d4cf0
        ;   Label: core_gabriela.cpp_CGabriella_getTorsoCenterPosition_FUN_004d4cf0
    PUSH ESI                            ; 004d4cf1
    PUSH EDI                            ; 004d4cf2
    SUB ESP,0x24                        ; 004d4cf3
    MOV ESI,dword ptr [ESP + 0x38]      ; 004d4cf6
    MOV EDX,dword ptr [0x02d7b88c]      ; 004d4cfa | INT_02d7b88c
    PUSH EDX                            ; 004d4d00
    LEA EAX,[ESP + 0x4]                 ; 004d4d01
    MOV EDI,dword ptr [ESP + 0x38]      ; 004d4d05
    PUSH EAX                            ; 004d4d09
    ADD EDI,0x158                       ; 004d4d0a
    PUSH EDI                            ; 004d4d10
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 004d4d11
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 004d4d16
    MOV ECX,dword ptr [0x02d7b888]      ; 004d4d19 | INT_02d7b888
    PUSH ECX                            ; 004d4d1f
    MOV EBX,EAX                         ; 004d4d20
    LEA EAX,[ESP + 0x1c]                ; 004d4d22
    PUSH EAX                            ; 004d4d26
    PUSH EDI                            ; 004d4d27
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 004d4d28
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    FLD float ptr [EAX]                 ; 004d4d2d
    FADD float ptr [EBX]                ; 004d4d2f
    ADD ESP,0xc                         ; 004d4d31
    FSTP float ptr [ESP + 0xc]          ; 004d4d34
    FLD float ptr [EAX + 0x4]           ; 004d4d38
    FADD float ptr [EBX + 0x4]          ; 004d4d3b
    FLD float ptr [ESP + 0xc]           ; 004d4d3e
    FXCH                                ; 004d4d42
    FSTP float ptr [ESP + 0x10]         ; 004d4d44
    FLD float ptr [EAX + 0x8]           ; 004d4d48
    FADD float ptr [EBX + 0x8]          ; 004d4d4b
    FXCH                                ; 004d4d4e
    FLD float ptr [0x0062af6d]          ; 004d4d50 | FLOAT_0062af6d
    FXCH                                ; 004d4d56
    FMUL ST1                            ; 004d4d58
    FXCH ST2                            ; 004d4d5a
    FSTP float ptr [ESP + 0x14]         ; 004d4d5c
    FXCH                                ; 004d4d60
    FSTP float ptr [ESI]                ; 004d4d62
    FLD float ptr [ESP + 0x10]          ; 004d4d64
    FMUL ST1                            ; 004d4d68
    FSTP float ptr [ESI + 0x4]          ; 004d4d6a
    FMUL float ptr [ESP + 0x14]         ; 004d4d6d
    MOV EAX,ESI                         ; 004d4d71
    FSTP float ptr [ESI + 0x8]          ; 004d4d73
    ADD ESP,0x24                        ; 004d4d76
    POP EDI                             ; 004d4d79
    POP ESI                             ; 004d4d7a
    POP EBX                             ; 004d4d7b
    RET                                 ; 004d4d7c


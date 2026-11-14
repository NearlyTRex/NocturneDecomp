; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_setIdentityMatrix3x4_FUN_005835d0(CMatrix3x4f *matrix)
;
; Parameters:
; CMatrix3x4f *    Stack[0x4]:4   matrix
;
; XREF[4]:
;   core_charactr.cpp_CCharacter_archive_FUN_0042b450 at 0042b781
;   core_charactr.cpp_CCharacter_ctor_FUN_0042ac20 at 0042ae4e
;   core_mirror.cpp_CMirrorReflection_setupMirrorReflection_FUN_004f40b0 at 004f43e6
;   core_prye.cpp_FUN_0051f490 at 00520c87
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005835d0
        ;   Label: core_xform.cpp_setIdentityMatrix3x4_FUN_005835d0
    MOV dword ptr [EAX + 0x4],0x0       ; 005835d4
    MOV dword ptr [EAX + 0x8],0x0       ; 005835db
    MOV dword ptr [EAX + 0xc],0x0       ; 005835e2
    MOV dword ptr [EAX + 0x10],0x0      ; 005835e9
    MOV dword ptr [EAX + 0x14],0x3f800000 ; 005835f0
    MOV dword ptr [EAX + 0x18],0x0      ; 005835f7
    MOV dword ptr [EAX + 0x1c],0x0      ; 005835fe
    MOV dword ptr [EAX + 0x20],0x0      ; 00583605
    MOV dword ptr [EAX + 0x24],0x0      ; 0058360c
    MOV dword ptr [EAX + 0x28],0x3f800000 ; 00583613
    MOV dword ptr [EAX + 0x2c],0x0      ; 0058361a
    MOV dword ptr [EAX],0x3f800000      ; 00583621
    RET                                 ; 00583627


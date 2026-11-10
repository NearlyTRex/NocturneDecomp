; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_schngeis_cpp_CSchnellGeist_setup_FUN_005a3140(CSchnellGeist *this_ptr)
;
; Parameters:
; CSchnellGeist *  Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Tongue_005f00b9
;   TerminatedCString s_Dummy07_005f00c6
;   TerminatedCString s_Bip01_Tongue_005f00ce
;   TerminatedCString s_Bip01_R_Finger0_005f00db
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80
;   unkafter_basicene.cpp_FUN_0059e6a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3140
        ;   Label: core_schngeis.cpp_CSchnellGeist_setup_FUN_005a3140
    PUSH ESI                            ; 005a3141
    MOV ESI,dword ptr [ESP + 0xc]       ; 005a3142
    PUSH ESI                            ; 005a3146
    CALL unkafter_basicene.cpp_FUN_0059e6a0 ; 005a3147
        ;   XREF to: 0059e6a0 (UNCONDITIONAL_CALL)  ; undefined unkafter_basicene.cpp_FUN_0059e6a0()
    ADD ESP,0x4                         ; 005a314c
    LEA EAX,[ESI + 0x2b4]               ; 005a314f
    PUSH EAX                            ; 005a3155
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 005a3156
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a315b
    PUSH 0x1                            ; 005a315e
    PUSH 0x5f00b9                       ; 005a3160 | = "Bip01 Tongue"
    PUSH EAX                            ; 005a3165
    MOV EBX,EAX                         ; 005a3166
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 005a3168
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005a316d
    PUSH 0x1                            ; 005a3170
    PUSH 0x5f00c6                       ; 005a3172 | = "Dummy07"
    PUSH EBX                            ; 005a3177
    MOV dword ptr [ESI + 0x11850],EAX   ; 005a3178
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 005a317e
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005a3183
    PUSH 0x1                            ; 005a3186
    PUSH 0x5f00ce                       ; 005a3188 | = "Bip01 Tongue"
    PUSH EBX                            ; 005a318d
    MOV dword ptr [ESI + 0x11854],EAX   ; 005a318e
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 005a3194
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005a3199
    PUSH 0x1                            ; 005a319c
    PUSH 0x5f00db                       ; 005a319e | = "Bip01 R Finger0"
    PUSH EBX                            ; 005a31a3
    MOV dword ptr [ESI + 0x11858],EAX   ; 005a31a4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 005a31aa
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005a31af
    MOV dword ptr [ESI + 0x1185c],EAX   ; 005a31b2
    POP ESI                             ; 005a31b8
    POP EBX                             ; 005a31b9
    RET                                 ; 005a31ba


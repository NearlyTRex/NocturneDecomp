; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_skeleton_cpp_CDeformableModelInstance_free_FUN_0059df40(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_skeleton.cpp_CDeformableModelInstance_allocPointList_FUN_0059deb0 at 0059deb7
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 at 0059de54
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_0064edae
;   char* g_CurrentDebugFilename = 0067d200
;   int g_CurrentDebugLine
;
; Called Functions:
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059df40
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_free_FUN_0059df40
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059df41
    MOV EDX,dword ptr [EBX + 0x2234]    ; 0059df45
    TEST EDX,EDX                        ; 0059df4b
    JNZ 0x0059df51                      ; 0059df4d
        ;   XREF to: 0059df51 (CONDITIONAL_JUMP)  ; LAB_0059df51
    POP EBX                             ; 0059df4f
    RET                                 ; 0059df50
    PUSH ESI                            ; 0059df51
        ;   Label: LAB_0059df51
    MOV ECX,0x64edae                    ; 0059df52 | = "..\\core\\skeleton.cpp"
    MOV ESI,0x905                       ; 0059df57
    PUSH EDX                            ; 0059df5c
    MOV dword ptr [0x0067d20c],ECX      ; 0059df5d | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],ESI      ; 0059df63 | g_CurrentDebugLine
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 0059df69
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0059df6e
    MOV dword ptr [EBX + 0x2234],0x0    ; 0059df71
    POP ESI                             ; 0059df7b
    POP EBX                             ; 0059df7c
    RET                                 ; 0059df7d


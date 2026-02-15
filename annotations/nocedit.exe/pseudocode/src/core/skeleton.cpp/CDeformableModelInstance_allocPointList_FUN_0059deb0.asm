; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_allocPointList_FUN_0059deb0(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480 at 005a0583
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_0064ed3e
;   TerminatedCString s_core_skeleton_cpp_0064ed53
;   TerminatedCString s_CDeformableModelInstance_0064ed68
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_skeleton.cpp_CDeformableModelInstance_free_FUN_0059df40
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059deb0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_allocPointList_FUN_0059deb0
    PUSH ESI                            ; 0059deb1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0059deb2
    PUSH EBX                            ; 0059deb6
    CALL core_skeleton.cpp_CDeformableModelInstance_free_FUN_0059df40 ; 0059deb7
        ;   XREF to: 0059df40 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_free_FUN_0059df40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059debc
    PUSH EBX                            ; 0059debf
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 0059dec0
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    MOV ESI,dword ptr [EAX + 0x2c]      ; 0059dec5
    ADD ESP,0x4                         ; 0059dec8
    LEA EAX,[ESI*0x4 + 0x0]             ; 0059decb
    PUSH 0x8f9                          ; 0059ded2
    SUB EAX,ESI                         ; 0059ded7
    PUSH 0x64ed3e                       ; 0059ded9 | = "..\\core\\skeleton.cpp"
    SHL EAX,0x2                         ; 0059dede
    PUSH EAX                            ; 0059dee1
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 0059dee2
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0059dee7
    MOV dword ptr [EBX + 0x2234],EAX    ; 0059deea
    TEST EAX,EAX                        ; 0059def0
    JZ 0x0059df01                       ; 0059def2
        ;   XREF to: 0059df01 (CONDITIONAL_JUMP)  ; LAB_0059df01
    MOV dword ptr [EBX + 0x2230],0xffffffff ; 0059def4
    POP ESI                             ; 0059defe
    POP EBX                             ; 0059deff
    RET                                 ; 0059df00
    PUSH EDI                            ; 0059df01
        ;   Label: LAB_0059df01
    PUSH ESI                            ; 0059df02
    MOV ECX,0x64ed53                    ; 0059df03 | = "..\\core\\skeleton.cpp"
    MOV EDI,0x8fa                       ; 0059df08
    PUSH 0x64ed68                       ; 0059df0d | = "CDeformableModelInstance::allocPointL..."
    MOV dword ptr [0x02f0ca48],ECX      ; 0059df12 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 0059df18 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0059df1e
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0059df23
    POP EDI                             ; 0059df26
    MOV dword ptr [EBX + 0x2230],0xffffffff ; 0059df27
    POP ESI                             ; 0059df31
    POP EBX                             ; 0059df32
    RET                                 ; 0059df33


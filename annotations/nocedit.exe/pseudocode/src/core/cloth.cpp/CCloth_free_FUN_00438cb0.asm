; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CCloth_free_FUN_00438cb0(CCloth *this_ptr)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_cloth.cpp_CCloth_allocMemory_FUN_00438c50 at 00438c56
;   core_cloth.cpp_CCloth_dtor_FUN_00438c00 at 00438c06
;
; Referenced Globals:
;   TerminatedCString s_core_cloth_cpp_006181aa
;   char* g_CurrentDebugFilename = 0067d200
;   int g_CurrentDebugLine
;
; Called Functions:
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438cb0
        ;   Label: core_cloth.cpp_CCloth_free_FUN_00438cb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00438cb1
    MOV EDX,dword ptr [EBX + 0x3fe3c]   ; 00438cb5
    TEST EDX,EDX                        ; 00438cbb
    JNZ 0x00438cc1                      ; 00438cbd
        ;   XREF to: 00438cc1 (CONDITIONAL_JUMP)  ; LAB_00438cc1
    POP EBX                             ; 00438cbf
    RET                                 ; 00438cc0
    PUSH ESI                            ; 00438cc1
        ;   Label: LAB_00438cc1
    MOV ECX,0x6181aa                    ; 00438cc2 | = "..\\core\\cloth.cpp"
    MOV ESI,0x85                        ; 00438cc7
    PUSH EDX                            ; 00438ccc
    MOV dword ptr [0x0067d20c],ECX      ; 00438ccd | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],ESI      ; 00438cd3 | g_CurrentDebugLine
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 00438cd9
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00438cde
    MOV dword ptr [EBX + 0x3fe3c],0x0   ; 00438ce1
    POP ESI                             ; 00438ceb
    POP EBX                             ; 00438cec
    RET                                 ; 00438ced


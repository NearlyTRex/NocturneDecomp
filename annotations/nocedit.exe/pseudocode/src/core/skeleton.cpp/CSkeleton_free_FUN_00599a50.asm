; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CSkeleton_free_FUN_00599a50(CSkeleton *this_ptr)
;
; Parameters:
; CSkeleton *      Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   core_skeledit.cpp_CSkeleton_FUN_00592690 at 005926b0
;   core_skeleton.cpp_CSkeleton_allocMemory_FUN_00599910 at 0059991c
;   core_skeleton.cpp_CSkeleton_dtor_FUN_005998e0 at 005998f0
;   core_skeleton.cpp_CSkeleton_loadStream_FUN_00599bb0 at 00599bbc
;   core_skeleton.cpp_freeAllSkeletons_FUN_005a1ea0 at 005a1eb3
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_0064e25f
;   TerminatedCString s_core_skeleton_cpp_0064e274
;   TerminatedCString s_core_skeleton_cpp_0064e289
;   char* g_CurrentDebugFilename = 0067d200
;   int g_CurrentDebugLine
;
; Called Functions:
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00599a50
        ;   Label: core_skeleton.cpp_CSkeleton_free_FUN_00599a50
    PUSH ESI                            ; 00599a51
    PUSH EDI                            ; 00599a52
    PUSH EBP                            ; 00599a53
    MOV EBX,dword ptr [ESP + 0x14]      ; 00599a54
    MOV EDX,0x64e25f                    ; 00599a58 | = "..\\core\\skeleton.cpp"
    MOV ECX,0xe6                        ; 00599a5d
    MOV EDI,0x64e274                    ; 00599a62 | = "..\\core\\skeleton.cpp"
    MOV dword ptr [EBX + 0x28558],0x0   ; 00599a67
    MOV EBP,0xe7                        ; 00599a71
    MOV ESI,dword ptr [EBX + 0x29370]   ; 00599a76
    MOV dword ptr [EBX + 0x2936c],0x0   ; 00599a7c
    PUSH ESI                            ; 00599a86
    MOV dword ptr [0x0067d20c],EDX      ; 00599a87 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],ECX      ; 00599a8d | g_CurrentDebugLine
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 00599a93
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00599a98
    MOV dword ptr [0x0067d20c],EDI      ; 00599a9b | g_CurrentDebugFilename
    MOV EAX,dword ptr [EBX + 0x29374]   ; 00599aa1
    MOV dword ptr [0x02f0d944],EBP      ; 00599aa7 | g_CurrentDebugLine
    TEST EAX,EAX                        ; 00599aad
    JNZ 0x00599af3                      ; 00599aaf
        ;   XREF to: 00599af3 (CONDITIONAL_JUMP)  ; LAB_00599af3
    MOV EAX,0x64e289                    ; 00599ab1 | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_00599ab1
    MOV EDX,0xe8                        ; 00599ab6
    MOV [0x0067d20c],EAX                ; 00599abb | g_CurrentDebugFilename
    MOV EAX,dword ptr [EBX + 0x29378]   ; 00599ac0
    MOV dword ptr [0x02f0d944],EDX      ; 00599ac6 | g_CurrentDebugLine
    TEST EAX,EAX                        ; 00599acc
    JNZ 0x00599b01                      ; 00599ace
        ;   XREF to: 00599b01 (CONDITIONAL_JUMP)  ; LAB_00599b01
    MOV dword ptr [EBX + 0x29374],0x0   ; 00599ad0
        ;   Label: LAB_00599ad0
    MOV dword ptr [EBX + 0x29378],0x0   ; 00599ada
    MOV dword ptr [EBX + 0x29370],0x0   ; 00599ae4
    POP EBP                             ; 00599aee
    POP EDI                             ; 00599aef
    POP ESI                             ; 00599af0
    POP EBX                             ; 00599af1
    RET                                 ; 00599af2
    SUB EAX,0x4                         ; 00599af3
        ;   Label: LAB_00599af3
    PUSH EAX                            ; 00599af6
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 00599af7
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00599afc
    JMP 0x00599ab1                      ; 00599aff
        ;   XREF to: 00599ab1 (UNCONDITIONAL_JUMP)  ; LAB_00599ab1
    SUB EAX,0x4                         ; 00599b01
        ;   Label: LAB_00599b01
    PUSH EAX                            ; 00599b04
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 00599b05
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00599b0a
    JMP 0x00599ad0                      ; 00599b0d
        ;   XREF to: 00599ad0 (UNCONDITIONAL_JUMP)  ; LAB_00599ad0


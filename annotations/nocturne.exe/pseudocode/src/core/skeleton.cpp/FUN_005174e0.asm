; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_FUN_005174e0(int param_1)
;
;
; XREF[4]:
;   core_skeleton.cpp_CLodMeshPrecomputeEntry_ctor_FUN_005173a0 at 005173b0
;   core_skeleton.cpp_CSkeleton_allocMemory_FUN_005173c0 at 005173cc
;   core_skeleton.cpp_CSkeleton_loadStream_FUN_005175f0 at 005175fc
;   core_skeleton.cpp_freeAllSkeletons_FUN_0051f730 at 0051f743
;
; Called Functions:
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005174e0
        ;   Label: core_skeleton.cpp_FUN_005174e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005174e1
    MOV EDX,dword ptr [EBX + 0x29370]   ; 005174e5
    MOV dword ptr [EBX + 0x28558],0x0   ; 005174eb
    PUSH EDX                            ; 005174f5
    MOV dword ptr [EBX + 0x2936c],0x0   ; 005174f6
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00517500
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    MOV EAX,dword ptr [EBX + 0x29374]   ; 00517505
    ADD ESP,0x4                         ; 0051750b
    TEST EAX,EAX                        ; 0051750e
    JNZ 0x0051753c                      ; 00517510
        ;   XREF to: 0051753c (CONDITIONAL_JUMP)  ; LAB_0051753c
    MOV EAX,dword ptr [EBX + 0x29378]   ; 00517512
        ;   Label: LAB_00517512
    TEST EAX,EAX                        ; 00517518
    JNZ 0x0051754a                      ; 0051751a
        ;   XREF to: 0051754a (CONDITIONAL_JUMP)  ; LAB_0051754a
    MOV dword ptr [EBX + 0x29374],0x0   ; 0051751c
        ;   Label: LAB_0051751c
    MOV dword ptr [EBX + 0x29378],0x0   ; 00517526
    MOV dword ptr [EBX + 0x29370],0x0   ; 00517530
    POP EBX                             ; 0051753a
    RET                                 ; 0051753b
    SUB EAX,0x4                         ; 0051753c
        ;   Label: LAB_0051753c
    PUSH EAX                            ; 0051753f
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00517540
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 00517545
    JMP 0x00517512                      ; 00517548
        ;   XREF to: 00517512 (UNCONDITIONAL_JUMP)  ; LAB_00517512
    SUB EAX,0x4                         ; 0051754a
        ;   Label: LAB_0051754a
    PUSH EAX                            ; 0051754d
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 0051754e
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 00517553
    JMP 0x0051751c                      ; 00517556
        ;   XREF to: 0051751c (UNCONDITIONAL_JUMP)  ; LAB_0051751c


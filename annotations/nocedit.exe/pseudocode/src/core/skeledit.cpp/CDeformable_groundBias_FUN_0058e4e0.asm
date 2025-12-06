; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_skeledit.cpp_CDeformable_groundBias_FUN_0058e4e0(CDeformableModel * this_ptr)
;
; Parameters:
; CDeformableModel * Stack[0x8]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_core_skeledit_cpp_0064af04
;   TerminatedCString s_core_skeledit_cpp_0064af19
;   TerminatedCString s_CDeformableModel_groundB_0064af2e
;   TerminatedCString s_core_skeledit_cpp_0064af5c
;   double DOUBLE_0064af72 = 0.00390625
;   char* g_CurrentDebugFilename = 0067d200
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_CurrentDebugLine
;   CVector3f g_ZeroVector
;   undefined4 g_ZeroVector.y
;   undefined4 g_ZeroVector.z
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_skeledit.cpp_FUN_0058e600
;   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
;   core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
;   core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0059e070
;   crt_stack.c_stack_probe_FUN_005ff9f3
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x30                           ; 0058e4e0
        ;   Label: core_skeledit.cpp_CDeformable_groundBias_FUN_0058e4e0
    CALL crt_stack.c_stack_probe_FUN_005ff9f3 ; 0058e4e5 | uint crt_stack.c_stack_probe_FUN_005ff9f3(uint stack_size)
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
    PUSH EBX                            ; 0058e4ea
    PUSH ESI                            ; 0058e4eb
    PUSH EDI                            ; 0058e4ec
    PUSH EBP                            ; 0058e4ed
    SUB ESP,0x10                        ; 0058e4ee
    MOV EBX,dword ptr [ESP + 0x24]      ; 0058e4f1
    PUSH 0x9bc                          ; 0058e4f5
    PUSH 0x64af04                       ; 0058e4fa | = "..\\core\\skeledit.cpp" | s_core_skeledit_cpp_0064af04 = ..\core\skeledit.cpp
    PUSH 0x22b4                         ; 0058e4ff
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 0058e504 | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0058e509
    TEST EAX,EAX                        ; 0058e50c
    JNZ 0x0058e5ec                      ; 0058e50e | LAB_0058e5ec
        ;   XREF to: 0058e5ec (CONDITIONAL_JUMP)
    MOV ESI,EAX                         ; 0058e514
        ;   Label: LAB_0058e514
    TEST EAX,EAX                        ; 0058e516
    JNZ 0x0058e53d                      ; 0058e518 | LAB_0058e53d
        ;   XREF to: 0058e53d (CONDITIONAL_JUMP)
    MOV EDX,0x64af19                    ; 0058e51a | = "..\\core\\skeledit.cpp" | s_core_skeledit_cpp_0064af19 = ..\core\skeledit.cpp
    MOV ECX,0x9bd                       ; 0058e51f
    PUSH 0x64af2e                       ; 0058e524 | = "CDeformableModel::groundBias - out of..." | s_CDeformableModel_groundB_0064af2e = CDeformableModel::groundBias - out of memory!
    MOV dword ptr [0x02f0ca48],EDX      ; 0058e529 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0058e52f | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0058e535 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0058e53a
    PUSH EBX                            ; 0058e53d
        ;   Label: LAB_0058e53d
    PUSH ESI                            ; 0058e53e
    CALL core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480 ; 0058e53f | void core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480(CDeformableModelInstance * this_ptr, CDeformableModel * model_ptr)
        ;   XREF to: 005a0480 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0058e544
    MOV EDI,dword ptr [ESP + 0x28]      ; 0058e547
    PUSH dword ptr [ESP + 0x2c]         ; 0058e54b
    PUSH EDI                            ; 0058e54f
    PUSH ESI                            ; 0058e550
    CALL core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0059e070 ; 0058e551 | void core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0059e070(CDeformableModelInstance * this_ptr, int motion_index, float frame_number)
        ;   XREF to: 0059e070 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0058e556
    PUSH 0x0                            ; 0058e559
    PUSH ESI                            ; 0058e55b
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0 ; 0058e55c | void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(CDeformableModelInstance * this_ptr, int lod_index)
        ;   XREF to: 005a01d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0058e561
    MOV EAX,dword ptr [ESI + 0x2234]    ; 0058e564
    MOV EBP,dword ptr [EBX + 0x2c]      ; 0058e56a
    XOR EDX,EDX                         ; 0058e56d
    MOV ECX,dword ptr [EAX + 0x4]       ; 0058e56f
    TEST EBP,EBP                        ; 0058e572
    JLE 0x0058e58a                      ; 0058e574 | LAB_0058e58a
        ;   XREF to: 0058e58a (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [EAX + 0x4]       ; 0058e576
        ;   Label: LAB_0058e576
    CMP ECX,EBP                         ; 0058e579
    JLE 0x0058e57f                      ; 0058e57b | LAB_0058e57f
        ;   XREF to: 0058e57f (CONDITIONAL_JUMP)
    MOV ECX,EBP                         ; 0058e57d
    INC EDX                             ; 0058e57f
        ;   Label: LAB_0058e57f
    MOV EDI,dword ptr [EBX + 0x2c]      ; 0058e580
    ADD EAX,0xc                         ; 0058e583
    CMP EDX,EDI                         ; 0058e586
    JL 0x0058e576                       ; 0058e588 | LAB_0058e576
        ;   XREF to: 0058e576 (CONDITIONAL_JUMP)
    MOV EAX,[0x03f87558]                ; 0058e58a | CVector3f g_ZeroVector
        ;   Label: LAB_0058e58a
    MOV dword ptr [ESP],EAX             ; 0058e58f
    MOV EAX,[0x03f8755c]                ; 0058e592 | g_ZeroVector.y
    NEG ECX                             ; 0058e597
    MOV dword ptr [ESP + 0x4],EAX       ; 0058e599
    MOV EAX,[0x03f87560]                ; 0058e59d | g_ZeroVector.z
    MOV dword ptr [ESP + 0xc],ECX       ; 0058e5a2
    MOV dword ptr [ESP + 0x8],EAX       ; 0058e5a6
    MOV EAX,ESP                         ; 0058e5aa
    FILD dword ptr [ESP + 0xc]          ; 0058e5ac
    PUSH EAX                            ; 0058e5b0
    FMUL double ptr [0x0064af72]        ; 0058e5b1 | double DOUBLE_0064af72
    PUSH EBX                            ; 0058e5b7
    FSTP float ptr [ESP + 0xc]          ; 0058e5b8
    CALL core_skeledit.cpp_FUN_0058e600 ; 0058e5bc | undefined core_skeledit.cpp_FUN_0058e600()
        ;   XREF to: 0058e600 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0058e5c1
    MOV EAX,0x64af5c                    ; 0058e5c4 | = "..\\core\\skeledit.cpp" | s_core_skeledit_cpp_0064af5c = ..\core\skeledit.cpp
    PUSH 0x2                            ; 0058e5c9
    MOV EDX,0x9d1                       ; 0058e5cb
    MOV [0x0067d20c],EAX                ; 0058e5d0 | char * g_CurrentDebugFilename
    PUSH ESI                            ; 0058e5d5
    MOV EAX,dword ptr [ESI + 0x50]      ; 0058e5d6
    MOV dword ptr [0x02f0d944],EDX      ; 0058e5d9 | int g_CurrentDebugLine
    CALL dword ptr [EAX]                ; 0058e5df
    ADD ESP,0x8                         ; 0058e5e1
    ADD ESP,0x10                        ; 0058e5e4
    POP EBP                             ; 0058e5e7
    POP EDI                             ; 0058e5e8
    POP ESI                             ; 0058e5e9
    POP EBX                             ; 0058e5ea
    RET                                 ; 0058e5eb
    PUSH EAX                            ; 0058e5ec
        ;   Label: LAB_0058e5ec
    CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0 ; 0058e5ed | CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0(CDeformableModelInstance * this_ptr)
        ;   XREF to: 0059ddc0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0058e5f2
    JMP 0x0058e514                      ; 0058e5f5 | LAB_0058e514
        ;   XREF to: 0058e514 (UNCONDITIONAL_JUMP)


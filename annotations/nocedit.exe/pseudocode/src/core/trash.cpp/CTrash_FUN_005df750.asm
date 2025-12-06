; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_trash.cpp_CTrash_FUN_005df750(CTrash * this_ptr)
;
; Parameters:
; CTrash *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005df750
        ;   Label: core_trash.cpp_CTrash_FUN_005df750
    MOV EBX,dword ptr [ESP + 0x8]       ; 005df751
    PUSH EBX                            ; 005df755
    CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040 ; 005df756 | void core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040(CDemonActor * this_ptr)
        ;   XREF to: 0040d040 (UNCONDITIONAL_CALL)
    LEA EAX,[EBX + 0x2d4]               ; 005df75b
    LEA EDX,[EBX + 0x20]                ; 005df761
    ADD ESP,0x4                         ; 005df764
    CMP EAX,EDX                         ; 005df767
    JNZ 0x005df76d                      ; 005df769 | LAB_005df76d
        ;   XREF to: 005df76d (CONDITIONAL_JUMP)
    POP EBX                             ; 005df76b
    RET                                 ; 005df76c
    MOV ECX,dword ptr [EDX]             ; 005df76d
        ;   Label: LAB_005df76d
    MOV dword ptr [EAX],ECX             ; 005df76f
    MOV ECX,dword ptr [EDX + 0x4]       ; 005df771
    MOV dword ptr [EAX + 0x4],ECX       ; 005df774
    MOV ECX,dword ptr [EDX + 0x8]       ; 005df777
    MOV dword ptr [EAX + 0x8],ECX       ; 005df77a
    POP EBX                             ; 005df77d
    RET                                 ; 005df77e


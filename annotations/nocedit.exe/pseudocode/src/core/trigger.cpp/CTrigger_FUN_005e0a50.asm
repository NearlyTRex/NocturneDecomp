; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_trigger_cpp_CTrigger_FUN_005e0a50(CTrigger *this_ptr)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_getSurfaceProperties_FUN_00409840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e0a50
        ;   Label: core_trigger.cpp_CTrigger_FUN_005e0a50
    PUSH ESI                            ; 005e0a51
    MOV ESI,dword ptr [ESP + 0xc]       ; 005e0a52
    MOV EBX,dword ptr [ESP + 0x10]      ; 005e0a56
    PUSH EBX                            ; 005e0a5a
    PUSH ESI                            ; 005e0a5b
    CALL core_actor.cpp_CDemonActor_getSurfaceProperties_FUN_00409840 ; 005e0a5c
        ;   XREF to: 00409840 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getSurfaceProperties_FUN_00409840(CDemonActor * this_ptr, SSurfaceInfo * surface_info)
    MOV EDX,dword ptr [ESI + 0x174]     ; 005e0a61
    ADD ESP,0x8                         ; 005e0a67
    CMP EDX,0x5                         ; 005e0a6a
    JNZ 0x005e0a7a                      ; 005e0a6d
        ;   XREF to: 005e0a7a (CONDITIONAL_JUMP)  ; LAB_005e0a7a
    MOV ECX,dword ptr [ESI + 0x2f4]     ; 005e0a6f
    CMP ECX,dword ptr [EBX + 0x8]       ; 005e0a75
    JZ 0x005e0a91                       ; 005e0a78
        ;   XREF to: 005e0a91 (CONDITIONAL_JUMP)  ; LAB_005e0a91
    MOV dword ptr [EBX + 0x50],0x0      ; 005e0a7a
        ;   Label: LAB_005e0a7a
    MOV dword ptr [EBX + 0x48],0x3f800000 ; 005e0a81
    MOV EAX,dword ptr [EBX + 0x44]      ; 005e0a88
    MOV dword ptr [EBX + 0x4c],EAX      ; 005e0a8b
    POP ESI                             ; 005e0a8e
    POP EBX                             ; 005e0a8f
    RET                                 ; 005e0a90
    MOV dword ptr [ESI + 0x2f0],0x1     ; 005e0a91
        ;   Label: LAB_005e0a91
    JMP 0x005e0a7a                      ; 005e0a9b
        ;   XREF to: 005e0a7a (UNCONDITIONAL_JUMP)  ; LAB_005e0a7a


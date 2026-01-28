; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_drip_cpp_FUN_0048ea30(void)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 0048ea30
        ;   Label: core_drip.cpp_FUN_0048ea30
    LEA EAX,[ECX + 0x2f8]               ; 0048ea34
    LEA EDX,[ECX + 0x20]                ; 0048ea3a
    CMP EAX,EDX                         ; 0048ea3d
    JZ 0x0048ea53                       ; 0048ea3f
        ;   XREF to: 0048ea53 (CONDITIONAL_JUMP)  ; LAB_0048ea53
    PUSH EBX                            ; 0048ea41
    MOV EBX,dword ptr [EDX]             ; 0048ea42
    MOV dword ptr [EAX],EBX             ; 0048ea44
    MOV EBX,dword ptr [EDX + 0x4]       ; 0048ea46
    MOV dword ptr [EAX + 0x4],EBX       ; 0048ea49
    MOV EBX,dword ptr [EDX + 0x8]       ; 0048ea4c
    MOV dword ptr [EAX + 0x8],EBX       ; 0048ea4f
    POP EBX                             ; 0048ea52
    PUSH ECX                            ; 0048ea53
        ;   Label: LAB_0048ea53
    CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040 ; 0048ea54
        ;   XREF to: 0040d040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0048ea59
    RET                                 ; 0048ea5c


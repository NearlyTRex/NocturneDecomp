; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_set_cpp_CDemonSet_setCameraView_FUN_00570c70(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_CDemonSet_FUN_0056c1a0 at 0056c208
;
; Called Functions:
;   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570c70
        ;   Label: core_set.cpp_CDemonSet_setCameraView_FUN_00570c70
    PUSH ESI                            ; 00570c71
    MOV EBX,dword ptr [ESP + 0xc]       ; 00570c72
    MOV EDX,dword ptr [EBX + 0x15aea4]  ; 00570c76
    PUSH EDX                            ; 00570c7c
    PUSH EBX                            ; 00570c7d
    MOV ESI,dword ptr [EBX + 0x15aea8]  ; 00570c7e
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 ; 00570c84
        ;   XREF to: 0056ae50 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50(CDemonSet * this_ptr, int index)
    MOV dword ptr [EBX + 0x15aeac],0x0  ; 00570c89
    ADD ESP,0x8                         ; 00570c93
    MOV dword ptr [EBX + 0x15aea8],ESI  ; 00570c96
    POP ESI                             ; 00570c9c
    POP EBX                             ; 00570c9d
    RET                                 ; 00570c9e


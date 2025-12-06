; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dlight.cpp_CDemonLight_freeMasterZBuffer_FUN_00472a50(CDemonLight * this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dlight.cpp_CDemonLight_free_FUN_004728b0 at 004728c1
;   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 at 0056af18
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00472a50
        ;   Label: core_dlight.cpp_CDemonLight_freeMasterZBuffer_FUN_00472a50
    CMP dword ptr [EAX + 0x2f9c],0x0    ; 00472a54
    JNZ 0x00472a5e                      ; 00472a5b | LAB_00472a5e
        ;   XREF to: 00472a5e (CONDITIONAL_JUMP)
    RET                                 ; 00472a5d
    MOV dword ptr [EAX + 0x164],0x0     ; 00472a5e
        ;   Label: LAB_00472a5e
    MOV dword ptr [EAX + 0x2f9c],0x0    ; 00472a68
    RET                                 ; 00472a72


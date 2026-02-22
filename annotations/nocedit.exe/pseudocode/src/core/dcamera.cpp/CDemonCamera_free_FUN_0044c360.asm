; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_free_FUN_0044c360(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_dcamera.cpp_CDemonCamera_dtor_FUN_0044c090 at 0044c0a4
;   core_dcamera.cpp_CDemonCamera_init_FUN_0044c190 at 0044c19c
;   core_set.cpp_CDemonSet_clearLights_FUN_0056d2d0 at 0056d35a
;
; Referenced Globals:
;   TerminatedCString s_core_dcamera_cpp_00619f8a
;   TerminatedCString s_core_dcamera_cpp_00619f9e
;
; Called Functions:
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044c360
        ;   Label: core_dcamera.cpp_CDemonCamera_free_FUN_0044c360
    PUSH ESI                            ; 0044c361
    MOV EBX,dword ptr [ESP + 0xc]       ; 0044c362
    MOV EDX,dword ptr [EBX + 0x160]     ; 0044c366
    TEST EDX,EDX                        ; 0044c36c
    JNZ 0x0044c3af                      ; 0044c36e
        ;   XREF to: 0044c3af (CONDITIONAL_JUMP)  ; LAB_0044c3af
    MOV dword ptr [EBX + 0x160],0x0     ; 0044c370
        ;   Label: LAB_0044c370
    MOV ESI,dword ptr [EBX + 0x164]     ; 0044c37a
    MOV dword ptr [EBX + 0x158],0x0     ; 0044c380
    TEST ESI,ESI                        ; 0044c38a
    JNZ 0x0044c3c4                      ; 0044c38c
        ;   XREF to: 0044c3c4 (CONDITIONAL_JUMP)  ; LAB_0044c3c4
    MOV dword ptr [EBX + 0x164],0x0     ; 0044c38e
        ;   Label: LAB_0044c38e
    MOV dword ptr [EBX + 0x1d0],0x0     ; 0044c398
    MOV dword ptr [EBX + 0x15c],0x0     ; 0044c3a2
    POP ESI                             ; 0044c3ac
    POP EBX                             ; 0044c3ad
    RET                                 ; 0044c3ae
    PUSH 0x25a                          ; 0044c3af
        ;   Label: LAB_0044c3af
    PUSH 0x619f8a                       ; 0044c3b4 | = "..\\core\\dcamera.cpp"
    PUSH EDX                            ; 0044c3b9
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 0044c3ba
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 0044c3bf
    JMP 0x0044c370                      ; 0044c3c2
        ;   XREF to: 0044c370 (UNCONDITIONAL_JUMP)  ; LAB_0044c370
    PUSH 0x25e                          ; 0044c3c4
        ;   Label: LAB_0044c3c4
    PUSH 0x619f9e                       ; 0044c3c9 | = "..\\core\\dcamera.cpp"
    PUSH ESI                            ; 0044c3ce
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 0044c3cf
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 0044c3d4
    JMP 0x0044c38e                      ; 0044c3d7
        ;   XREF to: 0044c38e (UNCONDITIONAL_JUMP)  ; LAB_0044c38e


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setutil_cpp_C3DSCamera_free_FUN_00514430(C3DSCamera *this_ptr)
;
; Parameters:
; C3DSCamera *     Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_set.cpp_CDemonSet_clear_FUN_00506ec0 at 00506edf
;   core_setutil.cpp_C3DSCamera_dtor_FUN_00514410 at 00514416
;   core_setutil.cpp_C3DSCamera_reset_FUN_00514470 at 00514476
;
; Called Functions:
;   crt_memory.c_free_FUN_005638d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00514430
        ;   Label: core_setutil.cpp_C3DSCamera_free_FUN_00514430
    MOV EBX,dword ptr [ESP + 0x8]       ; 00514431
    MOV EDX,dword ptr [EBX + 0x194]     ; 00514435
    TEST EDX,EDX                        ; 0051443b
    JNZ 0x0051444b                      ; 0051443d
        ;   XREF to: 0051444b (CONDITIONAL_JUMP)  ; LAB_0051444b
    MOV dword ptr [EBX + 0x190],0x0     ; 0051443f
    POP EBX                             ; 00514449
    RET                                 ; 0051444a
    PUSH EDX                            ; 0051444b
        ;   Label: LAB_0051444b
    CALL crt_memory.c_free_FUN_005638d0 ; 0051444c
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005638d0(void * ptr)
    ADD ESP,0x4                         ; 00514451
    MOV dword ptr [EBX + 0x194],0x0     ; 00514454
    MOV dword ptr [EBX + 0x190],0x0     ; 0051445e
    POP EBX                             ; 00514468
    RET                                 ; 00514469


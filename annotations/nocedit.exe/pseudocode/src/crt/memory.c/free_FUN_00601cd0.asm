; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_memory.c_free_FUN_00601cd0(void * ptr)
;
; Parameters:
; void *           Stack[0x4]:4   ptr
;
; XREF[30]:
;   crt_env.c_findEnvVar_FUN_0060f1f0 at 0060f27d
;   crt_env.c_putenv_internal_FUN_0060ee80 at 0060ef40
;   crt_io.c_realpath_FUN_00601140 at 006011b1
;   crt_iostream.cpp_freeBuffer_FUN_0060d7a0 at 0060d7a5
;   crt_process.c_spawnvp_FUN_0060f39c at 0060f7a1
;   crt_startup.c_GetModuleFileNameCompat_FUN_0060a560 at 0060a5ba
;   crt_stdio.c_fclose_FUN_00601fd0 at 00602055
;   crt_tls.c_initialize_thread_tls_data_FUN_0060a2d8 at 0060a310
;   crt_tls.c_register_thread_data_FUN_0060cbd0 at 0060cc01
;   crt_tls.c_unregister_thread_data_FUN_0060cc3c at 0060cc67
;   ... and 20 more
;
; Called Functions:
;   crt_heap.c_ValidateHeapIntegrity_FUN_00601ce0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00601cd0
        ;   Label: crt_memory.c_free_FUN_00601cd0
    PUSH EDX                            ; 00601cd4
    CALL crt_heap.c_ValidateHeapIntegrity_FUN_00601ce0 ; 00601cd5 | void crt_heap.c_ValidateHeapIntegrity_FUN_00601ce0(void * ptr)
        ;   XREF to: 00601ce0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00601cda
    RET                                 ; 00601cdd


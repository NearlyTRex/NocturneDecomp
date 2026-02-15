; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setutil_cpp_C3DSCamera_reset_FUN_005853b0(C3DSCamera *this_ptr)
;
; Parameters:
; C3DSCamera *     Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_setedit.cpp_CDemonSet_FUN_0057e7c0 at 0057eab2
;   core_setutil.cpp_C3DSCamera_importS3D_FUN_00585ff0 at 00585fff
;   core_setutil.cpp_C3DSCamera_load_FUN_00585420 at 00585439
;
; Called Functions:
;   core_setutil.cpp_C3DSCamera_free_FUN_00585360
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005853b0
        ;   Label: core_setutil.cpp_C3DSCamera_reset_FUN_005853b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005853b1
    PUSH EBX                            ; 005853b5
    CALL core_setutil.cpp_C3DSCamera_free_FUN_00585360 ; 005853b6
        ;   XREF to: 00585360 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSCamera_free_FUN_00585360(C3DSCamera * this_ptr)
    ADD ESP,0x4                         ; 005853bb
    PUSH 0x1a4                          ; 005853be
    PUSH 0x0                            ; 005853c3
    PUSH EBX                            ; 005853c5
    CALL crt_memory.c_memset_FUN_005fde40 ; 005853c6
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    MOV dword ptr [EBX + 0x144],0x41e00000 ; 005853cb
    MOV dword ptr [EBX + 0x180],0xc3960000 ; 005853d5
    MOV dword ptr [EBX + 0x184],0x0     ; 005853df
    MOV dword ptr [EBX + 0x190],0x43960000 ; 005853e9
    MOV dword ptr [EBX + 0x140],0x0     ; 005853f3
    ADD ESP,0xc                         ; 005853fd
    FLD float ptr [EBX + 0x190]         ; 00585400
    MOV EAX,dword ptr [EBX + 0x180]     ; 00585406
    MOV dword ptr [EBX + 0x17c],EAX     ; 0058540c
    FST float ptr [EBX + 0x18c]         ; 00585412
    FSTP float ptr [EBX + 0x188]        ; 00585418
    POP EBX                             ; 0058541e
    RET                                 ; 0058541f


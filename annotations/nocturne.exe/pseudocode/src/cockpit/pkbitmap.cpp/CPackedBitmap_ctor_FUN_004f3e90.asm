; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 cockpit_pkbitmap_cpp_CPackedBitmap_ctor_FUN_004f3e90(undefined4 param_1)
;
;
; XREF[1]:
;   cockpit_pkbitmap.cpp_FUN_004f4f90 at 004f50bc
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_004f3f20
;   crt_memory.c_memset_FUN_00563cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f3e90
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_ctor_FUN_004f3e90
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f3e91
    PUSH EBX                            ; 004f3e95
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_004f3f20 ; 004f3e96
        ;   XREF to: 004f3f20 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_004f3f20()
    ADD ESP,0x4                         ; 004f3e9b
    PUSH 0x14                           ; 004f3e9e
    PUSH 0x0                            ; 004f3ea0
    PUSH EBX                            ; 004f3ea2
    CALL crt_memory.c_memset_FUN_00563cc0 ; 004f3ea3
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_memset_FUN_00563cc0()
    ADD ESP,0xc                         ; 004f3ea8
    MOV EAX,EBX                         ; 004f3eab
    POP EBX                             ; 004f3ead
    RET                                 ; 004f3eae


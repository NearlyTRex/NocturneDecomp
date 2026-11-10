; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_free_FUN_00448f30(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_dcamera.cpp_CDemonCamera_dtor_FUN_00448c40 at 00448c54
;   core_dcamera.cpp_CDemonCamera_init_FUN_00448d70 at 00448d7c
;   core_set.cpp_CDemonSet_clearLights_FUN_00537520 at 0053759a
;
; Called Functions:
;   crt_unknown.c_FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448f30
        ;   Label: core_dcamera.cpp_CDemonCamera_free_FUN_00448f30
    PUSH ESI                            ; 00448f31
    MOV EBX,dword ptr [ESP + 0xc]       ; 00448f32
    MOV EDX,dword ptr [EBX + 0x160]     ; 00448f36
    TEST EDX,EDX                        ; 00448f3c
    JNZ 0x00448f7f                      ; 00448f3e
        ;   XREF to: 00448f7f (CONDITIONAL_JUMP)  ; LAB_00448f7f
    MOV dword ptr [EBX + 0x160],0x0     ; 00448f40
        ;   Label: LAB_00448f40
    MOV ESI,dword ptr [EBX + 0x164]     ; 00448f4a
    MOV dword ptr [EBX + 0x158],0x0     ; 00448f50
    TEST ESI,ESI                        ; 00448f5a
    JNZ 0x00448f8a                      ; 00448f5c
        ;   XREF to: 00448f8a (CONDITIONAL_JUMP)  ; LAB_00448f8a
    MOV dword ptr [EBX + 0x164],0x0     ; 00448f5e
        ;   Label: LAB_00448f5e
    MOV dword ptr [EBX + 0x1d0],0x0     ; 00448f68
    MOV dword ptr [EBX + 0x15c],0x0     ; 00448f72
    POP ESI                             ; 00448f7c
    POP EBX                             ; 00448f7d
    RET                                 ; 00448f7e
    PUSH EDX                            ; 00448f7f
        ;   Label: LAB_00448f7f
    CALL crt_unknown.c_FUN_005a3770     ; 00448f80
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 00448f85
    JMP 0x00448f40                      ; 00448f88
        ;   XREF to: 00448f40 (UNCONDITIONAL_JUMP)  ; LAB_00448f40
    PUSH ESI                            ; 00448f8a
        ;   Label: LAB_00448f8a
    CALL crt_unknown.c_FUN_005a3770     ; 00448f8b
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 00448f90
    JMP 0x00448f5e                      ; 00448f93
        ;   XREF to: 00448f5e (UNCONDITIONAL_JUMP)  ; LAB_00448f5e


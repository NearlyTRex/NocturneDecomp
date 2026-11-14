; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setutil_cpp_C3DSCamera_free_FUN_00541ac0(C3DSCamera *this_ptr)
;
; Parameters:
; C3DSCamera *     Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_set.cpp_CDemonSet_clear_FUN_00532b30 at 00532b4f
;   core_setutil.cpp_C3DSCamera_dtor_FUN_00541aa0 at 00541aa6
;   core_setutil.cpp_C3DSCamera_reset_FUN_00541b00 at 00541b06
;
; Called Functions:
;   crt_unknown.c_FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00541ac0
        ;   Label: core_setutil.cpp_C3DSCamera_free_FUN_00541ac0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00541ac1
    MOV EDX,dword ptr [EBX + 0x198]     ; 00541ac5
    TEST EDX,EDX                        ; 00541acb
    JNZ 0x00541adb                      ; 00541acd
        ;   XREF to: 00541adb (CONDITIONAL_JUMP)  ; LAB_00541adb
    MOV dword ptr [EBX + 0x194],0x0     ; 00541acf
    POP EBX                             ; 00541ad9
    RET                                 ; 00541ada
    PUSH EDX                            ; 00541adb
        ;   Label: LAB_00541adb
    CALL crt_unknown.c_FUN_005a3770     ; 00541adc
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 00541ae1
    MOV dword ptr [EBX + 0x198],0x0     ; 00541ae4
    MOV dword ptr [EBX + 0x194],0x0     ; 00541aee
    POP EBX                             ; 00541af8
    RET                                 ; 00541af9


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_free_FUN_0043b730(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_dcamera.cpp_CDemonCamera_dtor_FUN_0043b460 at 0043b474
;   core_dcamera.cpp_CDemonCamera_init_FUN_0043b570 at 0043b57c
;   core_set.cpp_CDemonSet_clearLights_FUN_005308e0 at 0053095a
;
; Called Functions:
;   crt_unknown.c_FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043b730
        ;   Label: core_dcamera.cpp_CDemonCamera_free_FUN_0043b730
    PUSH ESI                            ; 0043b731
    MOV EBX,dword ptr [ESP + 0xc]       ; 0043b732
    MOV EDX,dword ptr [EBX + 0x160]     ; 0043b736
    TEST EDX,EDX                        ; 0043b73c
    JNZ 0x0043b77f                      ; 0043b73e
        ;   XREF to: 0043b77f (CONDITIONAL_JUMP)  ; LAB_0043b77f
    MOV dword ptr [EBX + 0x160],0x0     ; 0043b740
        ;   Label: LAB_0043b740
    MOV ESI,dword ptr [EBX + 0x164]     ; 0043b74a
    MOV dword ptr [EBX + 0x158],0x0     ; 0043b750
    TEST ESI,ESI                        ; 0043b75a
    JNZ 0x0043b78a                      ; 0043b75c
        ;   XREF to: 0043b78a (CONDITIONAL_JUMP)  ; LAB_0043b78a
    MOV dword ptr [EBX + 0x164],0x0     ; 0043b75e
        ;   Label: LAB_0043b75e
    MOV dword ptr [EBX + 0x1d0],0x0     ; 0043b768
    MOV dword ptr [EBX + 0x15c],0x0     ; 0043b772
    POP ESI                             ; 0043b77c
    POP EBX                             ; 0043b77d
    RET                                 ; 0043b77e
    PUSH EDX                            ; 0043b77f
        ;   Label: LAB_0043b77f
    CALL crt_unknown.c_FUN_005b86a0     ; 0043b780
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 0043b785
    JMP 0x0043b740                      ; 0043b788
        ;   XREF to: 0043b740 (UNCONDITIONAL_JUMP)  ; LAB_0043b740
    PUSH ESI                            ; 0043b78a
        ;   Label: LAB_0043b78a
    CALL crt_unknown.c_FUN_005b86a0     ; 0043b78b
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 0043b790
    JMP 0x0043b75e                      ; 0043b793
        ;   XREF to: 0043b75e (UNCONDITIONAL_JUMP)  ; LAB_0043b75e


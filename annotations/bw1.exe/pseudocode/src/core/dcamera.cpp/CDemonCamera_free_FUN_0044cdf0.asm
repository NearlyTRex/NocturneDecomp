; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_free_FUN_0044cdf0(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_dcamera.cpp_CDemonCamera_dtor_FUN_0044cb00 at 0044cb14
;   core_dcamera.cpp_CDemonCamera_init_FUN_0044cc30 at 0044cc3c
;   core_set.cpp_CDemonSet_clearLights_FUN_00551b90 at 00551c0a
;
; Called Functions:
;   crt_unknown.c_FUN_005c09f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044cdf0
        ;   Label: core_dcamera.cpp_CDemonCamera_free_FUN_0044cdf0
    PUSH ESI                            ; 0044cdf1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0044cdf2
    MOV EDX,dword ptr [EBX + 0x160]     ; 0044cdf6
    TEST EDX,EDX                        ; 0044cdfc
    JNZ 0x0044ce3f                      ; 0044cdfe
        ;   XREF to: 0044ce3f (CONDITIONAL_JUMP)  ; LAB_0044ce3f
    MOV dword ptr [EBX + 0x160],0x0     ; 0044ce00
        ;   Label: LAB_0044ce00
    MOV ESI,dword ptr [EBX + 0x164]     ; 0044ce0a
    MOV dword ptr [EBX + 0x158],0x0     ; 0044ce10
    TEST ESI,ESI                        ; 0044ce1a
    JNZ 0x0044ce4a                      ; 0044ce1c
        ;   XREF to: 0044ce4a (CONDITIONAL_JUMP)  ; LAB_0044ce4a
    MOV dword ptr [EBX + 0x164],0x0     ; 0044ce1e
        ;   Label: LAB_0044ce1e
    MOV dword ptr [EBX + 0x1d0],0x0     ; 0044ce28
    MOV dword ptr [EBX + 0x15c],0x0     ; 0044ce32
    POP ESI                             ; 0044ce3c
    POP EBX                             ; 0044ce3d
    RET                                 ; 0044ce3e
    PUSH EDX                            ; 0044ce3f
        ;   Label: LAB_0044ce3f
    CALL crt_unknown.c_FUN_005c09f0     ; 0044ce40
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 0044ce45
    JMP 0x0044ce00                      ; 0044ce48
        ;   XREF to: 0044ce00 (UNCONDITIONAL_JUMP)  ; LAB_0044ce00
    PUSH ESI                            ; 0044ce4a
        ;   Label: LAB_0044ce4a
    CALL crt_unknown.c_FUN_005c09f0     ; 0044ce4b
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 0044ce50
    JMP 0x0044ce1e                      ; 0044ce53
        ;   XREF to: 0044ce1e (UNCONDITIONAL_JUMP)  ; LAB_0044ce1e


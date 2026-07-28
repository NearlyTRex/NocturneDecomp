; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcube_cpp_FUN_0044adf0(int *param_1)
;
;
; XREF[1]:
;   core_dcube.cpp_CDemonCube_dtor_FUN_0044ac10 at 0044ac16
;
; Called Functions:
;   crt_unknown.c_FUN_005638d0
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044adf0
        ;   Label: core_dcube.cpp_FUN_0044adf0
    PUSH EDI                            ; 0044adf1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0044adf2
    MOV EDX,dword ptr [EBX + 0x24]      ; 0044adf6
    TEST EDX,EDX                        ; 0044adf9
    JZ 0x0044ae14                       ; 0044adfb
        ;   XREF to: 0044ae14 (CONDITIONAL_JUMP)  ; LAB_0044ae14
    MOV EAX,EDX                         ; 0044adfd
    JZ 0x0044ae0d                       ; 0044adff
        ;   XREF to: 0044ae0d (CONDITIONAL_JUMP)  ; LAB_0044ae0d
    LEA EAX,[EDX + -0x4]                ; 0044ae01
    PUSH EAX                            ; 0044ae04
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 0044ae05
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 0044ae0a
    MOV dword ptr [EBX + 0x24],0x0      ; 0044ae0d
        ;   Label: LAB_0044ae0d
    MOV ECX,dword ptr [EBX + 0x2c]      ; 0044ae14
        ;   Label: LAB_0044ae14
    TEST ECX,ECX                        ; 0044ae17
    JZ 0x0044ae2b                       ; 0044ae19
        ;   XREF to: 0044ae2b (CONDITIONAL_JUMP)  ; LAB_0044ae2b
    PUSH ECX                            ; 0044ae1b
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 0044ae1c
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 0044ae21
    MOV dword ptr [EBX + 0x2c],0x0      ; 0044ae24
    MOV EDI,dword ptr [EBX + 0x30]      ; 0044ae2b
        ;   Label: LAB_0044ae2b
    TEST EDI,EDI                        ; 0044ae2e
    JZ 0x0044ae42                       ; 0044ae30
        ;   XREF to: 0044ae42 (CONDITIONAL_JUMP)  ; LAB_0044ae42
    PUSH EDI                            ; 0044ae32
    CALL crt_unknown.c_FUN_005638d0     ; 0044ae33
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    ADD ESP,0x4                         ; 0044ae38
    MOV dword ptr [EBX + 0x30],0x0      ; 0044ae3b
    MOV EAX,dword ptr [EBX]             ; 0044ae42
        ;   Label: LAB_0044ae42
    TEST EAX,EAX                        ; 0044ae44
    JZ 0x0044ae57                       ; 0044ae46
        ;   XREF to: 0044ae57 (CONDITIONAL_JUMP)  ; LAB_0044ae57
    PUSH EAX                            ; 0044ae48
    CALL crt_unknown.c_FUN_005638d0     ; 0044ae49
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    ADD ESP,0x4                         ; 0044ae4e
    MOV dword ptr [EBX],0x0             ; 0044ae51
    MOV ECX,dword ptr [EBX + 0x4]       ; 0044ae57
        ;   Label: LAB_0044ae57
    TEST ECX,ECX                        ; 0044ae5a
    JNZ 0x0044ae61                      ; 0044ae5c
        ;   XREF to: 0044ae61 (CONDITIONAL_JUMP)  ; LAB_0044ae61
    POP EDI                             ; 0044ae5e
    POP EBX                             ; 0044ae5f
    RET                                 ; 0044ae60
    PUSH ECX                            ; 0044ae61
        ;   Label: LAB_0044ae61
    CALL crt_unknown.c_FUN_005638d0     ; 0044ae62
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    ADD ESP,0x4                         ; 0044ae67
    MOV dword ptr [EBX + 0x4],0x0       ; 0044ae6a
    POP EDI                             ; 0044ae71
    POP EBX                             ; 0044ae72
    RET                                 ; 0044ae73


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dmodel_cpp_FUN_00460e10(int param_1)
;
;
; XREF[6]:
;   core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00460530 at 00460536
;   core_dmodel.cpp_CKeyFramedModel_load_FUN_00460550 at 00460559
;   core_dmodel.cpp_FUN_00461300 at 00461309
;   core_dmodel.cpp_freeAllModels_FUN_004624d0 at 004624de
;   core_moon.cpp_FUN_004f9580 at 004f958f
;   core_set.cpp_CDemonSet_clear_FUN_00532b30 at 00532b37
;
; Called Functions:
;   crt_unknown.c_FUN_005a30b6
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460e10
        ;   Label: core_dmodel.cpp_FUN_00460e10
    PUSH ESI                            ; 00460e11
    PUSH EDI                            ; 00460e12
    PUSH EBP                            ; 00460e13
    MOV EBX,dword ptr [ESP + 0x14]      ; 00460e14
    MOV EDX,dword ptr [EBX + 0x10c]     ; 00460e18
    PUSH EDX                            ; 00460e1e
    CALL crt_unknown.c_FUN_005a30b6     ; 00460e1f
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00460e24
    MOV ECX,dword ptr [EBX + 0x108]     ; 00460e27
    PUSH ECX                            ; 00460e2d
    MOV dword ptr [EBX + 0x10c],0x0     ; 00460e2e
    CALL crt_unknown.c_FUN_005a30b6     ; 00460e38
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00460e3d
    MOV ESI,dword ptr [EBX + 0x114]     ; 00460e40
    PUSH ESI                            ; 00460e46
    MOV dword ptr [EBX + 0x108],0x0     ; 00460e47
    CALL crt_unknown.c_FUN_005a30b6     ; 00460e51
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00460e56
    MOV EDI,dword ptr [EBX + 0x118]     ; 00460e59
    PUSH EDI                            ; 00460e5f
    MOV dword ptr [EBX + 0x114],0x0     ; 00460e60
    CALL crt_unknown.c_FUN_005a30b6     ; 00460e6a
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00460e6f
    MOV EBP,dword ptr [EBX + 0x11c]     ; 00460e72
    PUSH EBP                            ; 00460e78
    MOV dword ptr [EBX + 0x118],0x0     ; 00460e79
    CALL crt_unknown.c_FUN_005a30b6     ; 00460e83
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00460e88
    MOV EAX,dword ptr [EBX + 0x350]     ; 00460e8b
    PUSH EAX                            ; 00460e91
    MOV dword ptr [EBX + 0x11c],0x0     ; 00460e92
    CALL crt_unknown.c_FUN_005a30b6     ; 00460e9c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00460ea1
    MOV EDX,dword ptr [EBX + 0x358]     ; 00460ea4
    PUSH EDX                            ; 00460eaa
    MOV dword ptr [EBX + 0x350],0x0     ; 00460eab
    CALL crt_unknown.c_FUN_005a30b6     ; 00460eb5
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    MOV dword ptr [EBX + 0x358],0x0     ; 00460eba
    MOV dword ptr [EBX + 0x104],0x0     ; 00460ec4
    MOV dword ptr [EBX + 0x110],0x0     ; 00460ece
    MOV dword ptr [EBX + 0x120],0x0     ; 00460ed8
    MOV dword ptr [EBX + 0x244],0x0     ; 00460ee2
    MOV dword ptr [EBX + 0x100],0x0     ; 00460eec
    MOV dword ptr [EBX + 0x354],0x0     ; 00460ef6
    MOV dword ptr [EBX + 0x35c],0x0     ; 00460f00
    ADD ESP,0x4                         ; 00460f0a
    MOV dword ptr [EBX + 0x360],0x0     ; 00460f0d
    POP EBP                             ; 00460f17
    POP EDI                             ; 00460f18
    POP ESI                             ; 00460f19
    POP EBX                             ; 00460f1a
    RET                                 ; 00460f1b


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dmodel_cpp_FUN_0044e590(int param_1)
;
;
; XREF[6]:
;   core_dmodel.cpp_CKeyFramedModel_dtor_FUN_0044dcb0 at 0044dcb6
;   core_dmodel.cpp_CKeyFramedModel_load_FUN_0044dcd0 at 0044dcd9
;   core_dmodel.cpp_FUN_0044ea80 at 0044ea89
;   core_dmodel.cpp_FUN_0044fc50 at 0044fc5e
;   core_level.cpp_CLevelLoader_cleanup_FUN_004e1b80 at 004e1ba7
;   core_set.cpp_CDemonSet_clear_FUN_0052c090 at 0052c097
;
; Called Functions:
;   crt_unknown.c_FUN_005b7fce
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044e590
        ;   Label: core_dmodel.cpp_FUN_0044e590
    PUSH ESI                            ; 0044e591
    PUSH EDI                            ; 0044e592
    PUSH EBP                            ; 0044e593
    MOV EBX,dword ptr [ESP + 0x14]      ; 0044e594
    MOV EDX,dword ptr [EBX + 0x10c]     ; 0044e598
    PUSH EDX                            ; 0044e59e
    CALL crt_unknown.c_FUN_005b7fce     ; 0044e59f
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 0044e5a4
    MOV ECX,dword ptr [EBX + 0x108]     ; 0044e5a7
    PUSH ECX                            ; 0044e5ad
    MOV dword ptr [EBX + 0x10c],0x0     ; 0044e5ae
    CALL crt_unknown.c_FUN_005b7fce     ; 0044e5b8
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 0044e5bd
    MOV ESI,dword ptr [EBX + 0x114]     ; 0044e5c0
    PUSH ESI                            ; 0044e5c6
    MOV dword ptr [EBX + 0x108],0x0     ; 0044e5c7
    CALL crt_unknown.c_FUN_005b7fce     ; 0044e5d1
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 0044e5d6
    MOV EDI,dword ptr [EBX + 0x118]     ; 0044e5d9
    PUSH EDI                            ; 0044e5df
    MOV dword ptr [EBX + 0x114],0x0     ; 0044e5e0
    CALL crt_unknown.c_FUN_005b7fce     ; 0044e5ea
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 0044e5ef
    MOV EBP,dword ptr [EBX + 0x11c]     ; 0044e5f2
    PUSH EBP                            ; 0044e5f8
    MOV dword ptr [EBX + 0x118],0x0     ; 0044e5f9
    CALL crt_unknown.c_FUN_005b7fce     ; 0044e603
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 0044e608
    MOV EAX,dword ptr [EBX + 0x350]     ; 0044e60b
    PUSH EAX                            ; 0044e611
    MOV dword ptr [EBX + 0x11c],0x0     ; 0044e612
    CALL crt_unknown.c_FUN_005b7fce     ; 0044e61c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 0044e621
    MOV EDX,dword ptr [EBX + 0x358]     ; 0044e624
    PUSH EDX                            ; 0044e62a
    MOV dword ptr [EBX + 0x350],0x0     ; 0044e62b
    CALL crt_unknown.c_FUN_005b7fce     ; 0044e635
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    MOV dword ptr [EBX + 0x358],0x0     ; 0044e63a
    MOV dword ptr [EBX + 0x104],0x0     ; 0044e644
    MOV dword ptr [EBX + 0x110],0x0     ; 0044e64e
    MOV dword ptr [EBX + 0x120],0x0     ; 0044e658
    MOV dword ptr [EBX + 0x244],0x0     ; 0044e662
    MOV dword ptr [EBX + 0x100],0x0     ; 0044e66c
    MOV dword ptr [EBX + 0x354],0x0     ; 0044e676
    MOV dword ptr [EBX + 0x35c],0x0     ; 0044e680
    ADD ESP,0x4                         ; 0044e68a
    MOV dword ptr [EBX + 0x360],0x0     ; 0044e68d
    POP EBP                             ; 0044e697
    POP EDI                             ; 0044e698
    POP ESI                             ; 0044e699
    POP EBX                             ; 0044e69a
    RET                                 ; 0044e69b


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_FUN_00562f70(int param_1,int param_2)
;
;
; XREF[5]:
;   core_skeleton.cpp_CSkeleton_allocMemory_FUN_00562e60 at 00562e6a
;   core_skeleton.cpp_CSkeleton_dtor_FUN_00562e30 at 00562e41
;   core_skeleton.cpp_CSkeleton_loadStream_FUN_00563090 at 0056309e
;   core_skeleton.cpp_FUN_0056b740 at 0056b755
;   core_skeleton.cpp_FUN_0056b860 at 0056b8b5
;
; Called Functions:
;   crt_unknown.c_FUN_005c0336
;   unkafter_morph.cpp_FUN_00523910
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00562f70
        ;   Label: core_skeleton.cpp_FUN_00562f70
    PUSH ESI                            ; 00562f71
    PUSH EDI                            ; 00562f72
    MOV EBX,dword ptr [ESP + 0x10]      ; 00562f73
    CMP dword ptr [ESP + 0x14],0x0      ; 00562f77
    JNZ 0x00562fe8                      ; 00562f7c
        ;   XREF to: 00562fe8 (CONDITIONAL_JUMP)  ; LAB_00562fe8
    MOV ECX,dword ptr [EBX + 0x1ec90]   ; 00562f7e
        ;   Label: LAB_00562f7e
    MOV dword ptr [EBX + 0x1de78],0x0   ; 00562f84
    PUSH ECX                            ; 00562f8e
    MOV dword ptr [EBX + 0x1ec8c],0x0   ; 00562f8f
    CALL crt_unknown.c_FUN_005c0336     ; 00562f99
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 00562f9e
    MOV ESI,dword ptr [EBX + 0x1ec94]   ; 00562fa1
    PUSH ESI                            ; 00562fa7
    CALL crt_unknown.c_FUN_005c0336     ; 00562fa8
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 00562fad
    MOV EDI,dword ptr [EBX + 0x1ec98]   ; 00562fb0
    PUSH EDI                            ; 00562fb6
    CALL crt_unknown.c_FUN_005c0336     ; 00562fb7
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    MOV dword ptr [EBX + 0x1ec90],0x0   ; 00562fbc
    MOV dword ptr [EBX + 0x1ec94],0x0   ; 00562fc6
    MOV dword ptr [EBX + 0x1ec98],0x0   ; 00562fd0
    ADD ESP,0x4                         ; 00562fda
    MOV byte ptr [EBX + 0x1de28],0x0    ; 00562fdd
    POP EDI                             ; 00562fe4
    POP ESI                             ; 00562fe5
    POP EBX                             ; 00562fe6
    RET                                 ; 00562fe7
    PUSH EBX                            ; 00562fe8
        ;   Label: LAB_00562fe8
    CALL unkafter_morph.cpp_FUN_00523910 ; 00562fe9
        ;   XREF to: 00523910 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_00523910()
    ADD ESP,0x4                         ; 00562fee
    JMP 0x00562f7e                      ; 00562ff1
        ;   XREF to: 00562f7e (UNCONDITIONAL_JUMP)  ; LAB_00562f7e


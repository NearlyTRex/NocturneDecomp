; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_FUN_00547b90(int param_1,int param_2)
;
;
; XREF[5]:
;   core_skeleton.cpp_CSkeleton_allocMemory_FUN_00547a80 at 00547a8a
;   core_skeleton.cpp_CSkeleton_dtor_FUN_00547a50 at 00547a61
;   core_skeleton.cpp_CSkeleton_loadStream_FUN_00547cb0 at 00547cbe
;   core_skeleton.cpp_FUN_005502d0 at 005502e5
;   core_skeleton.cpp_FUN_005503f0 at 00550445
;
; Called Functions:
;   crt_unknown.c_FUN_005a30b6
;   unkafter_morph.cpp_FUN_004fb210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00547b90
        ;   Label: core_skeleton.cpp_FUN_00547b90
    PUSH ESI                            ; 00547b91
    PUSH EDI                            ; 00547b92
    MOV EBX,dword ptr [ESP + 0x10]      ; 00547b93
    CMP dword ptr [ESP + 0x14],0x0      ; 00547b97
    JNZ 0x00547c08                      ; 00547b9c
        ;   XREF to: 00547c08 (CONDITIONAL_JUMP)  ; LAB_00547c08
    MOV ECX,dword ptr [EBX + 0x1ec90]   ; 00547b9e
        ;   Label: LAB_00547b9e
    MOV dword ptr [EBX + 0x1de78],0x0   ; 00547ba4
    PUSH ECX                            ; 00547bae
    MOV dword ptr [EBX + 0x1ec8c],0x0   ; 00547baf
    CALL crt_unknown.c_FUN_005a30b6     ; 00547bb9
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00547bbe
    MOV ESI,dword ptr [EBX + 0x1ec94]   ; 00547bc1
    PUSH ESI                            ; 00547bc7
    CALL crt_unknown.c_FUN_005a30b6     ; 00547bc8
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00547bcd
    MOV EDI,dword ptr [EBX + 0x1ec98]   ; 00547bd0
    PUSH EDI                            ; 00547bd6
    CALL crt_unknown.c_FUN_005a30b6     ; 00547bd7
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    MOV dword ptr [EBX + 0x1ec90],0x0   ; 00547bdc
    MOV dword ptr [EBX + 0x1ec94],0x0   ; 00547be6
    MOV dword ptr [EBX + 0x1ec98],0x0   ; 00547bf0
    ADD ESP,0x4                         ; 00547bfa
    MOV byte ptr [EBX + 0x1de28],0x0    ; 00547bfd
    POP EDI                             ; 00547c04
    POP ESI                             ; 00547c05
    POP EBX                             ; 00547c06
    RET                                 ; 00547c07
    PUSH EBX                            ; 00547c08
        ;   Label: LAB_00547c08
    CALL unkafter_morph.cpp_FUN_004fb210 ; 00547c09
        ;   XREF to: 004fb210 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_004fb210()
    ADD ESP,0x4                         ; 00547c0e
    JMP 0x00547b9e                      ; 00547c11
        ;   XREF to: 00547b9e (UNCONDITIONAL_JUMP)  ; LAB_00547b9e


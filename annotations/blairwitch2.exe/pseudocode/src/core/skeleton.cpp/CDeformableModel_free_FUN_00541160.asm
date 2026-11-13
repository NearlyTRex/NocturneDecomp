; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_free_FUN_00541160(CDeformableModel *this_ptr)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   core_skeleton.cpp_CDeformableModel_allocLOD_FUN_00541370 at 005414be
;   core_skeleton.cpp_CDeformableModel_allocMemory_FUN_00541250 at 00541265
;   core_skeleton.cpp_CDeformableModel_dtor_FUN_00541140 at 00541146
;   core_skeleton.cpp_freeAllModels_FUN_00548f80 at 00548f8e
;   core_skeleton.cpp_freeUnusedModelsAndSkeletons_FUN_005491b0 at 005491f8
;
; Called Functions:
;   crt_memory.c_memset_FUN_005b77c0
;   crt_unknown.c_FUN_005b7fce
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00541160
        ;   Label: core_skeleton.cpp_CDeformableModel_free_FUN_00541160
    PUSH ESI                            ; 00541161
    PUSH EDI                            ; 00541162
    PUSH EBP                            ; 00541163
    MOV EDI,dword ptr [ESP + 0x14]      ; 00541164
    MOV EDX,dword ptr [EDI]             ; 00541168
    XOR ESI,ESI                         ; 0054116a
    TEST EDX,EDX                        ; 0054116c
    JLE 0x005411f0                      ; 0054116e
        ;   XREF to: 005411f0 (CONDITIONAL_JUMP)  ; LAB_005411f0
    MOV EBX,EDI                         ; 00541174
    MOV ECX,dword ptr [EBX + 0x40]      ; 00541176
        ;   Label: LAB_00541176
    PUSH ECX                            ; 00541179
    CALL crt_unknown.c_FUN_005b7fce     ; 0054117a
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 0054117f
    MOV EBP,dword ptr [EBX + 0x7c]      ; 00541182
    PUSH EBP                            ; 00541185
    MOV dword ptr [EBX + 0x40],0x0      ; 00541186
    CALL crt_unknown.c_FUN_005b7fce     ; 0054118d
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 00541192
    MOV EAX,dword ptr [EBX + 0x90]      ; 00541195
    PUSH EAX                            ; 0054119b
    MOV dword ptr [EBX + 0x7c],0x0      ; 0054119c
    CALL crt_unknown.c_FUN_005b7fce     ; 005411a3
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 005411a8
    MOV EDX,dword ptr [EBX + 0xa4]      ; 005411ab
    ADD EBX,0x4                         ; 005411b1
    PUSH EDX                            ; 005411b4
    MOV dword ptr [EBX + 0x8c],0x0      ; 005411b5
    CALL crt_unknown.c_FUN_005b7fce     ; 005411bf
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    MOV dword ptr [EBX + 0xa0],0x0      ; 005411c4
    MOV dword ptr [EBX + 0x28],0x0      ; 005411ce
    MOV dword ptr [EBX + 0x50],0x0      ; 005411d5
    MOV dword ptr [EBX + 0x64],0x0      ; 005411dc
    INC ESI                             ; 005411e3
    MOV ECX,dword ptr [EDI]             ; 005411e4
    ADD ESP,0x4                         ; 005411e6
    CMP ESI,ECX                         ; 005411e9
    JL 0x00541176                       ; 005411eb
        ;   XREF to: 00541176 (CONDITIONAL_JUMP)  ; LAB_00541176
    LEA EAX,[EAX]                       ; 005411ed
    PUSH 0xb40                          ; 005411f0
        ;   Label: LAB_005411f0
    PUSH 0x0                            ; 005411f5
    LEA EBX,[EDI + 0xc0]                ; 005411f7
    MOV dword ptr [EDI + 0xb8],0x0      ; 005411fd
    PUSH EBX                            ; 00541207
    MOV dword ptr [EDI + 0xbc],0x0      ; 00541208
    CALL crt_memory.c_memset_FUN_005b77c0 ; 00541212
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    MOV dword ptr [EDI + 0xc00],0x0     ; 00541217
    MOV dword ptr [EDI],0x0             ; 00541221
    MOV byte ptr [EDI + 0x2a70],0x0     ; 00541227
    MOV byte ptr [EDI + 0x2a1c],0x0     ; 0054122e
    ADD ESP,0xc                         ; 00541235
    MOV dword ptr [EDI + 0x2a6c],0x0    ; 00541238
    POP EBP                             ; 00541242
    POP EDI                             ; 00541243
    POP ESI                             ; 00541244
    POP EBX                             ; 00541245
    RET                                 ; 00541246


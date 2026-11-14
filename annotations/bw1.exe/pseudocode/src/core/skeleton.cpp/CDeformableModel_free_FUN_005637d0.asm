; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_free_FUN_005637d0(CDeformableModel *this_ptr)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   core_skeleton.cpp_CDeformableModel_allocLOD_FUN_005639e0 at 00563b2e
;   core_skeleton.cpp_CDeformableModel_allocMemory_FUN_005638c0 at 005638d5
;   core_skeleton.cpp_CDeformableModel_dtor_FUN_005637b0 at 005637b6
;   core_skeleton.cpp_freeAllModels_FUN_0056b610 at 0056b61e
;   core_skeleton.cpp_freeUnusedModelsAndSkeletons_FUN_0056b860 at 0056b8a8
;
; Called Functions:
;   crt_memory.c_memset_FUN_005bfb70
;   crt_unknown.c_FUN_005c0336
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005637d0
        ;   Label: core_skeleton.cpp_CDeformableModel_free_FUN_005637d0
    PUSH ESI                            ; 005637d1
    PUSH EDI                            ; 005637d2
    PUSH EBP                            ; 005637d3
    MOV EDI,dword ptr [ESP + 0x14]      ; 005637d4
    MOV EDX,dword ptr [EDI]             ; 005637d8
    XOR ESI,ESI                         ; 005637da
    TEST EDX,EDX                        ; 005637dc
    JLE 0x00563860                      ; 005637de
        ;   XREF to: 00563860 (CONDITIONAL_JUMP)  ; LAB_00563860
    MOV EBX,EDI                         ; 005637e4
    MOV ECX,dword ptr [EBX + 0x40]      ; 005637e6
        ;   Label: LAB_005637e6
    PUSH ECX                            ; 005637e9
    CALL crt_unknown.c_FUN_005c0336     ; 005637ea
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 005637ef
    MOV EBP,dword ptr [EBX + 0x7c]      ; 005637f2
    PUSH EBP                            ; 005637f5
    MOV dword ptr [EBX + 0x40],0x0      ; 005637f6
    CALL crt_unknown.c_FUN_005c0336     ; 005637fd
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 00563802
    MOV EAX,dword ptr [EBX + 0x90]      ; 00563805
    PUSH EAX                            ; 0056380b
    MOV dword ptr [EBX + 0x7c],0x0      ; 0056380c
    CALL crt_unknown.c_FUN_005c0336     ; 00563813
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 00563818
    MOV EDX,dword ptr [EBX + 0xa4]      ; 0056381b
    ADD EBX,0x4                         ; 00563821
    PUSH EDX                            ; 00563824
    MOV dword ptr [EBX + 0x8c],0x0      ; 00563825
    CALL crt_unknown.c_FUN_005c0336     ; 0056382f
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    MOV dword ptr [EBX + 0xa0],0x0      ; 00563834
    MOV dword ptr [EBX + 0x28],0x0      ; 0056383e
    MOV dword ptr [EBX + 0x50],0x0      ; 00563845
    MOV dword ptr [EBX + 0x64],0x0      ; 0056384c
    INC ESI                             ; 00563853
    MOV ECX,dword ptr [EDI]             ; 00563854
    ADD ESP,0x4                         ; 00563856
    CMP ESI,ECX                         ; 00563859
    JL 0x005637e6                       ; 0056385b
        ;   XREF to: 005637e6 (CONDITIONAL_JUMP)  ; LAB_005637e6
    LEA EAX,[EAX]                       ; 0056385d
    PUSH 0xb40                          ; 00563860
        ;   Label: LAB_00563860
    PUSH 0x0                            ; 00563865
    LEA EBX,[EDI + 0xc0]                ; 00563867
    MOV dword ptr [EDI + 0xb8],0x0      ; 0056386d
    PUSH EBX                            ; 00563877
    MOV dword ptr [EDI + 0xbc],0x0      ; 00563878
    CALL crt_memory.c_memset_FUN_005bfb70 ; 00563882
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    MOV dword ptr [EDI + 0xc00],0x0     ; 00563887
    MOV dword ptr [EDI],0x0             ; 00563891
    MOV byte ptr [EDI + 0x35b0],0x0     ; 00563897
    MOV byte ptr [EDI + 0x355c],0x0     ; 0056389e
    ADD ESP,0xc                         ; 005638a5
    MOV dword ptr [EDI + 0x35ac],0x0    ; 005638a8
    POP EBP                             ; 005638b2
    POP EDI                             ; 005638b3
    POP ESI                             ; 005638b4
    POP EBX                             ; 005638b5
    RET                                 ; 005638b6


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_free_FUN_00548370(CDeformableModel *this_ptr)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   core_skeleton.cpp_CDeformableModel_allocLOD_FUN_00548580 at 005486ce
;   core_skeleton.cpp_CDeformableModel_allocMemory_FUN_00548460 at 00548475
;   core_skeleton.cpp_CDeformableModel_dtor_FUN_00548350 at 00548356
;   core_skeleton.cpp_freeAllModels_FUN_005501a0 at 005501ae
;   core_skeleton.cpp_freeUnusedModelsAndSkeletons_FUN_005503f0 at 00550438
;
; Called Functions:
;   crt_memory.c_memset_FUN_005a28f0
;   crt_unknown.c_FUN_005a30b6
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548370
        ;   Label: core_skeleton.cpp_CDeformableModel_free_FUN_00548370
    PUSH ESI                            ; 00548371
    PUSH EDI                            ; 00548372
    PUSH EBP                            ; 00548373
    MOV EDI,dword ptr [ESP + 0x14]      ; 00548374
    MOV EDX,dword ptr [EDI]             ; 00548378
    XOR ESI,ESI                         ; 0054837a
    TEST EDX,EDX                        ; 0054837c
    JLE 0x00548400                      ; 0054837e
        ;   XREF to: 00548400 (CONDITIONAL_JUMP)  ; LAB_00548400
    MOV EBX,EDI                         ; 00548384
    MOV ECX,dword ptr [EBX + 0x40]      ; 00548386
        ;   Label: LAB_00548386
    PUSH ECX                            ; 00548389
    CALL crt_unknown.c_FUN_005a30b6     ; 0054838a
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 0054838f
    MOV EBP,dword ptr [EBX + 0x7c]      ; 00548392
    PUSH EBP                            ; 00548395
    MOV dword ptr [EBX + 0x40],0x0      ; 00548396
    CALL crt_unknown.c_FUN_005a30b6     ; 0054839d
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 005483a2
    MOV EAX,dword ptr [EBX + 0x90]      ; 005483a5
    PUSH EAX                            ; 005483ab
    MOV dword ptr [EBX + 0x7c],0x0      ; 005483ac
    CALL crt_unknown.c_FUN_005a30b6     ; 005483b3
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 005483b8
    MOV EDX,dword ptr [EBX + 0xa4]      ; 005483bb
    ADD EBX,0x4                         ; 005483c1
    PUSH EDX                            ; 005483c4
    MOV dword ptr [EBX + 0x8c],0x0      ; 005483c5
    CALL crt_unknown.c_FUN_005a30b6     ; 005483cf
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    MOV dword ptr [EBX + 0xa0],0x0      ; 005483d4
    MOV dword ptr [EBX + 0x28],0x0      ; 005483de
    MOV dword ptr [EBX + 0x50],0x0      ; 005483e5
    MOV dword ptr [EBX + 0x64],0x0      ; 005483ec
    INC ESI                             ; 005483f3
    MOV ECX,dword ptr [EDI]             ; 005483f4
    ADD ESP,0x4                         ; 005483f6
    CMP ESI,ECX                         ; 005483f9
    JL 0x00548386                       ; 005483fb
        ;   XREF to: 00548386 (CONDITIONAL_JUMP)  ; LAB_00548386
    LEA EAX,[EAX]                       ; 005483fd
    PUSH 0xb40                          ; 00548400
        ;   Label: LAB_00548400
    PUSH 0x0                            ; 00548405
    LEA EBX,[EDI + 0xc0]                ; 00548407
    MOV dword ptr [EDI + 0xb8],0x0      ; 0054840d
    PUSH EBX                            ; 00548417
    MOV dword ptr [EDI + 0xbc],0x0      ; 00548418
    CALL crt_memory.c_memset_FUN_005a28f0 ; 00548422
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    MOV dword ptr [EDI + 0xc00],0x0     ; 00548427
    MOV dword ptr [EDI],0x0             ; 00548431
    MOV byte ptr [EDI + 0x35b0],0x0     ; 00548437
    MOV byte ptr [EDI + 0x355c],0x0     ; 0054843e
    ADD ESP,0xc                         ; 00548445
    MOV dword ptr [EDI + 0x35ac],0x0    ; 00548448
    POP EBP                             ; 00548452
    POP EDI                             ; 00548453
    POP ESI                             ; 00548454
    POP EBX                             ; 00548455
    RET                                 ; 00548456


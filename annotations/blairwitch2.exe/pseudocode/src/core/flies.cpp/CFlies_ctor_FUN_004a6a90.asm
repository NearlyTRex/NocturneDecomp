; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFlies * __cdecl core_flies_cpp_CFlies_ctor_FUN_004a6a90(CFlies *this_ptr)
;
; Parameters:
; CFlies *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[2]:
;   core_flies.cpp_factoryFuncFlies_FUN_004a6a60 at 004a6a73
;   core_gore.cpp_FUN_004c9bd0 at 004c9cac
;
; Referenced Globals:
;   undefined4 g_CFliesVTable
;   WatcomTypeInfo g_SFlyTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408790
;   crt_memory.c___arrinit_FUN_005b7f5f
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 004a6a90
        ;   Label: core_flies.cpp_CFlies_ctor_FUN_004a6a90
    MOV EDX,dword ptr [ESP + 0x10]      ; 004a6a93
    PUSH EDX                            ; 004a6a97
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408790 ; 004a6a98
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408790(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004a6a9d
    PUSH 0x5f7170                       ; 004a6aa0 | g_SFlyTypeInfo
    PUSH 0xc8                           ; 004a6aa5
    ADD EAX,0x2c4                       ; 004a6aaa
    PUSH EAX                            ; 004a6aaf
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 004a6ab0
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005b7f5f()
    LEA EDX,[EAX + 0xfffffd3c]          ; 004a6ab5
    MOV ECX,0x40a00000                  ; 004a6abb
    MOV dword ptr [EDX + 0x2b0],0x5f7084 ; 004a6ac0 | g_CFliesVTable
    ADD ESP,0xc                         ; 004a6aca
    MOV dword ptr [EDX + 0x2c0],0x14    ; 004a6acd
    MOV EAX,ESP                         ; 004a6ad7
    MOV dword ptr [ESP],ECX             ; 004a6ad9
    MOV dword ptr [ESP + 0x4],ECX       ; 004a6adc
    MOV dword ptr [ESP + 0x8],ECX       ; 004a6ae0
    LEA ECX,[EDX + 0x2b4]               ; 004a6ae4
    CMP ECX,EAX                         ; 004a6aea
    JNZ 0x004a6b30                      ; 004a6aec
        ;   XREF to: 004a6b30 (CONDITIONAL_JUMP)  ; LAB_004a6b30
    MOV dword ptr [EDX + 0x2b70],0x0    ; 004a6aee
        ;   Label: LAB_004a6aee
    MOV dword ptr [EDX + 0x2b6c],0x0    ; 004a6af8
    MOV dword ptr [EDX + 0x2b64],0x0    ; 004a6b02
    MOV dword ptr [EDX + 0x2b74],0x0    ; 004a6b0c
    MOV dword ptr [EDX + 0x2b78],0x1    ; 004a6b16
    MOV EAX,EDX                         ; 004a6b20
    MOV dword ptr [EDX + 0x2b68],0x0    ; 004a6b22
    ADD ESP,0xc                         ; 004a6b2c
    RET                                 ; 004a6b2f
    MOV dword ptr [ECX],0x40a00000      ; 004a6b30
        ;   Label: LAB_004a6b30
    MOV EAX,dword ptr [ESP + 0x4]       ; 004a6b36
    MOV dword ptr [ECX + 0x4],EAX       ; 004a6b3a
    MOV EAX,dword ptr [ESP + 0x8]       ; 004a6b3d
    MOV dword ptr [ECX + 0x8],EAX       ; 004a6b41
    JMP 0x004a6aee                      ; 004a6b44
        ;   XREF to: 004a6aee (UNCONDITIONAL_JUMP)  ; LAB_004a6aee


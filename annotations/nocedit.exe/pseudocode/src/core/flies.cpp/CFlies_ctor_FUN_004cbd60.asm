; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFlies * __cdecl core_flies_cpp_CFlies_ctor_FUN_004cbd60(CFlies *this_ptr)
;
; Parameters:
; CFlies *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[2]:
;   core_flies.cpp_factoryFunc_FUN_004cbd20 at 004cbd3a
;   core_gore.cpp_CGore_FUN_004edf30 at 004ee015
;
; Referenced Globals:
;   CDemonActor_vtable g_CFliesVTable
;   WatcomTypeInfo g_SFlyTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;   crt_memory.c___arrinit_FUN_005fe667
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 004cbd60
        ;   Label: core_flies.cpp_CFlies_ctor_FUN_004cbd60
    MOV EDX,dword ptr [ESP + 0x10]      ; 004cbd63
    PUSH EDX                            ; 004cbd67
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 004cbd68
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004cbd6d
    PUSH 0x65e610                       ; 004cbd70 | g_SFlyTypeInfo
    PUSH 0xc8                           ; 004cbd75
    ADD EAX,0x168                       ; 004cbd7a
    PUSH EAX                            ; 004cbd7f
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 004cbd80
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    LEA EDX,[EAX + 0xfffffe98]          ; 004cbd85
    MOV ECX,0x40a00000                  ; 004cbd8b
    MOV dword ptr [EDX + 0x154],0x65e524 ; 004cbd90 | g_CFliesVTable
    ADD ESP,0xc                         ; 004cbd9a
    MOV dword ptr [EDX + 0x164],0x14    ; 004cbd9d
    MOV EAX,ESP                         ; 004cbda7
    MOV dword ptr [ESP],ECX             ; 004cbda9
    MOV dword ptr [ESP + 0x4],ECX       ; 004cbdac
    MOV dword ptr [ESP + 0x8],ECX       ; 004cbdb0
    LEA ECX,[EDX + 0x158]               ; 004cbdb4
    CMP ECX,EAX                         ; 004cbdba
    JNZ 0x004cbe00                      ; 004cbdbc
        ;   XREF to: 004cbe00 (CONDITIONAL_JUMP)  ; LAB_004cbe00
    MOV dword ptr [EDX + 0x2a14],0x0    ; 004cbdbe
        ;   Label: LAB_004cbdbe
    MOV dword ptr [EDX + 0x2a10],0x0    ; 004cbdc8
    MOV dword ptr [EDX + 0x2a08],0x0    ; 004cbdd2
    MOV dword ptr [EDX + 0x2a18],0x0    ; 004cbddc
    MOV dword ptr [EDX + 0x2a1c],0x1    ; 004cbde6
    MOV EAX,EDX                         ; 004cbdf0
    MOV dword ptr [EDX + 0x2a0c],0x0    ; 004cbdf2
    ADD ESP,0xc                         ; 004cbdfc
    RET                                 ; 004cbdff
    MOV dword ptr [ECX],0x40a00000      ; 004cbe00
        ;   Label: LAB_004cbe00
    MOV EAX,dword ptr [ESP + 0x4]       ; 004cbe06
    MOV dword ptr [ECX + 0x4],EAX       ; 004cbe0a
    MOV EAX,dword ptr [ESP + 0x8]       ; 004cbe0d
    MOV dword ptr [ECX + 0x8],EAX       ; 004cbe11
    JMP 0x004cbdbe                      ; 004cbe14
        ;   XREF to: 004cbdbe (UNCONDITIONAL_JUMP)  ; LAB_004cbdbe


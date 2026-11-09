; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFlies * __cdecl core_flies_cpp_CFlies_ctor_FUN_004ad7b0(CFlies *this_ptr)
;
; Parameters:
; CFlies *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[2]:
;   core_flies.cpp_factoryFuncFlies_FUN_004ad780 at 004ad793
;   core_gore.cpp_FUN_004ced40 at 004cee1b
;
; Referenced Globals:
;   void* g_CFliesVTable = 004ad870
;   WatcomTypeInfo g_SFlyTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408600
;   crt_memory.c___arrinit_FUN_005a30d7
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 004ad7b0
        ;   Label: core_flies.cpp_CFlies_ctor_FUN_004ad7b0
    MOV EDX,dword ptr [ESP + 0x10]      ; 004ad7b3
    PUSH EDX                            ; 004ad7b7
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408600 ; 004ad7b8
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408600(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004ad7bd
    PUSH 0x5e0500                       ; 004ad7c0 | g_SFlyTypeInfo
    PUSH 0xc8                           ; 004ad7c5
    ADD EAX,0x168                       ; 004ad7ca
    PUSH EAX                            ; 004ad7cf
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 004ad7d0
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005a30d7()
    LEA EDX,[EAX + 0xfffffe98]          ; 004ad7d5
    MOV ECX,0x40a00000                  ; 004ad7db
    MOV dword ptr [EDX + 0x154],0x5e0424 ; 004ad7e0 | g_CFliesVTable
    ADD ESP,0xc                         ; 004ad7ea
    MOV dword ptr [EDX + 0x164],0x14    ; 004ad7ed
    MOV EAX,ESP                         ; 004ad7f7
    MOV dword ptr [ESP],ECX             ; 004ad7f9
    MOV dword ptr [ESP + 0x4],ECX       ; 004ad7fc
    MOV dword ptr [ESP + 0x8],ECX       ; 004ad800
    LEA ECX,[EDX + 0x158]               ; 004ad804
    CMP ECX,EAX                         ; 004ad80a
    JNZ 0x004ad850                      ; 004ad80c
        ;   XREF to: 004ad850 (CONDITIONAL_JUMP)  ; LAB_004ad850
    MOV dword ptr [EDX + 0x2a14],0x0    ; 004ad80e
        ;   Label: LAB_004ad80e
    MOV dword ptr [EDX + 0x2a10],0x0    ; 004ad818
    MOV dword ptr [EDX + 0x2a08],0x0    ; 004ad822
    MOV dword ptr [EDX + 0x2a18],0x0    ; 004ad82c
    MOV dword ptr [EDX + 0x2a1c],0x1    ; 004ad836
    MOV EAX,EDX                         ; 004ad840
    MOV dword ptr [EDX + 0x2a0c],0x0    ; 004ad842
    ADD ESP,0xc                         ; 004ad84c
    RET                                 ; 004ad84f
    MOV dword ptr [ECX],0x40a00000      ; 004ad850
        ;   Label: LAB_004ad850
    MOV EAX,dword ptr [ESP + 0x4]       ; 004ad856
    MOV dword ptr [ECX + 0x4],EAX       ; 004ad85a
    MOV EAX,dword ptr [ESP + 0x8]       ; 004ad85d
    MOV dword ptr [ECX + 0x8],EAX       ; 004ad861
    JMP 0x004ad80e                      ; 004ad864
        ;   XREF to: 004ad80e (UNCONDITIONAL_JUMP)  ; LAB_004ad80e


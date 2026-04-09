; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CGore_spawnFliesOnActor_FUN_004ee030(CGore *this_ptr,CDemonActor *actor,int gather_count,float spawn_rate,CVector3f *box_size)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; int              Stack[0xc]:4   gather_count
; float            Stack[0x10]:4   spawn_rate
; CVector3f *      Stack[0x14]:4   box_size
;
; XREF[8]:
;   core_actor.cpp_CDemonActor_spawnFlies_FUN_00409e70 at 00409ea9
;   core_colonel.cpp_CColonel_processDamage_FUN_004404b0 at 00440596
;   core_gabriela.cpp_CGabriella_processDamage_FUN_004d6b30 at 004d6c6e
;   core_haystack.cpp_CHaystack_processDamage_FUN_004f1b70 at 004f1c70
;   core_icepick.cpp_CIcePick_processDamage_FUN_004f95b0 at 004f96f6
;   core_scat.cpp_CScat_processDamage_FUN_00557ea0 at 00557f86
;   core_stranger.cpp_CStranger_processDamage_FUN_005c48b0 at 005c4a7e
;   core_svetlana.cpp_CSvetlana_processDamage_FUN_005d9d30 at 005d9e4f
;
; Called Functions:
;   core_gore.cpp_CGore_spawnFlies_FUN_004edf30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ee030
        ;   Label: core_gore.cpp_CGore_spawnFliesOnActor_FUN_004ee030
    PUSH ESI                            ; 004ee031
    MOV EBX,dword ptr [ESP + 0x10]      ; 004ee032
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004ee036
    PUSH EDX                            ; 004ee03a
    MOV ECX,dword ptr [ESP + 0x18]      ; 004ee03b
    PUSH dword ptr [ESP + 0x1c]         ; 004ee03f
    PUSH ECX                            ; 004ee043
    LEA EAX,[EBX + 0x20]                ; 004ee044
    PUSH EAX                            ; 004ee047
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004ee048
    PUSH ESI                            ; 004ee04c
    CALL core_gore.cpp_CGore_spawnFlies_FUN_004edf30 ; 004ee04d
        ;   XREF to: 004edf30 (UNCONDITIONAL_CALL)  ; CFlies * core_gore.cpp_CGore_spawnFlies_FUN_004edf30(CGore * this_ptr, CVector3f * position, int gather_count, float spawn_rate, ...)
    MOV EDX,dword ptr [EBX + 0x2c]      ; 004ee052
    MOV dword ptr [EAX + 0x2c],EDX      ; 004ee055
    ADD ESP,0x14                        ; 004ee058
    MOV dword ptr [EAX + 0x2a08],EBX    ; 004ee05b
    POP ESI                             ; 004ee061
    POP EBX                             ; 004ee062
    RET                                 ; 004ee063


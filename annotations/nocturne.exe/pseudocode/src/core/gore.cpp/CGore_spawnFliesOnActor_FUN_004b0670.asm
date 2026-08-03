; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CGore_spawnFliesOnActor_FUN_004b0670(CGore *this_ptr,CDemonActor *actor,int gather_count,float spawn_rate,CVector3f *box_size)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; int              Stack[0xc]:4   gather_count
; float            Stack[0x10]:4   spawn_rate
; CVector3f *      Stack[0x14]:4   box_size
;
; XREF[8]:
;   core_actor.cpp_CDemonActor_spawnFlies_FUN_0040b090 at 0040b0ba
;   core_colonel.cpp_CColonel_processDamage_FUN_0043aa00 at 0043aae6
;   core_gabriela.cpp_CGabriella_processDamage_FUN_004996b0 at 004997ee
;   core_haystack.cpp_CHaystack_processDamage_FUN_004b4000 at 004b4100
;   core_icepick.cpp_CIcePick_processDamage_FUN_004bb4e0 at 004bb626
;   core_scat.cpp_CScat_processDamage_FUN_004fcbd0 at 004fccb6
;   core_stranger.cpp_CStranger_processDamage_FUN_0053e860 at 0053eb19
;   core_svetlana.cpp_CSvetlana_processDamage_FUN_00542e90 at 00542faf
;
; Called Functions:
;   core_gore.cpp_CGore_spawnFlies_FUN_004b0580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0670
        ;   Label: core_gore.cpp_CGore_spawnFliesOnActor_FUN_004b0670
    PUSH ESI                            ; 004b0671
    MOV EBX,dword ptr [ESP + 0x10]      ; 004b0672
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004b0676
    PUSH EDX                            ; 004b067a
    MOV ECX,dword ptr [ESP + 0x18]      ; 004b067b
    PUSH dword ptr [ESP + 0x1c]         ; 004b067f
    PUSH ECX                            ; 004b0683
    LEA EAX,[EBX + 0x20]                ; 004b0684
    PUSH EAX                            ; 004b0687
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004b0688
    PUSH ESI                            ; 004b068c
    CALL core_gore.cpp_CGore_spawnFlies_FUN_004b0580 ; 004b068d
        ;   XREF to: 004b0580 (UNCONDITIONAL_CALL)  ; CFlies * core_gore.cpp_CGore_spawnFlies_FUN_004b0580(CGore * this_ptr, CVector3f * position, int gather_count, float spawn_rate, ...)
    MOV EDX,dword ptr [EBX + 0x2c]      ; 004b0692
    MOV dword ptr [EAX + 0x2c],EDX      ; 004b0695
    ADD ESP,0x14                        ; 004b0698
    MOV dword ptr [EAX + 0x2a00],EBX    ; 004b069b
    POP ESI                             ; 004b06a1
    POP EBX                             ; 004b06a2
    RET                                 ; 004b06a3


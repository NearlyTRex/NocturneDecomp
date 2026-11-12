; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_gabriela_cpp_CGabriella_getFlashlightMinAngle_FUN_004af900(CGabriella *this_ptr)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   core_gabriela.cpp_CGabriella_process_FUN_004ad640 at 004adad8
;   core_gabriela.cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004afa20 at 004afb40
;
; Referenced Globals:
;   undefined4 DAT_007bcc84
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004af900
        ;   Label: core_gabriela.cpp_CGabriella_getFlashlightMinAngle_FUN_004af900
    SUB ESP,0x4                         ; 004af901
    MOV EDX,dword ptr [0x007bcc84]      ; 004af904 | DAT_007bcc84
    MOV EAX,dword ptr [ESP + 0xc]       ; 004af90a
    PUSH EDX                            ; 004af90e
    MOV ECX,dword ptr [EAX + 0x2620]    ; 004af90f
    PUSH ECX                            ; 004af915
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004af916
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004af91b
    TEST EAX,EAX                        ; 004af91e
    JZ 0x004af941                       ; 004af920
        ;   XREF to: 004af941 (CONDITIONAL_JUMP)  ; LAB_004af941
    MOV EBX,dword ptr [EAX + 0x7d4]     ; 004af922
    CMP EBX,0x2                         ; 004af928
    JZ 0x004af932                       ; 004af92b
        ;   XREF to: 004af932 (CONDITIONAL_JUMP)  ; LAB_004af932
    CMP EBX,0x3                         ; 004af92d
    JNZ 0x004af941                      ; 004af930
        ;   XREF to: 004af941 (CONDITIONAL_JUMP)  ; LAB_004af941
    MOV dword ptr [ESP],0xbf860a92      ; 004af932
        ;   Label: LAB_004af932
    MOV EAX,dword ptr [ESP]             ; 004af939
    ADD ESP,0x4                         ; 004af93c
    POP EBX                             ; 004af93f
    RET                                 ; 004af940
    MOV dword ptr [ESP],0xbfc80fc6      ; 004af941
        ;   Label: LAB_004af941
    MOV EAX,dword ptr [ESP]             ; 004af948
    ADD ESP,0x4                         ; 004af94b
    POP EBX                             ; 004af94e
    RET                                 ; 004af94f


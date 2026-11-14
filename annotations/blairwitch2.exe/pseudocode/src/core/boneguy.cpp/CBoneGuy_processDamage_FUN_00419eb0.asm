; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boneguy_cpp_CBoneGuy_processDamage_FUN_00419eb0(CBoneGuy *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CBoneGuy *       Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Called Functions:
;   core_boneguy.cpp_CBoneGuy_explode_FUN_0041a0c0
;   core_enemy.cpp_CEnemy_processDamage_FUN_00488890
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   sound_sndmain.cpp_killSfx_FUN_00551050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00419eb0
        ;   Label: core_boneguy.cpp_CBoneGuy_processDamage_FUN_00419eb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00419eb1
    MOV EDX,dword ptr [EBX + 0x10b08]   ; 00419eb5
    PUSH EDX                            ; 00419ebb
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 00419ebc
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 00419ec1
    MOV EAX,dword ptr [ESP + 0xc]       ; 00419ec4
    FLD float ptr [EAX + 0x4]           ; 00419ec8
    FSUBR float ptr [EBX + 0x25a8]      ; 00419ecb
    FST float ptr [EBX + 0x25a8]        ; 00419ed1
    FLDZ                                ; 00419ed7
    FCOMPP                              ; 00419ed9
    FNSTSW AX                           ; 00419edb
    SAHF                                ; 00419edd
    JC 0x00419f03                       ; 00419ede
        ;   XREF to: 00419f03 (CONDITIONAL_JUMP)  ; LAB_00419f03
    PUSH EBX                            ; 00419ee0
    MOV dword ptr [EBX + 0x25a8],0x3f800000 ; 00419ee1
    CALL core_boneguy.cpp_CBoneGuy_explode_FUN_0041a0c0 ; 00419eeb
        ;   XREF to: 0041a0c0 (UNCONDITIONAL_CALL)  ; void core_boneguy.cpp_CBoneGuy_explode_FUN_0041a0c0(CBoneGuy * this_ptr)
    ADD ESP,0x4                         ; 00419ef0
    MOV ECX,dword ptr [ESP + 0xc]       ; 00419ef3
    PUSH ECX                            ; 00419ef7
    PUSH EBX                            ; 00419ef8
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00488890 ; 00419ef9
        ;   XREF to: 00488890 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00488890(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00419efe
    POP EBX                             ; 00419f01
    RET                                 ; 00419f02
    PUSH 0x1                            ; 00419f03
        ;   Label: LAB_00419f03
    PUSH 0x3                            ; 00419f05
    LEA EAX,[EBX + 0x2b4]               ; 00419f07
    PUSH EAX                            ; 00419f0d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00419f0e
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00419f13
    MOV ECX,dword ptr [ESP + 0xc]       ; 00419f16
    PUSH ECX                            ; 00419f1a
    PUSH EBX                            ; 00419f1b
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00488890 ; 00419f1c
        ;   XREF to: 00488890 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00488890(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00419f21
    POP EBX                             ; 00419f24
    RET                                 ; 00419f25


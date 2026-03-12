; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_curtain_cpp_CCurtain_setup_FUN_00449810(CCurtain *this_ptr)
;
; Parameters:
; CCurtain *       Stack[0x4]:4   this_ptr
; Local Variables:
; int              Stack[-0x6c]:4  local_6c
; SCurtainVertex * Stack[-0x64]:4  local_64
; float            Stack[-0x38]:4  local_38
; int              Stack[-0x30]:4  local_30
; float            Stack[-0x2c]:4  local_2c
; int              Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; SCurtainVertex * Stack[-0x1c]:4  local_1c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00449810
        ;   Label: core_curtain.cpp_CCurtain_setup_FUN_00449810
    PUSH ESI                            ; 00449811
    PUSH EDI                            ; 00449812
    PUSH EBP                            ; 00449813
    MOV EBP,ESP                         ; 00449814
    SUB ESP,0x78                        ; 00449816
    AND ESP,0xfffffff8                  ; 00449819
    MOV EBX,dword ptr [EBP + 0x14]      ; 0044981c
    PUSH EBX                            ; 0044981f
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 00449820
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)


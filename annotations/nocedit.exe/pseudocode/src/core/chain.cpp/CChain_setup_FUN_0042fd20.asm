; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_chain_cpp_CChain_setup_FUN_0042fd20(CChain *this_ptr)
;
; Parameters:
; CChain *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042fd20
        ;   Label: core_chain.cpp_CChain_setup_FUN_0042fd20
    PUSH ESI                            ; 0042fd21
    PUSH EDI                            ; 0042fd22
    PUSH EBP                            ; 0042fd23
    SUB ESP,0x2c                        ; 0042fd24
    MOV EBP,dword ptr [ESP + 0x40]      ; 0042fd27
    PUSH EBP                            ; 0042fd2b
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 0042fd2c
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_wateract_cpp_CWaterActor_setup_FUN_005ea9f0(CWaterActor *this_ptr)
;
; Parameters:
; CWaterActor *    Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
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

    PUSH EBX                            ; 005ea9f0
        ;   Label: core_wateract.cpp_CWaterActor_setup_FUN_005ea9f0
    PUSH ESI                            ; 005ea9f1
    PUSH EDI                            ; 005ea9f2
    PUSH EBP                            ; 005ea9f3
    MOV EBP,ESP                         ; 005ea9f4
    SUB ESP,0x40                        ; 005ea9f6
    AND ESP,0xfffffff8                  ; 005ea9f9
    MOV EDI,dword ptr [EBP + 0x14]      ; 005ea9fc
    PUSH EDI                            ; 005ea9ff
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 005eaa00
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_manpuz.cpp_CMansionPuzzleCircle_setup_FUN_00508a70(CMansionPuzzleCircle * this_ptr)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x1dc]:1  local_1dc
; undefined1       Stack[-0x1ac]:1  local_1ac
; undefined1       Stack[-0x17c]:1  local_17c
; undefined4       Stack[-0x14c]:4  local_14c
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0x144]:4  local_144
; undefined1       Stack[-0x140]:1  local_140
; undefined1       Stack[-0x134]:1  local_134
; undefined1       Stack[-0x128]:1  local_128
; undefined1       Stack[-0x11c]:1  local_11c
; undefined1       Stack[-0xec]:1  local_ec
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined1       Stack[-0x7c]:1  local_7c
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined1       Stack[-0x64]:1  local_64
; undefined1       Stack[-0x58]:1  local_58
; undefined1       Stack[-0x4c]:1  local_4c
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
; undefined1       Stack[-0x10]:1  local_10
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00508a70
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_setup_FUN_00508a70
    PUSH ESI                            ; 00508a71
    PUSH EDI                            ; 00508a72
    PUSH EBP                            ; 00508a73
    MOV EBP,ESP                         ; 00508a74
    SUB ESP,0x1cc                       ; 00508a76
    SUB EBP,0x7e                        ; 00508a7c
    MOV EDX,dword ptr [EBP + 0x92]      ; 00508a7f
    PUSH EDX                            ; 00508a85
    MOV EBX,dword ptr [EBP + 0x92]      ; 00508a86
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 00508a8c
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)


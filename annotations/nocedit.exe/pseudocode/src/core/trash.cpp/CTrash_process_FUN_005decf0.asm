; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_trash_cpp_CTrash_process_FUN_005decf0(CTrash *this_ptr,float delta_time)
;
; Parameters:
; CTrash *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x1bc]:4  local_1bc
; undefined8       Stack[-0x1b8]:8  local_1b8
; undefined4       Stack[-0x1b0]:4  local_1b0
; undefined4       Stack[-0x1ac]:4  local_1ac
; undefined1       Stack[-0x1a8]:1  local_1a8
; undefined1       Stack[-0x178]:1  local_178
; undefined1       Stack[-0x148]:1  local_148
; undefined1       Stack[-0x118]:1  local_118
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
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
; undefined1       Stack[-0x88]:1  local_88
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined1       Stack[-0x70]:1  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
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
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_hero.cpp_FUN_004f2220
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005decf0
        ;   Label: core_trash.cpp_CTrash_process_FUN_005decf0
    PUSH ESI                            ; 005decf1
    PUSH EDI                            ; 005decf2
    PUSH EBP                            ; 005decf3
    MOV EBP,ESP                         ; 005decf4
    SUB ESP,0x1a8                       ; 005decf6
    AND ESP,0xfffffff8                  ; 005decfc
    MOV EBX,dword ptr [EBP + 0x14]      ; 005decff
    LEA ESI,[EBX + 0x20]                ; 005ded02
    PUSH 0x42c80000                     ; 005ded05
    PUSH ESI                            ; 005ded0a
    CALL core_hero.cpp_FUN_004f2220     ; 005ded0b
        ;   XREF to: 004f2220 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004f2220()
    ADD ESP,0x8                         ; 005ded10
    TEST EAX,EAX                        ; 005ded13
    JZ 0x005df505                       ; 005ded15
        ;   XREF to: 005df505 (CONDITIONAL_JUMP)  ; LAB_005df505
    PUSH 0x3d4ccccd                     ; 005ded1b
    PUSH 0xbd4ccccd                     ; 005ded20
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 005ded25
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV ESP,EBP                         ; 005df4fe
        ;   Label: LAB_005df4fe
    POP EBP                             ; 005df500
    POP EDI                             ; 005df501
    POP ESI                             ; 005df502
    POP EBX                             ; 005df503
    RET                                 ; 005df504
    ADD EBX,0x2d4                       ; 005df505
        ;   Label: LAB_005df505
    PUSH 0x42c80000                     ; 005df50b
    PUSH EBX                            ; 005df510
    CALL core_hero.cpp_FUN_004f2220     ; 005df511
        ;   XREF to: 004f2220 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004f2220()
    ADD ESP,0x8                         ; 005df516
    TEST EAX,EAX                        ; 005df519
    JNZ 0x005df4fe                      ; 005df51b
        ;   XREF to: 005df4fe (CONDITIONAL_JUMP)  ; LAB_005df4fe
    MOV EAX,dword ptr [EBX]             ; 005df51d
    MOV dword ptr [ESI],EAX             ; 005df51f
    MOV EAX,dword ptr [EBX + 0x4]       ; 005df521
    MOV dword ptr [ESI + 0x4],EAX       ; 005df524
    MOV EAX,dword ptr [EBX + 0x8]       ; 005df527
    MOV dword ptr [ESI + 0x8],EAX       ; 005df52a
    MOV ESP,EBP                         ; 005df52d
    POP EBP                             ; 005df52f
    POP EDI                             ; 005df530
    POP ESI                             ; 005df531
    POP EBX                             ; 005df532
    RET                                 ; 005df533


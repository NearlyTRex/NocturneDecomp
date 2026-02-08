; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_shotgun_cpp_CShotgun_FUN_005887a0(CShotgun *this_ptr)
;
; Parameters:
; CShotgun *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x64]:1  local_64
; undefined1       Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined1       Stack[-0x18]:1  local_18
; undefined4       Stack[-0xc]:4  local_c
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005887a0
        ;   Label: core_shotgun.cpp_CShotgun_FUN_005887a0
    PUSH EBP                            ; 005887a1
    SUB ESP,0x5c                        ; 005887a2
    MOV EBX,dword ptr [ESP + 0x68]      ; 005887a5
    CMP dword ptr [EBX + 0x568],0x0     ; 005887a9
    JG 0x005887b8                       ; 005887b0
        ;   XREF to: 005887b8 (CONDITIONAL_JUMP)  ; LAB_005887b8
    ADD ESP,0x5c                        ; 005887b2
    POP EBP                             ; 005887b5
    POP EBX                             ; 005887b6
    RET                                 ; 005887b7
    PUSH EDI                            ; 005887b8
        ;   Label: LAB_005887b8
    PUSH ESI                            ; 005887b9
    PUSH 0x3ec90fdb                     ; 005887ba
    MOV ECX,0x40a00000                  ; 005887bf
    MOV ESI,0x40c00000                  ; 005887c4
    MOV EDI,0xc0c00000                  ; 005887c9
    PUSH 0xbec90fdb                     ; 005887ce
    MOV dword ptr [ESP + 0x44],ECX      ; 005887d3
    MOV dword ptr [ESP + 0x48],ESI      ; 005887d7
    MOV dword ptr [ESP + 0x4c],EDI      ; 005887db
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 005887df
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)


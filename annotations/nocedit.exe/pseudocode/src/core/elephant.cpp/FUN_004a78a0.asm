; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_elephant_cpp_FUN_004a78a0(void)
;
; Local Variables:
; undefined1       Stack[-0x6c]:1  local_6c
; undefined1       Stack[-0x44]:1  local_44
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined1       Stack[-0x20]:1  local_20
; undefined4       Stack[-0x14]:4  local_14
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a78a0
        ;   Label: core_elephant.cpp_FUN_004a78a0
    PUSH ESI                            ; 004a78a1
    PUSH EDI                            ; 004a78a2
    PUSH EBP                            ; 004a78a3
    SUB ESP,0x5c                        ; 004a78a4
    MOV EBX,dword ptr [ESP + 0x70]      ; 004a78a7
    PUSH 0x3ec90fdb                     ; 004a78ab
    MOV EDX,0x40a00000                  ; 004a78b0
    MOV ECX,0x40c00000                  ; 004a78b5
    MOV ESI,0xc0c00000                  ; 004a78ba
    PUSH 0xbec90fdb                     ; 004a78bf
    MOV dword ptr [ESP + 0x3c],EDX      ; 004a78c4
    MOV dword ptr [ESP + 0x40],ECX      ; 004a78c8
    MOV dword ptr [ESP + 0x44],ESI      ; 004a78cc
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004a78d0
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)


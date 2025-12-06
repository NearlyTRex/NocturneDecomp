; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_fire.cpp_CGunFlame_FUN_004c4db0(CGunFlame * this_ptr)
;
; Parameters:
; CGunFlame *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x6c]:1  local_6c
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined1       Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_FUN_004c8ef0 at 004c8f20
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c4db0
        ;   Label: core_fire.cpp_CGunFlame_FUN_004c4db0
    PUSH ESI                            ; 004c4db1
    SUB ESP,0x64                        ; 004c4db2
    MOV EBX,dword ptr [ESP + 0x70]      ; 004c4db5
    MOV EDX,dword ptr [ESP + 0x74]      ; 004c4db9
    MOV ESI,dword ptr [ESP + 0x78]      ; 004c4dbd
    LEA EAX,[EBX + 0x4]                 ; 004c4dc1
    CMP EAX,EDX                         ; 004c4dc4
    JZ 0x004c4dd8                       ; 004c4dc6 | LAB_004c4dd8
        ;   XREF to: 004c4dd8 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EDX]             ; 004c4dc8
    MOV dword ptr [EAX],ECX             ; 004c4dca
    MOV ECX,dword ptr [EDX + 0x4]       ; 004c4dcc
    MOV dword ptr [EAX + 0x4],ECX       ; 004c4dcf
    MOV ECX,dword ptr [EDX + 0x8]       ; 004c4dd2
    MOV dword ptr [EAX + 0x8],ECX       ; 004c4dd5
    PUSH 0x3f800000                     ; 004c4dd8
        ;   Label: LAB_004c4dd8
    PUSH 0x3f666666                     ; 004c4ddd
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004c4de2 | float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)


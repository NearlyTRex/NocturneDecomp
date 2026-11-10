; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_00493cf0(undefined4 *param_1)
;
; Local Variables:
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_process_FUN_0049c430 at 0049c620
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00493cf0
        ;   Label: core_fire.cpp_FUN_00493cf0
    PUSH ESI                            ; 00493cf1
    PUSH EDI                            ; 00493cf2
    SUB ESP,0x18                        ; 00493cf3
    MOV EBX,dword ptr [ESP + 0x28]      ; 00493cf6
    MOV EDX,dword ptr [EBX + 0x10]      ; 00493cfa
    TEST EDX,EDX                        ; 00493cfd
    JNZ 0x00493d08                      ; 00493cff
        ;   XREF to: 00493d08 (CONDITIONAL_JUMP)  ; LAB_00493d08
    ADD ESP,0x18                        ; 00493d01
        ;   Label: LAB_00493d01
    POP EDI                             ; 00493d04
    POP ESI                             ; 00493d05
    POP EBX                             ; 00493d06
    RET                                 ; 00493d07
    LEA EAX,[EBX + 0x24]                ; 00493d08
        ;   Label: LAB_00493d08
    PUSH EAX                            ; 00493d0b
    PUSH EDX                            ; 00493d0c
    LEA ESI,[ESP + 0x8]                 ; 00493d0d
    LEA EDI,[ESP + 0x14]                ; 00493d11
    CALL core_actor.cpp_FUN_00408d70    ; 00493d15
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x8]                 ; 00493d1a
    ADD ESP,0x8                         ; 00493d1e
    LEA EAX,[ESP + 0xc]                 ; 00493d21
    MOVSD ES:EDI,ESI                    ; 00493d25
    MOVSD ES:EDI,ESI                    ; 00493d26
    MOVSD ES:EDI,ESI                    ; 00493d27
    CMP EBX,EAX                         ; 00493d28
    JZ 0x00493d01                       ; 00493d2a
        ;   XREF to: 00493d01 (CONDITIONAL_JUMP)  ; LAB_00493d01
    MOV EAX,dword ptr [ESP + 0xc]       ; 00493d2c
    MOV dword ptr [EBX],EAX             ; 00493d30
    MOV EAX,dword ptr [ESP + 0x10]      ; 00493d32
    MOV dword ptr [EBX + 0x4],EAX       ; 00493d36
    MOV EAX,dword ptr [ESP + 0x14]      ; 00493d39
    MOV dword ptr [EBX + 0x8],EAX       ; 00493d3d
    ADD ESP,0x18                        ; 00493d40
    POP EDI                             ; 00493d43
    POP ESI                             ; 00493d44
    POP EBX                             ; 00493d45
    RET                                 ; 00493d46


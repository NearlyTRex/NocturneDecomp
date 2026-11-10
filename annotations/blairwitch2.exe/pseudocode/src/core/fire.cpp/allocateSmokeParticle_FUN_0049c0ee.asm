; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined * core_fire_cpp_allocateSmokeParticle_FUN_0049c0ee(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c3f8dc
;
; *****************************************************************************

section .text

    MOV EAX,EAX                         ; 0049c0ee
        ;   Label: core_fire.cpp_allocateSmokeParticle_FUN_0049c0ee
    MOV ECX,dword ptr [0x01c3f8dc]      ; 0049c0f0 | DAT_01c3f8dc
    LEA EAX,[ECX*0x4 + 0x0]             ; 0049c0f6
    SUB EAX,ECX                         ; 0049c0fd
    SHL EAX,0x2                         ; 0049c0ff
    SUB EAX,ECX                         ; 0049c102
    SHL EAX,0x2                         ; 0049c104
    INC ECX                             ; 0049c107
    ADD EAX,0x1c3f8e0                   ; 0049c108
    CMP ECX,0x800                       ; 0049c10d
    JL 0x0049c117                       ; 0049c113
        ;   XREF to: 0049c117 (CONDITIONAL_JUMP)  ; LAB_0049c117
    XOR ECX,ECX                         ; 0049c115
    MOV dword ptr [0x01c3f8dc],ECX      ; 0049c117 | DAT_01c3f8dc
        ;   Label: LAB_0049c117
    RET                                 ; 0049c11d


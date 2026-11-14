; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_crc32ProcessBuffer_FUN_0040d140(uint *crc_state,byte *buffer,int buffer_length)
;
; Parameters:
; uint *           Stack[0x4]:4   crc_state
; byte *           Stack[0x8]:4   buffer
; int              Stack[0xc]:4   buffer_length
;
; XREF[2]:
;   core_actor.cpp_crc32ProcessInt_FUN_0040d180 at 0040d18c
;   core_actor.cpp_crc32ProcessVector_FUN_0040d1a0 at 0040d1ac
;
; Called Functions:
;   core_actor.cpp_crc32ProcessByte_FUN_0040d060
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d140
        ;   Label: core_actor.cpp_crc32ProcessBuffer_FUN_0040d140
    PUSH ESI                            ; 0040d141
    PUSH EDI                            ; 0040d142
    MOV EDI,dword ptr [ESP + 0x10]      ; 0040d143
    MOV ESI,dword ptr [ESP + 0x18]      ; 0040d147
    MOV EBX,dword ptr [ESP + 0x14]      ; 0040d14b
    TEST ESI,ESI                        ; 0040d14f
    JLE 0x0040d170                      ; 0040d151
        ;   XREF to: 0040d170 (CONDITIONAL_JUMP)  ; LAB_0040d170
    XOR EAX,EAX                         ; 0040d153
        ;   Label: LAB_0040d153
    MOV AL,byte ptr [EBX]               ; 0040d155
    PUSH EAX                            ; 0040d157
    PUSH EDI                            ; 0040d158
    INC EBX                             ; 0040d159
    DEC ESI                             ; 0040d15a
    CALL core_actor.cpp_crc32ProcessByte_FUN_0040d060 ; 0040d15b
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_crc32ProcessByte_FUN_0040d060(uint * crc_state, byte input_byte)
    ADD ESP,0x8                         ; 0040d160
    TEST ESI,ESI                        ; 0040d163
    JG 0x0040d153                       ; 0040d165
        ;   XREF to: 0040d153 (CONDITIONAL_JUMP)  ; LAB_0040d153
    LEA EAX,[EAX]                       ; 0040d167
    LEA EDX,[EDX]                       ; 0040d16d
    POP EDI                             ; 0040d170
        ;   Label: LAB_0040d170
    POP ESI                             ; 0040d171
    POP EBX                             ; 0040d172
    RET                                 ; 0040d173


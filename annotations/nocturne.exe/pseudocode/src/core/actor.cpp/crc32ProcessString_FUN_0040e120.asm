; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_crc32ProcessString_FUN_0040e120(uint *crc_state,char *string)
;
; Parameters:
; uint *           Stack[0x4]:4   crc_state
; char *           Stack[0x8]:4   string
;
; XREF[2]:
;   core_actor.cpp_FUN_0040b0d0 at 0040b0dc
;   core_charactr.cpp_FUN_00429f70 at 00429fac
;
; Called Functions:
;   core_actor.cpp_crc32ProcessByte_FUN_0040dfc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e120
        ;   Label: core_actor.cpp_crc32ProcessString_FUN_0040e120
    PUSH ESI                            ; 0040e121
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040e122
    MOV AH,byte ptr [EBX]               ; 0040e126
    MOV ESI,dword ptr [ESP + 0xc]       ; 0040e128
    TEST AH,AH                          ; 0040e12c
    JZ 0x0040e150                       ; 0040e12e
        ;   XREF to: 0040e150 (CONDITIONAL_JUMP)  ; LAB_0040e150
    XOR EAX,EAX                         ; 0040e130
        ;   Label: LAB_0040e130
    MOV AL,byte ptr [EBX]               ; 0040e132
    PUSH EAX                            ; 0040e134
    PUSH ESI                            ; 0040e135
    INC EBX                             ; 0040e136
    CALL core_actor.cpp_crc32ProcessByte_FUN_0040dfc0 ; 0040e137
        ;   XREF to: 0040dfc0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_crc32ProcessByte_FUN_0040dfc0(uint * crc_state, byte input_byte)
    MOV DL,byte ptr [EBX]               ; 0040e13c
    ADD ESP,0x8                         ; 0040e13e
    TEST DL,DL                          ; 0040e141
    JNZ 0x0040e130                      ; 0040e143
        ;   XREF to: 0040e130 (CONDITIONAL_JUMP)  ; LAB_0040e130
    LEA EAX,[EAX]                       ; 0040e145
    LEA EDX,[EDX]                       ; 0040e14b
    MOV EBX,EBX                         ; 0040e14e
    POP ESI                             ; 0040e150
        ;   Label: LAB_0040e150
    POP EBX                             ; 0040e151
    RET                                 ; 0040e152


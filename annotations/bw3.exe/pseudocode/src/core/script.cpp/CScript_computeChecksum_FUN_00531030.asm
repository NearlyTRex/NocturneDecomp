; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_script_cpp_CScript_computeChecksum_FUN_00531030(CScript *this_ptr)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_script.cpp_CScript_loadState_FUN_00530ad0 at 00530dc7
;   core_script.cpp_CScript_saveState_FUN_00530e00 at 0053100f
;
; Called Functions:
;   core_actor.cpp_crc32ProcessByte_FUN_0040d060
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00531030
        ;   Label: core_script.cpp_CScript_computeChecksum_FUN_00531030
    PUSH ESI                            ; 00531031
    PUSH EDI                            ; 00531032
    PUSH EBP                            ; 00531033
    SUB ESP,0x4                         ; 00531034
    MOV EBP,dword ptr [ESP + 0x18]      ; 00531037
    XOR EDX,EDX                         ; 0053103b
    MOV dword ptr [ESP],EDX             ; 0053103d
    MOV ECX,dword ptr [EBP + 0x2c]      ; 00531040
    XOR EDI,EDI                         ; 00531043
    TEST ECX,ECX                        ; 00531045
    JLE 0x0053107b                      ; 00531047
        ;   XREF to: 0053107b (CONDITIONAL_JUMP)  ; LAB_0053107b
    XOR ESI,ESI                         ; 00531049
    MOV EAX,dword ptr [EBP + 0x30]      ; 0053104b
        ;   Label: LAB_0053104b
    MOV EBX,dword ptr [ESI + EAX*0x1 + 0x4] ; 0053104e
    CMP byte ptr [EBX],0x0              ; 00531052
    JZ 0x00531070                       ; 00531055
        ;   XREF to: 00531070 (CONDITIONAL_JUMP)  ; LAB_00531070
    XOR EAX,EAX                         ; 00531057
        ;   Label: LAB_00531057
    MOV AL,byte ptr [EBX]               ; 00531059
    PUSH EAX                            ; 0053105b
    LEA EAX,[ESP + 0x4]                 ; 0053105c
    PUSH EAX                            ; 00531060
    INC EBX                             ; 00531061
    CALL core_actor.cpp_crc32ProcessByte_FUN_0040d060 ; 00531062
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_crc32ProcessByte_FUN_0040d060(uint * crc_state, byte input_byte)
    MOV DL,byte ptr [EBX]               ; 00531067
    ADD ESP,0x8                         ; 00531069
    TEST DL,DL                          ; 0053106c
    JNZ 0x00531057                      ; 0053106e
        ;   XREF to: 00531057 (CONDITIONAL_JUMP)  ; LAB_00531057
    INC EDI                             ; 00531070
        ;   Label: LAB_00531070
    MOV EBX,dword ptr [EBP + 0x2c]      ; 00531071
    ADD ESI,0x8                         ; 00531074
    CMP EDI,EBX                         ; 00531077
    JL 0x0053104b                       ; 00531079
        ;   XREF to: 0053104b (CONDITIONAL_JUMP)  ; LAB_0053104b
    MOV EAX,dword ptr [ESP]             ; 0053107b
        ;   Label: LAB_0053107b
    ADD ESP,0x4                         ; 0053107e
    POP EBP                             ; 00531081
    POP EDI                             ; 00531082
    POP ESI                             ; 00531083
    POP EBX                             ; 00531084
    RET                                 ; 00531085


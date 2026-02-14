; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl uint __cdecl core_script_cpp_CScript_computeChecksum_FUN_00560d80(CScript *this_ptr)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_script.cpp_CScript_loadState_FUN_00560820 at 00560b17
;   core_script.cpp_CScript_saveState_FUN_00560b50 at 00560d5f
;
; Called Functions:
;   core_actor.cpp_crc32ProcessByte_FUN_0040ce30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00560d80
        ;   Label: core_script.cpp_CScript_computeChecksum_FUN_00560d80
    PUSH ESI                            ; 00560d81
    PUSH EDI                            ; 00560d82
    PUSH EBP                            ; 00560d83
    SUB ESP,0x4                         ; 00560d84
    MOV EBP,dword ptr [ESP + 0x18]      ; 00560d87
    XOR EDX,EDX                         ; 00560d8b
    MOV dword ptr [ESP],EDX             ; 00560d8d
    MOV ECX,dword ptr [EBP + 0x30]      ; 00560d90
    XOR EDI,EDI                         ; 00560d93
    TEST ECX,ECX                        ; 00560d95
    JLE 0x00560dcb                      ; 00560d97
        ;   XREF to: 00560dcb (CONDITIONAL_JUMP)  ; LAB_00560dcb
    XOR ESI,ESI                         ; 00560d99
    MOV EAX,dword ptr [EBP + 0x34]      ; 00560d9b
        ;   Label: LAB_00560d9b
    MOV EBX,dword ptr [ESI + EAX*0x1 + 0x4] ; 00560d9e
    CMP byte ptr [EBX],0x0              ; 00560da2
    JZ 0x00560dc0                       ; 00560da5
        ;   XREF to: 00560dc0 (CONDITIONAL_JUMP)  ; LAB_00560dc0
    XOR EAX,EAX                         ; 00560da7
        ;   Label: LAB_00560da7
    MOV AL,byte ptr [EBX]               ; 00560da9
    PUSH EAX                            ; 00560dab
    LEA EAX,[ESP + 0x4]                 ; 00560dac
    PUSH EAX                            ; 00560db0
    INC EBX                             ; 00560db1
    CALL core_actor.cpp_crc32ProcessByte_FUN_0040ce30 ; 00560db2
        ;   XREF to: 0040ce30 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_crc32ProcessByte_FUN_0040ce30(uint * crc_state, byte input_byte)
    MOV DL,byte ptr [EBX]               ; 00560db7
    ADD ESP,0x8                         ; 00560db9
    TEST DL,DL                          ; 00560dbc
    JNZ 0x00560da7                      ; 00560dbe
        ;   XREF to: 00560da7 (CONDITIONAL_JUMP)  ; LAB_00560da7
    INC EDI                             ; 00560dc0
        ;   Label: LAB_00560dc0
    MOV EBX,dword ptr [EBP + 0x30]      ; 00560dc1
    ADD ESI,0x8                         ; 00560dc4
    CMP EDI,EBX                         ; 00560dc7
    JL 0x00560d9b                       ; 00560dc9
        ;   XREF to: 00560d9b (CONDITIONAL_JUMP)  ; LAB_00560d9b
    MOV EAX,dword ptr [ESP]             ; 00560dcb
        ;   Label: LAB_00560dcb
    ADD ESP,0x4                         ; 00560dce
    POP EBP                             ; 00560dd1
    POP EDI                             ; 00560dd2
    POP ESI                             ; 00560dd3
    POP EBX                             ; 00560dd4
    RET                                 ; 00560dd5


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gore_cpp_CGore_load_FUN_004cf010(CGore *this_ptr,_FILE *file_handle)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined        Stack[-0x110]:1  local_110
;
; XREF[2]:
;   core_game.cpp_FUN_004bdfb0 at 004be6c0
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_004f5cc0 at 004f6316
;
; Referenced Globals:
;   undefined4 DAT_005c4791
;   undefined4 DAT_005c4795
;   undefined4 DAT_01d276b8
;   undefined4 DAT_01d4a940
;
; Called Functions:
;   core_gore.cpp_FUN_004cdb50
;   core_gore.cpp_FUN_004ce090
;   crt_stdio.c_fgets_FUN_005a3f00
;   crt_stdio.c_fscanf_FUN_005a3230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cf010
        ;   Label: core_gore.cpp_CGore_load_FUN_004cf010
    PUSH ESI                            ; 004cf011
    PUSH EDI                            ; 004cf012
    PUSH EBP                            ; 004cf013
    SUB ESP,0x100                       ; 004cf014
    MOV EDI,dword ptr [ESP + 0x118]     ; 004cf01a
    PUSH EDI                            ; 004cf021
    PUSH 0xff                           ; 004cf022
    LEA EBX,[ESP + 0x8]                 ; 004cf027
    PUSH EBX                            ; 004cf02b
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 004cf02c
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 004cf031
    PUSH 0x1d4a940                      ; 004cf034 | DAT_01d4a940
    PUSH 0x5c4791                       ; 004cf039 | DAT_005c4791
    PUSH EDI                            ; 004cf03e
    XOR ESI,ESI                         ; 004cf03f
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004cf041
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    MOV EDX,dword ptr [0x01d4a940]      ; 004cf046 | DAT_01d4a940
    ADD ESP,0xc                         ; 004cf04c
    TEST EDX,EDX                        ; 004cf04f
    JLE 0x004cf070                      ; 004cf051
        ;   XREF to: 004cf070 (CONDITIONAL_JUMP)  ; LAB_004cf070
    MOV EBX,0x1d4a944                   ; 004cf053
    PUSH EDI                            ; 004cf058
        ;   Label: LAB_004cf058
    PUSH EBX                            ; 004cf059
    INC ESI                             ; 004cf05a
    CALL core_gore.cpp_FUN_004ce090     ; 004cf05b
        ;   XREF to: 004ce090 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_FUN_004ce090()
    MOV ECX,dword ptr [0x01d4a940]      ; 004cf060 | DAT_01d4a940
    ADD ESP,0x8                         ; 004cf066
    ADD EBX,0x2c                        ; 004cf069
    CMP ESI,ECX                         ; 004cf06c
    JL 0x004cf058                       ; 004cf06e
        ;   XREF to: 004cf058 (CONDITIONAL_JUMP)  ; LAB_004cf058
    PUSH 0x1d276b8                      ; 004cf070 | DAT_01d276b8
        ;   Label: LAB_004cf070
    PUSH 0x5c4795                       ; 004cf075 | DAT_005c4795
    PUSH EDI                            ; 004cf07a
    XOR ESI,ESI                         ; 004cf07b
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004cf07d
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    MOV EBX,dword ptr [0x01d276b8]      ; 004cf082 | DAT_01d276b8
    ADD ESP,0xc                         ; 004cf088
    TEST EBX,EBX                        ; 004cf08b
    JLE 0x004cf0b0                      ; 004cf08d
        ;   XREF to: 004cf0b0 (CONDITIONAL_JUMP)  ; LAB_004cf0b0
    MOV EBX,0x1d276bc                   ; 004cf08f
    PUSH EDI                            ; 004cf094
        ;   Label: LAB_004cf094
    PUSH EBX                            ; 004cf095
    INC ESI                             ; 004cf096
    CALL core_gore.cpp_FUN_004cdb50     ; 004cf097
        ;   XREF to: 004cdb50 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_FUN_004cdb50()
    MOV EBP,dword ptr [0x01d276b8]      ; 004cf09c | DAT_01d276b8
    ADD ESP,0x8                         ; 004cf0a2
    ADD EBX,0x48                        ; 004cf0a5
    CMP ESI,EBP                         ; 004cf0a8
    JL 0x004cf094                       ; 004cf0aa
        ;   XREF to: 004cf094 (CONDITIONAL_JUMP)  ; LAB_004cf094
    LEA EAX,[EAX]                       ; 004cf0ac
    ADD ESP,0x100                       ; 004cf0b0
        ;   Label: LAB_004cf0b0
    POP EBP                             ; 004cf0b6
    POP EDI                             ; 004cf0b7
    POP ESI                             ; 004cf0b8
    POP EBX                             ; 004cf0b9
    RET                                 ; 004cf0ba


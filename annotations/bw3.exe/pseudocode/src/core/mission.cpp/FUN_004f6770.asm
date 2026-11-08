; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004f6770(undefined4 param_1,undefined4 param_2,char *param_3,char *param_4)
;
; Local Variables:
; undefined        Stack[-0xdc]:1  local_dc
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0040b930 at 0040b956
;
; Referenced Globals:
;   TerminatedCString s_unknown_005c88d9
;   TerminatedCString s_unknown_005c88e3
;   TerminatedCString s_core_mission_cpp_005c88ed
;   TerminatedCString s_Error_reading_actor_poin_005c8901
;   TerminatedCString s_anon_005c8939
;   TerminatedCString s_WARNING_Can_t_find_actor_005c893f
;   undefined4 DAT_005c8999
;   undefined4 DAT_005fb140
;   TerminatedCString s_none_00600670
;   undefined4 DAT_006074b8
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_0047cf40
;   FUN_004e4330
;   FUN_004f6e90
;   FUN_005a3230
;   FUN_005a3260
;   FUN_005a32b0
;   FUN_005a3480
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f6770
        ;   Label: FUN_004f6770
    PUSH ESI                            ; 004f6771
    PUSH EDI                            ; 004f6772
    PUSH EBP                            ; 004f6773
    SUB ESP,0xcc                        ; 004f6774
    MOV EBX,dword ptr [ESP + 0xe4]      ; 004f677a
    MOV EDI,dword ptr [ESP + 0xe8]      ; 004f6781
    MOV EBP,dword ptr [ESP + 0xec]      ; 004f6788
    TEST EDI,EDI                        ; 004f678f
    JNZ 0x004f6798                      ; 004f6791
        ;   XREF to: 004f6798 (CONDITIONAL_JUMP)  ; LAB_004f6798
    MOV EDI,0x5c88d9                    ; 004f6793 | = "(unknown)"
    TEST EBP,EBP                        ; 004f6798
        ;   Label: LAB_004f6798
    JNZ 0x004f67a1                      ; 004f679a
        ;   XREF to: 004f67a1 (CONDITIONAL_JUMP)  ; LAB_004f67a1
    MOV EBP,0x5c88e3                    ; 004f679c | = "(unknown)"
    PUSH EBX                            ; 004f67a1
        ;   Label: LAB_004f67a1
    CALL FUN_005a32b0                   ; 004f67a2
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a32b0()
    MOV EDX,EAX                         ; 004f67a7
    ADD ESP,0x4                         ; 004f67a9
    INC DL                              ; 004f67ac
    AND EDX,0xff                        ; 004f67ae
    TEST byte ptr [EDX + 0x6074b8],0x2  ; 004f67b4 | DAT_006074b8
    JNZ 0x004f67a1                      ; 004f67bb
        ;   XREF to: 004f67a1 (CONDITIONAL_JUMP)  ; LAB_004f67a1
    CMP EAX,0x22                        ; 004f67bd
    JNZ 0x004f689a                      ; 004f67c0
        ;   XREF to: 004f689a (CONDITIONAL_JUMP)  ; LAB_004f689a
    PUSH EBX                            ; 004f67c6
    CALL FUN_005a32b0                   ; 004f67c7
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a32b0()
    ADD ESP,0x4                         ; 004f67cc
    CMP EAX,0x22                        ; 004f67cf
    JNZ 0x004f6818                      ; 004f67d2
        ;   XREF to: 004f6818 (CONDITIONAL_JUMP)  ; LAB_004f6818
    PUSH EBP                            ; 004f67d4 | = "(unknown)"
        ;   Label: LAB_004f67d4
    PUSH EDI                            ; 004f67d5 | = "(unknown)"
    MOV EAX,0x5c88ed                    ; 004f67d6 | = "..\\core\\mission.cpp"
    MOV EDX,0x234                       ; 004f67db
    PUSH 0x5c8901                       ; 004f67e0 | = "Error reading actor pointer.\nOwner: ..."
    MOV [0x01d71de0],EAX                ; 004f67e5 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 004f67ea | DAT_01d71de4
    CALL FUN_004e4330                   ; 004f67f0
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0xc                         ; 004f67f5
    PUSH EBX                            ; 004f67f8
        ;   Label: LAB_004f67f8
    CALL FUN_005a32b0                   ; 004f67f9
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a32b0()
    ADD ESP,0x4                         ; 004f67fe
    CMP EAX,-0x1                        ; 004f6801
    JZ 0x004f67d4                       ; 004f6804
        ;   XREF to: 004f67d4 (CONDITIONAL_JUMP)  ; LAB_004f67d4
    CMP EAX,0xa                         ; 004f6806
    JNZ 0x004f67f8                      ; 004f6809
        ;   XREF to: 004f67f8 (CONDITIONAL_JUMP)  ; LAB_004f67f8
    MOV EAX,ESI                         ; 004f680b
    ADD ESP,0xcc                        ; 004f680d
    POP EBP                             ; 004f6813
    POP EDI                             ; 004f6814
    POP ESI                             ; 004f6815
    POP EBX                             ; 004f6816
    RET                                 ; 004f6817
    PUSH EBX                            ; 004f6818
        ;   Label: LAB_004f6818
    PUSH EAX                            ; 004f6819
    CALL FUN_005a3480                   ; 004f681a
        ;   XREF to: 005a3480 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3480()
    ADD ESP,0x8                         ; 004f681f
    MOV EAX,ESP                         ; 004f6822
    PUSH EAX                            ; 004f6824
    PUSH 0x5c8939                       ; 004f6825 | = "%[^\"]"
    PUSH EBX                            ; 004f682a
    CALL FUN_005a3230                   ; 004f682b
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0xc                         ; 004f6830
    CMP EAX,0x1                         ; 004f6833
    JNZ 0x004f67d4                      ; 004f6836
        ;   XREF to: 004f67d4 (CONDITIONAL_JUMP)  ; LAB_004f67d4
    PUSH 0x600670                       ; 004f6838 | = "(none)"
    LEA EAX,[ESP + 0x4]                 ; 004f683d
    PUSH EAX                            ; 004f6841
    CALL FUN_005a3260                   ; 004f6842
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 004f6847
    TEST EAX,EAX                        ; 004f684a
    JNZ 0x004f6864                      ; 004f684c
        ;   XREF to: 004f6864 (CONDITIONAL_JUMP)  ; LAB_004f6864
    XOR ESI,ESI                         ; 004f684e
    PUSH EBX                            ; 004f6850
        ;   Label: LAB_004f6850
    CALL FUN_005a32b0                   ; 004f6851
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a32b0()
    ADD ESP,0x4                         ; 004f6856
    CMP EAX,0x22                        ; 004f6859
    JNZ 0x004f67d4                      ; 004f685c
        ;   XREF to: 004f67d4 (CONDITIONAL_JUMP)  ; LAB_004f67d4
    JMP 0x004f67f8                      ; 004f6862
        ;   XREF to: 004f67f8 (UNCONDITIONAL_JUMP)  ; LAB_004f67f8
    MOV EAX,ESP                         ; 004f6864
        ;   Label: LAB_004f6864
    PUSH EAX                            ; 004f6866
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004f6867
    PUSH EDX                            ; 004f686e
    CALL FUN_004f6e90                   ; 004f686f
        ;   XREF to: 004f6e90 (UNCONDITIONAL_CALL)  ; undefined FUN_004f6e90()
    ADD ESP,0x8                         ; 004f6874
    MOV ESI,EAX                         ; 004f6877
    TEST EAX,EAX                        ; 004f6879
    JNZ 0x004f6850                      ; 004f687b
        ;   XREF to: 004f6850 (CONDITIONAL_JUMP)  ; LAB_004f6850
    PUSH EBP                            ; 004f687d | = "(unknown)"
    PUSH EDI                            ; 004f687e | = "(unknown)"
    LEA EAX,[ESP + 0x8]                 ; 004f687f
    PUSH EAX                            ; 004f6883
    PUSH 0x5c893f                       ; 004f6884 | = "WARNING.  Can't find actor '%s' in %s..."
    MOV ECX,dword ptr [0x005fb140]      ; 004f6889 | DAT_005fb140
    PUSH ECX                            ; 004f688f
    CALL FUN_0047cf40                   ; 004f6890
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; undefined FUN_0047cf40()
    ADD ESP,0x14                        ; 004f6895
    JMP 0x004f6850                      ; 004f6898
        ;   XREF to: 004f6850 (UNCONDITIONAL_JUMP)  ; LAB_004f6850
    PUSH EBX                            ; 004f689a
        ;   Label: LAB_004f689a
    PUSH EAX                            ; 004f689b
    CALL FUN_005a3480                   ; 004f689c
        ;   XREF to: 005a3480 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3480()
    ADD ESP,0x8                         ; 004f68a1
    LEA EAX,[ESP + 0xc8]                ; 004f68a4
    PUSH EAX                            ; 004f68ab
    PUSH 0x5c8999                       ; 004f68ac | DAT_005c8999
    PUSH EBX                            ; 004f68b1
    CALL FUN_005a3230                   ; 004f68b2
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0xc                         ; 004f68b7
    CMP EAX,0x1                         ; 004f68ba
    JNZ 0x004f67d4                      ; 004f68bd
        ;   XREF to: 004f67d4 (CONDITIONAL_JUMP)  ; LAB_004f67d4
    MOV ESI,dword ptr [ESP + 0xc8]      ; 004f68c3
    JMP 0x004f67f8                      ; 004f68ca
        ;   XREF to: 004f67f8 (UNCONDITIONAL_JUMP)  ; LAB_004f67f8


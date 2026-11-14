; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_doc_cpp_FUN_00475920(CCharacter *param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_doc.cpp_FUN_00469550 at 0046a49d
;
; Referenced Globals:
;   void* switchdataD_004758f4 = 00475a12
;   undefined4 DAT_005da5c4
;   undefined4 g_CWeaponClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590
;   core_doc.cpp_FUN_0046f610
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00475920
        ;   Label: core_doc.cpp_FUN_00475920
    PUSH ESI                            ; 00475921
    PUSH EDI                            ; 00475922
    PUSH EBP                            ; 00475923
    SUB ESP,0x4                         ; 00475924
    MOV EBX,dword ptr [ESP + 0x18]      ; 00475927
    MOV EDX,dword ptr [EBX + 0xc1e4]    ; 0047592b
    MOV dword ptr [EBX + 0x2000c],0x0   ; 00475931
    TEST EDX,EDX                        ; 0047593b
    JZ 0x00475a56                       ; 0047593d
        ;   XREF to: 00475a56 (CONDITIONAL_JUMP)  ; LAB_00475a56
    CMP dword ptr [EBX + 0x26fc],0x0    ; 00475943
    JNZ 0x00475a56                      ; 0047594a
        ;   XREF to: 00475a56 (CONDITIONAL_JUMP)  ; LAB_00475a56
    CMP dword ptr [EBX + 0x1ff5c],0x0   ; 00475950
    JNZ 0x00475a56                      ; 00475957
        ;   XREF to: 00475a56 (CONDITIONAL_JUMP)  ; LAB_00475a56
    CMP dword ptr [EBX + 0x1ffac],0x0   ; 0047595d
    JZ 0x00475a56                       ; 00475964
        ;   XREF to: 00475a56 (CONDITIONAL_JUMP)  ; LAB_00475a56
    MOV EAX,dword ptr [EBX + 0x20004]   ; 0047596a
    TEST EAX,EAX                        ; 00475970
    JNZ 0x00475a5e                      ; 00475972
        ;   XREF to: 00475a5e (CONDITIONAL_JUMP)  ; LAB_00475a5e
    MOV EAX,dword ptr [EBX + 0x2628]    ; 00475978
    TEST EAX,EAX                        ; 0047597e
        ;   Label: LAB_0047597e
    JNZ 0x00475a70                      ; 00475980
        ;   XREF to: 00475a70 (CONDITIONAL_JUMP)  ; LAB_00475a70
    MOV EAX,dword ptr [EBX + 0x20004]   ; 00475986
        ;   Label: LAB_00475986
    TEST EAX,EAX                        ; 0047598c
    JZ 0x00475a56                       ; 0047598e
        ;   XREF to: 00475a56 (CONDITIONAL_JUMP)  ; LAB_00475a56
    MOV EDX,dword ptr [EAX + 0x2e0]     ; 00475994
    CMP EDX,0x3                         ; 0047599a
    JZ 0x00475a56                       ; 0047599d
        ;   XREF to: 00475a56 (CONDITIONAL_JUMP)  ; LAB_00475a56
    CMP dword ptr [EBX + 0x1fae4],0x0   ; 004759a3
    JNZ 0x004759ee                      ; 004759aa
        ;   XREF to: 004759ee (CONDITIONAL_JUMP)  ; LAB_004759ee
    TEST EDX,EDX                        ; 004759ac
    JNZ 0x004759ee                      ; 004759ae
        ;   XREF to: 004759ee (CONDITIONAL_JUMP)  ; LAB_004759ee
    LEA EAX,[EBX + 0x1ffc0]             ; 004759b0
    MOV EDI,dword ptr [EBX + 0x20008]   ; 004759b6
    LEA EDX,[EBX + 0x1ffe0]             ; 004759bc
    TEST EDI,EDI                        ; 004759c2
    JZ 0x00475b3f                       ; 004759c4
        ;   XREF to: 00475b3f (CONDITIONAL_JUMP)  ; LAB_00475b3f
    MOV ESI,EDX                         ; 004759ca
    MOV EBP,dword ptr [EAX + 0x1c]      ; 004759cc
        ;   Label: LAB_004759cc
    CMP EBP,0x2                         ; 004759cf
    JNZ 0x004759ee                      ; 004759d2
        ;   XREF to: 004759ee (CONDITIONAL_JUMP)  ; LAB_004759ee
    CMP EBP,dword ptr [ESI + 0x1c]      ; 004759d4
    JZ 0x004759ee                       ; 004759d7
        ;   XREF to: 004759ee (CONDITIONAL_JUMP)  ; LAB_004759ee
    CMP dword ptr [EBX + 0x20008],0x0   ; 004759d9
    SETZ AL                             ; 004759e0
    AND EAX,0xff                        ; 004759e3
    MOV dword ptr [EBX + 0x20008],EAX   ; 004759e8
    MOV EAX,dword ptr [EBX + 0x20004]   ; 004759ee
        ;   Label: LAB_004759ee
    TEST EAX,EAX                        ; 004759f4
    JZ 0x00475b7a                       ; 004759f6
        ;   XREF to: 00475b7a (CONDITIONAL_JUMP)  ; caseD_8
    MOV EAX,dword ptr [EAX + 0x2e0]     ; 004759fc
    CMP EAX,0xa                         ; 00475a02
    JA 0x00475b7a                       ; 00475a05
        ;   XREF to: 00475b7a (CONDITIONAL_JUMP)  ; caseD_8
    JMP dword ptr [EAX*0x4 + 0x4758f4]  ; 00475a0b | caseD_5 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,0x2                         ; 00475a12
        ;   Label: caseD_0
    PUSH EAX                            ; 00475a17
        ;   Label: LAB_00475a17
    PUSH EBX                            ; 00475a18
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590 ; 00475a19
        ;   XREF to: 00434590 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590(CCharacter * this_ptr, int state_index)
    MOV dword ptr [ESP + 0x8],EAX       ; 00475a1e
    FLD float ptr [ESP + 0x8]           ; 00475a22
    ADD ESP,0x8                         ; 00475a26
    FCOMP double ptr [0x005da5c4]       ; 00475a29 | DAT_005da5c4
    FNSTSW AX                           ; 00475a2f
    SAHF                                ; 00475a31
    JC 0x00475a56                       ; 00475a32
        ;   XREF to: 00475a56 (CONDITIONAL_JUMP)  ; LAB_00475a56
    LEA EDX,[EBX + 0x1ffc0]             ; 00475a34
    FLD float ptr [EDX + 0x14]          ; 00475a3a
    FLD1                                ; 00475a3d
    FCOMPP                              ; 00475a3f
    FNSTSW AX                           ; 00475a41
    SAHF                                ; 00475a43
    JA 0x00475a56                       ; 00475a44
        ;   XREF to: 00475a56 (CONDITIONAL_JUMP)  ; LAB_00475a56
    FLD float ptr [EDX + 0x10]          ; 00475a46
    FLDZ                                ; 00475a49
    FCOMPP                              ; 00475a4b
    FNSTSW AX                           ; 00475a4d
    SAHF                                ; 00475a4f
    JNC 0x00475b81                      ; 00475a50
        ;   XREF to: 00475b81 (CONDITIONAL_JUMP)  ; LAB_00475b81
    ADD ESP,0x4                         ; 00475a56
        ;   Label: LAB_00475a56
    POP EBP                             ; 00475a59
    POP EDI                             ; 00475a5a
    POP ESI                             ; 00475a5b
    POP EBX                             ; 00475a5c
    RET                                 ; 00475a5d
    CMP dword ptr [EAX + 0x2e0],0x7     ; 00475a5e
        ;   Label: LAB_00475a5e
    JZ 0x0047597e                       ; 00475a65
        ;   XREF to: 0047597e (CONDITIONAL_JUMP)  ; LAB_0047597e
    JMP 0x00475986                      ; 00475a6b
        ;   XREF to: 00475986 (UNCONDITIONAL_JUMP)  ; LAB_00475986
    PUSH EAX                            ; 00475a70
        ;   Label: LAB_00475a70
    MOV EDX,dword ptr [EAX + 0x154]     ; 00475a71
    CALL dword ptr [EDX + 0x74]         ; 00475a77
    ADD ESP,0x4                         ; 00475a7a
    MOV EBP,EAX                         ; 00475a7d
    TEST EAX,EAX                        ; 00475a7f
    JZ 0x00475986                       ; 00475a81
        ;   XREF to: 00475986 (CONDITIONAL_JUMP)  ; LAB_00475986
    XOR EDI,EDI                         ; 00475a87
    MOV ESI,dword ptr [EBX + 0x20010]   ; 00475a89
        ;   Label: LAB_00475a89
    INC ESI                             ; 00475a8f
    MOV dword ptr [EBX + 0x20010],ESI   ; 00475a90
    TEST ESI,ESI                        ; 00475a96
    JL 0x00475a9f                       ; 00475a98
        ;   XREF to: 00475a9f (CONDITIONAL_JUMP)  ; LAB_00475a9f
    CMP ESI,0x2                         ; 00475a9a
    JL 0x00475aa9                       ; 00475a9d
        ;   XREF to: 00475aa9 (CONDITIONAL_JUMP)  ; LAB_00475aa9
    MOV dword ptr [EBX + 0x20010],0x0   ; 00475a9f
        ;   Label: LAB_00475a9f
    MOV ECX,dword ptr [0x02c99770]      ; 00475aa9 | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_00475aa9
    PUSH ECX                            ; 00475aaf
    MOV EAX,dword ptr [EBX + 0x20004]   ; 00475ab0
    PUSH EAX                            ; 00475ab6
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00475ab7
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EDX,EAX                         ; 00475abc
    MOV EAX,dword ptr [EBX + 0x20010]   ; 00475abe
    XOR ESI,ESI                         ; 00475ac4
    ADD EAX,0xc                         ; 00475ac6
    ADD ESP,0x8                         ; 00475ac9
    CMP EAX,0xc                         ; 00475acc
    JNC 0x00475b0b                      ; 00475acf
        ;   XREF to: 00475b0b (CONDITIONAL_JUMP)  ; LAB_00475b0b
    TEST ESI,EBP                        ; 00475ad1
        ;   Label: LAB_00475ad1
    JNZ 0x00475b14                      ; 00475ad3
        ;   XREF to: 00475b14 (CONDITIONAL_JUMP)  ; LAB_00475b14
    INC EDI                             ; 00475ad5
    CMP EDI,0x14                        ; 00475ad6
    JL 0x00475a89                       ; 00475ad9
        ;   XREF to: 00475a89 (CONDITIONAL_JUMP)  ; LAB_00475a89
    ADD ESP,0x4                         ; 00475adb
    POP EBP                             ; 00475ade
    POP EDI                             ; 00475adf
    POP ESI                             ; 00475ae0
    POP EBX                             ; 00475ae1
    RET                                 ; 00475ae2
    TEST EDX,EDX                        ; 00475ae3
        ;   Label: LAB_00475ae3
    JZ 0x00475b04                       ; 00475ae5
        ;   XREF to: 00475b04 (CONDITIONAL_JUMP)  ; LAB_00475b04
    MOV EAX,dword ptr [EBX + 0x20004]   ; 00475ae7
    CMP dword ptr [EAX + 0x56c],0x9     ; 00475aed
    JNZ 0x00475afd                      ; 00475af4
        ;   XREF to: 00475afd (CONDITIONAL_JUMP)  ; LAB_00475afd
    MOV ESI,0x8                         ; 00475af6
    JMP 0x00475ad1                      ; 00475afb
        ;   XREF to: 00475ad1 (UNCONDITIONAL_JUMP)  ; LAB_00475ad1
    MOV ESI,0x1                         ; 00475afd
        ;   Label: LAB_00475afd
    JMP 0x00475ad1                      ; 00475b02
        ;   XREF to: 00475ad1 (UNCONDITIONAL_JUMP)  ; LAB_00475ad1
    MOV ESI,0x2                         ; 00475b04
        ;   Label: LAB_00475b04
    JMP 0x00475ad1                      ; 00475b09
        ;   XREF to: 00475ad1 (UNCONDITIONAL_JUMP)  ; LAB_00475ad1
    JBE 0x00475ae3                      ; 00475b0b
        ;   XREF to: 00475ae3 (CONDITIONAL_JUMP)  ; LAB_00475ae3
        ;   Label: LAB_00475b0b
    CMP EAX,0xd                         ; 00475b0d
    JZ 0x00475b04                       ; 00475b10
        ;   XREF to: 00475b04 (CONDITIONAL_JUMP)  ; LAB_00475b04
    JMP 0x00475ad1                      ; 00475b12
        ;   XREF to: 00475ad1 (UNCONDITIONAL_JUMP)  ; LAB_00475ad1
    MOV dword ptr [EBX + 0x2c9c],0x0    ; 00475b14
        ;   Label: LAB_00475b14
    MOV EAX,dword ptr [EBX + 0x20010]   ; 00475b1e
    MOV dword ptr [EBX + 0x1ff5c],0x7   ; 00475b24
    ADD EAX,0xc                         ; 00475b2e
    MOV dword ptr [EBX + 0x2c98],EAX    ; 00475b31
    ADD ESP,0x4                         ; 00475b37
    POP EBP                             ; 00475b3a
    POP EDI                             ; 00475b3b
    POP ESI                             ; 00475b3c
    POP EBX                             ; 00475b3d
    RET                                 ; 00475b3e
    MOV ESI,EAX                         ; 00475b3f
        ;   Label: LAB_00475b3f
    MOV EAX,EDX                         ; 00475b41
    JMP 0x004759cc                      ; 00475b43
        ;   XREF to: 004759cc (UNCONDITIONAL_JUMP)  ; LAB_004759cc
    MOV EAX,0x4                         ; 00475b48
        ;   Label: caseD_1
    JMP 0x00475a17                      ; 00475b4d
        ;   XREF to: 00475a17 (UNCONDITIONAL_JUMP)  ; LAB_00475a17
    MOV EAX,0xe                         ; 00475b52
        ;   Label: caseD_9
    JMP 0x00475a17                      ; 00475b57
        ;   XREF to: 00475a17 (UNCONDITIONAL_JUMP)  ; LAB_00475a17
    MOV EAX,0x7                         ; 00475b5c
        ;   Label: caseD_4
    JMP 0x00475a17                      ; 00475b61
        ;   XREF to: 00475a17 (UNCONDITIONAL_JUMP)  ; LAB_00475a17
    MOV EAX,0x5                         ; 00475b66
        ;   Label: caseD_2
    JMP 0x00475a17                      ; 00475b6b
        ;   XREF to: 00475a17 (UNCONDITIONAL_JUMP)  ; LAB_00475a17
    MOV EAX,0x8                         ; 00475b70
        ;   Label: caseD_7
    JMP 0x00475a17                      ; 00475b75
        ;   XREF to: 00475a17 (UNCONDITIONAL_JUMP)  ; LAB_00475a17
    XOR EAX,EAX                         ; 00475b7a
        ;   Label: caseD_3
    JMP 0x00475a17                      ; 00475b7c
        ;   XREF to: 00475a17 (UNCONDITIONAL_JUMP)  ; LAB_00475a17
    MOV EAX,dword ptr [EBX + 0x20004]   ; 00475b81
        ;   Label: LAB_00475b81
    PUSH EAX                            ; 00475b87
    MOV EDX,dword ptr [EAX + 0x154]     ; 00475b88
    CALL dword ptr [EDX + 0xe8]         ; 00475b8e
    ADD ESP,0x4                         ; 00475b94
    TEST EAX,EAX                        ; 00475b97
    JZ 0x00475a56                       ; 00475b99
        ;   XREF to: 00475a56 (CONDITIONAL_JUMP)  ; LAB_00475a56
    MOV EAX,dword ptr [EBX + 0x20004]   ; 00475b9f
    MOV dword ptr [EBX + 0x2000c],0x0   ; 00475ba5
    PUSH EAX                            ; 00475baf
    MOV EDX,dword ptr [EAX + 0x154]     ; 00475bb0
    CALL dword ptr [EDX + 0xe4]         ; 00475bb6
    ADD ESP,0x4                         ; 00475bbc
    TEST EAX,EAX                        ; 00475bbf
    JZ 0x00475bcd                       ; 00475bc1
        ;   XREF to: 00475bcd (CONDITIONAL_JUMP)  ; LAB_00475bcd
    MOV dword ptr [EBX + 0x2000c],0x1   ; 00475bc3
    PUSH 0x0                            ; 00475bcd
        ;   Label: LAB_00475bcd
    PUSH EBX                            ; 00475bcf
    CALL core_doc.cpp_FUN_0046f610      ; 00475bd0
        ;   XREF to: 0046f610 (UNCONDITIONAL_CALL)  ; undefined core_doc.cpp_FUN_0046f610()
    MOV EAX,dword ptr [EBX + 0x20004]   ; 00475bd5
    MOV ECX,dword ptr [EAX + 0x2dc]     ; 00475bdb
    ADD ESP,0x8                         ; 00475be1
    CMP ECX,0x3                         ; 00475be4
    JNZ 0x00475a56                      ; 00475be7
        ;   XREF to: 00475a56 (CONDITIONAL_JUMP)  ; LAB_00475a56
    MOV dword ptr [EBX + 0x2c9c],0x0    ; 00475bed
    MOV dword ptr [EBX + 0x2c98],0x12   ; 00475bf7
    ADD ESP,0x4                         ; 00475c01
    POP EBP                             ; 00475c04
    POP EDI                             ; 00475c05
    POP ESI                             ; 00475c06
    POP EBX                             ; 00475c07
    RET                                 ; 00475c08


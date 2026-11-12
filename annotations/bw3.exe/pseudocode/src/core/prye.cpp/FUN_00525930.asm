; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_prye_cpp_FUN_00525930(int param_1)
;
;
; XREF[1]:
;   core_prye.cpp_FUN_00518cd0 at 00519c22
;
; Called Functions:
;   core_hero.cpp_FUN_004d4900
;   core_prye.cpp_FUN_00521880
;   core_prye.cpp_FUN_005262f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00525930
        ;   Label: core_prye.cpp_FUN_00525930
    MOV EBX,dword ptr [ESP + 0x8]       ; 00525931
    CMP dword ptr [EBX + 0x20b64],0x0   ; 00525935
    JNZ 0x00525950                      ; 0052593c
        ;   XREF to: 00525950 (CONDITIONAL_JUMP)  ; LAB_00525950
    CMP dword ptr [EBX + 0xcde0],0x0    ; 0052593e
    JNZ 0x00525952                      ; 00525945
        ;   XREF to: 00525952 (CONDITIONAL_JUMP)  ; LAB_00525952
    CMP dword ptr [EBX + 0xcde4],0x0    ; 00525947
    JNZ 0x0052596a                      ; 0052594e
        ;   XREF to: 0052596a (CONDITIONAL_JUMP)  ; LAB_0052596a
    POP EBX                             ; 00525950
        ;   Label: LAB_00525950
    RET                                 ; 00525951
    PUSH EBX                            ; 00525952
        ;   Label: LAB_00525952
    CALL core_prye.cpp_FUN_005262f0     ; 00525953
        ;   XREF to: 005262f0 (UNCONDITIONAL_CALL)  ; undefined core_prye.cpp_FUN_005262f0()
    ADD ESP,0x4                         ; 00525958
    TEST EAX,EAX                        ; 0052595b
    JNZ 0x00525950                      ; 0052595d
        ;   XREF to: 00525950 (CONDITIONAL_JUMP)  ; LAB_00525950
    CMP dword ptr [EBX + 0xcde4],0x0    ; 0052595f
    JNZ 0x0052596a                      ; 00525966
        ;   XREF to: 0052596a (CONDITIONAL_JUMP)  ; LAB_0052596a
    POP EBX                             ; 00525968
    RET                                 ; 00525969
    PUSH 0x0                            ; 0052596a
        ;   Label: LAB_0052596a
    PUSH EBX                            ; 0052596c
    CALL core_hero.cpp_FUN_004d4900     ; 0052596d
        ;   XREF to: 004d4900 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d4900()
    ADD ESP,0x8                         ; 00525972
    TEST EAX,EAX                        ; 00525975
    JNZ 0x00525997                      ; 00525977
        ;   XREF to: 00525997 (CONDITIONAL_JUMP)  ; LAB_00525997
    PUSH EBX                            ; 00525979
    CALL core_prye.cpp_FUN_00521880     ; 0052597a
        ;   XREF to: 00521880 (UNCONDITIONAL_CALL)  ; undefined core_prye.cpp_FUN_00521880()
    ADD ESP,0x4                         ; 0052597f
    TEST EAX,EAX                        ; 00525982
    JNZ 0x005259a9                      ; 00525984
        ;   XREF to: 005259a9 (CONDITIONAL_JUMP)  ; LAB_005259a9
    CMP dword ptr [EBX + 0x20bcc],0x0   ; 00525986
    JNZ 0x00525950                      ; 0052598d
        ;   XREF to: 00525950 (CONDITIONAL_JUMP)  ; LAB_00525950
    MOV dword ptr [EBX + 0xcde0],EAX    ; 0052598f
    POP EBX                             ; 00525995
    RET                                 ; 00525996
    PUSH EBX                            ; 00525997
        ;   Label: LAB_00525997
    MOV EAX,dword ptr [EBX + 0x154]     ; 00525998
    CALL dword ptr [EAX + 0x158]        ; 0052599e
    ADD ESP,0x4                         ; 005259a4
    POP EBX                             ; 005259a7
    RET                                 ; 005259a8
    MOV dword ptr [EBX + 0xcde0],0x0    ; 005259a9
        ;   Label: LAB_005259a9
    POP EBX                             ; 005259b3
    RET                                 ; 005259b4


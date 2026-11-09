; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined * core_script_cpp_FUN_00529710(CScript *param_1,int *param_2,int param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_01ed6808
;
; Called Functions:
;   core_script.cpp_CScript_step_FUN_00529a70
;   core_script.cpp_FUN_005297a0
;   shape_edittool.cpp_FUN_00484f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00529710
        ;   Label: core_script.cpp_FUN_00529710
    PUSH ESI                            ; 00529711
    PUSH EDI                            ; 00529712
    PUSH EBP                            ; 00529713
    SUB ESP,0x4                         ; 00529714
    MOV EBX,dword ptr [ESP + 0x18]      ; 00529717
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0052971b
    MOV EBP,dword ptr [ESP + 0x20]      ; 0052971f
    MOV EDX,0x1                         ; 00529723
    PUSH EBX                            ; 00529728
    MOV dword ptr [0x01ed6808],EDX      ; 00529729 | DAT_01ed6808
    CALL core_script.cpp_FUN_005297a0   ; 0052972f
        ;   XREF to: 005297a0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_FUN_005297a0(CScript * this_ptr)
    ADD ESP,0x4                         ; 00529734
    PUSH 0x1ed7020                      ; 00529737
    CALL shape_edittool.cpp_FUN_00484f10 ; 0052973c
        ;   XREF to: 00484f10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_FUN_00484f10(CPickList * this_ptr)
    MOV EAX,dword ptr [EBX + 0x44]      ; 00529741
    MOV ECX,dword ptr [EBX + 0x2c]      ; 00529744
    ADD ESP,0x4                         ; 00529747
    CMP EAX,ECX                         ; 0052974a
    JGE 0x00529774                      ; 0052974c
        ;   XREF to: 00529774 (CONDITIONAL_JUMP)  ; LAB_00529774
    MOV EAX,0x3e800000                  ; 0052974e
        ;   Label: LAB_0052974e
    MOV ESI,dword ptr [EBX + 0x44]      ; 00529753
    MOV dword ptr [ESP],EAX             ; 00529756
    MOV EAX,ESP                         ; 00529759
    PUSH EAX                            ; 0052975b
    PUSH EBX                            ; 0052975c
    CALL core_script.cpp_CScript_step_FUN_00529a70 ; 0052975d
        ;   XREF to: 00529a70 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_step_FUN_00529a70(CScript * this_ptr, float * time_remaining)
    ADD ESP,0x8                         ; 00529762
    TEST EAX,EAX                        ; 00529765
    JL 0x00529786                       ; 00529767
        ;   XREF to: 00529786 (CONDITIONAL_JUMP)  ; LAB_00529786
    INC ESI                             ; 00529769
        ;   Label: LAB_00529769
    MOV dword ptr [EBX + 0x44],ESI      ; 0052976a
    MOV EAX,ESI                         ; 0052976d
    CMP EAX,dword ptr [EBX + 0x2c]      ; 0052976f
    JL 0x0052974e                       ; 00529772
        ;   XREF to: 0052974e (CONDITIONAL_JUMP)  ; LAB_0052974e
    XOR EDI,EDI                         ; 00529774
        ;   Label: LAB_00529774
    XOR EAX,EAX                         ; 00529776
    MOV dword ptr [0x01ed6808],EDI      ; 00529778 | DAT_01ed6808
    ADD ESP,0x4                         ; 0052977e
    POP EBP                             ; 00529781
    POP EDI                             ; 00529782
    POP ESI                             ; 00529783
    POP EBX                             ; 00529784
    RET                                 ; 00529785
    MOV EAX,dword ptr [EBX + 0x30]      ; 00529786
        ;   Label: LAB_00529786
    MOV EAX,dword ptr [EAX + ESI*0x8]   ; 00529789
    DEC EAX                             ; 0052978c
    MOV dword ptr [EDI],EAX             ; 0052978d
    CMP EBP,EAX                         ; 0052978f
    JG 0x00529769                       ; 00529791
        ;   XREF to: 00529769 (CONDITIONAL_JUMP)  ; LAB_00529769
    MOV EAX,0x1ed6810                   ; 00529793
    ADD ESP,0x4                         ; 00529798
    POP EBP                             ; 0052979b
    POP EDI                             ; 0052979c
    POP ESI                             ; 0052979d
    POP EBX                             ; 0052979e
    RET                                 ; 0052979f


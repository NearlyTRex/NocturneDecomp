; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_script.cpp_FUN_00561a30()
;
; Local Variables:
; undefined1       Stack[-0x30]:1  local_30
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_script.cpp_FUN_00561690 at 005619c1
;
; Referenced Globals:
;   CScript* g_CScriptPtr = 0310f858
;   void* PTR_s_cmp_counterUsed_relOp_co_0064546c_00681008 = 0064546c
;   CScript g_CScriptInstance
;
; Called Functions:
;   core_script.cpp_FUN_00561690
;   core_script.cpp_FUN_00567310
;   crt_memory.c_memset_FUN_005fde40
;   shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
;   shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00561a30
        ;   Label: core_script.cpp_FUN_00561a30
    PUSH ESI                            ; 00561a31
    PUSH EDI                            ; 00561a32
    PUSH EBP                            ; 00561a33
    SUB ESP,0x20                        ; 00561a34
    MOV EBX,dword ptr [ESP + 0x34]      ; 00561a37
    MOV EBP,dword ptr [ESP + 0x44]      ; 00561a3b
    MOV EAX,ESP                         ; 00561a3f
    PUSH EAX                            ; 00561a41
    CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20 ; 00561a42 | CStrList * shape_edittool.cpp_CStrList_ctor_FUN_004a2a20(CStrList * this_ptr)
        ;   XREF to: 004a2a20 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00561a47
    LEA EAX,[ESP + 0x10]                ; 00561a4a
    PUSH EAX                            ; 00561a4e
    LEA EAX,[ESP + 0x4]                 ; 00561a4f
    PUSH EAX                            ; 00561a53
    PUSH EBX                            ; 00561a54
    MOV EDX,dword ptr [0x00680d50]      ; 00561a55 | CScript g_CScriptInstance | CScript * g_CScriptPtr
    PUSH EDX                            ; 00561a5b | CScript g_CScriptInstance
    MOV dword ptr [ESP + 0x20],EBP      ; 00561a5c
    CALL core_script.cpp_FUN_00567310   ; 00561a60 | undefined core_script.cpp_FUN_00567310()
        ;   XREF to: 00567310 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x2c],EAX      ; 00561a65
    ADD ESP,0x10                        ; 00561a69
    PUSH 0x328                          ; 00561a6c
    PUSH 0x0                            ; 00561a71
    MOV ECX,dword ptr [ESP + 0x50]      ; 00561a73
    PUSH ECX                            ; 00561a77
    MOV dword ptr [ESP + 0x20],EAX      ; 00561a78
    CALL crt_memory.c_memset_FUN_005fde40 ; 00561a7c | void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00561a81
    CMP dword ptr [ESP + 0x1c],0x0      ; 00561a84
    JL 0x00561be8                       ; 00561a89 | LAB_00561be8
        ;   XREF to: 00561be8 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x10]      ; 00561a8f
    MOV EDI,dword ptr [ESP + 0x38]      ; 00561a93
    MOV ESI,EBX                         ; 00561a97
    PUSH EDI                            ; 00561a99
    MOV EAX,ECX                         ; 00561a9a
    SHR ECX,0x2                         ; 00561a9c
    MOVSD.REP ES:EDI,ESI                ; 00561a9f
    MOV CL,AL                           ; 00561aa1
    AND CL,0x3                          ; 00561aa3
    MOVSB.REP ES:EDI,ESI                ; 00561aa6
    POP EDI                             ; 00561aa8
    MOV EAX,EDI                         ; 00561aa9
    ADD EAX,dword ptr [ESP + 0x10]      ; 00561aab
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00561aaf
    MOV byte ptr [EAX],0x0              ; 00561ab3
    MOV EAX,0xffffffff                  ; 00561ab6
    PUSH EDX                            ; 00561abb
    MOV dword ptr [ESP + 0x1c],EAX      ; 00561abc
    LEA EAX,[ESP + 0x4]                 ; 00561ac0
    PUSH EAX                            ; 00561ac4
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 00561ac5 | char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00561aca
    MOV DL,0x28                         ; 00561acd
    MOV ESI,EAX                         ; 00561acf
    MOV AL,byte ptr [ESI]               ; 00561ad1
        ;   Label: LAB_00561ad1
    CMP AL,DL                           ; 00561ad3
    JZ 0x00561ae9                       ; 00561ad5 | LAB_00561ae9
        ;   XREF to: 00561ae9 (CONDITIONAL_JUMP)
    CMP AL,0x0                          ; 00561ad7
    JZ 0x00561ae7                       ; 00561ad9 | LAB_00561ae7
        ;   XREF to: 00561ae7 (CONDITIONAL_JUMP)
    INC ESI                             ; 00561adb
    MOV AL,byte ptr [ESI]               ; 00561adc
    CMP AL,DL                           ; 00561ade
    JZ 0x00561ae9                       ; 00561ae0 | LAB_00561ae9
        ;   XREF to: 00561ae9 (CONDITIONAL_JUMP)
    INC ESI                             ; 00561ae2
    CMP AL,0x0                          ; 00561ae3
    JNZ 0x00561ad1                      ; 00561ae5 | LAB_00561ad1
        ;   XREF to: 00561ad1 (CONDITIONAL_JUMP)
    SUB ESI,ESI                         ; 00561ae7
        ;   Label: LAB_00561ae7
    TEST ESI,ESI                        ; 00561ae9
        ;   Label: LAB_00561ae9
    JZ 0x00561b35                       ; 00561aeb | LAB_00561b35
        ;   XREF to: 00561b35 (CONDITIONAL_JUMP)
    PUSH 0x15                           ; 00561aed
    PUSH 0x681008                       ; 00561aef | void * PTR_s_cmp_counterUsed_relOp_co_0064546c_00681008
    MOV ECX,dword ptr [ESP + 0x54]      ; 00561af4
    PUSH ECX                            ; 00561af8
    MOV ESI,dword ptr [ESP + 0x54]      ; 00561af9
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00561afd
    PUSH ESI                            ; 00561b01
    SUB EBP,EDI                         ; 00561b02
    PUSH EBP                            ; 00561b04
    MOV EBP,dword ptr [ESP + 0x54]      ; 00561b05
    PUSH EBP                            ; 00561b09
    MOV EAX,dword ptr [ESP + 0x54]      ; 00561b0a
    PUSH EAX                            ; 00561b0e
    MOV EAX,dword ptr [ESP + 0x54]      ; 00561b0f
    ADD EAX,EDI                         ; 00561b13
    PUSH EAX                            ; 00561b15
    MOV ECX,dword ptr [ESP + 0x3c]      ; 00561b16
    PUSH ECX                            ; 00561b1a
    LEA EAX,[ESP + 0x24]                ; 00561b1b
    PUSH EAX                            ; 00561b1f
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 00561b20 | char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00561b25
    PUSH EAX                            ; 00561b28
    CALL core_script.cpp_FUN_00561690   ; 00561b29 | undefined core_script.cpp_FUN_00561690()
        ;   XREF to: 00561690 (UNCONDITIONAL_CALL)
    ADD ESP,0x24                        ; 00561b2e
    MOV dword ptr [ESP + 0x18],EAX      ; 00561b31
    CMP dword ptr [ESP + 0x18],0x0      ; 00561b35
        ;   Label: LAB_00561b35
    JGE 0x00561b7e                      ; 00561b3a | LAB_00561b7e
        ;   XREF to: 00561b7e (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0x14]      ; 00561b3c
    PUSH EDI                            ; 00561b40
    LEA EAX,[ESP + 0x4]                 ; 00561b41
    PUSH EAX                            ; 00561b45
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 00561b46 | char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00561b4b
    MOV ESI,EAX                         ; 00561b4e
    MOV EDI,dword ptr [ESP + 0x3c]      ; 00561b50
    MOV EBP,0x20                        ; 00561b54
    PUSH EDI                            ; 00561b59
    MOV AL,byte ptr [ESI]               ; 00561b5a
        ;   Label: LAB_00561b5a
    MOV byte ptr [EDI],AL               ; 00561b5c
    CMP AL,0x0                          ; 00561b5e
    JZ 0x00561b72                       ; 00561b60 | LAB_00561b72
        ;   XREF to: 00561b72 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00561b62
    ADD ESI,0x2                         ; 00561b65
    MOV byte ptr [EDI + 0x1],AL         ; 00561b68
    ADD EDI,0x2                         ; 00561b6b
    CMP AL,0x0                          ; 00561b6e
    JNZ 0x00561b5a                      ; 00561b70 | LAB_00561b5a
        ;   XREF to: 00561b5a (CONDITIONAL_JUMP)
    POP EDI                             ; 00561b72
        ;   Label: LAB_00561b72
    MOV EAX,dword ptr [ESP + 0x40]      ; 00561b73
    MOV dword ptr [ESP + 0x18],EBP      ; 00561b77
    MOV byte ptr [EAX],0x0              ; 00561b7b
    MOV EDX,dword ptr [ESP + 0x14]      ; 00561b7e
        ;   Label: LAB_00561b7e
    MOV EAX,dword ptr [ESP + 0x10]      ; 00561b82
    PUSH EDX                            ; 00561b86
    ADD EBX,EAX                         ; 00561b87
    LEA EAX,[ESP + 0x4]                 ; 00561b89
    PUSH EAX                            ; 00561b8d
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 00561b8e | char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00561b93
    MOV EDI,EAX                         ; 00561b96
    SUB ECX,ECX                         ; 00561b98
    DEC ECX                             ; 00561b9a
    XOR EAX,EAX                         ; 00561b9b
    SCASB.REPNE ES:EDI                  ; 00561b9d
    NOT ECX                             ; 00561b9f
    DEC ECX                             ; 00561ba1
    MOV EDI,dword ptr [ESP + 0x40]      ; 00561ba2
    LEA ESI,[EBX + ECX*0x1]             ; 00561ba6
    PUSH EDI                            ; 00561ba9
    SUB ECX,ECX                         ; 00561baa
    DEC ECX                             ; 00561bac
    MOV AL,0x0                          ; 00561bad
    SCASB.REPNE ES:EDI                  ; 00561baf
    DEC EDI                             ; 00561bb1
    MOV AL,byte ptr [ESI]               ; 00561bb2
        ;   Label: LAB_00561bb2
    MOV byte ptr [EDI],AL               ; 00561bb4
    CMP AL,0x0                          ; 00561bb6
    JZ 0x00561bca                       ; 00561bb8 | LAB_00561bca
        ;   XREF to: 00561bca (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00561bba
    ADD ESI,0x2                         ; 00561bbd
    MOV byte ptr [EDI + 0x1],AL         ; 00561bc0
    ADD EDI,0x2                         ; 00561bc3
    CMP AL,0x0                          ; 00561bc6
    JNZ 0x00561bb2                      ; 00561bc8 | LAB_00561bb2
        ;   XREF to: 00561bb2 (CONDITIONAL_JUMP)
    POP EDI                             ; 00561bca
        ;   Label: LAB_00561bca
    PUSH 0x0                            ; 00561bcb
    LEA EAX,[ESP + 0x4]                 ; 00561bcd
    PUSH EAX                            ; 00561bd1
    MOV EDI,dword ptr [ESP + 0x20]      ; 00561bd2
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 ; 00561bd6 | CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004a2a40(CStrList * this_ptr, uint d1, uint d2)
        ;   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00561bdb
    MOV EAX,EDI                         ; 00561bde
    ADD ESP,0x20                        ; 00561be0
    POP EBP                             ; 00561be3
    POP EDI                             ; 00561be4
    POP ESI                             ; 00561be5
    POP EBX                             ; 00561be6
    RET                                 ; 00561be7
    MOV EDI,EBX                         ; 00561be8
        ;   Label: LAB_00561be8
    SUB ECX,ECX                         ; 00561bea
    DEC ECX                             ; 00561bec
    XOR EAX,EAX                         ; 00561bed
    SCASB.REPNE ES:EDI                  ; 00561bef
    NOT ECX                             ; 00561bf1
    DEC ECX                             ; 00561bf3
    CMP EBP,ECX                         ; 00561bf4
    JBE 0x00561c06                      ; 00561bf6 | LAB_00561c06
        ;   XREF to: 00561c06 (CONDITIONAL_JUMP)
    MOV EDI,EBX                         ; 00561bf8
    SUB ECX,ECX                         ; 00561bfa
    DEC ECX                             ; 00561bfc
    XOR EAX,EAX                         ; 00561bfd
    SCASB.REPNE ES:EDI                  ; 00561bff
    NOT ECX                             ; 00561c01
    DEC ECX                             ; 00561c03
    MOV EBP,ECX                         ; 00561c04
    MOV EDI,dword ptr [ESP + 0x38]      ; 00561c06
        ;   Label: LAB_00561c06
    MOV ECX,EBP                         ; 00561c0a
    MOV ESI,EBX                         ; 00561c0c
    PUSH EDI                            ; 00561c0e
    MOV EAX,ECX                         ; 00561c0f
    SHR ECX,0x2                         ; 00561c11
    MOVSD.REP ES:EDI,ESI                ; 00561c14
    MOV CL,AL                           ; 00561c16
    AND CL,0x3                          ; 00561c18
    MOVSB.REP ES:EDI,ESI                ; 00561c1b
    POP EDI                             ; 00561c1d
    MOV EAX,EDI                         ; 00561c1e
    MOV byte ptr [EAX + EBP*0x1],0x0    ; 00561c20
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00561c24
    LEA ESI,[EBX + EBP*0x1]             ; 00561c28
    MOV EDI,dword ptr [ESP + 0x40]      ; 00561c2b
    MOV byte ptr [EAX],0x0              ; 00561c2f
    PUSH EDI                            ; 00561c32
    MOV AL,byte ptr [ESI]               ; 00561c33
        ;   Label: LAB_00561c33
    MOV byte ptr [EDI],AL               ; 00561c35
    CMP AL,0x0                          ; 00561c37
    JZ 0x00561c4b                       ; 00561c39 | LAB_00561c4b
        ;   XREF to: 00561c4b (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00561c3b
    ADD ESI,0x2                         ; 00561c3e
    MOV byte ptr [EDI + 0x1],AL         ; 00561c41
    ADD EDI,0x2                         ; 00561c44
    CMP AL,0x0                          ; 00561c47
    JNZ 0x00561c33                      ; 00561c49 | LAB_00561c33
        ;   XREF to: 00561c33 (CONDITIONAL_JUMP)
    POP EDI                             ; 00561c4b
        ;   Label: LAB_00561c4b
    PUSH 0x0                            ; 00561c4c
    LEA EAX,[ESP + 0x4]                 ; 00561c4e
    PUSH EAX                            ; 00561c52
    MOV EDI,0x20                        ; 00561c53
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 ; 00561c58 | CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004a2a40(CStrList * this_ptr, uint d1, uint d2)
        ;   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00561c5d
    MOV EAX,EDI                         ; 00561c60
    ADD ESP,0x20                        ; 00561c62
    POP EBP                             ; 00561c65
    POP EDI                             ; 00561c66
    POP ESI                             ; 00561c67
    POP EBX                             ; 00561c68
    RET                                 ; 00561c69


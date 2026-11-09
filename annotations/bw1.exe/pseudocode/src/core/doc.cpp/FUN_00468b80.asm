; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_doc_cpp_FUN_00468b80(undefined4 param_1)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   core_doc.cpp_FUN_0046caa0 at 0046e117
;   core_doc.cpp_FUN_004712b0 at 00471617
;
; Referenced Globals:
;   undefined4 DAT_005d989c
;   undefined4 g_CBoxActorClassInfo.name_hash
;   undefined4 g_CCryptVesselClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468b80
        ;   Label: core_doc.cpp_FUN_00468b80
    PUSH ESI                            ; 00468b81
    PUSH EBP                            ; 00468b82
    SUB ESP,0xc                         ; 00468b83
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00468b86
    MOV EDX,dword ptr [0x007c5094]      ; 00468b8a | g_CBoxActorClassInfo.name_hash
    PUSH EDX                            ; 00468b90
    PUSH ESI                            ; 00468b91
    XOR EBX,EBX                         ; 00468b92
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00468b94
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 00468b99
    TEST EAX,EAX                        ; 00468b9c
    JNZ 0x00468c03                      ; 00468b9e
        ;   XREF to: 00468c03 (CONDITIONAL_JUMP)  ; LAB_00468c03
    MOV ECX,dword ptr [0x02c8afa8]      ; 00468ba0 | g_CCryptVesselClassInfo.name_hash
        ;   Label: LAB_00468ba0
    PUSH ECX                            ; 00468ba6
    PUSH ESI                            ; 00468ba7
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00468ba8
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 00468bad
    TEST EAX,EAX                        ; 00468bb0
    JZ 0x00468bc4                       ; 00468bb2
        ;   XREF to: 00468bc4 (CONDITIONAL_JUMP)  ; LAB_00468bc4
    ADD EAX,0x158                       ; 00468bb4
    PUSH EAX                            ; 00468bb9
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 00468bba
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00468bbf
    MOV EBX,EAX                         ; 00468bc2
    TEST EBX,EBX                        ; 00468bc4
        ;   Label: LAB_00468bc4
    JZ 0x00468c15                       ; 00468bc6
        ;   XREF to: 00468c15 (CONDITIONAL_JUMP)  ; LAB_00468c15
    PUSH EDI                            ; 00468bc8
    XOR EDI,EDI                         ; 00468bc9
    XOR ESI,ESI                         ; 00468bcb
    XOR ECX,ECX                         ; 00468bcd
    XOR EDX,EDX                         ; 00468bcf
    MOV dword ptr [ESP + 0x8],EDI       ; 00468bd1
    MOV EAX,dword ptr [EBX + 0x104]     ; 00468bd5
        ;   Label: LAB_00468bd5
    CMP ECX,EAX                         ; 00468bdb
    JGE 0x00468c26                      ; 00468bdd
        ;   XREF to: 00468c26 (CONDITIONAL_JUMP)  ; LAB_00468c26
    MOV EAX,dword ptr [EBX + 0x10c]     ; 00468bdf
    ADD EAX,EDX                         ; 00468be5
    MOV EBP,dword ptr [EAX]             ; 00468be7
    CMP EDI,EBP                         ; 00468be9
    JGE 0x00468bf6                      ; 00468beb
        ;   XREF to: 00468bf6 (CONDITIONAL_JUMP)  ; LAB_00468bf6
    MOV EDI,EBP                         ; 00468bed
    MOV EBP,dword ptr [EAX + 0x4]       ; 00468bef
    MOV dword ptr [ESP + 0x8],EBP       ; 00468bf2
    MOV EBP,dword ptr [EAX + 0x4]       ; 00468bf6
        ;   Label: LAB_00468bf6
    CMP ESI,EBP                         ; 00468bf9
    JL 0x00468c22                       ; 00468bfb
        ;   XREF to: 00468c22 (CONDITIONAL_JUMP)  ; LAB_00468c22
    INC ECX                             ; 00468bfd
        ;   Label: LAB_00468bfd
    ADD EDX,0xc                         ; 00468bfe
    JMP 0x00468bd5                      ; 00468c01
        ;   XREF to: 00468bd5 (UNCONDITIONAL_JUMP)  ; LAB_00468bd5
    ADD EAX,0x158                       ; 00468c03
        ;   Label: LAB_00468c03
    PUSH EAX                            ; 00468c08
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 00468c09
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00468c0e
    MOV EBX,EAX                         ; 00468c11
    JMP 0x00468ba0                      ; 00468c13
        ;   XREF to: 00468ba0 (UNCONDITIONAL_JUMP)  ; LAB_00468ba0
    MOV dword ptr [ESP],EBX             ; 00468c15
        ;   Label: LAB_00468c15
    MOV EAX,dword ptr [ESP]             ; 00468c18
    ADD ESP,0xc                         ; 00468c1b
    POP EBP                             ; 00468c1e
    POP ESI                             ; 00468c1f
    POP EBX                             ; 00468c20
    RET                                 ; 00468c21
    MOV ESI,EBP                         ; 00468c22
        ;   Label: LAB_00468c22
    JMP 0x00468bfd                      ; 00468c24
        ;   XREF to: 00468bfd (UNCONDITIONAL_JUMP)  ; LAB_00468bfd
    MOV EBP,dword ptr [ESP + 0x8]       ; 00468c26
        ;   Label: LAB_00468c26
    SUB ESI,EBP                         ; 00468c2a
    MOV dword ptr [ESP + 0xc],ESI       ; 00468c2c
    FILD dword ptr [ESP + 0xc]          ; 00468c30
    FMUL double ptr [0x005d989c]        ; 00468c34 | DAT_005d989c
    FSTP float ptr [ESP + 0x4]          ; 00468c3a
    POP EDI                             ; 00468c3e
    MOV EAX,dword ptr [ESP]             ; 00468c3f
    ADD ESP,0xc                         ; 00468c42
    POP EBP                             ; 00468c45
    POP ESI                             ; 00468c46
    POP EBX                             ; 00468c47
    RET                                 ; 00468c48


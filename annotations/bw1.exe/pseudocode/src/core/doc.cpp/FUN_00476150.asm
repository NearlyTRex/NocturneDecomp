; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_doc_cpp_FUN_00476150(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   core_doc.cpp_FUN_00469550 at 0046a4b8
;
; Referenced Globals:
;   undefined4 DAT_005fecb8
;   undefined4 g_CDynamiteClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_dynamite.cpp_CDynamite_isFuseBurnedOut_FUN_004926b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00476150
        ;   Label: core_doc.cpp_FUN_00476150
    PUSH ESI                            ; 00476151
    PUSH EDI                            ; 00476152
    MOV EBX,dword ptr [ESP + 0x10]      ; 00476153
    MOV EDX,dword ptr [EBX + 0x20004]   ; 00476157
    TEST EDX,EDX                        ; 0047615d
    JNZ 0x00476165                      ; 0047615f
        ;   XREF to: 00476165 (CONDITIONAL_JUMP)  ; LAB_00476165
    POP EDI                             ; 00476161
        ;   Label: LAB_00476161
    POP ESI                             ; 00476162
    POP EBX                             ; 00476163
    RET                                 ; 00476164
    PUSH dword ptr [ESP + 0x14]         ; 00476165
        ;   Label: LAB_00476165
    MOV ESI,dword ptr [EDX + 0x154]     ; 00476169
    PUSH EDX                            ; 0047616f
    CALL dword ptr [ESI + 0xc]          ; 00476170
    ADD ESP,0x8                         ; 00476173
    MOV ECX,dword ptr [0x01c3db94]      ; 00476176 | g_CDynamiteClassInfo.name_hash
    PUSH ECX                            ; 0047617c
    MOV ESI,dword ptr [EBX + 0x20004]   ; 0047617d
    PUSH ESI                            ; 00476183
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00476184
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ESI,EAX                         ; 00476189
    ADD ESP,0x8                         ; 0047618b
    TEST EAX,EAX                        ; 0047618e
    JZ 0x00476161                       ; 00476190
        ;   XREF to: 00476161 (CONDITIONAL_JUMP)  ; LAB_00476161
    PUSH EAX                            ; 00476192
    CALL core_dynamite.cpp_CDynamite_isFuseBurnedOut_FUN_004926b0 ; 00476193
        ;   XREF to: 004926b0 (UNCONDITIONAL_CALL)  ; int core_dynamite.cpp_CDynamite_isFuseBurnedOut_FUN_004926b0(CDynamite * this_ptr)
    ADD ESP,0x4                         ; 00476198
    TEST EAX,EAX                        ; 0047619b
    JZ 0x00476161                       ; 0047619d
        ;   XREF to: 00476161 (CONDITIONAL_JUMP)  ; LAB_00476161
    LEA EAX,[ESI + 0x57c]               ; 0047619f
    MOV dword ptr [EAX + 0x8],0x0       ; 004761a5
    PUSH ESI                            ; 004761ac
    MOV EDX,dword ptr [EAX + 0x8]       ; 004761ad
    MOV dword ptr [EAX + 0x4],EDX       ; 004761b0
    MOV EDX,dword ptr [EAX + 0x4]       ; 004761b3
    MOV dword ptr [EAX],EDX             ; 004761b6
    MOV EAX,dword ptr [ESI + 0x154]     ; 004761b8
    CALL dword ptr [EAX + 0xe4]         ; 004761be
    MOV dword ptr [EBX + 0x20004],0x0   ; 004761c4
    MOV dword ptr [EBX + 0x2c98],0x0    ; 004761ce
    FLD float ptr [0x005fecb8]          ; 004761d8 | DAT_005fecb8
    MOV dword ptr [EBX + 0x2c9c],0x0    ; 004761de
    ADD ESP,0x4                         ; 004761e8
    MOV EDI,dword ptr [EBX + 0x1ff5c]   ; 004761eb
    FSTP float ptr [EBX + 0x1ffbc]      ; 004761f1
    CMP EDI,0x3                         ; 004761f7
    JNZ 0x00476161                      ; 004761fa
        ;   XREF to: 00476161 (CONDITIONAL_JUMP)  ; LAB_00476161
    MOV dword ptr [EBX + 0x1ff5c],0x0   ; 00476200
    POP EDI                             ; 0047620a
    POP ESI                             ; 0047620b
    POP EBX                             ; 0047620c
    RET                                 ; 0047620d


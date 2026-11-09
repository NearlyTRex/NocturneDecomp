; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_FUN_004b2980(CGunFlame *this_ptr)
;
; Parameters:
; CGunFlame *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x50]:1  local_50
; undefined        Stack[-0x44]:1  local_44
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_fire.cpp_FUN_004b2d40 at 004b2e55
;
; Referenced Globals:
;   undefined4 DAT_005df4d4
;   undefined4 DAT_005df4dc
;   undefined4 DAT_01c58768
;   undefined4 DAT_01c5876c
;   undefined4 DAT_01c58834
;   undefined4 DAT_01c58838
;
; Called Functions:
;   core_actor.cpp_FUN_00408bb0
;   core_charactr.cpp_FUN_004308a0
;   core_flamecan.cpp_CFlameCan_ignite_FUN_004b9180
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b2980
        ;   Label: core_fire.cpp_FUN_004b2980
    PUSH ESI                            ; 004b2981
    PUSH EDI                            ; 004b2982
    PUSH EBP                            ; 004b2983
    MOV EBP,ESP                         ; 004b2984
    SUB ESP,0x40                        ; 004b2986
    AND ESP,0xfffffff8                  ; 004b2989
    XOR EDX,EDX                         ; 004b298c
    MOV ECX,dword ptr [0x01c58768]      ; 004b298e | DAT_01c58768
    MOV dword ptr [ESP + 0x34],EDX      ; 004b2994
    TEST ECX,ECX                        ; 004b2998
    JLE 0x004b29ee                      ; 004b299a
        ;   XREF to: 004b29ee (CONDITIONAL_JUMP)  ; LAB_004b29ee
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b299c
    ADD EAX,0x4                         ; 004b299f
    MOV dword ptr [ESP + 0x30],EDX      ; 004b29a2
    MOV dword ptr [ESP + 0x38],EAX      ; 004b29a6
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b29aa
        ;   Label: LAB_004b29aa
    MOV EBX,dword ptr [ESP + 0x30]      ; 004b29ad
    MOV ECX,dword ptr [EAX + 0x20]      ; 004b29b1
    MOV EBX,dword ptr [EBX + 0x1c5876c] ; 004b29b4 | DAT_01c5876c
    CMP ECX,0x2                         ; 004b29ba
    JZ 0x004b2a58                       ; 004b29bd
        ;   XREF to: 004b2a58 (CONDITIONAL_JUMP)  ; LAB_004b2a58
    CMP dword ptr [EBX + 0x27c0],0x0    ; 004b29c3
    JNZ 0x004b2a58                      ; 004b29ca
        ;   XREF to: 004b2a58 (CONDITIONAL_JUMP)  ; LAB_004b2a58
    MOV EBX,dword ptr [ESP + 0x30]      ; 004b29d0
        ;   Label: LAB_004b29d0
    MOV ESI,dword ptr [ESP + 0x34]      ; 004b29d4
    MOV EDI,dword ptr [0x01c58768]      ; 004b29d8 | DAT_01c58768
    ADD EBX,0x4                         ; 004b29de
    INC ESI                             ; 004b29e1
    MOV dword ptr [ESP + 0x30],EBX      ; 004b29e2
    MOV dword ptr [ESP + 0x34],ESI      ; 004b29e6
    CMP ESI,EDI                         ; 004b29ea
    JL 0x004b29aa                       ; 004b29ec
        ;   XREF to: 004b29aa (CONDITIONAL_JUMP)  ; LAB_004b29aa
    MOV EAX,[0x01c58834]                ; 004b29ee | DAT_01c58834
        ;   Label: LAB_004b29ee
    XOR ESI,ESI                         ; 004b29f3
    TEST EAX,EAX                        ; 004b29f5
    JLE 0x004b2a51                      ; 004b29f7
        ;   XREF to: 004b2a51 (CONDITIONAL_JUMP)  ; LAB_004b2a51
    MOV EDI,dword ptr [EBP + 0x14]      ; 004b29f9
    MOV dword ptr [ESP + 0x2c],ESI      ; 004b29fc
    ADD EDI,0x4                         ; 004b2a00
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004b2a03
        ;   Label: LAB_004b2a03
    MOV EDX,dword ptr [EDX + 0x1c58838] ; 004b2a07 | DAT_01c58838
    LEA EBX,[EDX + 0x20]                ; 004b2a0d
    FLD float ptr [EBX]                 ; 004b2a10
    FSUB float ptr [EDI]                ; 004b2a12
    FMUL ST0                            ; 004b2a14
    FLD float ptr [EBX + 0x4]           ; 004b2a16
    FSUB float ptr [EDI + 0x4]          ; 004b2a19
    FMUL ST0                            ; 004b2a1c
    FLD float ptr [EBX + 0x8]           ; 004b2a1e
    FXCH                                ; 004b2a21
    FADDP ST2,ST0                       ; 004b2a23
    FSUB float ptr [EDI + 0x8]          ; 004b2a25
    FMUL ST0                            ; 004b2a28
    FADDP                               ; 004b2a2a
    FCOMP double ptr [0x005df4dc]       ; 004b2a2c | DAT_005df4dc
    FNSTSW AX                           ; 004b2a32
    SAHF                                ; 004b2a34
    JBE 0x004b2ae2                      ; 004b2a35
        ;   XREF to: 004b2ae2 (CONDITIONAL_JUMP)  ; LAB_004b2ae2
    MOV ECX,dword ptr [ESP + 0x2c]      ; 004b2a3b
        ;   Label: LAB_004b2a3b
    MOV EBX,dword ptr [0x01c58834]      ; 004b2a3f | DAT_01c58834
    ADD ECX,0x4                         ; 004b2a45
    INC ESI                             ; 004b2a48
    MOV dword ptr [ESP + 0x2c],ECX      ; 004b2a49
    CMP ESI,EBX                         ; 004b2a4d
    JL 0x004b2a03                       ; 004b2a4f
        ;   XREF to: 004b2a03 (CONDITIONAL_JUMP)  ; LAB_004b2a03
    MOV ESP,EBP                         ; 004b2a51
        ;   Label: LAB_004b2a51
    POP EBP                             ; 004b2a53
    POP EDI                             ; 004b2a54
    POP ESI                             ; 004b2a55
    POP EBX                             ; 004b2a56
    RET                                 ; 004b2a57
    LEA EAX,[EBX + 0x20]                ; 004b2a58
        ;   Label: LAB_004b2a58
    MOV EDX,dword ptr [ESP + 0x38]      ; 004b2a5b
    FLD float ptr [EAX]                 ; 004b2a5f
    FSUB float ptr [EDX]                ; 004b2a61
    FMUL ST0                            ; 004b2a63
    FLD float ptr [EAX + 0x4]           ; 004b2a65
    FSUB float ptr [EDX + 0x4]          ; 004b2a68
    FMUL ST0                            ; 004b2a6b
    FLD float ptr [EAX + 0x8]           ; 004b2a6d
    FXCH                                ; 004b2a70
    FADDP ST2,ST0                       ; 004b2a72
    FSUB float ptr [EDX + 0x8]          ; 004b2a74
    FMUL ST0                            ; 004b2a77
    FADDP                               ; 004b2a79
    FCOMP float ptr [0x005df4d4]        ; 004b2a7b | DAT_005df4d4
    FNSTSW AX                           ; 004b2a81
    SAHF                                ; 004b2a83
    JA 0x004b29d0                       ; 004b2a84
        ;   XREF to: 004b29d0 (CONDITIONAL_JUMP)  ; LAB_004b29d0
    LEA EAX,[EBX + 0x158]               ; 004b2a8a
    PUSH EAX                            ; 004b2a90
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0 ; 004b2a91
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004b2a96
    MOV EDI,dword ptr [ESP + 0x38]      ; 004b2a99
    PUSH EDI                            ; 004b2a9d
    PUSH EBX                            ; 004b2a9e
    LEA ESI,[ESP + 0x14]                ; 004b2a9f
    LEA EDI,[ESP + 0x8]                 ; 004b2aa3
    CALL core_actor.cpp_FUN_00408bb0    ; 004b2aa7
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    ADD ESP,0x8                         ; 004b2aac
    LEA ESI,[ESP + 0xc]                 ; 004b2aaf
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b2ab3
    MOVSD ES:EDI,ESI                    ; 004b2ab6
    MOVSD ES:EDI,ESI                    ; 004b2ab7
    MOVSD ES:EDI,ESI                    ; 004b2ab8
    CMP dword ptr [EAX + 0x20],0x2      ; 004b2ab9
    SETZ AL                             ; 004b2abd
    AND EAX,0xff                        ; 004b2ac0
    PUSH EAX                            ; 004b2ac5
    PUSH 0x3f800000                     ; 004b2ac6
    PUSH 0x0                            ; 004b2acb
    PUSH 0x0                            ; 004b2acd
    LEA EAX,[ESP + 0x10]                ; 004b2acf
    PUSH EAX                            ; 004b2ad3
    PUSH EBX                            ; 004b2ad4
    CALL core_charactr.cpp_FUN_004308a0 ; 004b2ad5
        ;   XREF to: 004308a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_004308a0(CCharacter * this_ptr, CVector3f * position, int fire_type, int flame_type, ...)
    ADD ESP,0x18                        ; 004b2ada
    JMP 0x004b29d0                      ; 004b2add
        ;   XREF to: 004b29d0 (UNCONDITIONAL_JUMP)  ; LAB_004b29d0
    PUSH EDX                            ; 004b2ae2
        ;   Label: LAB_004b2ae2
    CALL core_flamecan.cpp_CFlameCan_ignite_FUN_004b9180 ; 004b2ae3
        ;   XREF to: 004b9180 (UNCONDITIONAL_CALL)  ; void core_flamecan.cpp_CFlameCan_ignite_FUN_004b9180(CFlameCan * this_ptr)
    ADD ESP,0x4                         ; 004b2ae8
    JMP 0x004b2a3b                      ; 004b2aeb
        ;   XREF to: 004b2a3b (UNCONDITIONAL_JUMP)  ; LAB_004b2a3b


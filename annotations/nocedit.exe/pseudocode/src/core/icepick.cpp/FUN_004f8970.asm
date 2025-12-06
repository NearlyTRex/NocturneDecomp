; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_icepick.cpp_FUN_004f8970()
;
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[1]:
;   core_icepick.cpp_FUN_004f80b0 at 004f8579
;
; Referenced Globals:
;   double DOUBLE_0062f753 = 2
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 g_CDemonSetInstance.actor_list_ptr
;   undefined4 g_CDemonSetInstance.actor_list_data[0]
;   undefined4 g_CTommyGunClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f8970
        ;   Label: core_icepick.cpp_FUN_004f8970
    PUSH ESI                            ; 004f8971
    PUSH EDI                            ; 004f8972
    PUSH EBP                            ; 004f8973
    MOV EBP,ESP                         ; 004f8974
    SUB ESP,0x2c                        ; 004f8976
    AND ESP,0xfffffff8                  ; 004f8979
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f897c
    MOV EDX,0x40800000                  ; 004f897f
    MOV ECX,0x3f800000                  ; 004f8984
    MOV ESI,0x40000000                  ; 004f8989
    MOV EDI,dword ptr [EBP + 0x14]      ; 004f898e
    MOV dword ptr [EAX + 0x1fbf8],0x0   ; 004f8991
    LEA EAX,[ESP + 0x18]                ; 004f899b
    XOR EBX,EBX                         ; 004f899f
    PUSH EAX                            ; 004f89a1
    LEA EAX,[ESP + 0x10]                ; 004f89a2
    MOV dword ptr [ESP + 0x28],EDX      ; 004f89a6
    PUSH EAX                            ; 004f89aa
    MOV dword ptr [ESP + 0x20],ECX      ; 004f89ab
    MOV dword ptr [ESP + 0x24],EBX      ; 004f89af
    PUSH EDI                            ; 004f89b3
    MOV dword ptr [ESP + 0x2c],ESI      ; 004f89b4
    XOR ESI,ESI                         ; 004f89b8
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004f89ba | CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004f89bf
    XOR EDI,EDI                         ; 004f89c2
    MOV EAX,[0x006810c8]                ; 004f89c4 | CDemonSet * g_CDemonSetPtr
        ;   Label: LAB_004f89c4
    CMP ESI,dword ptr [EAX + 0x14d154]  ; 004f89c9 | g_CDemonSetInstance.actor_list_ptr
    JL 0x004f89eb                       ; 004f89cf | LAB_004f89eb
        ;   XREF to: 004f89eb (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f89d1
    MOV ECX,dword ptr [EAX + 0x1fbf8]   ; 004f89d4
    TEST ECX,ECX                        ; 004f89da
    JNZ 0x004f8a80                      ; 004f89dc | LAB_004f8a80
        ;   XREF to: 004f8a80 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 004f89e2
    MOV ESP,EBP                         ; 004f89e4
    POP EBP                             ; 004f89e6
    POP EDI                             ; 004f89e7
    POP ESI                             ; 004f89e8
    POP EBX                             ; 004f89e9
    RET                                 ; 004f89ea
    MOV EBX,dword ptr [EDI + EAX*0x1 + 0x14d158] ; 004f89eb | g_CDemonSetInstance.actor_list_data[0]
        ;   Label: LAB_004f89eb
    PUSH EBX                            ; 004f89f2
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f89f3
    CALL dword ptr [EAX + 0x8c]         ; 004f89f9
    ADD ESP,0x4                         ; 004f89ff
    TEST EAX,EAX                        ; 004f8a02
    JNZ 0x004f8a77                      ; 004f8a04 | LAB_004f8a77
        ;   XREF to: 004f8a77 (CONDITIONAL_JUMP)
    MOV EAX,[0x03f873dc]                ; 004f8a06 | g_CTommyGunClassInfo.name_hash
    PUSH EAX                            ; 004f8a0b
    PUSH EBX                            ; 004f8a0c
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004f8a0d | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004f8a12
    TEST EAX,EAX                        ; 004f8a15
    JZ 0x004f8a77                       ; 004f8a17 | LAB_004f8a77
        ;   XREF to: 004f8a77 (CONDITIONAL_JUMP)
    LEA EAX,[EBX + 0x20]                ; 004f8a19
    FLD float ptr [EAX]                 ; 004f8a1c
    FSUB float ptr [ESP + 0xc]          ; 004f8a1e
    FSTP float ptr [ESP]                ; 004f8a22
    FLD float ptr [EAX + 0x4]           ; 004f8a25
    FSUB float ptr [ESP + 0x10]         ; 004f8a28
    FST float ptr [ESP + 0x4]           ; 004f8a2c
    FLD float ptr [EAX + 0x8]           ; 004f8a30
    FXCH                                ; 004f8a33
    FABS                                ; 004f8a35
    FXCH                                ; 004f8a37
    FSUB float ptr [ESP + 0x14]         ; 004f8a39
    FSTP float ptr [ESP + 0x8]          ; 004f8a3d
    FCOMP double ptr [0x0062f753]       ; 004f8a41 | double DOUBLE_0062f753
    FNSTSW AX                           ; 004f8a47
    SAHF                                ; 004f8a49
    JA 0x004f8a77                       ; 004f8a4a | LAB_004f8a77
        ;   XREF to: 004f8a77 (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x8]           ; 004f8a4c
    FMUL ST0                            ; 004f8a50
    FLD float ptr [ESP]                 ; 004f8a52
    FMUL ST0                            ; 004f8a55
    FADDP                               ; 004f8a57
    FST float ptr [ESP + 0x28]          ; 004f8a59
    FCOMP float ptr [ESP + 0x24]        ; 004f8a5d
    FNSTSW AX                           ; 004f8a61
    SAHF                                ; 004f8a63
    JA 0x004f8a77                       ; 004f8a64 | LAB_004f8a77
        ;   XREF to: 004f8a77 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f8a66
    MOV dword ptr [EAX + 0x1fbf8],EBX   ; 004f8a69
    MOV EAX,dword ptr [ESP + 0x28]      ; 004f8a6f
    MOV dword ptr [ESP + 0x24],EAX      ; 004f8a73
    INC ESI                             ; 004f8a77
        ;   Label: LAB_004f8a77
    ADD EDI,0x4                         ; 004f8a78
    JMP 0x004f89c4                      ; 004f8a7b | LAB_004f89c4
        ;   XREF to: 004f89c4 (UNCONDITIONAL_JUMP)
    FLD float ptr [ECX + 0x20]          ; 004f8a80
        ;   Label: LAB_004f8a80
    FSUB float ptr [ESP + 0xc]          ; 004f8a83
    FADD float ptr [EAX + 0x20]         ; 004f8a87
    FSTP float ptr [EAX + 0x20]         ; 004f8a8a
    MOV EAX,dword ptr [EAX + 0x1fbf8]   ; 004f8a8d
    FLD float ptr [EAX + 0x28]          ; 004f8a93
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f8a96
    PUSH 0x1                            ; 004f8a99
    ADD EAX,0x158                       ; 004f8a9b
    FSUB float ptr [ESP + 0x18]         ; 004f8aa0
    PUSH 0x13                           ; 004f8aa4
    FADD float ptr [EAX + 0xfffffed0]   ; 004f8aa6
    PUSH EAX                            ; 004f8aac
    FSTP float ptr [EAX + 0xfffffed0]   ; 004f8aad
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f8ab3 | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
    MOV EAX,0x1                         ; 004f8ab8
    ADD ESP,0xc                         ; 004f8abd
    MOV ESP,EBP                         ; 004f8ac0
    POP EBP                             ; 004f8ac2
    POP EDI                             ; 004f8ac3
    POP ESI                             ; 004f8ac4
    POP EBX                             ; 004f8ac5
    RET                                 ; 004f8ac6


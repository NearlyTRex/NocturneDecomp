; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_icepick_cpp_FUN_004d55e0(CIcePick *this_ptr)
;
; Parameters:
; CIcePick *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[1]:
;   core_icepick.cpp_FUN_004d4c50 at 004d51a4
;
; Referenced Globals:
;   undefined4 DAT_005da866
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 g_CDemonSetInstance.field1364324_0x14d164
;   undefined4 g_CDemonSetInstance.field1364328_0x14d168
;   undefined4 g_CTommyGunClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_FUN_00408d70
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d55e0
        ;   Label: core_icepick.cpp_FUN_004d55e0
    PUSH ESI                            ; 004d55e1
    PUSH EDI                            ; 004d55e2
    PUSH EBP                            ; 004d55e3
    MOV EBP,ESP                         ; 004d55e4
    SUB ESP,0x4c                        ; 004d55e6
    AND ESP,0xfffffff8                  ; 004d55e9
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d55ec
    MOV EDX,0x40800000                  ; 004d55ef
    MOV ECX,0x3f800000                  ; 004d55f4
    MOV ESI,0x40000000                  ; 004d55f9
    MOV EDI,dword ptr [EBP + 0x14]      ; 004d55fe
    XOR EBX,EBX                         ; 004d5601
    MOV dword ptr [EAX + 0x25664],0x0   ; 004d5603
    LEA EAX,[ESP + 0x18]                ; 004d560d
    MOV dword ptr [ESP + 0x3c],EDX      ; 004d5611
    PUSH EAX                            ; 004d5615
    MOV dword ptr [ESP + 0x1c],ECX      ; 004d5616
    MOV dword ptr [ESP + 0x24],ESI      ; 004d561a
    PUSH EDI                            ; 004d561e
    LEA ESI,[ESP + 0x2c]                ; 004d561f
    MOV dword ptr [ESP + 0x24],EBX      ; 004d5623
    CALL core_actor.cpp_FUN_00408d70    ; 004d5627
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA EDI,[ESP + 0x38]                ; 004d562c
    ADD ESP,0x8                         ; 004d5630
    LEA ESI,[ESP + 0x24]                ; 004d5633
    MOV dword ptr [ESP + 0x40],EBX      ; 004d5637
    MOV dword ptr [ESP + 0x44],EBX      ; 004d563b
    MOVSD ES:EDI,ESI                    ; 004d563f
    MOVSD ES:EDI,ESI                    ; 004d5640
    MOVSD ES:EDI,ESI                    ; 004d5641
    MOV EAX,[0x0061b5a8]                ; 004d5642 | g_CDemonSetPtr
        ;   Label: LAB_004d5642
    MOV EBX,dword ptr [ESP + 0x40]      ; 004d5647
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 004d564b | g_CDemonSetInstance.field1364324_0x14d164
    JL 0x004d566d                       ; 004d5651
        ;   XREF to: 004d566d (CONDITIONAL_JUMP)  ; LAB_004d566d
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d5653
    MOV EBX,dword ptr [EAX + 0x25664]   ; 004d5656
    TEST EBX,EBX                        ; 004d565c
    JNZ 0x004d572e                      ; 004d565e
        ;   XREF to: 004d572e (CONDITIONAL_JUMP)  ; LAB_004d572e
    XOR EAX,EAX                         ; 004d5664
    MOV ESP,EBP                         ; 004d5666
    POP EBP                             ; 004d5668
    POP EDI                             ; 004d5669
    POP ESI                             ; 004d566a
    POP EBX                             ; 004d566b
    RET                                 ; 004d566c
    ADD EAX,dword ptr [ESP + 0x44]      ; 004d566d
        ;   Label: LAB_004d566d
    MOV EBX,dword ptr [EAX + 0x14d168]  ; 004d5671 | g_CDemonSetInstance.field1364328_0x14d168
    PUSH EBX                            ; 004d5677
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004d5678
    CALL dword ptr [EAX + 0x9c]         ; 004d567e
    ADD ESP,0x4                         ; 004d5684
    TEST EAX,EAX                        ; 004d5687
    JNZ 0x004d5715                      ; 004d5689
        ;   XREF to: 004d5715 (CONDITIONAL_JUMP)  ; LAB_004d5715
    MOV EDI,dword ptr [0x02653574]      ; 004d568f | g_CTommyGunClassInfo.name_hash
    PUSH EDI                            ; 004d5695
    PUSH EBX                            ; 004d5696
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004d5697
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 004d569c
    TEST EAX,EAX                        ; 004d569f
    JZ 0x004d5715                       ; 004d56a1
        ;   XREF to: 004d5715 (CONDITIONAL_JUMP)  ; LAB_004d5715
    LEA EAX,[EBX + 0x20]                ; 004d56a3
    LEA EDI,[ESP + 0xc]                 ; 004d56a6
    MOV ESI,ESP                         ; 004d56aa
    FLD float ptr [EAX]                 ; 004d56ac
    FLD float ptr [EAX + 0x4]           ; 004d56ae
    FLD float ptr [EAX + 0x8]           ; 004d56b1
    FXCH ST2                            ; 004d56b4
    FSUB float ptr [ESP + 0x30]         ; 004d56b6
    FXCH                                ; 004d56ba
    FSUB float ptr [ESP + 0x34]         ; 004d56bc
    FXCH ST2                            ; 004d56c0
    FSUB float ptr [ESP + 0x38]         ; 004d56c2
    FXCH                                ; 004d56c6
    FSTP float ptr [ESP]                ; 004d56c8
    FXCH                                ; 004d56cb
    FSTP float ptr [ESP + 0x4]          ; 004d56cd
    FSTP float ptr [ESP + 0x8]          ; 004d56d1
    MOVSD ES:EDI,ESI                    ; 004d56d5
    MOVSD ES:EDI,ESI                    ; 004d56d6
    MOVSD ES:EDI,ESI                    ; 004d56d7
    FLD float ptr [ESP + 0x10]          ; 004d56d8
    FABS                                ; 004d56dc
    FCOMP double ptr [0x005da866]       ; 004d56de | DAT_005da866
    FNSTSW AX                           ; 004d56e4
    SAHF                                ; 004d56e6
    JA 0x004d5715                       ; 004d56e7
        ;   XREF to: 004d5715 (CONDITIONAL_JUMP)  ; LAB_004d5715
    FLD float ptr [ESP + 0x14]          ; 004d56e9
    FMUL ST0                            ; 004d56ed
    FLD float ptr [ESP + 0xc]           ; 004d56ef
    FMUL ST0                            ; 004d56f3
    FADDP                               ; 004d56f5
    FST float ptr [ESP + 0x48]          ; 004d56f7
    FCOMP float ptr [ESP + 0x3c]        ; 004d56fb
    FNSTSW AX                           ; 004d56ff
    SAHF                                ; 004d5701
    JA 0x004d5715                       ; 004d5702
        ;   XREF to: 004d5715 (CONDITIONAL_JUMP)  ; LAB_004d5715
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d5704
    MOV dword ptr [EAX + 0x25664],EBX   ; 004d5707
    MOV EAX,dword ptr [ESP + 0x48]      ; 004d570d
    MOV dword ptr [ESP + 0x3c],EAX      ; 004d5711
    MOV EDX,dword ptr [ESP + 0x40]      ; 004d5715
        ;   Label: LAB_004d5715
    MOV EAX,dword ptr [ESP + 0x44]      ; 004d5719
    INC EDX                             ; 004d571d
    ADD EAX,0x4                         ; 004d571e
    MOV dword ptr [ESP + 0x40],EDX      ; 004d5721
    MOV dword ptr [ESP + 0x44],EAX      ; 004d5725
    JMP 0x004d5642                      ; 004d5729
        ;   XREF to: 004d5642 (UNCONDITIONAL_JUMP)  ; LAB_004d5642
    FLD float ptr [EBX + 0x20]          ; 004d572e
        ;   Label: LAB_004d572e
    FSUB float ptr [ESP + 0x30]         ; 004d5731
    FADD float ptr [EAX + 0x20]         ; 004d5735
    FSTP float ptr [EAX + 0x20]         ; 004d5738
    MOV EAX,dword ptr [EAX + 0x25664]   ; 004d573b
    FLD float ptr [EAX + 0x28]          ; 004d5741
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d5744
    PUSH 0x1                            ; 004d5747
    ADD EAX,0x2b4                       ; 004d5749
    FSUB float ptr [ESP + 0x3c]         ; 004d574e
    PUSH 0x13                           ; 004d5752
    FADD float ptr [EAX + 0xfffffd74]   ; 004d5754
    PUSH EAX                            ; 004d575a
    FSTP float ptr [EAX + 0xfffffd74]   ; 004d575b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004d5761
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,0x1                         ; 004d5766
    ADD ESP,0xc                         ; 004d576b
    MOV ESP,EBP                         ; 004d576e
    POP EBP                             ; 004d5770
    POP EDI                             ; 004d5771
    POP ESI                             ; 004d5772
    POP EBX                             ; 004d5773
    RET                                 ; 004d5774


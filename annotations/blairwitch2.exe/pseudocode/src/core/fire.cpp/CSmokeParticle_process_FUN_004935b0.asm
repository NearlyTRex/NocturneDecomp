; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CSmokeParticle_process_FUN_004935b0(CSmokeParticle *this_ptr)
;
; Parameters:
; CSmokeParticle * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_process_FUN_0049c430 at 0049c771
;
; Referenced Globals:
;   undefined4 DAT_005d5342
;   CGame* g_CGamePtr = 01cb6900
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 g_CGameInstance.delta_time_float
;   undefined4 g_CDemonSetInstance.active_fog.scroll.x
;   undefined4 g_CDemonSetInstance.active_fog.scroll.y
;   undefined4 g_CDemonSetInstance.active_fog.scroll.z
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004935b0
        ;   Label: core_fire.cpp_CSmokeParticle_process_FUN_004935b0
    SUB ESP,0x38                        ; 004935b1
    MOV EBX,dword ptr [ESP + 0x40]      ; 004935b4
    MOV EAX,[0x00616494]                ; 004935b8 | g_CGamePtr
    MOV EAX,dword ptr [EAX + 0x284]     ; 004935bd | g_CGameInstance.delta_time_float
    MOV dword ptr [ESP + 0x30],EAX      ; 004935c3
    FLD float ptr [ESP + 0x30]          ; 004935c7
    FMUL float ptr [0x005d5342]         ; 004935cb | DAT_005d5342
    FADD float ptr [EBX + 0x18]         ; 004935d1
    FSTP float ptr [EBX + 0x18]         ; 004935d4
    CMP dword ptr [EBX + 0x18],0x42200000 ; 004935d7
    JL 0x004935eb                       ; 004935de
        ;   XREF to: 004935eb (CONDITIONAL_JUMP)  ; LAB_004935eb
    MOV dword ptr [EBX],0x0             ; 004935e0
    ADD ESP,0x38                        ; 004935e6
    POP EBX                             ; 004935e9
    RET                                 ; 004935ea
    PUSH EDI                            ; 004935eb
        ;   Label: LAB_004935eb
    PUSH ESI                            ; 004935ec
    FLD float ptr [ESP + 0x38]          ; 004935ed
    FMUL float ptr [EBX + 0x10]         ; 004935f1
    FMUL float ptr [EBX + 0x14]         ; 004935f4
    PUSH 0x3f800000                     ; 004935f7
    FADD float ptr [EBX + 0x8]          ; 004935fc
    PUSH 0xbf800000                     ; 004935ff
    FSTP float ptr [EBX + 0x8]          ; 00493604
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00493607
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x44],EAX      ; 0049360c
    FLD float ptr [ESP + 0x44]          ; 00493610
    ADD ESP,0x8                         ; 00493614
    FMUL float ptr [ESP + 0x38]         ; 00493617
    PUSH 0x3f800000                     ; 0049361b
    FADD float ptr [EBX + 0x4]          ; 00493620
    PUSH 0xbf800000                     ; 00493623
    FSTP float ptr [EBX + 0x4]          ; 00493628
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0049362b
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x44],EAX      ; 00493630
    FLD float ptr [ESP + 0x44]          ; 00493634
    ADD ESP,0x8                         ; 00493638
    FMUL float ptr [ESP + 0x38]         ; 0049363b
    FADD float ptr [EBX + 0xc]          ; 0049363f
    LEA EAX,[EBX + 0x1c]                ; 00493642
    FSTP float ptr [EBX + 0xc]          ; 00493645
    FLD float ptr [EAX]                 ; 00493648
    FMUL float ptr [ESP + 0x38]         ; 0049364a
    FLD float ptr [EAX + 0x4]           ; 0049364e
    FMUL float ptr [ESP + 0x38]         ; 00493651
    FLD float ptr [EAX + 0x8]           ; 00493655
    FMUL float ptr [ESP + 0x38]         ; 00493658
    LEA EDI,[ESP + 0x20]                ; 0049365c
    LEA ESI,[ESP + 0x14]                ; 00493660
    LEA EAX,[EBX + 0x4]                 ; 00493664
    FXCH ST2                            ; 00493667
    FSTP float ptr [ESP + 0x14]         ; 00493669
    FSTP float ptr [ESP + 0x18]         ; 0049366d
    FSTP float ptr [ESP + 0x1c]         ; 00493671
    MOVSD ES:EDI,ESI                    ; 00493675
    MOVSD ES:EDI,ESI                    ; 00493676
    MOVSD ES:EDI,ESI                    ; 00493677
    MOV EBX,dword ptr [0x0061b5a8]      ; 00493678 | g_CDemonSetPtr
    FLD float ptr [EAX]                 ; 0049367e
    FLD float ptr [EAX + 0x4]           ; 00493680
    FLD float ptr [EAX + 0x8]           ; 00493683
    FXCH ST2                            ; 00493686
    FADD float ptr [ESP + 0x20]         ; 00493688
    FXCH                                ; 0049368c
    FADD float ptr [ESP + 0x24]         ; 0049368e
    FXCH ST2                            ; 00493692
    FADD float ptr [ESP + 0x28]         ; 00493694
    FXCH                                ; 00493698
    FSTP float ptr [EAX]                ; 0049369a
    FXCH                                ; 0049369c
    FSTP float ptr [EAX + 0x4]          ; 0049369e
    FSTP float ptr [EAX + 0x8]          ; 004936a1
    FLD float ptr [EBX + 0x15ac70]      ; 004936a4 | g_CDemonSetInstance.active_fog.scroll.x
    FMUL float ptr [ESP + 0x38]         ; 004936aa
    FLD float ptr [EBX + 0x15ac74]      ; 004936ae | g_CDemonSetInstance.active_fog.scroll.y
    FMUL float ptr [ESP + 0x38]         ; 004936b4
    FLD float ptr [EBX + 0x15ac78]      ; 004936b8 | g_CDemonSetInstance.active_fog.scroll.z
    FMUL float ptr [ESP + 0x38]         ; 004936be
    LEA EDI,[ESP + 0x8]                 ; 004936c2
    LEA ESI,[ESP + 0x2c]                ; 004936c6
    FXCH ST2                            ; 004936ca
    FSTP float ptr [ESP + 0x2c]         ; 004936cc
    FSTP float ptr [ESP + 0x30]         ; 004936d0
    FSTP float ptr [ESP + 0x34]         ; 004936d4
    MOVSD ES:EDI,ESI                    ; 004936d8
    MOVSD ES:EDI,ESI                    ; 004936d9
    MOVSD ES:EDI,ESI                    ; 004936da
    FLD float ptr [EAX]                 ; 004936db
    FLD float ptr [EAX + 0x4]           ; 004936dd
    FLD float ptr [EAX + 0x8]           ; 004936e0
    FXCH ST2                            ; 004936e3
    FADD float ptr [ESP + 0x8]          ; 004936e5
    FXCH                                ; 004936e9
    FADD float ptr [ESP + 0xc]          ; 004936eb
    FXCH ST2                            ; 004936ef
    FADD float ptr [ESP + 0x10]         ; 004936f1
    FXCH                                ; 004936f5
    FSTP float ptr [EAX]                ; 004936f7
    FXCH                                ; 004936f9
    FSTP float ptr [EAX + 0x4]          ; 004936fb
    FSTP float ptr [EAX + 0x8]          ; 004936fe
    POP ESI                             ; 00493701
    POP EDI                             ; 00493702
    ADD ESP,0x38                        ; 00493703
    POP EBX                             ; 00493706
    RET                                 ; 00493707


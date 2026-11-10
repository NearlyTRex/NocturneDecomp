; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hero_cpp_CHero_tryApproachNearbyActor_FUN_004ebc40(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined        Stack[-0x8c]:1  local_8c
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined        Stack[-0x5c]:1  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined        Stack[-0x50]:1  local_50
; undefined        Stack[-0x44]:1  local_44
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_hero.cpp_FUN_004eca10 at 004ecb2e
;   core_stranger.cpp_CStranger_handleActionButton_FUN_00591120 at 005913cf
;
; Referenced Globals:
;   undefined4 DAT_005e48e5
;   undefined4 DAT_005e48ed
;   undefined4 DAT_005e48f5
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd60
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ebc40
        ;   Label: core_hero.cpp_CHero_tryApproachNearbyActor_FUN_004ebc40
    PUSH ESI                            ; 004ebc41
    PUSH EDI                            ; 004ebc42
    PUSH EBP                            ; 004ebc43
    MOV EBP,ESP                         ; 004ebc44
    SUB ESP,0xa4                        ; 004ebc46
    AND ESP,0xfffffff8                  ; 004ebc4c
    XOR EDX,EDX                         ; 004ebc4f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ebc51
    MOV dword ptr [ESP + 0x94],EDX      ; 004ebc54
    ADD EAX,0x20                        ; 004ebc5b
    MOV dword ptr [ESP + 0x98],EDX      ; 004ebc5e
    MOV dword ptr [ESP + 0x9c],EAX      ; 004ebc65
    MOV EAX,[0x00622c18]                ; 004ebc6c | g_CDemonSetPtr
        ;   Label: LAB_004ebc6c
    MOV EBX,dword ptr [ESP + 0x94]      ; 004ebc71
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 004ebc78 | g_CDemonSetInstance.actor_count
    JGE 0x004ebe68                      ; 004ebc7e
        ;   XREF to: 004ebe68 (CONDITIONAL_JUMP)  ; LAB_004ebe68
    ADD EAX,dword ptr [ESP + 0x98]      ; 004ebc84
    MOV EBX,dword ptr [EAX + 0x14d168]  ; 004ebc8b | g_CDemonSetInstance.actors[0]
    LEA EAX,[EBX + 0x20]                ; 004ebc91
    MOV ESI,dword ptr [ESP + 0x9c]      ; 004ebc94
    LEA EDI,[ESP + 0x44]                ; 004ebc9b
    FLD float ptr [EAX]                 ; 004ebc9f
    FLD float ptr [EAX + 0x4]           ; 004ebca1
    FLD float ptr [EAX + 0x8]           ; 004ebca4
    FXCH ST2                            ; 004ebca7
    FSUB float ptr [ESI]                ; 004ebca9
    FXCH                                ; 004ebcab
    FSUB float ptr [ESI + 0x4]          ; 004ebcad
    FXCH ST2                            ; 004ebcb0
    FSUB float ptr [ESI + 0x8]          ; 004ebcb2
    FXCH                                ; 004ebcb5
    FSTP float ptr [ESP + 0x20]         ; 004ebcb7
    FXCH                                ; 004ebcbb
    FSTP float ptr [ESP + 0x24]         ; 004ebcbd
    LEA ESI,[ESP + 0x20]                ; 004ebcc1
    FSTP float ptr [ESP + 0x28]         ; 004ebcc5
    MOVSD ES:EDI,ESI                    ; 004ebcc9
    MOVSD ES:EDI,ESI                    ; 004ebcca
    MOVSD ES:EDI,ESI                    ; 004ebccb
    FLD float ptr [ESP + 0x48]          ; 004ebccc
    FABS                                ; 004ebcd0
    FCOMP double ptr [0x005e48e5]       ; 004ebcd2 | DAT_005e48e5
    FNSTSW AX                           ; 004ebcd8
    SAHF                                ; 004ebcda
    JBE 0x004ebd02                      ; 004ebcdb
        ;   XREF to: 004ebd02 (CONDITIONAL_JUMP)  ; LAB_004ebd02
    MOV EBX,dword ptr [ESP + 0x94]      ; 004ebcdd
        ;   Label: LAB_004ebcdd
    MOV ECX,dword ptr [ESP + 0x98]      ; 004ebce4
    INC EBX                             ; 004ebceb
    ADD ECX,0x4                         ; 004ebcec
    MOV dword ptr [ESP + 0x94],EBX      ; 004ebcef
    MOV dword ptr [ESP + 0x98],ECX      ; 004ebcf6
    JMP 0x004ebc6c                      ; 004ebcfd
        ;   XREF to: 004ebc6c (UNCONDITIONAL_JUMP)  ; LAB_004ebc6c
    FLD float ptr [ESP + 0x44]          ; 004ebd02
        ;   Label: LAB_004ebd02
    FMUL ST0                            ; 004ebd06
    FLD float ptr [ESP + 0x4c]          ; 004ebd08
    FMUL ST0                            ; 004ebd0c
    XOR EAX,EAX                         ; 004ebd0e
    FADDP                               ; 004ebd10
    MOV dword ptr [ESP + 0x48],EAX      ; 004ebd12
    FSQRT                               ; 004ebd16
    FCOMP double ptr [0x005e48e5]       ; 004ebd18 | DAT_005e48e5
    FNSTSW AX                           ; 004ebd1e
    SAHF                                ; 004ebd20
    JA 0x004ebcdd                       ; 004ebd21
        ;   XREF to: 004ebcdd (CONDITIONAL_JUMP)  ; LAB_004ebcdd
    CMP EBX,dword ptr [EBP + 0x14]      ; 004ebd23
    JZ 0x004ebcdd                       ; 004ebd26
        ;   XREF to: 004ebcdd (CONDITIONAL_JUMP)  ; LAB_004ebcdd
    LEA EAX,[ESP + 0x44]                ; 004ebd28
    PUSH EAX                            ; 004ebd2c
    LEA ESI,[ESP + 0x6c]                ; 004ebd2d
    LEA EDI,[ESP + 0x60]                ; 004ebd31
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 004ebd35
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[ESP + 0x6c]                ; 004ebd3a
    ADD ESP,0x4                         ; 004ebd3e
    MOVSD ES:EDI,ESI                    ; 004ebd41
    MOVSD ES:EDI,ESI                    ; 004ebd42
    MOVSD ES:EDI,ESI                    ; 004ebd43
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ebd44
    FLD float ptr [ESP + 0x60]          ; 004ebd47
    FSUB float ptr [EAX + 0x34]         ; 004ebd4b
    SUB ESP,0x4                         ; 004ebd4e
    FSTP float ptr [ESP]                ; 004ebd51
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 004ebd54
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cd60()
    MOV dword ptr [ESP + 0xa4],EAX      ; 004ebd59
    FLD float ptr [ESP + 0xa4]          ; 004ebd60
    FABS                                ; 004ebd67
    ADD ESP,0x4                         ; 004ebd69
    FCOMP double ptr [0x005e48ed]       ; 004ebd6c | DAT_005e48ed
    FNSTSW AX                           ; 004ebd72
    SAHF                                ; 004ebd74
    JA 0x004ebcdd                       ; 004ebd75
        ;   XREF to: 004ebcdd (CONDITIONAL_JUMP)  ; LAB_004ebcdd
    MOV ECX,dword ptr [ESP + 0x9c]      ; 004ebd7b
    PUSH ECX                            ; 004ebd82
    PUSH EBX                            ; 004ebd83
    LEA ESI,[ESP + 0x34]                ; 004ebd84
    LEA EDI,[ESP + 0x7c]                ; 004ebd88
    CALL core_actor.cpp_FUN_00408bb0    ; 004ebd8c
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x34]                ; 004ebd91
    ADD ESP,0x8                         ; 004ebd95
    MOVSD ES:EDI,ESI                    ; 004ebd98
    MOVSD ES:EDI,ESI                    ; 004ebd99
    MOVSD ES:EDI,ESI                    ; 004ebd9a
    FLD float ptr [ESP + 0x7c]          ; 004ebd9b
    FLDZ                                ; 004ebd9f
    FCOMPP                              ; 004ebda1
    FNSTSW AX                           ; 004ebda3
    SAHF                                ; 004ebda5
    JC 0x004ebcdd                       ; 004ebda6
        ;   XREF to: 004ebcdd (CONDITIONAL_JUMP)  ; LAB_004ebcdd
    MOV EAX,ESP                         ; 004ebdac
    PUSH EAX                            ; 004ebdae
    MOV ESI,dword ptr [EBX + 0x154]     ; 004ebdaf
    PUSH EBX                            ; 004ebdb5
    CALL dword ptr [ESI + 0x98]         ; 004ebdb6
    ADD ESP,0x8                         ; 004ebdbc
    CMP dword ptr [ESP],0x0             ; 004ebdbf
    JZ 0x004ebcdd                       ; 004ebdc3
        ;   XREF to: 004ebcdd (CONDITIONAL_JUMP)  ; LAB_004ebcdd
    MOV EDI,dword ptr [ESP + 0x4]       ; 004ebdc9
    TEST EDI,EDI                        ; 004ebdcd
    JNZ 0x004ebcdd                      ; 004ebdcf
        ;   XREF to: 004ebcdd (CONDITIONAL_JUMP)  ; LAB_004ebcdd
    MOV EAX,dword ptr [ESP + 0x8]       ; 004ebdd5
    MOV dword ptr [ESP + 0x88],EAX      ; 004ebdd9
    LEA EAX,[ESP + 0x80]                ; 004ebde0
    PUSH EAX                            ; 004ebde7
    LEA ESI,[ESP + 0x3c]                ; 004ebde8
    MOV dword ptr [ESP + 0x84],EDI      ; 004ebdec
    PUSH EBX                            ; 004ebdf3
    MOV dword ptr [ESP + 0x8c],EDI      ; 004ebdf4
    LEA EDI,[ESP + 0x58]                ; 004ebdfb
    CALL core_actor.cpp_FUN_00408b40    ; 004ebdff
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x40]                ; 004ebe04
    ADD ESP,0x8                         ; 004ebe08
    MOVSD ES:EDI,ESI                    ; 004ebe0b
    MOVSD ES:EDI,ESI                    ; 004ebe0c
    MOVSD ES:EDI,ESI                    ; 004ebe0d
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004ebe0e
    FLD float ptr [ESP + 0x50]          ; 004ebe15
    FSUB float ptr [EAX]                ; 004ebe19
    FMUL ST0                            ; 004ebe1b
    FLD float ptr [ESP + 0x58]          ; 004ebe1d
    FSUB float ptr [EAX + 0x8]          ; 004ebe21
    FMUL ST0                            ; 004ebe24
    FADDP                               ; 004ebe26
    FSQRT                               ; 004ebe28
    FCOMP double ptr [0x005e48f5]       ; 004ebe2a | DAT_005e48f5
    FNSTSW AX                           ; 004ebe30
    SAHF                                ; 004ebe32
    JA 0x004ebcdd                       ; 004ebe33
        ;   XREF to: 004ebcdd (CONDITIONAL_JUMP)  ; LAB_004ebcdd
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ebe39
    MOV dword ptr [EAX + 0x1ff70],0x0   ; 004ebe3c
    MOV dword ptr [EAX + 0x1ff60],0x9   ; 004ebe46
    MOV dword ptr [EAX + 0x1ff64],EBX   ; 004ebe50
    MOV dword ptr [EAX + 0x1ff68],EBX   ; 004ebe56
    MOV EAX,0x1                         ; 004ebe5c
    MOV ESP,EBP                         ; 004ebe61
    POP EBP                             ; 004ebe63
    POP EDI                             ; 004ebe64
    POP ESI                             ; 004ebe65
    POP EBX                             ; 004ebe66
    RET                                 ; 004ebe67
    XOR EAX,EAX                         ; 004ebe68
        ;   Label: LAB_004ebe68
    MOV ESP,EBP                         ; 004ebe6a
    POP EBP                             ; 004ebe6c
    POP EDI                             ; 004ebe6d
    POP ESI                             ; 004ebe6e
    POP EBX                             ; 004ebe6f
    RET                                 ; 004ebe70


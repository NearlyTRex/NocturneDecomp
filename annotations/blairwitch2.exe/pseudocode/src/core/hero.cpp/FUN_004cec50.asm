; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool core_hero_cpp_FUN_004cec50(int param_1)
;
; Local Variables:
; undefined        Stack[-0xa4]:1  local_a4
; undefined        Stack[-0x8c]:1  local_8c
;
; XREF[7]:
;   core_colonel.cpp_CColonel_process_FUN_00435830 at 00435c7f
;   core_gabriela.cpp_CGabriella_process_FUN_004ad640 at 004ae8ee
;   core_haystack.cpp_CHaystack_process_FUN_004cc990 at 004cce0d
;   core_hero.cpp_FUN_004d0780 at 004d07b0
;   core_icepick.cpp_CIcePick_process_FUN_004d4c50 at 004d51ee
;   core_stranger.cpp_CStranger_handleActionButton_FUN_0056e4d0 at 0056e696
;   core_svetlana.cpp_CSvetlana_process_FUN_00570510 at 00570a77
;
; Referenced Globals:
;   undefined4 DAT_005d9c64
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;   undefined4 g_CWeaponClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_FUN_00408d70
;   core_weapon.cpp_FUN_0058a5f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cec50
        ;   Label: core_hero.cpp_FUN_004cec50
    PUSH ESI                            ; 004cec51
    PUSH EDI                            ; 004cec52
    PUSH EBP                            ; 004cec53
    MOV EBP,ESP                         ; 004cec54
    SUB ESP,0x98                        ; 004cec56
    AND ESP,0xfffffff8                  ; 004cec5c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004cec5f
    PUSH EBX                            ; 004cec62
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004cec63
    LEA ESI,[ESP + 0x20]                ; 004cec69
    LEA EDI,[ESP + 0x8]                 ; 004cec6d
    CALL dword ptr [EAX + 0x24]         ; 004cec71
    MOV ECX,0x6                         ; 004cec74
    LEA ESI,[ESP + 0x20]                ; 004cec79
    ADD ESP,0x4                         ; 004cec7d
    MOVSD.REP ES:EDI,ESI                ; 004cec80
    LEA EAX,[ESP + 0x4]                 ; 004cec82
    FLD float ptr [ESP + 0x4]           ; 004cec86
    FLD float ptr [ESP + 0x8]           ; 004cec8a
    FLD float ptr [ESP + 0xc]           ; 004cec8e
    LEA EDI,[ESP + 0x40]                ; 004cec92
    LEA ESI,[ESP + 0x64]                ; 004cec96
    FXCH ST2                            ; 004cec9a
    FADD float ptr [EAX + 0xc]          ; 004cec9c
    FXCH                                ; 004cec9f
    FADD float ptr [EAX + 0x10]         ; 004ceca1
    FXCH ST2                            ; 004ceca4
    FADD float ptr [EAX + 0x14]         ; 004ceca6
    FXCH                                ; 004ceca9
    FSTP float ptr [ESP + 0x64]         ; 004cecab
    FXCH                                ; 004cecaf
    FSTP float ptr [ESP + 0x68]         ; 004cecb1
    FSTP float ptr [ESP + 0x6c]         ; 004cecb5
    MOVSD ES:EDI,ESI                    ; 004cecb9
    MOVSD ES:EDI,ESI                    ; 004cecba
    MOVSD ES:EDI,ESI                    ; 004cecbb
    FLD float ptr [0x005d9c64]          ; 004cecbc | DAT_005d9c64
    FLD float ptr [ESP + 0x40]          ; 004cecc2
    FMUL ST1                            ; 004cecc6
    FLD float ptr [ESP + 0x44]          ; 004cecc8
    FMUL ST2                            ; 004ceccc
    FLD float ptr [ESP + 0x48]          ; 004cecce
    FMULP ST3                           ; 004cecd2
    LEA EDI,[ESP + 0x34]                ; 004cecd4
    LEA ESI,[ESP + 0x4c]                ; 004cecd8
    FXCH                                ; 004cecdc
    FSTP float ptr [ESP + 0x4c]         ; 004cecde
    FSTP float ptr [ESP + 0x50]         ; 004cece2
    FSTP float ptr [ESP + 0x54]         ; 004cece6
    MOVSD ES:EDI,ESI                    ; 004cecea
    MOVSD ES:EDI,ESI                    ; 004ceceb
    MOVSD ES:EDI,ESI                    ; 004cecec
    MOV EAX,dword ptr [ESP + 0x38]      ; 004ceced
    XOR EDX,EDX                         ; 004cecf1
    MOV dword ptr [ESP + 0x80],EAX      ; 004cecf3
    LEA EAX,[ESP + 0x7c]                ; 004cecfa
    MOV ECX,0x3fc00000                  ; 004cecfe
    PUSH EAX                            ; 004ced03
    MOV dword ptr [ESP + 0x80],EDX      ; 004ced04
    MOV dword ptr [ESP + 0x88],ECX      ; 004ced0b
    PUSH EBX                            ; 004ced12
    LEA ESI,[ESP + 0x78]                ; 004ced13
    LEA EDI,[ESP + 0x60]                ; 004ced17
    CALL core_actor.cpp_FUN_00408d70    ; 004ced1b
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x78]                ; 004ced20
    ADD ESP,0x8                         ; 004ced24
    MOVSD ES:EDI,ESI                    ; 004ced27
    MOVSD ES:EDI,ESI                    ; 004ced28
    MOVSD ES:EDI,ESI                    ; 004ced29
    MOV ESI,0x7149f2ca                  ; 004ced2a
    XOR EDI,EDI                         ; 004ced2f
    MOV dword ptr [ESP + 0x90],ESI      ; 004ced31
    XOR ESI,ESI                         ; 004ced38
    MOV EAX,[0x0061b5a8]                ; 004ced3a | g_CDemonSetPtr
        ;   Label: LAB_004ced3a
    CMP EDI,dword ptr [EAX + 0x14d164]  ; 004ced3f | g_CDemonSetInstance.actor_count
    JL 0x004ced5d                       ; 004ced45
        ;   XREF to: 004ced5d (CONDITIONAL_JUMP)  ; LAB_004ced5d
    CMP dword ptr [EBX + 0x255f0],0x1   ; 004ced47
    SETZ AL                             ; 004ced4e
    AND EAX,0xff                        ; 004ced51
    MOV ESP,EBP                         ; 004ced56
    POP EBP                             ; 004ced58
    POP EDI                             ; 004ced59
    POP ESI                             ; 004ced5a
    POP EBX                             ; 004ced5b
    RET                                 ; 004ced5c
    MOV ECX,dword ptr [0x02661f38]      ; 004ced5d | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_004ced5d
    PUSH ECX                            ; 004ced63
    MOV EAX,dword ptr [ESI + EAX*0x1 + 0x14d168] ; 004ced64 | g_CDemonSetInstance.actors[0]
    PUSH EAX                            ; 004ced6b
    MOV dword ptr [ESP + 0x90],EAX      ; 004ced6c
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004ced73
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004ced78
    MOV EDX,0xbf800000                  ; 004ced7b
    MOV dword ptr [ESP + 0x8c],EAX      ; 004ced80
    MOV dword ptr [ESP],EDX             ; 004ced87
    TEST EAX,EAX                        ; 004ced8a
    JZ 0x004cee49                       ; 004ced8c
        ;   XREF to: 004cee49 (CONDITIONAL_JUMP)  ; LAB_004cee49
    JZ 0x004ceda1                       ; 004ced92
        ;   XREF to: 004ceda1 (CONDITIONAL_JUMP)  ; LAB_004ceda1
    PUSH EAX                            ; 004ced94
    CALL core_weapon.cpp_FUN_0058a5f0   ; 004ced95
        ;   XREF to: 0058a5f0 (UNCONDITIONAL_CALL)  ; undefined core_weapon.cpp_FUN_0058a5f0()
    ADD ESP,0x4                         ; 004ced9a
    TEST EAX,EAX                        ; 004ced9d
    JZ 0x004cee0c                       ; 004ced9f
        ;   XREF to: 004cee0c (CONDITIONAL_JUMP)  ; LAB_004cee0c
    CMP dword ptr [ESP + 0x8c],0x0      ; 004ceda1
        ;   Label: LAB_004ceda1
    JZ 0x004cee0c                       ; 004ceda9
        ;   XREF to: 004cee0c (CONDITIONAL_JUMP)  ; LAB_004cee0c
    FLD float ptr [ESP]                 ; 004cedab
        ;   Label: LAB_004cedab
    FLDZ                                ; 004cedae
    FCOMPP                              ; 004cedb0
    FNSTSW AX                           ; 004cedb2
    SAHF                                ; 004cedb4
    JA 0x004cee03                       ; 004cedb5
        ;   XREF to: 004cee03 (CONDITIONAL_JUMP)  ; LAB_004cee03
    FLD float ptr [ESP]                 ; 004cedb7
    FCOMP float ptr [ESP + 0x90]        ; 004cedba
    FNSTSW AX                           ; 004cedc1
    SAHF                                ; 004cedc3
    JNC 0x004cee03                      ; 004cedc4
        ;   XREF to: 004cee03 (CONDITIONAL_JUMP)  ; LAB_004cee03
    MOV EAX,dword ptr [ESP]             ; 004cedc6
    MOV dword ptr [ESP + 0x90],EAX      ; 004cedc9
    MOV EAX,[0x0061b5a8]                ; 004cedd0 | g_CDemonSetPtr
    MOV dword ptr [EBX + 0x255f0],0x1   ; 004cedd5
    MOV EAX,dword ptr [ESI + EAX*0x1 + 0x14d168] ; 004ceddf | g_CDemonSetInstance.actors[0]
    MOV dword ptr [EBX + 0x255f4],EAX   ; 004cede6
    MOV EAX,dword ptr [ESP + 0x88]      ; 004cedec
    MOV dword ptr [EBX + 0x25600],0x0   ; 004cedf3
    MOV dword ptr [EBX + 0x255f8],EAX   ; 004cedfd
    INC EDI                             ; 004cee03
        ;   Label: LAB_004cee03
    ADD ESI,0x4                         ; 004cee04
    JMP 0x004ced3a                      ; 004cee07
        ;   XREF to: 004ced3a (UNCONDITIONAL_JUMP)  ; LAB_004ced3a
    LEA ECX,[ESP + 0x88]                ; 004cee0c
        ;   Label: LAB_004cee0c
    PUSH ECX                            ; 004cee13
    LEA ECX,[ESP + 0x5c]                ; 004cee14
    MOV EAX,[0x0061b5a8]                ; 004cee18 | g_CDemonSetPtr
    PUSH ECX                            ; 004cee1d
    MOV EAX,dword ptr [ESI + EAX*0x1 + 0x14d168] ; 004cee1e | g_CDemonSetInstance.actors[0]
    PUSH EBX                            ; 004cee25
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004cee26
    PUSH EAX                            ; 004cee2c
    CALL dword ptr [EDX + 0x68]         ; 004cee2d
    MOV dword ptr [ESP + 0xa4],EAX      ; 004cee30
    FLD float ptr [ESP + 0xa4]          ; 004cee37
    ADD ESP,0x10                        ; 004cee3e
    FSTP float ptr [ESP]                ; 004cee41
    JMP 0x004cedab                      ; 004cee44
        ;   XREF to: 004cedab (UNCONDITIONAL_JUMP)  ; LAB_004cedab
    LEA EDX,[ESP + 0x88]                ; 004cee49
        ;   Label: LAB_004cee49
    PUSH EDX                            ; 004cee50
    LEA EDX,[ESP + 0x5c]                ; 004cee51
    MOV EAX,[0x0061b5a8]                ; 004cee55 | g_CDemonSetPtr
    PUSH EDX                            ; 004cee5a
    MOV EAX,dword ptr [ESI + EAX*0x1 + 0x14d168] ; 004cee5b | g_CDemonSetInstance.actors[0]
    PUSH EBX                            ; 004cee62
    MOV ECX,dword ptr [EAX + 0x2b0]     ; 004cee63
    PUSH EAX                            ; 004cee69
    CALL dword ptr [ECX + 0x68]         ; 004cee6a
    MOV dword ptr [ESP + 0xa4],EAX      ; 004cee6d
    FLD float ptr [ESP + 0xa4]          ; 004cee74
    ADD ESP,0x10                        ; 004cee7b
    FSTP float ptr [ESP]                ; 004cee7e
    JMP 0x004cedab                      ; 004cee81
        ;   XREF to: 004cedab (UNCONDITIONAL_JUMP)  ; LAB_004cedab


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hero_cpp_CHero_tryInteract_FUN_004eb090(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0xa4]:1  local_a4
; undefined        Stack[-0x8c]:1  local_8c
;
; XREF[6]:
;   core_gabriela.cpp_CGabriella_process_FUN_004c65f0 at 004c7887
;   core_haystack.cpp_CHaystack_process_FUN_004e9250 at 004e96cd
;   core_hero.cpp_FUN_004eca10 at 004eca40
;   core_icepick.cpp_CIcePick_process_FUN_004f0e50 at 004f13ee
;   core_stranger.cpp_CStranger_handleActionButton_FUN_00591120 at 005912e6
;   core_svetlana.cpp_CSvetlana_process_FUN_00593150 at 005936b7
;
; Referenced Globals:
;   undefined4 DAT_005e4831
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eb090
        ;   Label: core_hero.cpp_CHero_tryInteract_FUN_004eb090
    PUSH ESI                            ; 004eb091
    PUSH EDI                            ; 004eb092
    PUSH EBP                            ; 004eb093
    MOV EBP,ESP                         ; 004eb094
    SUB ESP,0x94                        ; 004eb096
    AND ESP,0xfffffff8                  ; 004eb09c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004eb09f
    PUSH EBX                            ; 004eb0a2
    MOV EAX,dword ptr [EBX + 0x154]     ; 004eb0a3
    LEA ESI,[ESP + 0x20]                ; 004eb0a9
    LEA EDI,[ESP + 0x8]                 ; 004eb0ad
    CALL dword ptr [EAX + 0x1c]         ; 004eb0b1
    MOV ECX,0x6                         ; 004eb0b4
    LEA ESI,[ESP + 0x20]                ; 004eb0b9
    ADD ESP,0x4                         ; 004eb0bd
    MOVSD.REP ES:EDI,ESI                ; 004eb0c0
    LEA EAX,[ESP + 0x4]                 ; 004eb0c2
    FLD float ptr [ESP + 0x4]           ; 004eb0c6
    FLD float ptr [ESP + 0x8]           ; 004eb0ca
    FLD float ptr [ESP + 0xc]           ; 004eb0ce
    LEA EDI,[ESP + 0x40]                ; 004eb0d2
    LEA ESI,[ESP + 0x58]                ; 004eb0d6
    FXCH ST2                            ; 004eb0da
    FADD float ptr [EAX + 0xc]          ; 004eb0dc
    FXCH                                ; 004eb0df
    FADD float ptr [EAX + 0x10]         ; 004eb0e1
    FXCH ST2                            ; 004eb0e4
    FADD float ptr [EAX + 0x14]         ; 004eb0e6
    FXCH                                ; 004eb0e9
    FSTP float ptr [ESP + 0x58]         ; 004eb0eb
    FXCH                                ; 004eb0ef
    FSTP float ptr [ESP + 0x5c]         ; 004eb0f1
    FSTP float ptr [ESP + 0x60]         ; 004eb0f5
    MOVSD ES:EDI,ESI                    ; 004eb0f9
    MOVSD ES:EDI,ESI                    ; 004eb0fa
    MOVSD ES:EDI,ESI                    ; 004eb0fb
    FLD float ptr [0x005e4831]          ; 004eb0fc | DAT_005e4831
    FLD float ptr [ESP + 0x40]          ; 004eb102
    FMUL ST1                            ; 004eb106
    FLD float ptr [ESP + 0x44]          ; 004eb108
    FMUL ST2                            ; 004eb10c
    FLD float ptr [ESP + 0x48]          ; 004eb10e
    FMULP ST3                           ; 004eb112
    LEA EDI,[ESP + 0x34]                ; 004eb114
    LEA ESI,[ESP + 0x4c]                ; 004eb118
    FXCH                                ; 004eb11c
    FSTP float ptr [ESP + 0x4c]         ; 004eb11e
    FSTP float ptr [ESP + 0x50]         ; 004eb122
    FSTP float ptr [ESP + 0x54]         ; 004eb126
    MOVSD ES:EDI,ESI                    ; 004eb12a
    MOVSD ES:EDI,ESI                    ; 004eb12b
    MOVSD ES:EDI,ESI                    ; 004eb12c
    MOV EAX,dword ptr [ESP + 0x38]      ; 004eb12d
    XOR EDX,EDX                         ; 004eb131
    MOV dword ptr [ESP + 0x68],EAX      ; 004eb133
    LEA EAX,[ESP + 0x64]                ; 004eb137
    MOV ECX,0x3fc00000                  ; 004eb13b
    PUSH EAX                            ; 004eb140
    MOV dword ptr [ESP + 0x68],EDX      ; 004eb141
    MOV dword ptr [ESP + 0x70],ECX      ; 004eb145
    PUSH EBX                            ; 004eb149
    LEA ESI,[ESP + 0x78]                ; 004eb14a
    LEA EDI,[ESP + 0x84]                ; 004eb14e
    CALL core_actor.cpp_FUN_00408b40    ; 004eb155
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x78]                ; 004eb15a
    ADD ESP,0x8                         ; 004eb15e
    MOVSD ES:EDI,ESI                    ; 004eb161
    MOVSD ES:EDI,ESI                    ; 004eb162
    MOVSD ES:EDI,ESI                    ; 004eb163
    MOV ESI,0x7149f2ca                  ; 004eb164
    XOR EDI,EDI                         ; 004eb169
    MOV dword ptr [ESP + 0x90],ESI      ; 004eb16b
    XOR ESI,ESI                         ; 004eb172
    MOV EAX,[0x00622c18]                ; 004eb174 | g_CDemonSetPtr
        ;   Label: LAB_004eb174
    CMP EDI,dword ptr [EAX + 0x14d164]  ; 004eb179 | g_CDemonSetInstance.actor_count
    JL 0x004eb197                       ; 004eb17f
        ;   XREF to: 004eb197 (CONDITIONAL_JUMP)  ; LAB_004eb197
    CMP dword ptr [EBX + 0x1ff60],0x1   ; 004eb181
    SETZ AL                             ; 004eb188
    AND EAX,0xff                        ; 004eb18b
    MOV ESP,EBP                         ; 004eb190
    POP EBP                             ; 004eb192
    POP EDI                             ; 004eb193
    POP ESI                             ; 004eb194
    POP EBX                             ; 004eb195
    RET                                 ; 004eb196
    LEA ECX,[ESP + 0x88]                ; 004eb197
        ;   Label: LAB_004eb197
    LEA EDX,[EAX + ESI*0x1]             ; 004eb19e
    PUSH ECX                            ; 004eb1a1
    LEA ECX,[ESP + 0x80]                ; 004eb1a2
    MOV EAX,dword ptr [EDX + 0x14d168]  ; 004eb1a9 | g_CDemonSetInstance.actors[0]
    PUSH ECX                            ; 004eb1af
    MOV dword ptr [ESP + 0x90],EAX      ; 004eb1b0
    PUSH EBX                            ; 004eb1b7
    MOV EDX,dword ptr [EAX + 0x154]     ; 004eb1b8
    PUSH EAX                            ; 004eb1be
    CALL dword ptr [EDX + 0x60]         ; 004eb1bf
    MOV dword ptr [ESP + 0x9c],EAX      ; 004eb1c2
    FLD float ptr [ESP + 0x9c]          ; 004eb1c9
    ADD ESP,0x10                        ; 004eb1d0
    FST float ptr [ESP]                 ; 004eb1d3
    FLDZ                                ; 004eb1d6
    FCOMPP                              ; 004eb1d8
    FNSTSW AX                           ; 004eb1da
    SAHF                                ; 004eb1dc
    JA 0x004eb22b                       ; 004eb1dd
        ;   XREF to: 004eb22b (CONDITIONAL_JUMP)  ; LAB_004eb22b
    FLD float ptr [ESP]                 ; 004eb1df
    FCOMP float ptr [ESP + 0x90]        ; 004eb1e2
    FNSTSW AX                           ; 004eb1e9
    SAHF                                ; 004eb1eb
    JNC 0x004eb22b                      ; 004eb1ec
        ;   XREF to: 004eb22b (CONDITIONAL_JUMP)  ; LAB_004eb22b
    MOV EAX,dword ptr [ESP]             ; 004eb1ee
    MOV dword ptr [ESP + 0x90],EAX      ; 004eb1f1
    MOV EAX,[0x00622c18]                ; 004eb1f8 | g_CDemonSetPtr
    MOV dword ptr [EBX + 0x1ff60],0x1   ; 004eb1fd
    MOV EAX,dword ptr [ESI + EAX*0x1 + 0x14d168] ; 004eb207 | g_CDemonSetInstance.actors[0]
    MOV dword ptr [EBX + 0x1ff64],EAX   ; 004eb20e
    MOV EAX,dword ptr [ESP + 0x88]      ; 004eb214
    MOV dword ptr [EBX + 0x1ff70],0x0   ; 004eb21b
    MOV dword ptr [EBX + 0x1ff68],EAX   ; 004eb225
    INC EDI                             ; 004eb22b
        ;   Label: LAB_004eb22b
    ADD ESI,0x4                         ; 004eb22c
    JMP 0x004eb174                      ; 004eb22f
        ;   XREF to: 004eb174 (UNCONDITIONAL_JUMP)  ; LAB_004eb174


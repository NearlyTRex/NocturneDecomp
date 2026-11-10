; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_hero_cpp_FUN_004d00c0(int param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[7]:
;   core_baron.cpp_CBaron_performLightningAttack_FUN_00410170 at 00410188
;   core_colonel.cpp_CColonel_processAI_FUN_00435e30 at 00435f1a
;   core_gabriela.cpp_FUN_004aeb00 at 004aebfd
;   core_haystack.cpp_CHaystack_updateAI_FUN_004ccff0 at 004cd0ef
;   core_icepick.cpp_CIcePick_processAI_FUN_004d5950 at 004d5a99
;   core_scat.cpp_CScat_updateAI_FUN_0051f490 at 0051f580
;   core_svetlana.cpp_CSvetlana_processAI_FUN_00570c80 at 00570dc9
;
; Referenced Globals:
;   undefined4 DAT_005d9ddc
;   WatcomTypeInfo g_CVectorTypeInfo
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 g_CMobsterClassInfo.name_hash
;   undefined4 g_CDemonSetInstance.enemy_count
;   undefined4 g_CVehicleClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   crt_memory.c___arrinit_FUN_005b7f5f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d00c0
        ;   Label: core_hero.cpp_FUN_004d00c0
    PUSH ESI                            ; 004d00c1
    PUSH EDI                            ; 004d00c2
    PUSH EBP                            ; 004d00c3
    MOV EBP,ESP                         ; 004d00c4
    SUB ESP,0xac                        ; 004d00c6
    AND ESP,0xfffffff8                  ; 004d00cc
    XOR EDX,EDX                         ; 004d00cf
    MOV EAX,dword ptr [EBP + 0x18]      ; 004d00d1
    MOV dword ptr [ESP + 0xa0],EDX      ; 004d00d4
    MOV dword ptr [EAX],0x461c3f9a      ; 004d00db
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d00e1
    MOV dword ptr [ESP + 0xa8],EDX      ; 004d00e4
    ADD EAX,0x20                        ; 004d00eb
    MOV dword ptr [ESP + 0x98],EDX      ; 004d00ee
    MOV dword ptr [ESP + 0xa4],EAX      ; 004d00f5
    MOV EAX,[0x0061b5a8]                ; 004d00fc | g_CDemonSetPtr
        ;   Label: LAB_004d00fc
    MOV EDX,dword ptr [ESP + 0xa0]      ; 004d0101
    CMP EDX,dword ptr [EAX + 0x150fec]  ; 004d0108 | g_CDemonSetInstance.enemy_count
    JL 0x004d012c                       ; 004d010e
        ;   XREF to: 004d012c (CONDITIONAL_JUMP)  ; LAB_004d012c
    CMP dword ptr [ESP + 0x98],0x0      ; 004d0110
    JNZ 0x004d028c                      ; 004d0118
        ;   XREF to: 004d028c (CONDITIONAL_JUMP)  ; LAB_004d028c
    MOV EAX,dword ptr [ESP + 0x98]      ; 004d011e
    MOV ESP,EBP                         ; 004d0125
    POP EBP                             ; 004d0127
    POP EDI                             ; 004d0128
    POP ESI                             ; 004d0129
    POP EBX                             ; 004d012a
    RET                                 ; 004d012b
    MOV EDX,dword ptr [ESP + 0xa8]      ; 004d012c
        ;   Label: LAB_004d012c
    MOV ECX,dword ptr [0x02653750]      ; 004d0133 | g_CVehicleClassInfo.name_hash
    ADD EAX,EDX                         ; 004d0139
    PUSH ECX                            ; 004d013b
    MOV EBX,dword ptr [EAX + 0x150ff0]  ; 004d013c
    PUSH EBX                            ; 004d0142
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004d0143
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 004d0148
    TEST EAX,EAX                        ; 004d014b
    JNZ 0x004d0267                      ; 004d014d
        ;   XREF to: 004d0267 (CONDITIONAL_JUMP)  ; LAB_004d0267
    MOV ESI,dword ptr [0x01d1c778]      ; 004d0153 | g_CMobsterClassInfo.name_hash
    PUSH ESI                            ; 004d0159
    PUSH EBX                            ; 004d015a
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004d015b
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 004d0160
    TEST EAX,EAX                        ; 004d0163
    JZ 0x004d0174                       ; 004d0165
        ;   XREF to: 004d0174 (CONDITIONAL_JUMP)  ; LAB_004d0174
    CMP dword ptr [EAX + 0x10b1c],0x0   ; 004d0167
    JNZ 0x004d0267                      ; 004d016e
        ;   XREF to: 004d0267 (CONDITIONAL_JUMP)  ; LAB_004d0267
    PUSH EBX                            ; 004d0174
        ;   Label: LAB_004d0174
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004d0175
    CALL dword ptr [EAX + 0x114]        ; 004d017b
    ADD ESP,0x4                         ; 004d0181
    TEST EAX,EAX                        ; 004d0184
    JNZ 0x004d0267                      ; 004d0186
        ;   XREF to: 004d0267 (CONDITIONAL_JUMP)  ; LAB_004d0267
    PUSH EBX                            ; 004d018c
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004d018d
    CALL dword ptr [EAX + 0x78]         ; 004d0193
    ADD ESP,0x4                         ; 004d0196
    TEST EAX,EAX                        ; 004d0199
    JNZ 0x004d0267                      ; 004d019b
        ;   XREF to: 004d0267 (CONDITIONAL_JUMP)  ; LAB_004d0267
    PUSH 0x5f22b0                       ; 004d01a1 | g_CVectorTypeInfo
    PUSH 0xa                            ; 004d01a6
    LEA EAX,[ESP + 0x8]                 ; 004d01a8
    PUSH EAX                            ; 004d01ac
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 004d01ad
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005b7f5f()
    ADD ESP,0xc                         ; 004d01b2
    MOV EDX,ESP                         ; 004d01b5
    PUSH EDX                            ; 004d01b7
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004d01b8
    PUSH EBX                            ; 004d01be
    CALL dword ptr [EAX + 0x5c]         ; 004d01bf
    ADD ESP,0x8                         ; 004d01c2
    TEST EAX,EAX                        ; 004d01c5
    JLE 0x004d0267                      ; 004d01c7
        ;   XREF to: 004d0267 (CONDITIONAL_JUMP)  ; LAB_004d0267
    MOV EDX,dword ptr [ESP + 0xa4]      ; 004d01cd
    LEA EDI,[ESP + 0x84]                ; 004d01d4
    LEA ESI,[ESP + 0x78]                ; 004d01db
    LEA EAX,[EBX + 0x20]                ; 004d01df
    FLD float ptr [EDX]                 ; 004d01e2
    FLD float ptr [EDX + 0x4]           ; 004d01e4
    FLD float ptr [EDX + 0x8]           ; 004d01e7
    FXCH ST2                            ; 004d01ea
    FSUB float ptr [EAX]                ; 004d01ec
    FXCH                                ; 004d01ee
    FSUB float ptr [EAX + 0x4]          ; 004d01f0
    FXCH ST2                            ; 004d01f3
    FSUB float ptr [EAX + 0x8]          ; 004d01f5
    FXCH                                ; 004d01f8
    FSTP float ptr [ESP + 0x78]         ; 004d01fa
    FXCH                                ; 004d01fe
    FSTP float ptr [ESP + 0x7c]         ; 004d0200
    FSTP float ptr [ESP + 0x80]         ; 004d0204
    MOVSD ES:EDI,ESI                    ; 004d020b
    MOVSD ES:EDI,ESI                    ; 004d020c
    MOVSD ES:EDI,ESI                    ; 004d020d
    FLD float ptr [ESP + 0x88]          ; 004d020e
    FLD ST0                             ; 004d0215
    FMUL double ptr [0x005d9ddc]        ; 004d0217 | DAT_005d9ddc
    FSTP ST1                            ; 004d021d
    FST float ptr [ESP + 0x88]          ; 004d021f
    FMUL float ptr [ESP + 0x88]         ; 004d0226
    FLD float ptr [ESP + 0x84]          ; 004d022d
    FMUL ST0                            ; 004d0234
    FADDP                               ; 004d0236
    FLD float ptr [ESP + 0x8c]          ; 004d0238
    FMUL ST0                            ; 004d023f
    FADDP                               ; 004d0241
    MOV EAX,dword ptr [EBP + 0x18]      ; 004d0243
    FST float ptr [ESP + 0x9c]          ; 004d0246
    FCOMP float ptr [EAX]               ; 004d024d
    FNSTSW AX                           ; 004d024f
    SAHF                                ; 004d0251
    JNC 0x004d0267                      ; 004d0252
        ;   XREF to: 004d0267 (CONDITIONAL_JUMP)  ; LAB_004d0267
    MOV EDX,dword ptr [EBP + 0x18]      ; 004d0254
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004d0257
    MOV dword ptr [ESP + 0x98],EBX      ; 004d025e
    MOV dword ptr [EDX],EAX             ; 004d0265
    MOV EDX,dword ptr [ESP + 0xa0]      ; 004d0267
        ;   Label: LAB_004d0267
    MOV EAX,dword ptr [ESP + 0xa8]      ; 004d026e
    INC EDX                             ; 004d0275
    ADD EAX,0x4                         ; 004d0276
    MOV dword ptr [ESP + 0xa0],EDX      ; 004d0279
    MOV dword ptr [ESP + 0xa8],EAX      ; 004d0280
    JMP 0x004d00fc                      ; 004d0287
        ;   XREF to: 004d00fc (UNCONDITIONAL_JUMP)  ; LAB_004d00fc
    MOV EAX,dword ptr [EBP + 0x18]      ; 004d028c
        ;   Label: LAB_004d028c
    FLD float ptr [EAX]                 ; 004d028f
    FSQRT                               ; 004d0291
    MOV EAX,dword ptr [EBP + 0x18]      ; 004d0293
    FSTP float ptr [EAX]                ; 004d0296
    MOV EAX,dword ptr [ESP + 0x98]      ; 004d0298
    MOV ESP,EBP                         ; 004d029f
    POP EBP                             ; 004d02a1
    POP EDI                             ; 004d02a2
    POP ESI                             ; 004d02a3
    POP EBX                             ; 004d02a4
    RET                                 ; 004d02a5


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000(CCharacter *this_ptr,CVector3f *target_pos,CPathMap *path_map,CVector3f *direction,float min_distance,float max_distance)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   target_pos
; CPathMap *       Stack[0xc]:4   path_map
; CVector3f *      Stack[0x10]:4   direction
; float            Stack[0x14]:4   min_distance
; float            Stack[0x18]:4   max_distance
; Local Variables:
; undefined4       Stack[-0x1a4]:4  local_1a4
; undefined4       Stack[-0x1a0]:4  local_1a0
; undefined4       Stack[-0x19c]:4  local_19c
; undefined4       Stack[-0x198]:4  local_198
; undefined4       Stack[-0x194]:4  local_194
; undefined4       Stack[-0x190]:4  local_190
; undefined4       Stack[-0x18c]:4  local_18c
; undefined        Stack[-0x188]:1  local_188
; undefined4       Stack[-0x17c]:4  local_17c
; undefined4       Stack[-0x178]:4  local_178
; undefined4       Stack[-0x174]:4  local_174
; undefined        Stack[-0x170]:1  local_170
; undefined        Stack[-0x164]:1  local_164
; undefined4       Stack[-0x160]:4  local_160
; undefined4       Stack[-0x158]:4  local_158
; undefined4       Stack[-0x154]:4  local_154
; undefined4       Stack[-0x150]:4  local_150
; undefined        Stack[-0x14c]:1  local_14c
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined        Stack[-0x134]:1  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined        Stack[-0x110]:1  local_110
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined        Stack[-0xec]:1  local_ec
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined        Stack[-0xd4]:1  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined        Stack[-0xc8]:1  local_c8
; undefined        Stack[-0xbc]:1  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined        Stack[-0xb0]:1  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined        Stack[-0x98]:1  local_98
; undefined        Stack[-0x8c]:1  local_8c
; undefined        Stack[-0x80]:1  local_80
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
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
;
; XREF[33]:
;   core_batcreat.cpp_FUN_00411a10 at 004121d8
;   core_batman.cpp_FUN_00412f40 at 00413ab8
;   core_boneguy.cpp_FUN_004186c0 at 004191c0
;   core_boneguy.cpp_FUN_00419520 at 00419814
;   core_bride.cpp_FUN_0041dbe0 at 0041df4b
;   core_charactr.cpp_FUN_00428260 at 0042858c
;   core_charactr.cpp_FUN_004287f0 at 004288d5
;   core_charactr.cpp_FUN_00429f20 at 0042a07f
;   core_charactr.cpp_FUN_0042abe0 at 0042ac62
;   core_cow.cpp_FUN_004392b0 at 004397a9
;   ... and 23 more
;
; Referenced Globals:
;   TerminatedCString s_CCharacter_walkToPoint_g_005ccc09
;   undefined4 DAT_005ccc3e
;   undefined4 DAT_005ccc46
;   undefined4 DAT_005ccc4e
;   undefined4 DAT_005ccc56
;   undefined4 DAT_005ccc5e
;   undefined4 DAT_005ccc66
;   undefined4 DAT_005ccc6e
;   CConsole* g_CConsolePtr = 007c158c
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   core_actor.cpp_FUN_00408cf0
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_00408de0
;   core_actor.cpp_FUN_0040d0c0
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_00513650
;   core_path.cpp_getPathMap_FUN_00513ea0
;   core_vecdir.cpp_FUN_005838f0
;   engine_console.cpp_FUN_00436710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00423000
        ;   Label: core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000
    PUSH ESI                            ; 00423001
    PUSH EDI                            ; 00423002
    PUSH EBP                            ; 00423003
    MOV EBP,ESP                         ; 00423004
    SUB ESP,0x18c                       ; 00423006
    AND ESP,0xfffffff8                  ; 0042300c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042300f
    MOV EAX,dword ptr [EBX + 0x2594]    ; 00423012
    MOV dword ptr [ESP + 0x14],EAX      ; 00423018
    MOV EAX,dword ptr [EBX + 0x2598]    ; 0042301c
    MOV dword ptr [ESP + 0x184],EAX     ; 00423022
    MOV EAX,dword ptr [EBP + 0x20]      ; 00423029
    FLD float ptr [EAX + 0x8]           ; 0042302c
    FMUL ST0                            ; 0042302f
    FLD float ptr [EAX]                 ; 00423031
    FMUL ST0                            ; 00423033
    FADDP                               ; 00423035
    FSQRT                               ; 00423037
    MOV EDX,dword ptr [EBP + 0x20]      ; 00423039
    LEA ESI,[ESP + 0x108]               ; 0042303c
    LEA EDI,[ESP + 0xcc]                ; 00423043
    PUSH EDX                            ; 0042304a
    FSTP float ptr [ESP + 0x10]         ; 0042304b
    CALL core_vecdir.cpp_FUN_005838f0   ; 0042304f
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005838f0()
    ADD ESP,0x4                         ; 00423054
    LEA ESI,[ESP + 0x108]               ; 00423057
    MOV ECX,dword ptr [EBP + 0x18]      ; 0042305e
    MOVSD ES:EDI,ESI                    ; 00423061
    MOVSD ES:EDI,ESI                    ; 00423062
    MOVSD ES:EDI,ESI                    ; 00423063
    PUSH ECX                            ; 00423064
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00423065
    LEA ESI,[ESP + 0x58]                ; 0042306c
    PUSH EBX                            ; 00423070
    LEA EDI,[ESP + 0xc8]                ; 00423071
    MOV dword ptr [ESP + 0x10],EAX      ; 00423078
    CALL core_actor.cpp_FUN_00408de0    ; 0042307c
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x5c]                ; 00423081
    ADD ESP,0x8                         ; 00423085
    MOVSD ES:EDI,ESI                    ; 00423088
    MOVSD ES:EDI,ESI                    ; 00423089
    MOVSD ES:EDI,ESI                    ; 0042308a
    FLD float ptr [ESP + 0xc8]          ; 0042308b
    FMUL ST0                            ; 00423092
    FLD float ptr [ESP + 0xc0]          ; 00423094
    FMUL ST0                            ; 0042309b
    FADDP                               ; 0042309d
    FSQRT                               ; 0042309f
    LEA EAX,[ESP + 0xc0]                ; 004230a1
    LEA ESI,[ESP + 0x30]                ; 004230a8
    PUSH EAX                            ; 004230ac
    FSTP float ptr [ESP + 0x14]         ; 004230ad
    CALL core_vecdir.cpp_FUN_005838f0   ; 004230b1
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005838f0()
    ADD ESP,0x4                         ; 004230b6
    FLD float ptr [ESP + 0x10]          ; 004230b9
    FSUB float ptr [ESP + 0xc]          ; 004230bd
    FABS                                ; 004230c1
    LEA EDI,[ESP + 0xe4]                ; 004230c3
    LEA ESI,[ESP + 0x30]                ; 004230ca
    MOV EAX,dword ptr [EBP + 0x20]      ; 004230ce
    MOVSD ES:EDI,ESI                    ; 004230d1
    MOVSD ES:EDI,ESI                    ; 004230d2
    MOVSD ES:EDI,ESI                    ; 004230d3
    FLD float ptr [EAX + 0x4]           ; 004230d4
    FMUL ST0                            ; 004230d7
    FLD float ptr [EAX]                 ; 004230d9
    FMUL ST0                            ; 004230db
    FADDP                               ; 004230dd
    FLD float ptr [EAX + 0x8]           ; 004230df
    FMUL ST0                            ; 004230e2
    FADDP                               ; 004230e4
    FSQRT                               ; 004230e6
    XOR ESI,ESI                         ; 004230e8
    MOV dword ptr [ESP + 0x164],ESI     ; 004230ea
    MOV dword ptr [ESP],ESI             ; 004230f1
    FXCH                                ; 004230f4
    FSTP float ptr [ESP + 0x4]          ; 004230f6
    FLDZ                                ; 004230fa
    FCOMPP                              ; 004230fc
    FNSTSW AX                           ; 004230fe
    SAHF                                ; 00423100
    JC 0x004233f5                       ; 00423101
        ;   XREF to: 004233f5 (CONDITIONAL_JUMP)  ; LAB_004233f5
    FLD float ptr [EBP + 0x24]          ; 00423107
        ;   Label: LAB_00423107
    FADD double ptr [0x005ccc3e]        ; 0042310a | DAT_005ccc3e
    FLD float ptr [ESP + 0x4]           ; 00423110
    FCOMPP                              ; 00423114
    FNSTSW AX                           ; 00423116
    SAHF                                ; 00423118
    JNC 0x0042314d                      ; 00423119
        ;   XREF to: 0042314d (CONDITIONAL_JUMP)  ; LAB_0042314d
    FLD float ptr [EBP + 0x28]          ; 0042311b
    FADD double ptr [0x005ccc3e]        ; 0042311e | DAT_005ccc3e
    FLD float ptr [ESP]                 ; 00423124
    FCOMPP                              ; 00423127
    FNSTSW AX                           ; 00423129
    SAHF                                ; 0042312b
    JNC 0x0042314d                      ; 0042312c
        ;   XREF to: 0042314d (CONDITIONAL_JUMP)  ; LAB_0042314d
    FLD float ptr [ESP + 0xc4]          ; 0042312e
    FABS                                ; 00423135
    FCOMP double ptr [0x005ccc46]       ; 00423137 | DAT_005ccc46
    FNSTSW AX                           ; 0042313d
    SAHF                                ; 0042313f
    JNC 0x0042314d                      ; 00423140
        ;   XREF to: 0042314d (CONDITIONAL_JUMP)  ; LAB_0042314d
    MOV dword ptr [ESP + 0x164],0x1     ; 00423142
    LEA EAX,[EBX + 0x2508]              ; 0042314d
        ;   Label: LAB_0042314d
    MOV dword ptr [EAX + 0x8],0x0       ; 00423153
    FLD float ptr [ESP + 0x8]           ; 0042315a
    MOV EDX,dword ptr [EAX + 0x8]       ; 0042315e
    MOV dword ptr [EAX + 0x4],EDX       ; 00423161
    MOV EDX,dword ptr [EAX + 0x4]       ; 00423164
    MOV dword ptr [EAX],EDX             ; 00423167
    FABS                                ; 00423169
    FMUL double ptr [0x005ccc4e]        ; 0042316b | DAT_005ccc4e
    FMUL double ptr [0x005ccc56]        ; 00423171 | DAT_005ccc56
    FLD float ptr [ESP + 0xc]           ; 00423177
    FMUL double ptr [0x005ccc5e]        ; 0042317b | DAT_005ccc5e
    FADD double ptr [0x005ccc66]        ; 00423181 | DAT_005ccc66
    FADDP                               ; 00423187
    MOV EDX,dword ptr [EBX + 0x2814]    ; 00423189
    FSTP float ptr [ESP + 0x12c]        ; 0042318f
    TEST EDX,EDX                        ; 00423196
    JZ 0x00423429                       ; 00423198
        ;   XREF to: 00423429 (CONDITIONAL_JUMP)  ; LAB_00423429
    FLD float ptr [ESP + 0x14]          ; 0042319e
        ;   Label: LAB_0042319e
    FMUL double ptr [0x005ccc6e]        ; 004231a2 | DAT_005ccc6e
    FADD float ptr [ESP + 0xc]          ; 004231a8
    FLD float ptr [ESP + 0x10]          ; 004231ac
    FCOMPP                              ; 004231b0
    FNSTSW AX                           ; 004231b2
    SAHF                                ; 004231b4
    JNC 0x004235f6                      ; 004231b5
        ;   XREF to: 004235f6 (CONDITIONAL_JUMP)  ; LAB_004235f6
    FLD float ptr [ESP + 0xc0]          ; 004231bb
    FLD float ptr [ESP + 0xc4]          ; 004231c2
    FLD float ptr [ESP + 0xc8]          ; 004231c9
    MOV EAX,dword ptr [EBP + 0x20]      ; 004231d0
    LEA EDI,[ESP + 0xfc]                ; 004231d3
    LEA ESI,[ESP + 0x24]                ; 004231da
    FXCH ST2                            ; 004231de
    FSUB float ptr [EAX]                ; 004231e0
    FXCH                                ; 004231e2
    FSUB float ptr [EAX + 0x4]          ; 004231e4
    FXCH ST2                            ; 004231e7
    FSUB float ptr [EAX + 0x8]          ; 004231e9
    FXCH                                ; 004231ec
    FSTP float ptr [ESP + 0x24]         ; 004231ee
    FXCH                                ; 004231f2
    FSTP float ptr [ESP + 0x28]         ; 004231f4
    FSTP float ptr [ESP + 0x2c]         ; 004231f8
    MOVSD ES:EDI,ESI                    ; 004231fc
    MOVSD ES:EDI,ESI                    ; 004231fd
    MOVSD ES:EDI,ESI                    ; 004231fe
    FLD float ptr [ESP + 0xfc]          ; 004231ff
    FMUL ST0                            ; 00423206
    FLD float ptr [ESP + 0x104]         ; 00423208
    FMUL ST0                            ; 0042320f
    FADDP                               ; 00423211
    FSQRT                               ; 00423213
    XOR EDI,EDI                         ; 00423215
    MOV dword ptr [ESP + 0x100],EDI     ; 00423217
    FST float ptr [ESP + 0x138]         ; 0042321e
    FCOMP float ptr [ESP + 0x14]        ; 00423225
    FNSTSW AX                           ; 00423229
    SAHF                                ; 0042322b
    JBE 0x0042327e                      ; 0042322c
        ;   XREF to: 0042327e (CONDITIONAL_JUMP)  ; LAB_0042327e
    FLD float ptr [ESP + 0x14]          ; 0042322e
    FDIV float ptr [ESP + 0x138]        ; 00423232
    FLD float ptr [ESP + 0xfc]          ; 00423239
    FXCH                                ; 00423240
    FSTP float ptr [ESP + 0x16c]        ; 00423242
    FMUL float ptr [ESP + 0x16c]        ; 00423249
    FLDZ                                ; 00423250
    FMUL float ptr [ESP + 0x16c]        ; 00423252
    FLD float ptr [ESP + 0x104]         ; 00423259
    FMUL float ptr [ESP + 0x16c]        ; 00423260
    FXCH ST2                            ; 00423267
    FSTP float ptr [ESP + 0xfc]         ; 00423269
    FSTP float ptr [ESP + 0x100]        ; 00423270
    FSTP float ptr [ESP + 0x104]        ; 00423277
    LEA EAX,[EBX + 0x257c]              ; 0042327e
        ;   Label: LAB_0042327e
    LEA EDI,[ESP + 0x18]                ; 00423284
    LEA ESI,[ESP + 0x78]                ; 00423288
    FLD float ptr [EAX]                 ; 0042328c
    FLD float ptr [EAX + 0x4]           ; 0042328e
    FLD float ptr [EAX + 0x8]           ; 00423291
    FXCH ST2                            ; 00423294
    FADD float ptr [ESP + 0xfc]         ; 00423296
    FXCH                                ; 0042329d
    FADD float ptr [ESP + 0x100]        ; 0042329f
    FXCH ST2                            ; 004232a6
    FADD float ptr [ESP + 0x104]        ; 004232a8
    FXCH                                ; 004232af
    FSTP float ptr [EAX]                ; 004232b1
    FXCH                                ; 004232b3
    FSTP float ptr [EAX + 0x4]          ; 004232b5
    FSTP float ptr [EAX + 0x8]          ; 004232b8
    FLD float ptr [ESP + 0xc0]          ; 004232bb
    FLD float ptr [ESP + 0xc4]          ; 004232c2
    FLD float ptr [ESP + 0xc8]          ; 004232c9
    FXCH ST2                            ; 004232d0
    FSUB float ptr [EAX]                ; 004232d2
    FXCH                                ; 004232d4
    FSUB float ptr [EAX + 0x4]          ; 004232d6
    FXCH ST2                            ; 004232d9
    FSUB float ptr [EAX + 0x8]          ; 004232db
    FXCH                                ; 004232de
    FSTP float ptr [ESP + 0x78]         ; 004232e0
    FXCH                                ; 004232e4
    FSTP float ptr [ESP + 0x7c]         ; 004232e6
    FSTP float ptr [ESP + 0x80]         ; 004232ea
    LEA EAX,[ESP + 0x18]                ; 004232f1
    MOVSD ES:EDI,ESI                    ; 004232f5
    MOVSD ES:EDI,ESI                    ; 004232f6
    MOVSD ES:EDI,ESI                    ; 004232f7
    PUSH EAX                            ; 004232f8
    LEA ESI,[ESP + 0xb8]                ; 004232f9
    LEA EDI,[ESP + 0x70]                ; 00423300
    CALL core_vecdir.cpp_FUN_005838f0   ; 00423304
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005838f0()
    LEA ESI,[ESP + 0xb8]                ; 00423309
    ADD ESP,0x4                         ; 00423310
    MOVSD ES:EDI,ESI                    ; 00423313
    MOVSD ES:EDI,ESI                    ; 00423314
    MOVSD ES:EDI,ESI                    ; 00423315
    FLD float ptr [ESP + 0x70]          ; 00423316
    FSUB float ptr [ESP + 0x8]          ; 0042331a
    SUB ESP,0x4                         ; 0042331e
    FSTP float ptr [ESP]                ; 00423321
    CALL core_actor.cpp_FUN_0040d0c0    ; 00423324
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040d0c0()
    MOV dword ptr [ESP + 0x18c],EAX     ; 00423329
    FLD float ptr [ESP + 0x18c]         ; 00423330
    ADD ESP,0x4                         ; 00423337
    FLD float ptr [ESP + 0x184]         ; 0042333a
    FXCH                                ; 00423341
    FST float ptr [ESP + 0x180]         ; 00423343
    FXCH                                ; 0042334a
    FCHS                                ; 0042334c
    FSTP float ptr [ESP + 0x130]        ; 0042334e
    FCOMP float ptr [ESP + 0x130]       ; 00423355
    FNSTSW AX                           ; 0042335c
    SAHF                                ; 0042335e
    JNC 0x004235cb                      ; 0042335f
        ;   XREF to: 004235cb (CONDITIONAL_JUMP)  ; LAB_004235cb
    MOV EAX,dword ptr [ESP + 0x130]     ; 00423365
    MOV dword ptr [ESP + 0x15c],EAX     ; 0042336c
        ;   Label: LAB_0042336c
    MOV EAX,dword ptr [ESP + 0x15c]     ; 00423373
    MOV dword ptr [EBX + 0x2578],EAX    ; 0042337a
        ;   Label: LAB_0042337a
    CMP dword ptr [EBX + 0x2814],0x0    ; 00423380
    JZ 0x004233d9                       ; 00423387
        ;   XREF to: 004233d9 (CONDITIONAL_JUMP)  ; LAB_004233d9
    FLD float ptr [ESP + 0xc4]          ; 00423389
    FLD float ptr [ESP + 0x14]          ; 00423390
    MOV EAX,dword ptr [EBP + 0x20]      ; 00423394
    FCHS                                ; 00423397
    FXCH                                ; 00423399
    FSUB float ptr [EAX + 0x4]          ; 0042339b
    FXCH                                ; 0042339e
    FSTP float ptr [ESP + 0x148]        ; 004233a0
    FST float ptr [ESP + 0x170]         ; 004233a7
    FCOMP float ptr [ESP + 0x148]       ; 004233ae
    FNSTSW AX                           ; 004233b5
    SAHF                                ; 004233b7
    JNC 0x0042381f                      ; 004233b8
        ;   XREF to: 0042381f (CONDITIONAL_JUMP)  ; LAB_0042381f
    MOV EAX,dword ptr [ESP + 0x148]     ; 004233be
    MOV dword ptr [ESP + 0x158],EAX     ; 004233c5
        ;   Label: LAB_004233c5
    MOV EAX,dword ptr [ESP + 0x158]     ; 004233cc
    MOV dword ptr [EBX + 0x2580],EAX    ; 004233d3
    CMP dword ptr [ESP + 0x164],0x0     ; 004233d9
        ;   Label: LAB_004233d9
    JZ 0x00423844                       ; 004233e1
        ;   XREF to: 00423844 (CONDITIONAL_JUMP)  ; LAB_00423844
    MOV ESI,0x1                         ; 004233e7
    MOV EAX,ESI                         ; 004233ec
    MOV ESP,EBP                         ; 004233ee
    POP EBP                             ; 004233f0
    POP EDI                             ; 004233f1
    POP ESI                             ; 004233f2
    POP EBX                             ; 004233f3
    RET                                 ; 004233f4
    FLD float ptr [ESP + 0xe8]          ; 004233f5
        ;   Label: LAB_004233f5
    FSUB float ptr [ESP + 0xd0]         ; 004233fc
    SUB ESP,0x4                         ; 00423403
    FSTP float ptr [ESP]                ; 00423406
    CALL core_actor.cpp_FUN_0040d0c0    ; 00423409
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040d0c0()
    MOV dword ptr [ESP + 0x18c],EAX     ; 0042340e
    FLD float ptr [ESP + 0x18c]         ; 00423415
    FABS                                ; 0042341c
    ADD ESP,0x4                         ; 0042341e
    FSTP float ptr [ESP]                ; 00423421
    JMP 0x00423107                      ; 00423424
        ;   XREF to: 00423107 (UNCONDITIONAL_JUMP)  ; LAB_00423107
    FLD float ptr [ESP + 0x10]          ; 00423429
        ;   Label: LAB_00423429
    FCOMP float ptr [ESP + 0x12c]       ; 0042342d
    FNSTSW AX                           ; 00423434
    SAHF                                ; 00423436
    JC 0x00423483                       ; 00423437
        ;   XREF to: 00423483 (CONDITIONAL_JUMP)  ; LAB_00423483
    CMP dword ptr [EBP + 0x1c],0x0      ; 00423439
        ;   Label: LAB_00423439
    JNZ 0x0042344e                      ; 0042343d
        ;   XREF to: 0042344e (CONDITIONAL_JUMP)  ; LAB_0042344e
    MOV ESI,dword ptr [EBP + 0x18]      ; 0042343f
    PUSH ESI                            ; 00423442
    CALL core_path.cpp_getPathMap_FUN_00513ea0 ; 00423443
        ;   XREF to: 00513ea0 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_getPathMap_FUN_00513ea0(CLocation * location)
    ADD ESP,0x4                         ; 00423448
    MOV dword ptr [EBP + 0x1c],EAX      ; 0042344b
    MOV EDI,dword ptr [EBX + 0x6c]      ; 0042344e
        ;   Label: LAB_0042344e
    PUSH EDI                            ; 00423451
    LEA EAX,[ESP + 0x40]                ; 00423452
    PUSH EAX                            ; 00423456
    LEA EAX,[EBX + 0x20]                ; 00423457
    PUSH EAX                            ; 0042345a
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0042345b
    PUSH EAX                            ; 0042345e
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_00513650 ; 0042345f
        ;   XREF to: 00513650 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathWithRetry_FUN_00513650(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 00423464
    TEST EAX,EAX                        ; 00423467
    JNZ 0x004234bc                      ; 00423469
        ;   XREF to: 004234bc (CONDITIONAL_JUMP)  ; LAB_004234bc
    CMP dword ptr [ESP + 0x164],0x0     ; 0042346b
    JZ 0x0042349a                       ; 00423473
        ;   XREF to: 0042349a (CONDITIONAL_JUMP)  ; LAB_0042349a
    MOV ESI,0x1                         ; 00423475
    MOV EAX,ESI                         ; 0042347a
    MOV ESP,EBP                         ; 0042347c
    POP EBP                             ; 0042347e
    POP EDI                             ; 0042347f
    POP ESI                             ; 00423480
    POP EBX                             ; 00423481
    RET                                 ; 00423482
    FLD float ptr [ESP + 0xc4]          ; 00423483
        ;   Label: LAB_00423483
    FABS                                ; 0042348a
    FLD1                                ; 0042348c
    FCOMPP                              ; 0042348e
    FNSTSW AX                           ; 00423490
    SAHF                                ; 00423492
    JC 0x00423439                       ; 00423493
        ;   XREF to: 00423439 (CONDITIONAL_JUMP)  ; LAB_00423439
    JMP 0x0042319e                      ; 00423495
        ;   XREF to: 0042319e (UNCONDITIONAL_JUMP)  ; LAB_0042319e
    PUSH 0x5ccc09                       ; 0042349a | = "CCharacter::walkToPoint - go somewher..."
        ;   Label: LAB_0042349a
    MOV ECX,dword ptr [0x00609ed0]      ; 0042349f | g_CConsolePtr
    PUSH ECX                            ; 004234a5 | g_CConsoleInstance
    MOV ESI,0xffffffff                  ; 004234a6
    CALL engine_console.cpp_FUN_00436710 ; 004234ab
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x8                         ; 004234b0
    MOV EAX,ESI                         ; 004234b3
    MOV ESP,EBP                         ; 004234b5
    POP EBP                             ; 004234b7
    POP EDI                             ; 004234b8
    POP ESI                             ; 004234b9
    POP EBX                             ; 004234ba
    RET                                 ; 004234bb
    FLD float ptr [ESP + 0x10]          ; 004234bc
        ;   Label: LAB_004234bc
    FLD float ptr [ESP + 0x14]          ; 004234c0
    LEA ESI,[EBX + 0x2584]              ; 004234c4
    FCHS                                ; 004234ca
    FXCH                                ; 004234cc
    FSUB float ptr [ESP + 0xc]          ; 004234ce
    FXCH                                ; 004234d2
    FSTP float ptr [ESP + 0x140]        ; 004234d4
    FST float ptr [ESP + 0x160]         ; 004234db
    FCOMP float ptr [ESP + 0x140]       ; 004234e2
    FNSTSW AX                           ; 004234e9
    SAHF                                ; 004234eb
    JNC 0x00423581                      ; 004234ec
        ;   XREF to: 00423581 (CONDITIONAL_JUMP)  ; LAB_00423581
    MOV EAX,dword ptr [ESP + 0x140]     ; 004234f2
    MOV dword ptr [ESP + 0x174],EAX     ; 004234f9
        ;   Label: LAB_004234f9
    FLD float ptr [ESI]                 ; 00423500
    FADD float ptr [ESP + 0x174]        ; 00423502
    FSTP float ptr [ESI]                ; 00423509
    FLD float ptr [ESP + 0x40]          ; 0042350b
    FSUB float ptr [EBX + 0x34]         ; 0042350f
    FSTP float ptr [ESP + 0x188]        ; 00423512
    PUSH dword ptr [ESP + 0x188]        ; 00423519
    CALL core_actor.cpp_FUN_0040d0c0    ; 00423520
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040d0c0()
    MOV dword ptr [ESP + 0x18c],EAX     ; 00423525
    FLD float ptr [ESP + 0x18c]         ; 0042352c
    ADD ESP,0x4                         ; 00423533
    ADD EBX,0x2578                      ; 00423536
    FLD float ptr [ESP + 0x184]         ; 0042353c
    FXCH                                ; 00423543
    FST float ptr [ESP + 0x17c]         ; 00423545
    FXCH                                ; 0042354c
    FCHS                                ; 0042354e
    FSTP float ptr [ESP + 0x13c]        ; 00423550
    FCOMP float ptr [ESP + 0x13c]       ; 00423557
    FNSTSW AX                           ; 0042355e
    SAHF                                ; 00423560
    JNC 0x004235a6                      ; 00423561
        ;   XREF to: 004235a6 (CONDITIONAL_JUMP)  ; LAB_004235a6
    MOV EAX,dword ptr [ESP + 0x13c]     ; 00423563
    MOV dword ptr [ESP + 0x14c],EAX     ; 0042356a
        ;   Label: LAB_0042356a
    FLD float ptr [EBX]                 ; 00423571
    FADD float ptr [ESP + 0x14c]        ; 00423573
    FSTP float ptr [EBX]                ; 0042357a
    JMP 0x004233d9                      ; 0042357c
        ;   XREF to: 004233d9 (UNCONDITIONAL_JUMP)  ; LAB_004233d9
    FLD float ptr [ESP + 0x160]         ; 00423581
        ;   Label: LAB_00423581
    FCOMP float ptr [ESP + 0x14]        ; 00423588
    FNSTSW AX                           ; 0042358c
    SAHF                                ; 0042358e
    JBE 0x0042359a                      ; 0042358f
        ;   XREF to: 0042359a (CONDITIONAL_JUMP)  ; LAB_0042359a
    MOV EAX,dword ptr [ESP + 0x14]      ; 00423591
    JMP 0x004234f9                      ; 00423595
        ;   XREF to: 004234f9 (UNCONDITIONAL_JUMP)  ; LAB_004234f9
    MOV EAX,dword ptr [ESP + 0x160]     ; 0042359a
        ;   Label: LAB_0042359a
    JMP 0x004234f9                      ; 004235a1
        ;   XREF to: 004234f9 (UNCONDITIONAL_JUMP)  ; LAB_004234f9
    FLD float ptr [ESP + 0x17c]         ; 004235a6
        ;   Label: LAB_004235a6
    FCOMP float ptr [ESP + 0x184]       ; 004235ad
    FNSTSW AX                           ; 004235b4
    SAHF                                ; 004235b6
    JBE 0x004235c2                      ; 004235b7
        ;   XREF to: 004235c2 (CONDITIONAL_JUMP)  ; LAB_004235c2
    MOV EAX,dword ptr [ESP + 0x184]     ; 004235b9
    JMP 0x0042356a                      ; 004235c0
        ;   XREF to: 0042356a (UNCONDITIONAL_JUMP)  ; LAB_0042356a
    MOV EAX,dword ptr [ESP + 0x17c]     ; 004235c2
        ;   Label: LAB_004235c2
    JMP 0x0042356a                      ; 004235c9
        ;   XREF to: 0042356a (UNCONDITIONAL_JUMP)  ; LAB_0042356a
    FLD float ptr [ESP + 0x180]         ; 004235cb
        ;   Label: LAB_004235cb
    FCOMP float ptr [ESP + 0x184]       ; 004235d2
    FNSTSW AX                           ; 004235d9
    SAHF                                ; 004235db
    JBE 0x004235ea                      ; 004235dc
        ;   XREF to: 004235ea (CONDITIONAL_JUMP)  ; LAB_004235ea
    MOV EAX,dword ptr [ESP + 0x184]     ; 004235de
    JMP 0x0042336c                      ; 004235e5
        ;   XREF to: 0042336c (UNCONDITIONAL_JUMP)  ; LAB_0042336c
    MOV EAX,dword ptr [ESP + 0x180]     ; 004235ea
        ;   Label: LAB_004235ea
    JMP 0x0042336c                      ; 004235f1
        ;   XREF to: 0042336c (UNCONDITIONAL_JUMP)  ; LAB_0042336c
    FLD float ptr [ESP + 0x10]          ; 004235f6
        ;   Label: LAB_004235f6
    FLD float ptr [ESP + 0x14]          ; 004235fa
    LEA ESI,[EBX + 0x2584]              ; 004235fe
    FCHS                                ; 00423604
    FXCH                                ; 00423606
    FSUB float ptr [ESP + 0xc]          ; 00423608
    FXCH                                ; 0042360c
    FSTP float ptr [ESP + 0x134]        ; 0042360e
    FST float ptr [ESP + 0x168]         ; 00423615
    FCOMP float ptr [ESP + 0x134]       ; 0042361c
    FNSTSW AX                           ; 00423623
    SAHF                                ; 00423625
    JNC 0x004237b3                      ; 00423626
        ;   XREF to: 004237b3 (CONDITIONAL_JUMP)  ; LAB_004237b3
    MOV EAX,dword ptr [ESP + 0x134]     ; 0042362c
    MOV dword ptr [ESP + 0x150],EAX     ; 00423633
        ;   Label: LAB_00423633
    FLD float ptr [ESI]                 ; 0042363a
    LEA EAX,[EBX + 0x257c]              ; 0042363c
    FADD float ptr [ESP + 0x150]        ; 00423642
    PUSH EAX                            ; 00423649
    FSTP float ptr [ESI]                ; 0042364a
    PUSH EBX                            ; 0042364c
    LEA ESI,[ESP + 0xe0]                ; 0042364d
    LEA EDI,[ESP + 0x8c]                ; 00423654
    CALL core_actor.cpp_FUN_00408d70    ; 0042365b
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0xe0]                ; 00423660
    ADD ESP,0x8                         ; 00423667
    MOVSD ES:EDI,ESI                    ; 0042366a
    MOVSD ES:EDI,ESI                    ; 0042366b
    MOVSD ES:EDI,ESI                    ; 0042366c
    MOV ESI,dword ptr [EBP + 0x20]      ; 0042366d
    PUSH ESI                            ; 00423670
    PUSH EBX                            ; 00423671
    LEA ESI,[ESP + 0x11c]               ; 00423672
    LEA EDI,[ESP + 0x50]                ; 00423679
    CALL core_actor.cpp_FUN_00408cf0    ; 0042367d
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    ADD ESP,0x8                         ; 00423682
    LEA ESI,[ESP + 0x114]               ; 00423685
    MOV EAX,dword ptr [EBP + 0x18]      ; 0042368c
    MOVSD ES:EDI,ESI                    ; 0042368f
    MOVSD ES:EDI,ESI                    ; 00423690
    MOVSD ES:EDI,ESI                    ; 00423691
    FLD float ptr [EAX]                 ; 00423692
    FLD float ptr [EAX + 0x4]           ; 00423694
    FLD float ptr [EAX + 0x8]           ; 00423697
    LEA EDI,[ESP + 0x9c]                ; 0042369a
    LEA ESI,[ESP + 0xa8]                ; 004236a1
    FXCH ST2                            ; 004236a8
    FSUB float ptr [ESP + 0x48]         ; 004236aa
    FXCH                                ; 004236ae
    FSUB float ptr [ESP + 0x4c]         ; 004236b0
    FXCH ST2                            ; 004236b4
    FSUB float ptr [ESP + 0x50]         ; 004236b6
    FXCH                                ; 004236ba
    FSTP float ptr [ESP + 0xa8]         ; 004236bc
    FXCH                                ; 004236c3
    FSTP float ptr [ESP + 0xac]         ; 004236c5
    FSTP float ptr [ESP + 0xb0]         ; 004236cc
    MOVSD ES:EDI,ESI                    ; 004236d3
    MOVSD ES:EDI,ESI                    ; 004236d4
    MOVSD ES:EDI,ESI                    ; 004236d5
    LEA EAX,[ESP + 0x120]               ; 004236d6
    FLD float ptr [ESP + 0x9c]          ; 004236dd
    FLD float ptr [ESP + 0xa0]          ; 004236e4
    FLD float ptr [ESP + 0xa4]          ; 004236eb
    LEA EDI,[ESP + 0x120]               ; 004236f2
    LEA ESI,[ESP + 0x60]                ; 004236f9
    FXCH ST2                            ; 004236fd
    FSUB float ptr [ESP + 0x84]         ; 004236ff
    FXCH                                ; 00423706
    FSUB float ptr [ESP + 0x88]         ; 00423708
    FXCH ST2                            ; 0042370f
    FSUB float ptr [ESP + 0x8c]         ; 00423711
    FXCH                                ; 00423718
    FSTP float ptr [ESP + 0x60]         ; 0042371a
    FXCH                                ; 0042371e
    FSTP float ptr [ESP + 0x64]         ; 00423720
    FSTP float ptr [ESP + 0x68]         ; 00423724
    MOVSD ES:EDI,ESI                    ; 00423728
    MOVSD ES:EDI,ESI                    ; 00423729
    MOVSD ES:EDI,ESI                    ; 0042372a
    PUSH EAX                            ; 0042372b
    LEA ESI,[ESP + 0x94]                ; 0042372c
    LEA EDI,[ESP + 0xf4]                ; 00423733
    CALL core_vecdir.cpp_FUN_005838f0   ; 0042373a
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005838f0()
    LEA ESI,[ESP + 0x94]                ; 0042373f
    ADD ESP,0x4                         ; 00423746
    MOVSD ES:EDI,ESI                    ; 00423749
    MOVSD ES:EDI,ESI                    ; 0042374a
    MOVSD ES:EDI,ESI                    ; 0042374b
    FLD float ptr [ESP + 0xf4]          ; 0042374c
    FSUB float ptr [EBX + 0x34]         ; 00423753
    SUB ESP,0x4                         ; 00423756
    FSTP float ptr [ESP]                ; 00423759
    CALL core_actor.cpp_FUN_0040d0c0    ; 0042375c
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040d0c0()
    MOV dword ptr [ESP + 0x18c],EAX     ; 00423761
    FLD float ptr [ESP + 0x18c]         ; 00423768
    ADD ESP,0x4                         ; 0042376f
    FLD float ptr [ESP + 0x184]         ; 00423772
    FXCH                                ; 00423779
    FST float ptr [ESP + 0x178]         ; 0042377b
    FXCH                                ; 00423782
    FCHS                                ; 00423784
    FSTP float ptr [ESP + 0x144]        ; 00423786
    FCOMP float ptr [ESP + 0x144]       ; 0042378d
    FNSTSW AX                           ; 00423794
    SAHF                                ; 00423796
    JNC 0x004237d8                      ; 00423797
        ;   XREF to: 004237d8 (CONDITIONAL_JUMP)  ; LAB_004237d8
    MOV EAX,dword ptr [ESP + 0x144]     ; 00423799
    MOV dword ptr [ESP + 0x154],EAX     ; 004237a0
    MOV EAX,dword ptr [ESP + 0x154]     ; 004237a7
    JMP 0x0042337a                      ; 004237ae
        ;   XREF to: 0042337a (UNCONDITIONAL_JUMP)  ; LAB_0042337a
    FLD float ptr [ESP + 0x168]         ; 004237b3
        ;   Label: LAB_004237b3
    FCOMP float ptr [ESP + 0x14]        ; 004237ba
    FNSTSW AX                           ; 004237be
    SAHF                                ; 004237c0
    JBE 0x004237cc                      ; 004237c1
        ;   XREF to: 004237cc (CONDITIONAL_JUMP)  ; LAB_004237cc
    MOV EAX,dword ptr [ESP + 0x14]      ; 004237c3
    JMP 0x00423633                      ; 004237c7
        ;   XREF to: 00423633 (UNCONDITIONAL_JUMP)  ; LAB_00423633
    MOV EAX,dword ptr [ESP + 0x168]     ; 004237cc
        ;   Label: LAB_004237cc
    JMP 0x00423633                      ; 004237d3
        ;   XREF to: 00423633 (UNCONDITIONAL_JUMP)  ; LAB_00423633
    FLD float ptr [ESP + 0x178]         ; 004237d8
        ;   Label: LAB_004237d8
    FCOMP float ptr [ESP + 0x184]       ; 004237df
    FNSTSW AX                           ; 004237e6
    SAHF                                ; 004237e8
    JBE 0x00423805                      ; 004237e9
        ;   XREF to: 00423805 (CONDITIONAL_JUMP)  ; LAB_00423805
    MOV EAX,dword ptr [ESP + 0x184]     ; 004237eb
    MOV dword ptr [ESP + 0x154],EAX     ; 004237f2
    MOV EAX,dword ptr [ESP + 0x154]     ; 004237f9
    JMP 0x0042337a                      ; 00423800
        ;   XREF to: 0042337a (UNCONDITIONAL_JUMP)  ; LAB_0042337a
    MOV EAX,dword ptr [ESP + 0x178]     ; 00423805
        ;   Label: LAB_00423805
    MOV dword ptr [ESP + 0x154],EAX     ; 0042380c
    MOV EAX,dword ptr [ESP + 0x154]     ; 00423813
    JMP 0x0042337a                      ; 0042381a
        ;   XREF to: 0042337a (UNCONDITIONAL_JUMP)  ; LAB_0042337a
    FLD float ptr [ESP + 0x170]         ; 0042381f
        ;   Label: LAB_0042381f
    FCOMP float ptr [ESP + 0x14]        ; 00423826
    FNSTSW AX                           ; 0042382a
    SAHF                                ; 0042382c
    JBE 0x00423838                      ; 0042382d
        ;   XREF to: 00423838 (CONDITIONAL_JUMP)  ; LAB_00423838
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042382f
    JMP 0x004233c5                      ; 00423833
        ;   XREF to: 004233c5 (UNCONDITIONAL_JUMP)  ; LAB_004233c5
    MOV EAX,dword ptr [ESP + 0x170]     ; 00423838
        ;   Label: LAB_00423838
    JMP 0x004233c5                      ; 0042383f
        ;   XREF to: 004233c5 (UNCONDITIONAL_JUMP)  ; LAB_004233c5
    XOR ESI,ESI                         ; 00423844
        ;   Label: LAB_00423844
    MOV EAX,ESI                         ; 00423846
    MOV ESP,EBP                         ; 00423848
    POP EBP                             ; 0042384a
    POP EDI                             ; 0042384b
    POP ESI                             ; 0042384c
    POP EBX                             ; 0042384d
    RET                                 ; 0042384e


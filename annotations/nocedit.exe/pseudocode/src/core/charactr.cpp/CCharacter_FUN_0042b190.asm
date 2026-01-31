; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_charactr_cpp_CCharacter_FUN_0042b190(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x2fc]:4  local_2fc
; undefined4       Stack[-0x2f8]:4  local_2f8
; undefined4       Stack[-0x2f0]:4  local_2f0
; undefined1       Stack[-0x2ec]:1  local_2ec
; undefined1       Stack[-0x2bc]:1  local_2bc
; undefined1       Stack[-0x28c]:1  local_28c
; undefined1       Stack[-0x25c]:1  local_25c
; undefined1       Stack[-0x22c]:1  local_22c
; undefined1       Stack[-0x1fc]:1  local_1fc
; undefined1       Stack[-0x1cc]:1  local_1cc
; undefined1       Stack[-0x19c]:1  local_19c
; undefined1       Stack[-0x16c]:1  local_16c
; undefined1       Stack[-0x13c]:1  local_13c
; undefined1       Stack[-0x10c]:1  local_10c
; undefined1       Stack[-0xdc]:1  local_dc
; undefined1       Stack[-0xac]:1  local_ac
; undefined1       Stack[-0x7c]:1  local_7c
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined1       Stack[-0x40]:1  local_40
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_processDamage_FUN_0042c3c0 at 0042c521
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonSet g_CDemonSetInstance
;   undefined4 DAT_03261388
;   undefined4 DAT_0326138c
;   undefined4 DAT_03261390
;   undefined4 DAT_03261394
;   undefined4 DAT_03261398
;   undefined4 DAT_0326139c
;   undefined4 DAT_032613c0
;   undefined4 DAT_032613c4
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042b190
        ;   Label: core_charactr.cpp_CCharacter_FUN_0042b190
    PUSH ESI                            ; 0042b191
    PUSH EDI                            ; 0042b192
    PUSH EBP                            ; 0042b193
    MOV EBP,ESP                         ; 0042b194
    SUB ESP,0x2e0                       ; 0042b196
    AND ESP,0xfffffff8                  ; 0042b19c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042b19f
    MOV EDX,dword ptr [EBX + 0x2df4]    ; 0042b1a2
    CMP EDX,0x5                         ; 0042b1a8
    JGE 0x0042b566                      ; 0042b1ab
        ;   XREF to: 0042b566 (CONDITIONAL_JUMP)  ; LAB_0042b566
    MOV ECX,dword ptr [0x006810c8]      ; 0042b1b1 | g_CDemonSetPtr | g_CDemonSetInstance
    CMP dword ptr [ECX + 0x14d148],0x0  ; 0042b1b7 | DAT_032613c0
    JL 0x0042b566                       ; 0042b1be
        ;   XREF to: 0042b566 (CONDITIONAL_JUMP)  ; LAB_0042b566
    LEA EAX,[EDX*0x8 + 0x0]             ; 0042b1c4
    MOV EDI,dword ptr [EBX + 0x2df4]    ; 0042b1cb
    MOV EDX,EAX                         ; 0042b1d1
    SHL EAX,0x3                         ; 0042b1d3
    INC EDI                             ; 0042b1d6
    SUB EAX,EDX                         ; 0042b1d7
    LEA EDX,[EBX + 0x2df8]              ; 0042b1d9
    MOV dword ptr [EBX + 0x2df4],EDI    ; 0042b1df
    ADD EDX,EAX                         ; 0042b1e5
    MOV EAX,dword ptr [ECX + 0x14d148]  ; 0042b1e7 | DAT_032613c0
    MOV dword ptr [EDX],EAX             ; 0042b1ed
    MOV EAX,dword ptr [ECX + 0x14d14c]  ; 0042b1ef | DAT_032613c4
    MOV dword ptr [ESP + 0x2d8],EDX     ; 0042b1f5
    MOV dword ptr [EDX + 0x4],EAX       ; 0042b1fc
    TEST EAX,EAX                        ; 0042b1ff
    JL 0x0042b56d                       ; 0042b201
        ;   XREF to: 0042b56d (CONDITIONAL_JUMP)  ; LAB_0042b56d
    MOV EDX,dword ptr [0x006810c8]      ; 0042b207 | g_CDemonSetPtr | g_CDemonSetInstance
        ;   Label: LAB_0042b207
    LEA EAX,[EDX + 0x14d11c]            ; 0042b20d | DAT_03261394
    FLD float ptr [EAX]                 ; 0042b213 | DAT_03261394
    FSUB float ptr [EDX + 0x14d110]     ; 0042b215 | DAT_03261388
    FSTP float ptr [ESP + 0x2a4]        ; 0042b21b
    FLD float ptr [EAX + 0x4]           ; 0042b222 | DAT_03261398
    FSUB float ptr [EDX + 0x14d114]     ; 0042b225 | DAT_0326138c
    FSTP float ptr [ESP + 0x2a8]        ; 0042b22b
    FLD float ptr [EAX + 0x8]           ; 0042b232 | DAT_0326139c
    MOV EAX,dword ptr [ESP + 0x2a4]     ; 0042b235
    FSUB float ptr [EDX + 0x14d118]     ; 0042b23c | DAT_03261390
    MOV dword ptr [ESP + 0x2bc],EAX     ; 0042b242
    MOV EAX,dword ptr [ESP + 0x2a8]     ; 0042b249
    MOV dword ptr [ESP + 0x2c0],EAX     ; 0042b250
    FLD float ptr [ESP + 0x2c0]         ; 0042b257
    FMUL ST0                            ; 0042b25e
    FLD float ptr [ESP + 0x2bc]         ; 0042b260
    FMUL ST0                            ; 0042b267
    FXCH ST2                            ; 0042b269
    FSTP float ptr [ESP + 0x2ac]        ; 0042b26b
    MOV EAX,dword ptr [ESP + 0x2ac]     ; 0042b272
    FADDP                               ; 0042b279
    MOV dword ptr [ESP + 0x2c4],EAX     ; 0042b27b
    FLD float ptr [ESP + 0x2c4]         ; 0042b282
    FMUL ST0                            ; 0042b289
    FADDP                               ; 0042b28b
    FSQRT                               ; 0042b28d
    FST float ptr [ESP]                 ; 0042b28f
    FLDZ                                ; 0042b292
    FCOMPP                              ; 0042b294
    FNSTSW AX                           ; 0042b296
    SAHF                                ; 0042b298
    JNC 0x0042b58f                      ; 0042b299
        ;   XREF to: 0042b58f (CONDITIONAL_JUMP)  ; LAB_0042b58f
    FLD1                                ; 0042b29f
    FLD float ptr [ESP + 0x2bc]         ; 0042b2a1
    FXCH                                ; 0042b2a8
    FDIV float ptr [ESP]                ; 0042b2aa
    FXCH                                ; 0042b2ad
    FMUL ST1                            ; 0042b2af
    FLD float ptr [ESP + 0x2c0]         ; 0042b2b1
    FMUL ST2                            ; 0042b2b8
    FLD float ptr [ESP + 0x2c4]         ; 0042b2ba
    FMULP ST3                           ; 0042b2c1
    FXCH                                ; 0042b2c3
    FSTP float ptr [ESP + 0x2bc]        ; 0042b2c5
    FSTP float ptr [ESP + 0x2c0]        ; 0042b2cc
    FSTP float ptr [ESP + 0x2c4]        ; 0042b2d3
    PUSH 0x3f19999a                     ; 0042b2da
        ;   Label: LAB_0042b2da
    PUSH 0x3e99999a                     ; 0042b2df
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 0042b2e4
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV ESP,EBP                         ; 0042b566
        ;   Label: LAB_0042b566
    POP EBP                             ; 0042b568
    POP EDI                             ; 0042b569
    POP ESI                             ; 0042b56a
    POP EBX                             ; 0042b56b
    RET                                 ; 0042b56c
    MOV ECX,dword ptr [EDX]             ; 0042b56d
        ;   Label: LAB_0042b56d
    PUSH ECX                            ; 0042b56f
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042b570
    PUSH EBX                            ; 0042b576
    CALL dword ptr [EAX + 0x12c]        ; 0042b577
    ADD ESP,0x8                         ; 0042b57d
    MOV EDX,dword ptr [ESP + 0x2d8]     ; 0042b580
    MOV dword ptr [EDX + 0x4],EAX       ; 0042b587
    JMP 0x0042b207                      ; 0042b58a
        ;   XREF to: 0042b207 (UNCONDITIONAL_JUMP)  ; LAB_0042b207
    XOR ESI,ESI                         ; 0042b58f
        ;   Label: LAB_0042b58f
    MOV dword ptr [ESP + 0x2c0],ESI     ; 0042b591
    MOV dword ptr [ESP + 0x2bc],ESI     ; 0042b598
    MOV dword ptr [ESP + 0x2c4],ESI     ; 0042b59f
    JMP 0x0042b2da                      ; 0042b5a6
        ;   XREF to: 0042b2da (UNCONDITIONAL_JUMP)  ; LAB_0042b2da


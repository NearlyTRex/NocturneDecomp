; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004291f0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   FUN_00429e90 at 00429e96
;
; Referenced Globals:
;   TerminatedCString s_core_charactr_cpp_005cd003
;   TerminatedCString s_CCharacter_applyGesture_005cd018
;   TerminatedCString s_Bip01_spine1_005cd05c
;   undefined4 DAT_005cd06a
;   undefined4 DAT_005cd06e
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;   FUN_00503860
;   FUN_00540e80
;   FUN_00545a60
;   FUN_00547890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004291f0
        ;   Label: FUN_004291f0
    PUSH EBP                            ; 004291f1
    SUB ESP,0x10                        ; 004291f2
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004291f5
    CMP dword ptr [EBX + 0x27c4],0x0    ; 004291f9
    JL 0x004292ed                       ; 00429200
        ;   XREF to: 004292ed (CONDITIONAL_JUMP)  ; LAB_004292ed
    PUSH EDI                            ; 00429206
    PUSH ESI                            ; 00429207
    CMP dword ptr [EBX + 0x27c0],-0x1   ; 00429208
    JL 0x004292f3                       ; 0042920f
        ;   XREF to: 004292f3 (CONDITIONAL_JUMP)  ; LAB_004292f3
    PUSH 0x0                            ; 00429215
        ;   Label: LAB_00429215
    PUSH 0x5cd05c                       ; 00429217 | = "Bip01 spine1"
    LEA ESI,[EBX + 0x2b4]               ; 0042921c
    PUSH ESI                            ; 00429222
    CALL FUN_00547890                   ; 00429223
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; undefined FUN_00547890()
    ADD ESP,0x4                         ; 00429228
    PUSH EAX                            ; 0042922b
    CALL FUN_00540e80                   ; 0042922c
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    MOV EDX,dword ptr [EBX + 0x27c4]    ; 00429231
    LEA EDI,[EDX*0x8 + 0x0]             ; 00429237
    ADD EDI,EDX                         ; 0042923e
    SHL EDI,0x2                         ; 00429240
    ADD ESP,0xc                         ; 00429243
    SUB EDI,EDX                         ; 00429246
    PUSH ESI                            ; 00429248
    SHL EDI,0x3                         ; 00429249
    MOV dword ptr [EBX + 0x27c0],EAX    ; 0042924c
    CALL FUN_00503860                   ; 00429252
        ;   XREF to: 00503860 (UNCONDITIONAL_CALL)  ; undefined FUN_00503860()
    FLD float ptr [EDI + EAX*0x1 + 0x1c48] ; 00429257
    FMUL float ptr [0x005cd06a]         ; 0042925e | DAT_005cd06a
    FLD float ptr [EBX + 0x27c8]        ; 00429264
    ADD ESP,0x4                         ; 0042926a
    FLD1                                ; 0042926d
    FDIVRP ST2,ST0                      ; 0042926f
    FMUL ST1                            ; 00429271
    FILD dword ptr [EDI + EAX*0x1 + 0x1c8c] ; 00429273
    FSUB float ptr [EBX + 0x27c8]       ; 0042927a
    MOV EBP,0x3f59999a                  ; 00429280
    FMULP ST2                           ; 00429285
    MOV dword ptr [ESP + 0x14],EBP      ; 00429287
    FSTP float ptr [ESP + 0xc]          ; 0042928b
    FSTP float ptr [ESP + 0x10]         ; 0042928f
    FLD float ptr [ESP + 0xc]           ; 00429293
    FCOMP float ptr [0x005cd06e]        ; 00429297 | DAT_005cd06e
    FNSTSW AX                           ; 0042929d
    SAHF                                ; 0042929f
    JNC 0x004292aa                      ; 004292a0
        ;   XREF to: 004292aa (CONDITIONAL_JUMP)  ; LAB_004292aa
    MOV EAX,dword ptr [ESP + 0xc]       ; 004292a2
    MOV dword ptr [ESP + 0x14],EAX      ; 004292a6
    FLD float ptr [ESP + 0x10]          ; 004292aa
        ;   Label: LAB_004292aa
    FCOMP float ptr [ESP + 0x14]        ; 004292ae
    FNSTSW AX                           ; 004292b2
    SAHF                                ; 004292b4
    JNC 0x004292bf                      ; 004292b5
        ;   XREF to: 004292bf (CONDITIONAL_JUMP)  ; LAB_004292bf
    MOV EAX,dword ptr [ESP + 0x10]      ; 004292b7
    MOV dword ptr [ESP + 0x14],EAX      ; 004292bb
    PUSH 0x544cc0                       ; 004292bf | LAB_00544cc0
        ;   Label: LAB_004292bf
    MOV EAX,dword ptr [EBX + 0x27c0]    ; 004292c4
    PUSH EAX                            ; 004292ca
    PUSH dword ptr [ESP + 0x1c]         ; 004292cb
    MOV EDX,dword ptr [EBX + 0x27c4]    ; 004292cf
    PUSH dword ptr [EBX + 0x27c8]       ; 004292d5
    PUSH EDX                            ; 004292db
    ADD EBX,0x2b4                       ; 004292dc
    PUSH EBX                            ; 004292e2
    CALL FUN_00545a60                   ; 004292e3
        ;   XREF to: 00545a60 (UNCONDITIONAL_CALL)  ; undefined FUN_00545a60()
    ADD ESP,0x18                        ; 004292e8
    POP ESI                             ; 004292eb
    POP EDI                             ; 004292ec
    ADD ESP,0x10                        ; 004292ed
        ;   Label: LAB_004292ed
    POP EBP                             ; 004292f0
    POP EBX                             ; 004292f1
    RET                                 ; 004292f2
    PUSH EBX                            ; 004292f3
        ;   Label: LAB_004292f3
    MOV ESI,0x5cd003                    ; 004292f4 | = "..\\core\\charactr.cpp"
    MOV EDI,0xf08                       ; 004292f9
    PUSH 0x5cd018                       ; 004292fe | = "CCharacter::applyGesture - never set ..."
    MOV dword ptr [0x01d046a0],ESI      ; 00429303 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 00429309 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0042930f
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x8                         ; 00429314
    JMP 0x00429215                      ; 00429317
        ;   XREF to: 00429215 (UNCONDITIONAL_JUMP)  ; LAB_00429215


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00554140(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_00554430 at 005545bb
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005d3019
;   TerminatedCString s_SfxSlot_kill_must_be_loc_005d302e
;   undefined4 DAT_005e4844
;   undefined4 DAT_0060422c
;   undefined4 DAT_00604230
;   undefined4 DAT_00604240
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_02cf341c
;
; Called Functions:
;   FUN_004e4330
;   FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00554140
        ;   Label: FUN_00554140
    PUSH ESI                            ; 00554141
    PUSH EDI                            ; 00554142
    SUB ESP,0x8                         ; 00554143
    MOV ESI,dword ptr [0x0060422c]      ; 00554146 | DAT_0060422c
    MOV EDI,dword ptr [ESP + 0x18]      ; 0055414c
    CMP dword ptr [0x02cf341c],0x0      ; 00554150 | DAT_02cf341c
    JLE 0x0055419d                      ; 00554157
        ;   XREF to: 0055419d (CONDITIONAL_JUMP)  ; LAB_0055419d
    MOV ESI,dword ptr [0x0060422c]      ; 00554159 | DAT_0060422c
        ;   Label: LAB_00554159
    CMP ESI,0x2                         ; 0055415f
    JL 0x005541c2                       ; 00554162
        ;   XREF to: 005541c2 (CONDITIONAL_JUMP)  ; LAB_005541c2
    TEST byte ptr [EDI + 0x4c],0x1      ; 00554164
    JZ 0x005541ce                       ; 00554168
        ;   XREF to: 005541ce (CONDITIONAL_JUMP)  ; LAB_005541ce
    XOR EDX,EDX                         ; 0055416a
    TEST ESI,ESI                        ; 0055416c
    JLE 0x00554190                      ; 0055416e
        ;   XREF to: 00554190 (CONDITIONAL_JUMP)  ; LAB_00554190
    MOV EAX,EDI                         ; 00554170
    ADD EAX,0x4                         ; 00554172
        ;   Label: LAB_00554172
    INC EDX                             ; 00554175
    MOV dword ptr [EAX + 0xac],0x0      ; 00554176
    CMP EDX,ESI                         ; 00554180
    JL 0x00554172                       ; 00554182
        ;   XREF to: 00554172 (CONDITIONAL_JUMP)  ; LAB_00554172
    LEA EAX,[EAX]                       ; 00554184
    LEA EDX,[EDX]                       ; 0055418a
    MOV dword ptr [0x0060422c],ESI      ; 00554190 | DAT_0060422c
        ;   Label: LAB_00554190
    ADD ESP,0x8                         ; 00554196
    POP EDI                             ; 00554199
    POP ESI                             ; 0055419a
    POP EBX                             ; 0055419b
    RET                                 ; 0055419c
    MOV ECX,0x5d3019                    ; 0055419d | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_0055419d
    MOV EBX,0xa6b                       ; 005541a2
    PUSH 0x5d302e                       ; 005541a7 | = "SfxSlot::kill - must be locked!"
    MOV dword ptr [0x01d71de0],ECX      ; 005541ac | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 005541b2 | DAT_01d71de4
    CALL FUN_004e4330                   ; 005541b8
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 005541bd
    JMP 0x00554159                      ; 005541c0
        ;   XREF to: 00554159 (UNCONDITIONAL_JUMP)  ; LAB_00554159
    MOV dword ptr [EDI + 0xb0],0x0      ; 005541c2
        ;   Label: LAB_005541c2
    JMP 0x00554190                      ; 005541cc
        ;   XREF to: 00554190 (UNCONDITIONAL_JUMP)  ; LAB_00554190
    FLD1                                ; 005541ce
        ;   Label: LAB_005541ce
    FDIV float ptr [0x005e4844]         ; 005541d0 | DAT_005e4844
    FMUL float ptr [0x00604240]         ; 005541d6 | DAT_00604240
    FILD dword ptr [0x00604230]         ; 005541dc | DAT_00604230
    FMULP                               ; 005541e2
    MOV EBX,0x1869f                     ; 005541e4
    XOR ECX,ECX                         ; 005541e9
    FSTP float ptr [ESP + 0x4]          ; 005541eb
    TEST ESI,ESI                        ; 005541ef
    JLE 0x0055421b                      ; 005541f1
        ;   XREF to: 0055421b (CONDITIONAL_JUMP)  ; LAB_0055421b
    MOV EDX,EDI                         ; 005541f3
    FLD float ptr [EDX + 0x70]          ; 005541f5
        ;   Label: LAB_005541f5
    FMUL float ptr [ESP + 0x4]          ; 005541f8
    CALL FUN_005a3120                   ; 005541fc
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP]               ; 00554201
    MOV EAX,dword ptr [ESP]             ; 00554204
    MOV dword ptr [EDX + 0xb0],EAX      ; 00554207
    CMP EBX,EAX                         ; 0055420d
    JLE 0x00554213                      ; 0055420f
        ;   XREF to: 00554213 (CONDITIONAL_JUMP)  ; LAB_00554213
    MOV EBX,EAX                         ; 00554211
    INC ECX                             ; 00554213
        ;   Label: LAB_00554213
    ADD EDX,0x4                         ; 00554214
    CMP ECX,ESI                         ; 00554217
    JL 0x005541f5                       ; 00554219
        ;   XREF to: 005541f5 (CONDITIONAL_JUMP)  ; LAB_005541f5
    XOR EDX,EDX                         ; 0055421b
        ;   Label: LAB_0055421b
    TEST ESI,ESI                        ; 0055421d
    JLE 0x00554190                      ; 0055421f
        ;   XREF to: 00554190 (CONDITIONAL_JUMP)  ; LAB_00554190
    MOV EAX,EDI                         ; 00554225
    MOV ECX,dword ptr [EAX + 0xb0]      ; 00554227
        ;   Label: LAB_00554227
    ADD EAX,0x4                         ; 0055422d
    SUB ECX,EBX                         ; 00554230
    INC EDX                             ; 00554232
    MOV dword ptr [EAX + 0xac],ECX      ; 00554233
    CMP EDX,ESI                         ; 00554239
    JL 0x00554227                       ; 0055423b
        ;   XREF to: 00554227 (CONDITIONAL_JUMP)  ; LAB_00554227
    MOV dword ptr [0x0060422c],ESI      ; 0055423d | DAT_0060422c
    ADD ESP,0x8                         ; 00554243
    POP EDI                             ; 00554246
    POP ESI                             ; 00554247
    POP EBX                             ; 00554248
    RET                                 ; 00554249


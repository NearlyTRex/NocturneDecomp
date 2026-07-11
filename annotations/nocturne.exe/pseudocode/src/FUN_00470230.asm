; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_00470230(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x17c]:1  local_17c
; undefined        Stack[-0x168]:1  local_168
; undefined1       Stack[-0x167]:1  local_167
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   FUN_0049da10 at 0049e3ac
;   FUN_0049f930 at 004a0025
;
; Referenced Globals:
;   string s_[Y]es,_I_know_what_I'm_doing_and_0057e5e5
;   string s_[N]o,_please,_I_didn't_mean_to_d_0057e625
;   undefined4 DAT_0057e64b
;
; Called Functions:
;   FUN_00473cb0
;   FUN_00474c90
;   FUN_00474cf0
;   FUN_00474d70
;   FUN_004ee370
;   FUN_00563a08
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00470230
        ;   Label: FUN_00470230
    PUSH EDI                            ; 00470231
    SUB ESP,0x174                       ; 00470232
    LEA EAX,[ESP + 0x188]               ; 00470238
    MOV dword ptr [ESP + 0x170],EAX     ; 0047023f
    LEA EAX,[ESP + 0x170]               ; 00470246
    PUSH EAX                            ; 0047024d
    MOV EDX,dword ptr [ESP + 0x188]     ; 0047024e
    PUSH EDX                            ; 00470255
    PUSH 0x1bcb4d0                      ; 00470256
    CALL FUN_00563a08                   ; 0047025b
        ;   XREF to: 00563a08 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a08()
    ADD ESP,0xc                         ; 00470260
    MOV EAX,ESP                         ; 00470263
    XOR ECX,ECX                         ; 00470265
    PUSH EAX                            ; 00470267
    MOV dword ptr [ESP + 0x174],ECX     ; 00470268
    CALL FUN_00474c90                   ; 0047026f
        ;   XREF to: 00474c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00474c90()
    ADD ESP,0x4                         ; 00470274
    PUSH 0x57e5e5                       ; 00470277 | = "[Y]es, I know what I'm doing and I ha..."
    CALL FUN_004ee370                   ; 0047027c
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined FUN_004ee370()
    ADD ESP,0x4                         ; 00470281
    PUSH EAX                            ; 00470284
    LEA EAX,[ESP + 0x4]                 ; 00470285
    PUSH EAX                            ; 00470289
    CALL FUN_00473cb0                   ; 0047028a
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00473cb0()
    ADD ESP,0x8                         ; 0047028f
    PUSH 0x57e625                       ; 00470292 | = "[N]o, please, I didn't mean to do it!"
    CALL FUN_004ee370                   ; 00470297
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined FUN_004ee370()
    ADD ESP,0x4                         ; 0047029c
    PUSH EAX                            ; 0047029f
    LEA EAX,[ESP + 0x4]                 ; 004702a0
    PUSH EAX                            ; 004702a4
    CALL FUN_00473cb0                   ; 004702a5
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00473cb0()
    ADD ESP,0x8                         ; 004702aa
    PUSH 0x57e64b                       ; 004702ad | DAT_0057e64b
    CALL FUN_004ee370                   ; 004702b2
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined FUN_004ee370()
    ADD ESP,0x4                         ; 004702b7
    LEA EDI,[ESP + 0x14]                ; 004702ba
    MOV ESI,EAX                         ; 004702be
    PUSH EDI                            ; 004702c0
    MOV AL,byte ptr [ESI]               ; 004702c1
        ;   Label: LAB_004702c1
    MOV byte ptr [EDI],AL               ; 004702c3
    CMP AL,0x0                          ; 004702c5
    JZ 0x004702d9                       ; 004702c7
        ;   XREF to: 004702d9 (CONDITIONAL_JUMP)  ; LAB_004702d9
    MOV AL,byte ptr [ESI + 0x1]         ; 004702c9
    ADD ESI,0x2                         ; 004702cc
    MOV byte ptr [EDI + 0x1],AL         ; 004702cf
    ADD EDI,0x2                         ; 004702d2
    CMP AL,0x0                          ; 004702d5
    JNZ 0x004702c1                      ; 004702d7
        ;   XREF to: 004702c1 (CONDITIONAL_JUMP)  ; LAB_004702c1
    POP EDI                             ; 004702d9
        ;   Label: LAB_004702d9
    PUSH -0x1                           ; 004702da
    PUSH 0x1bcb4d0                      ; 004702dc
    LEA EAX,[ESP + 0x8]                 ; 004702e1
    PUSH EAX                            ; 004702e5
    CALL FUN_00474d70                   ; 004702e6
        ;   XREF to: 00474d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00474d70()
    ADD ESP,0xc                         ; 004702eb
    TEST EAX,EAX                        ; 004702ee
    SETZ AL                             ; 004702f0
    PUSH 0x0                            ; 004702f3
    MOVZX EDI,AL                        ; 004702f5
    LEA EAX,[ESP + 0x4]                 ; 004702f8
    PUSH EAX                            ; 004702fc
    CALL FUN_00474cf0                   ; 004702fd
        ;   XREF to: 00474cf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00474cf0()
    ADD ESP,0x8                         ; 00470302
    MOV EAX,EDI                         ; 00470305
    ADD ESP,0x174                       ; 00470307
    POP EDI                             ; 0047030d
    POP ESI                             ; 0047030e
    RET                                 ; 0047030f


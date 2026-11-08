; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004881b0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)
;
; Local Variables:
; undefined        Stack[-0x20]:1  local_20
;
; XREF[1]:
;   FUN_004186c0 at 00419056
;
; Referenced Globals:
;   undefined4 DAT_005d2db9
;   undefined4 DAT_005d2dc1
;   undefined4 DAT_006167e0
;
; Called Functions:
;   FUN_004c9850
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004881b0
        ;   Label: FUN_004881b0
    PUSH ESI                            ; 004881b1
    PUSH EDI                            ; 004881b2
    PUSH EBP                            ; 004881b3
    MOV EBP,ESP                         ; 004881b4
    SUB ESP,0x18                        ; 004881b6
    AND ESP,0xfffffff8                  ; 004881b9
    MOV EAX,dword ptr [EBP + 0x14]      ; 004881bc
    MOV EDX,dword ptr [EAX + 0x10a78]   ; 004881bf
    TEST EDX,EDX                        ; 004881c5
    JNZ 0x004881d2                      ; 004881c7
        ;   XREF to: 004881d2 (CONDITIONAL_JUMP)  ; LAB_004881d2
    XOR EAX,EAX                         ; 004881c9
        ;   Label: LAB_004881c9
    MOV ESP,EBP                         ; 004881cb
    POP EBP                             ; 004881cd
    POP EDI                             ; 004881ce
    POP ESI                             ; 004881cf
    POP EBX                             ; 004881d0
    RET                                 ; 004881d1
    LEA ECX,[ESP + 0x8]                 ; 004881d2
        ;   Label: LAB_004881d2
    PUSH ECX                            ; 004881d6
    MOV ECX,dword ptr [EBP + 0x20]      ; 004881d7
    PUSH ECX                            ; 004881da
    MOV EBX,dword ptr [EBP + 0x1c]      ; 004881db
    PUSH EBX                            ; 004881de
    MOV ESI,dword ptr [EBP + 0x18]      ; 004881df
    PUSH ESI                            ; 004881e2
    MOV EAX,EDX                         ; 004881e3
    MOV EDX,dword ptr [EDX + 0x2b0]     ; 004881e5
    PUSH EAX                            ; 004881eb
    CALL dword ptr [EDX + 0x10c]        ; 004881ec
    ADD ESP,0x14                        ; 004881f2
    MOV EAX,dword ptr [EBP + 0x20]      ; 004881f5
    FLDZ                                ; 004881f8
    FLD float ptr [EAX + 0x4]           ; 004881fa
    FSTP double ptr [ESP]               ; 004881fd
    FCOMP double ptr [ESP]              ; 00488200
    FNSTSW AX                           ; 00488203
    SAHF                                ; 00488205
    JNC 0x004881c9                      ; 00488206
        ;   XREF to: 004881c9 (CONDITIONAL_JUMP)  ; LAB_004881c9
    FLD double ptr [ESP]                ; 00488208
    FMUL double ptr [0x005d2db9]        ; 0048820b | DAT_005d2db9
    FMUL double ptr [0x005d2dc1]        ; 00488211 | DAT_005d2dc1
    PUSH 0x0                            ; 00488217
    CALL FUN_005b7ff0                   ; 00488219
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x18]        ; 0048821e
    MOV EDI,dword ptr [ESP + 0x18]      ; 00488222
    PUSH EDI                            ; 00488226
    PUSH 0x0                            ; 00488227
    LEA EAX,[ESP + 0x14]                ; 00488229
    PUSH EAX                            ; 0048822d
    MOV EAX,[0x006167e0]                ; 0048822e | DAT_006167e0
    PUSH EAX                            ; 00488233
    CALL FUN_004c9850                   ; 00488234
        ;   XREF to: 004c9850 (UNCONDITIONAL_CALL)  ; undefined FUN_004c9850()
    MOV EAX,0x1                         ; 00488239
    ADD ESP,0x14                        ; 0048823e
    MOV ESP,EBP                         ; 00488241
    POP EBP                             ; 00488243
    POP EDI                             ; 00488244
    POP ESI                             ; 00488245
    POP EBX                             ; 00488246
    RET                                 ; 00488247


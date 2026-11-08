; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * FUN_00576250(uint *param_1)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[54]:
;   FUN_00422a00 at 00422c43
;   FUN_00425da0 at 0042743b
;   FUN_0042b9e0 at 0042ba2f
;   FUN_0042f770 at 0042f9a0
;   FUN_004300e0 at 004302fc
;   FUN_004310e0 at 00431268
;   FUN_00431660 at 004317ef
;   FUN_00432330 at 00432894
;   FUN_00434190 at 0043429a
;   FUN_0043d680 at 0043d75e
;   ... and 44 more
;
; Called Functions:
;   FUN_005a5cc1
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00576250
        ;   Label: FUN_00576250
    PUSH EDI                            ; 00576251
    SUB ESP,0x10                        ; 00576252
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00576255
    MOV ECX,ESI                         ; 00576259
    XOR EBX,EBX                         ; 0057625b
    MOV ESI,dword ptr [EDX]             ; 0057625d
    MOV dword ptr [ESP + 0x8],EBX       ; 0057625f
    TEST ESI,0x7fffffff                 ; 00576263
    JNZ 0x005762aa                      ; 00576269
        ;   XREF to: 005762aa (CONDITIONAL_JUMP)  ; LAB_005762aa
    TEST dword ptr [EDX + 0x8],0x7fffffff ; 0057626b
    JNZ 0x005762aa                      ; 00576272
        ;   XREF to: 005762aa (CONDITIONAL_JUMP)  ; LAB_005762aa
    FLDZ                                ; 00576274
    MOV dword ptr [ESP + 0x4],EBX       ; 00576276
    FCOMP float ptr [EDX + 0x4]         ; 0057627a
    FNSTSW AX                           ; 0057627d
    SAHF                                ; 0057627f
    JC 0x005762a0                       ; 00576280
        ;   XREF to: 005762a0 (CONDITIONAL_JUMP)  ; LAB_005762a0
    MOV dword ptr [ESP + 0xc],0x3fc90fdb ; 00576282
    MOV EDX,dword ptr [ESP + 0xc]       ; 0057628a
        ;   Label: LAB_0057628a
    MOV dword ptr [ESP],EDX             ; 0057628e
    MOV ESI,ESP                         ; 00576291
    MOV EDI,ECX                         ; 00576293
    MOVSD ES:EDI,ESI                    ; 00576295
    MOVSD ES:EDI,ESI                    ; 00576296
    MOVSD ES:EDI,ESI                    ; 00576297
    MOV EAX,ECX                         ; 00576298
    ADD ESP,0x10                        ; 0057629a
    POP EDI                             ; 0057629d
    POP EBX                             ; 0057629e
    RET                                 ; 0057629f
    MOV dword ptr [ESP + 0xc],0xbfc90fdb ; 005762a0
        ;   Label: LAB_005762a0
    JMP 0x0057628a                      ; 005762a8
        ;   XREF to: 0057628a (UNCONDITIONAL_JUMP)  ; LAB_0057628a
    FLD float ptr [EDX + 0x8]           ; 005762aa
        ;   Label: LAB_005762aa
    FLD float ptr [EDX]                 ; 005762ad
    CALL FUN_005a5cc1                   ; 005762af
        ;   XREF to: 005a5cc1 (UNCONDITIONAL_CALL)  ; undefined FUN_005a5cc1()
    FLD float ptr [EDX + 0x8]           ; 005762b4
    FMUL ST0                            ; 005762b7
    FLD float ptr [EDX]                 ; 005762b9
    FMUL ST0                            ; 005762bb
    FADDP                               ; 005762bd
    FSQRT                               ; 005762bf
    FLD float ptr [EDX + 0x4]           ; 005762c1
    CALL FUN_005a5cc1                   ; 005762c4
        ;   XREF to: 005a5cc1 (UNCONDITIONAL_CALL)  ; undefined FUN_005a5cc1()
    FXCH                                ; 005762c9
    FSTP float ptr [ESP + 0x4]          ; 005762cb
    FCHS                                ; 005762cf
    FSTP float ptr [ESP]                ; 005762d1
    MOV ESI,ESP                         ; 005762d4
    MOV EDI,ECX                         ; 005762d6
    MOVSD ES:EDI,ESI                    ; 005762d8
    MOVSD ES:EDI,ESI                    ; 005762d9
    MOVSD ES:EDI,ESI                    ; 005762da
    MOV EAX,ECX                         ; 005762db
    ADD ESP,0x10                        ; 005762dd
    POP EDI                             ; 005762e0
    POP EBX                             ; 005762e1
    RET                                 ; 005762e2


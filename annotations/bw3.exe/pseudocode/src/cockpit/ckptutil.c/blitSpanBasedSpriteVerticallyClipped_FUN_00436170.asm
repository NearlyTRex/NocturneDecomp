; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_blitSpanBasedSpriteVerticallyClipped_FUN_00436170(void *sprite_data,void *span_data)
;
; Parameters:
; void *           Stack[0x4]:4   sprite_data
; void *           Stack[0x8]:4   span_data
;
; Referenced Globals:
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c6b5ac
;   undefined4 DAT_01c6b5b4
;
; Called Functions:
;   cockpit_ckptutil.c_FUN_00434e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00436170
        ;   Label: cockpit_ckptutil.c_blitSpanBasedSpriteVerticallyClipped_FUN_00436170
    PUSH ESI                            ; 00436171
    PUSH EDI                            ; 00436172
    PUSH EBP                            ; 00436173
    SUB ESP,0x30                        ; 00436174
    MOV EBP,dword ptr [ESP + 0x48]      ; 00436177
    CALL cockpit_ckptutil.c_FUN_00434e80 ; 0043617b
        ;   XREF to: 00434e80 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_FUN_00434e80()
    MOV EDX,dword ptr [0x005fba20]      ; 00436180 | DAT_005fba20
    MOV EDI,EAX                         ; 00436186
    CMP EDX,0x8                         ; 00436188
    JNZ 0x00436251                      ; 0043618b
        ;   XREF to: 00436251 (CONDITIONAL_JUMP)  ; LAB_00436251
    MOV EAX,[0x01c6b5ac]                ; 00436191 | DAT_01c6b5ac
    MOV EBX,dword ptr [0x01c6b5b4]      ; 00436196 | DAT_01c6b5b4
    MOV dword ptr [ESP + 0x14],EAX      ; 0043619c
    CMP EAX,EBX                         ; 004361a0
    JG 0x00436226                       ; 004361a2
        ;   XREF to: 00436226 (CONDITIONAL_JUMP)  ; LAB_00436226
    MOV EDX,EAX                         ; 004361a8
    SHL EAX,0x5                         ; 004361aa
    ADD EAX,EDX                         ; 004361ad
    SHL EAX,0x2                         ; 004361af
    MOV dword ptr [ESP + 0xc],EAX       ; 004361b2
    MOV EAX,EDX                         ; 004361b6
    SHL EAX,0x2                         ; 004361b8
    MOV dword ptr [ESP + 0x8],EAX       ; 004361bb
    MOV EAX,dword ptr [ESP + 0x8]       ; 004361bf
        ;   Label: LAB_004361bf
    MOV EAX,dword ptr [EAX + 0x1c5faec] ; 004361c3
    MOV ECX,dword ptr [0x005fba18]      ; 004361c9 | DAT_005fba18
    MOV dword ptr [ESP + 0x18],EAX      ; 004361cf
    MOV EAX,dword ptr [ESP + 0x14]      ; 004361d3
    IMUL EAX,ECX                        ; 004361d7
    MOV EDX,dword ptr [ESP + 0x44]      ; 004361da
    XOR EBX,EBX                         ; 004361de
    XOR ESI,ESI                         ; 004361e0
    ADD EDX,EAX                         ; 004361e2
    MOV EAX,dword ptr [ESP + 0xc]       ; 004361e4
    MOV dword ptr [ESP + 0x24],EDX      ; 004361e8
    MOV dword ptr [ESP + 0x1c],EAX      ; 004361ec
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004361f0
        ;   Label: LAB_004361f0
    ADD EAX,EBP                         ; 004361f4
    CMP EBX,dword ptr [EAX]             ; 004361f6
    JL 0x0043622e                       ; 004361f8
        ;   XREF to: 0043622e (CONDITIONAL_JUMP)  ; LAB_0043622e
    MOV ECX,dword ptr [ESP + 0xc]       ; 004361fa
    MOV EBX,dword ptr [ESP + 0x8]       ; 004361fe
    MOV ESI,dword ptr [ESP + 0x14]      ; 00436202
    MOV EDX,dword ptr [0x01c6b5b4]      ; 00436206 | DAT_01c6b5b4
    ADD ECX,0x84                        ; 0043620c
    ADD EBX,0x4                         ; 00436212
    INC ESI                             ; 00436215
    MOV dword ptr [ESP + 0xc],ECX       ; 00436216
    MOV dword ptr [ESP + 0x8],EBX       ; 0043621a
    MOV dword ptr [ESP + 0x14],ESI      ; 0043621e
    CMP ESI,EDX                         ; 00436222
    JLE 0x004361bf                      ; 00436224
        ;   XREF to: 004361bf (CONDITIONAL_JUMP)  ; LAB_004361bf
    ADD ESP,0x30                        ; 00436226
        ;   Label: LAB_00436226
    POP EBP                             ; 00436229
    POP EDI                             ; 0043622a
    POP ESI                             ; 0043622b
    POP EBX                             ; 0043622c
    RET                                 ; 0043622d
    MOV ECX,dword ptr [ESI + EAX*0x1 + 0x44] ; 0043622e
        ;   Label: LAB_0043622e
    MOV EDX,dword ptr [ESP + 0x24]      ; 00436232
    PUSH ECX                            ; 00436236
    MOV ECX,dword ptr [ESI + EAX*0x1 + 0x4] ; 00436237
    ADD EDX,ECX                         ; 0043623b
    PUSH EDX                            ; 0043623d
    MOV EDX,dword ptr [ESP + 0x20]      ; 0043623e
    LEA EAX,[EDX + ECX*0x1]             ; 00436242
    PUSH EAX                            ; 00436245
    ADD ESI,0x4                         ; 00436246
    INC EBX                             ; 00436249
    CALL EDI                            ; 0043624a
    ADD ESP,0xc                         ; 0043624c
    JMP 0x004361f0                      ; 0043624f
        ;   XREF to: 004361f0 (UNCONDITIONAL_JUMP)  ; LAB_004361f0
    MOV EAX,[0x01c6b5ac]                ; 00436251 | DAT_01c6b5ac
        ;   Label: LAB_00436251
    MOV ECX,dword ptr [0x01c6b5b4]      ; 00436256 | DAT_01c6b5b4
    MOV dword ptr [ESP + 0x10],EAX      ; 0043625c
    CMP EAX,ECX                         ; 00436260
    JG 0x00436226                       ; 00436262
        ;   XREF to: 00436226 (CONDITIONAL_JUMP)  ; LAB_00436226
    MOV EDX,EAX                         ; 00436264
    SHL EAX,0x5                         ; 00436266
    ADD EAX,EDX                         ; 00436269
    SHL EAX,0x2                         ; 0043626b
    MOV dword ptr [ESP + 0x4],EAX       ; 0043626e
    MOV EAX,EDX                         ; 00436272
    SHL EAX,0x2                         ; 00436274
    MOV dword ptr [ESP],EAX             ; 00436277
    MOV EAX,dword ptr [ESP]             ; 0043627a
        ;   Label: LAB_0043627a
    MOV EAX,dword ptr [EAX + 0x1c5faec] ; 0043627d
    MOV EBX,dword ptr [0x005fba18]      ; 00436283 | DAT_005fba18
    MOV dword ptr [ESP + 0x28],EAX      ; 00436289
    MOV EAX,dword ptr [ESP + 0x10]      ; 0043628d
    IMUL EAX,EBX                        ; 00436291
    MOV EDX,dword ptr [ESP + 0x44]      ; 00436294
    XOR ESI,ESI                         ; 00436298
    ADD EDX,EAX                         ; 0043629a
    XOR EBX,EBX                         ; 0043629c
    MOV EAX,dword ptr [ESP + 0x4]       ; 0043629e
    MOV dword ptr [ESP + 0x2c],EDX      ; 004362a2
    MOV dword ptr [ESP + 0x20],EAX      ; 004362a6
    MOV EAX,dword ptr [ESP + 0x20]      ; 004362aa
        ;   Label: LAB_004362aa
    ADD EAX,EBP                         ; 004362ae
    CMP ESI,dword ptr [EAX]             ; 004362b0
    JL 0x004362e4                       ; 004362b2
        ;   XREF to: 004362e4 (CONDITIONAL_JUMP)  ; LAB_004362e4
    MOV ESI,dword ptr [ESP + 0x4]       ; 004362b4
    MOV EAX,dword ptr [ESP]             ; 004362b8
    MOV EDX,dword ptr [ESP + 0x10]      ; 004362bb
    MOV ECX,dword ptr [0x01c6b5b4]      ; 004362bf | DAT_01c6b5b4
    ADD ESI,0x84                        ; 004362c5
    ADD EAX,0x4                         ; 004362cb
    INC EDX                             ; 004362ce
    MOV dword ptr [ESP + 0x4],ESI       ; 004362cf
    MOV dword ptr [ESP],EAX             ; 004362d3
    MOV dword ptr [ESP + 0x10],EDX      ; 004362d6
    CMP EDX,ECX                         ; 004362da
    JG 0x00436226                       ; 004362dc
        ;   XREF to: 00436226 (CONDITIONAL_JUMP)  ; LAB_00436226
    JMP 0x0043627a                      ; 004362e2
        ;   XREF to: 0043627a (UNCONDITIONAL_JUMP)  ; LAB_0043627a
    MOV ECX,dword ptr [EBX + EAX*0x1 + 0x44] ; 004362e4
        ;   Label: LAB_004362e4
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004362e8
    PUSH ECX                            ; 004362ec
    MOV ECX,dword ptr [EBX + EAX*0x1 + 0x4] ; 004362ed
    ADD EDX,ECX                         ; 004362f1
    PUSH EDX                            ; 004362f3
    LEA EAX,[ECX + ECX*0x1]             ; 004362f4
    ADD EAX,dword ptr [ESP + 0x30]      ; 004362f7
    PUSH EAX                            ; 004362fb
    ADD EBX,0x4                         ; 004362fc
    INC ESI                             ; 004362ff
    CALL EDI                            ; 00436300
    ADD ESP,0xc                         ; 00436302
    JMP 0x004362aa                      ; 00436305
        ;   XREF to: 004362aa (UNCONDITIONAL_JUMP)  ; LAB_004362aa


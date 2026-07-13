; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00543210(int param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0xa8]:1  local_a8
; undefined        Stack[-0x78]:1  local_78
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
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; Called Functions:
;   FUN_0055aa00
;   FUN_0055afb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00543210
        ;   Label: FUN_00543210
    PUSH EDI                            ; 00543211
    PUSH EBP                            ; 00543212
    SUB ESP,0x9c                        ; 00543213
    MOV ECX,dword ptr [ESP + 0xb0]      ; 00543219
    MOV EBX,ESI                         ; 00543220
    MOV EAX,ECX                         ; 00543222
    SHL EAX,0x4                         ; 00543224
    ADD EAX,ECX                         ; 00543227
    MOV EDX,dword ptr [ESP + 0xac]      ; 00543229
    SHL EAX,0x2                         ; 00543230
    ADD EAX,EDX                         ; 00543233
    MOV ESI,dword ptr [EAX + 0x24a4]    ; 00543235
    TEST ECX,ECX                        ; 0054323b
    JNZ 0x005432c9                      ; 0054323d
        ;   XREF to: 005432c9 (CONDITIONAL_JUMP)  ; LAB_005432c9
    MOV EDI,0xbfeed917                  ; 00543243
    MOV EBP,0xc08374bc                  ; 00543248
    MOV ECX,0x4006a7f0                  ; 0054324d
    LEA EDX,[ESP + 0x90]                ; 00543252
    LEA EAX,[ESP + 0x6c]                ; 00543259
    MOV dword ptr [ESP + 0x94],EDI      ; 0054325d
    MOV dword ptr [ESP + 0x98],EBP      ; 00543264
    MOV dword ptr [ESP + 0x90],ECX      ; 0054326b
    CMP EAX,EDX                         ; 00543272
    JZ 0x00543282                       ; 00543274
        ;   XREF to: 00543282 (CONDITIONAL_JUMP)  ; LAB_00543282
    MOV dword ptr [ESP + 0x70],EDI      ; 00543276
    MOV dword ptr [ESP + 0x74],EBP      ; 0054327a
    MOV dword ptr [ESP + 0x6c],ECX      ; 0054327e
    MOV EBP,0x3dced917                  ; 00543282
        ;   Label: LAB_00543282
    MOV EAX,0xbef8d4fe                  ; 00543287
    MOV EDI,0x3faf7cee                  ; 0054328c
    LEA EDX,[ESP + 0x78]                ; 00543291
    MOV dword ptr [ESP + 0x80],EBP      ; 00543295
    MOV dword ptr [ESP + 0x7c],EAX      ; 0054329c
    LEA EAX,[ESP + 0x84]                ; 005432a0
    MOV dword ptr [ESP + 0x78],EDI      ; 005432a7
    CMP EAX,EDX                         ; 005432ab
    JZ 0x005432c9                       ; 005432ad
        ;   XREF to: 005432c9 (CONDITIONAL_JUMP)  ; LAB_005432c9
    MOV ECX,0xbef8d4fe                  ; 005432af
    MOV dword ptr [ESP + 0x8c],EBP      ; 005432b4
    MOV dword ptr [ESP + 0x84],EDI      ; 005432bb
    MOV dword ptr [ESP + 0x88],ECX      ; 005432c2
    LEA EAX,[ESP + 0x84]                ; 005432c9
        ;   Label: LAB_005432c9
    PUSH EAX                            ; 005432d0
    LEA EAX,[ESP + 0x70]                ; 005432d1
    PUSH EAX                            ; 005432d5
    LEA EAX,[ESP + 0x38]                ; 005432d6
    PUSH EAX                            ; 005432da
    CALL FUN_0055afb0                   ; 005432db
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055afb0()
    LEA EAX,[ESI*0x4 + 0x0]             ; 005432e0
    ADD ESP,0xc                         ; 005432e7
    SUB EAX,ESI                         ; 005432ea
    MOV EDX,dword ptr [ESP + 0xac]      ; 005432ec
    SHL EAX,0x4                         ; 005432f3
    ADD EDX,0xfd0                       ; 005432f6
    ADD EAX,EDX                         ; 005432fc
    PUSH EAX                            ; 005432fe
    LEA EAX,[ESP + 0x34]                ; 005432ff
    PUSH EAX                            ; 00543303
    LEA ESI,[ESP + 0x8]                 ; 00543304
    MOV EDI,EBX                         ; 00543308
    CALL FUN_0055aa00                   ; 0054330a
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined FUN_0055aa00()
    MOV ECX,0xc                         ; 0054330f
    LEA ESI,[ESP + 0x8]                 ; 00543314
    ADD ESP,0x8                         ; 00543318
    MOVSD.REP ES:EDI,ESI                ; 0054331b
    MOV EAX,EBX                         ; 0054331d
    ADD ESP,0x9c                        ; 0054331f
    POP EBP                             ; 00543325
    POP EDI                             ; 00543326
    POP EBX                             ; 00543327
    RET                                 ; 00543328


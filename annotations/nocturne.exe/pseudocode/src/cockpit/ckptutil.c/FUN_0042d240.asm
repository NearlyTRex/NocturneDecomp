; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0042d240(undefined4 param_1,int param_2,undefined4 param_3)
;
; Local Variables:
; undefined        Stack[-0x60]:1  local_60
;
; XREF[3]:
;   FUN_0048ff70 at 00490099
;   FUN_004f4630 at 004f465e
;   FUN_004f46b0 at 004f46c1
;
; Referenced Globals:
;   string s_Unable_to_allocate_%u_bytes_for_b_0057a625
;   string s_..\\cockpit\\ckptutil.c_0057a657
;   undefined4 DAT_0057a66d
;   undefined4 DAT_0057a670
;   string s_Unable_to_open_bitmap_file_(%s)._0057a674
;   string s_..\\cockpit\\ckptutil.c_0057a695
;   string s_Unable_to_read_bitmap_file_(%s)._0057a6ab
;   string s_..\\cockpit\\ckptutil.c_0057a6cc
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_00456a60
;   FUN_004c8440
;   FUN_00563380
;   FUN_005635b0
;   FUN_005636d0
;   FUN_00563c90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042d240
        ;   Label: FUN_0042d240
    PUSH ESI                            ; 0042d241
    PUSH EDI                            ; 0042d242
    PUSH EBP                            ; 0042d243
    SUB ESP,0x50                        ; 0042d244
    MOV EDI,dword ptr [ESP + 0x64]      ; 0042d247
    MOV ESI,dword ptr [ESP + 0x68]      ; 0042d24b
    MOV EBP,dword ptr [ESP + 0x6c]      ; 0042d24f
    TEST ESI,ESI                        ; 0042d253
    JZ 0x0042d2c8                       ; 0042d255
        ;   XREF to: 0042d2c8 (CONDITIONAL_JUMP)  ; LAB_0042d2c8
    PUSH 0x57a66d                       ; 0042d257 | DAT_0057a66d
        ;   Label: LAB_0042d257
    PUSH EDI                            ; 0042d25c
    PUSH 0x57a670                       ; 0042d25d | DAT_0057a670
    CALL FUN_00456a60                   ; 0042d262
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; undefined FUN_00456a60()
    ADD ESP,0xc                         ; 0042d267
    MOV EBX,EAX                         ; 0042d26a
    TEST EAX,EAX                        ; 0042d26c
    JNZ 0x0042d2a3                      ; 0042d26e
        ;   XREF to: 0042d2a3 (CONDITIONAL_JUMP)  ; LAB_0042d2a3
    PUSH EDI                            ; 0042d270
    PUSH 0x57a674                       ; 0042d271 | = "Unable to open bitmap file (%s)."
    LEA EAX,[ESP + 0x8]                 ; 0042d276
    PUSH EAX                            ; 0042d27a
    CALL FUN_00563c90                   ; 0042d27b
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00563c90()
    MOV EAX,0x57a695                    ; 0042d280 | = "..\\cockpit\\ckptutil.c"
    ADD ESP,0xc                         ; 0042d285
    MOV [0x01cc4800],EAX                ; 0042d288 | DAT_01cc4800
    MOV EAX,ESP                         ; 0042d28d
    MOV EDX,0xdb                        ; 0042d28f
    PUSH EAX                            ; 0042d294
    MOV dword ptr [0x01cc4804],EDX      ; 0042d295 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0042d29b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0042d2a0
    PUSH EBX                            ; 0042d2a3
        ;   Label: LAB_0042d2a3
    PUSH 0x1                            ; 0042d2a4
    PUSH EBP                            ; 0042d2a6
    PUSH ESI                            ; 0042d2a7
    CALL FUN_005636d0                   ; 0042d2a8
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005636d0()
    ADD ESP,0x10                        ; 0042d2ad
    CMP EAX,0x1                         ; 0042d2b0
    JNZ 0x0042d311                      ; 0042d2b3
        ;   XREF to: 0042d311 (CONDITIONAL_JUMP)  ; LAB_0042d311
    PUSH EBX                            ; 0042d2b5
    CALL FUN_00563380                   ; 0042d2b6
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined FUN_00563380()
    ADD ESP,0x4                         ; 0042d2bb
    MOV EAX,ESI                         ; 0042d2be
    ADD ESP,0x50                        ; 0042d2c0
    POP EBP                             ; 0042d2c3
    POP EDI                             ; 0042d2c4
    POP ESI                             ; 0042d2c5
    POP EBX                             ; 0042d2c6
    RET                                 ; 0042d2c7
    PUSH EBP                            ; 0042d2c8
        ;   Label: LAB_0042d2c8
    CALL FUN_005635b0                   ; 0042d2c9
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005635b0()
    ADD ESP,0x4                         ; 0042d2ce
    MOV ESI,EAX                         ; 0042d2d1
    TEST EAX,EAX                        ; 0042d2d3
    JNZ 0x0042d257                      ; 0042d2d5
        ;   XREF to: 0042d257 (CONDITIONAL_JUMP)  ; LAB_0042d257
    PUSH EDI                            ; 0042d2d7
    PUSH EBP                            ; 0042d2d8
    PUSH 0x57a625                       ; 0042d2d9 | = "Unable to allocate %u bytes for bitma..."
    LEA EAX,[ESP + 0xc]                 ; 0042d2de
    PUSH EAX                            ; 0042d2e2
    CALL FUN_00563c90                   ; 0042d2e3
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00563c90()
    MOV EDX,0x57a657                    ; 0042d2e8 | = "..\\cockpit\\ckptutil.c"
    ADD ESP,0x10                        ; 0042d2ed
    MOV EAX,ESP                         ; 0042d2f0
    MOV ECX,0xd2                        ; 0042d2f2
    PUSH EAX                            ; 0042d2f7
    MOV dword ptr [0x01cc4800],EDX      ; 0042d2f8 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 0042d2fe | DAT_01cc4804
    CALL FUN_004c8440                   ; 0042d304
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0042d309
    JMP 0x0042d257                      ; 0042d30c
        ;   XREF to: 0042d257 (UNCONDITIONAL_JUMP)  ; LAB_0042d257
    PUSH EDI                            ; 0042d311
        ;   Label: LAB_0042d311
    PUSH 0x57a6ab                       ; 0042d312 | = "Unable to read bitmap file (%s)."
    LEA EAX,[ESP + 0x8]                 ; 0042d317
    PUSH EAX                            ; 0042d31b
    CALL FUN_00563c90                   ; 0042d31c
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00563c90()
    ADD ESP,0xc                         ; 0042d321
    PUSH EBX                            ; 0042d324
    MOV EDI,0xe3                        ; 0042d325
    CALL FUN_00563380                   ; 0042d32a
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined FUN_00563380()
    ADD ESP,0x4                         ; 0042d32f
    MOV EAX,ESP                         ; 0042d332
    MOV ECX,0x57a6cc                    ; 0042d334 | = "..\\cockpit\\ckptutil.c"
    PUSH EAX                            ; 0042d339
    MOV dword ptr [0x01cc4804],EDI      ; 0042d33a | DAT_01cc4804
    MOV dword ptr [0x01cc4800],ECX      ; 0042d340 | DAT_01cc4800
    CALL FUN_004c8440                   ; 0042d346
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0042d34b
    PUSH EBX                            ; 0042d34e
    CALL FUN_00563380                   ; 0042d34f
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined FUN_00563380()
    ADD ESP,0x4                         ; 0042d354
    MOV EAX,ESI                         ; 0042d357
    ADD ESP,0x50                        ; 0042d359
    POP EBP                             ; 0042d35c
    POP EDI                             ; 0042d35d
    POP ESI                             ; 0042d35e
    POP EBX                             ; 0042d35f
    RET                                 ; 0042d360


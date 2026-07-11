; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040c320(undefined4 param_1,char *param_2)
;
;
; XREF[13]:
;   FUN_0040c3a0 at 0040c3e0
;   FUN_0040c450 at 0040c4a1
;   FUN_0040c4f0 at 0040c541
;   FUN_0040c590 at 0040c5e6
;   FUN_0040c630 at 0040c685
;   FUN_0040c6d0 at 0040c716
;   FUN_0040c880 at 0040c8c9
;   FUN_0040c900 at 0040c94a
;   FUN_0040cb00 at 0040cb65
;   FUN_0040cbf0 at 0040cc7d
;   ... and 3 more
;
; Referenced Globals:
;   string s_(unknown)_00577b57
;   string s_(unknown)_00577b61
;   string s_(unknown)_00577b6b
;   undefined4 DAT_00577b75
;   undefined4 DAT_00577b7a
;   string s_..\\core\\actor.cpp_00577b7f
;   string s_Error_%sing_actor_property._Acto_00577b91
;   undefined4 DAT_00763e88
;   undefined4 DAT_00763e8c
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_00409fa0
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c320
        ;   Label: FUN_0040c320
    PUSH ESI                            ; 0040c321
    PUSH EDI                            ; 0040c322
    PUSH EBP                            ; 0040c323
    MOV ESI,dword ptr [ESP + 0x18]      ; 0040c324
    MOV EAX,0x577b61                    ; 0040c328 | = "(unknown)"
    MOV EDX,dword ptr [0x00763e8c]      ; 0040c32d | DAT_00763e8c
    MOV EBX,0x577b57                    ; 0040c333 | = "(unknown)"
    TEST EDX,EDX                        ; 0040c338
    JNZ 0x0040c38b                      ; 0040c33a
        ;   XREF to: 0040c38b (CONDITIONAL_JUMP)  ; LAB_0040c38b
    TEST ESI,ESI                        ; 0040c33c
        ;   Label: LAB_0040c33c
    JNZ 0x0040c345                      ; 0040c33e
        ;   XREF to: 0040c345 (CONDITIONAL_JUMP)  ; LAB_0040c345
    MOV ESI,0x577b6b                    ; 0040c340 | = "(unknown)"
    MOV ECX,dword ptr [0x00763e88]      ; 0040c345 | DAT_00763e88
        ;   Label: LAB_0040c345
    MOV EDX,0x577b75                    ; 0040c34b | DAT_00577b75
    CMP ECX,0x2                         ; 0040c350
    JNZ 0x0040c35a                      ; 0040c353
        ;   XREF to: 0040c35a (CONDITIONAL_JUMP)  ; LAB_0040c35a
    MOV EDX,0x577b7a                    ; 0040c355 | DAT_00577b7a
    MOV ECX,dword ptr [ESP + 0x14]      ; 0040c35a
        ;   Label: LAB_0040c35a
    PUSH ECX                            ; 0040c35e
    PUSH ESI                            ; 0040c35f | = "(unknown)"
    PUSH EAX                            ; 0040c360 | = "(unknown)"
    PUSH EBX                            ; 0040c361 | = "(unknown)"
    PUSH EDX                            ; 0040c362 | DAT_00577b7a | DAT_00577b75
    MOV EDI,0x577b7f                    ; 0040c363 | = "..\\core\\actor.cpp"
    MOV EBP,0x7fb                       ; 0040c368
    PUSH 0x577b91                       ; 0040c36d | = "Error %sing actor property.\nActor na..."
    MOV dword ptr [0x01cc4800],EDI      ; 0040c372 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 0040c378 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0040c37e
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x18                        ; 0040c383
    POP EBP                             ; 0040c386
    POP EDI                             ; 0040c387
    POP ESI                             ; 0040c388
    POP EBX                             ; 0040c389
    RET                                 ; 0040c38a
    PUSH EDX                            ; 0040c38b
        ;   Label: LAB_0040c38b
    MOV EBX,EDX                         ; 0040c38c
    CALL FUN_00409fa0                   ; 0040c38e
        ;   XREF to: 00409fa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409fa0()
    ADD ESP,0x4                         ; 0040c393
    JMP 0x0040c33c                      ; 0040c396
        ;   XREF to: 0040c33c (UNCONDITIONAL_JUMP)  ; LAB_0040c33c


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043a350(int param_1)
;
; Local Variables:
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x28]:1  local_28
;
; XREF[6]:
;   FUN_0040a050 at 0040ad36
;   FUN_00485b40 at 004862fe
;   FUN_004cbdc0 at 004cc61e
;   FUN_0053f170 at 0053f931
;   FUN_00575800 at 0057609d
;   FUN_0057fc20 at 0058019b
;
; Referenced Globals:
;   undefined4 s_s_exploding_005ce1f6+1
;   void* PTR_DAT_00609ed0 = 007c158c
;   undefined4 DAT_00614d30
;   undefined4 DAT_00618170
;   undefined4 DAT_007c158c
;   undefined4 DAT_01d182f0
;
; Called Functions:
;   FUN_00436710
;   FUN_0049e360
;   FUN_004fc7b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043a350
        ;   Label: FUN_0043a350
    SUB ESP,0x3c                        ; 0043a351
    MOV EBX,dword ptr [ESP + 0x44]      ; 0043a354
    CMP dword ptr [EBX + 0x70],0x1      ; 0043a358
    JZ 0x0043a363                       ; 0043a35c
        ;   XREF to: 0043a363 (CONDITIONAL_JUMP)  ; LAB_0043a363
    ADD ESP,0x3c                        ; 0043a35e
    POP EBX                             ; 0043a361
    RET                                 ; 0043a362
    PUSH EDI                            ; 0043a363
        ;   Label: LAB_0043a363
    PUSH ESI                            ; 0043a364
    PUSH EBX                            ; 0043a365
    PUSH 0x5ce1f7                       ; 0043a366 | s_s_exploding_005ce1f6+1
    MOV ECX,dword ptr [0x00609ed0]      ; 0043a36b | PTR_DAT_00609ed0
    PUSH ECX                            ; 0043a371 | DAT_007c158c
    CALL FUN_00436710                   ; 0043a372
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined FUN_00436710()
    ADD ESP,0xc                         ; 0043a377
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0043a37a
    PUSH EBX                            ; 0043a380
    LEA ESI,[ESP + 0xc]                 ; 0043a381
    LEA EDI,[ESP + 0x24]                ; 0043a385
    CALL dword ptr [EAX + 0x24]         ; 0043a389
    MOV ECX,0x6                         ; 0043a38c
    LEA ESI,[ESP + 0xc]                 ; 0043a391
    LEA EAX,[ESP + 0x3c]                ; 0043a395
    ADD ESP,0x4                         ; 0043a399
    LEA EDX,[EBX + 0x20]                ; 0043a39c
    MOVSD.REP ES:EDI,ESI                ; 0043a39f
    CMP EAX,EDX                         ; 0043a3a1
    JZ 0x0043a3b9                       ; 0043a3a3
        ;   XREF to: 0043a3b9 (CONDITIONAL_JUMP)  ; LAB_0043a3b9
    MOV EAX,dword ptr [EDX]             ; 0043a3a5
    MOV dword ptr [ESP + 0x38],EAX      ; 0043a3a7
    MOV EAX,dword ptr [EDX + 0x4]       ; 0043a3ab
    MOV dword ptr [ESP + 0x3c],EAX      ; 0043a3ae
    MOV EAX,dword ptr [EDX + 0x8]       ; 0043a3b2
    MOV dword ptr [ESP + 0x40],EAX      ; 0043a3b5
    PUSH 0x40800000                     ; 0043a3b9
        ;   Label: LAB_0043a3b9
    FLD float ptr [ESP + 0x34]          ; 0043a3be
    PUSH 0x44bb8000                     ; 0043a3c2
    LEA EAX,[ESP + 0x40]                ; 0043a3c7
    MOV ESI,dword ptr [0x00614d30]      ; 0043a3cb | DAT_00614d30
    PUSH 0x42000000                     ; 0043a3d1
    FSUB float ptr [ESP + 0x30]         ; 0043a3d6
    PUSH EAX                            ; 0043a3da
    FADD float ptr [ESP + 0x4c]         ; 0043a3db
    PUSH ESI                            ; 0043a3df
    FSTP float ptr [ESP + 0x50]         ; 0043a3e0
    CALL FUN_0049e360                   ; 0043a3e4
        ;   XREF to: 0049e360 (UNCONDITIONAL_CALL)  ; undefined FUN_0049e360()
    ADD ESP,0x14                        ; 0043a3e9
    PUSH 0x1                            ; 0043a3ec
    PUSH EBX                            ; 0043a3ee
    MOV EDI,dword ptr [0x00618170]      ; 0043a3ef | DAT_00618170
    PUSH EDI                            ; 0043a3f5 | DAT_01d182f0
    CALL FUN_004fc7b0                   ; 0043a3f6
        ;   XREF to: 004fc7b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc7b0()
    ADD ESP,0xc                         ; 0043a3fb
    MOV dword ptr [EBX + 0x70],0x2      ; 0043a3fe
    POP ESI                             ; 0043a405
    POP EDI                             ; 0043a406
    ADD ESP,0x3c                        ; 0043a407
    POP EBX                             ; 0043a40a
    RET                                 ; 0043a40b


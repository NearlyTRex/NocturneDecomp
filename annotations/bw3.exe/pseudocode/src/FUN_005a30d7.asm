; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005a30d7(int param_1,uint param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[75]:
;   FUN_00409980 at 0040999d
;   FUN_004118e0 at 004118ec
;   FUN_00411b50 at 00411b74
;   FUN_00413200 at 00413224
;   FUN_00414750 at 0041476a
;   FUN_00417400 at 00417420
;   FUN_0041ad40 at 0041ad51
;   FUN_0041ef40 at 0041ef6f
;   FUN_00420ea0 at 00420ec0
;   FUN_00424430 at 0042444b
;   ... and 65 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a30d7
        ;   Label: FUN_005a30d7
    PUSH ESI                            ; 005a30d8
    PUSH EDI                            ; 005a30d9
    PUSH EBP                            ; 005a30da
    SUB ESP,0xc                         ; 005a30db
    MOV EBX,dword ptr [ESP + 0x20]      ; 005a30de
    MOV EBP,dword ptr [ESP + 0x24]      ; 005a30e2
    MOV EDI,dword ptr [ESP + 0x28]      ; 005a30e6
    MOV dword ptr [ESP + 0x4],EDI       ; 005a30ea
    MOV dword ptr [ESP + 0x8],EBX       ; 005a30ee
    XOR EDX,EDX                         ; 005a30f2
    MOV ESI,dword ptr [EDI + 0x4]       ; 005a30f4
    MOV dword ptr [ESP],EDX             ; 005a30f7
    MOV EDI,dword ptr [EDI + 0x10]      ; 005a30fa
    CMP EBP,dword ptr [ESP]             ; 005a30fd
        ;   Label: LAB_005a30fd
    JA 0x005a310e                       ; 005a3100
        ;   XREF to: 005a310e (CONDITIONAL_JUMP)  ; LAB_005a310e
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a3102
    ADD ESP,0xc                         ; 005a3106
    POP EBP                             ; 005a3109
    POP EDI                             ; 005a310a
    POP ESI                             ; 005a310b
    POP EBX                             ; 005a310c
    RET                                 ; 005a310d
    PUSH EBX                            ; 005a310e
        ;   Label: LAB_005a310e
    CALL ESI                            ; 005a310f
    ADD ESP,0x4                         ; 005a3111
    MOV EAX,dword ptr [ESP]             ; 005a3114
    INC EAX                             ; 005a3117
    ADD EBX,EDI                         ; 005a3118
    MOV dword ptr [ESP],EAX             ; 005a311a
    JMP 0x005a30fd                      ; 005a311d
        ;   XREF to: 005a30fd (UNCONDITIONAL_JUMP)  ; LAB_005a30fd


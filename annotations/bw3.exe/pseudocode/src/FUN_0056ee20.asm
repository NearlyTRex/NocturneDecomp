; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056ee20(int param_1,float param_2)
;
; Local Variables:
; undefined8       Stack[-0x14]:8  local_14
; undefined8       Stack[-0xc]:8  local_c
;
; XREF[10]:
;   FUN_00409f60 at 0040a51c
;   FUN_00410490 at 00411187
;   FUN_00424550 at 00424d4f
;   FUN_00486d40 at 00487288
;   FUN_0048b020 at 0048b557
;   FUN_004ae850 at 004af3b6
;   FUN_004d0fc0 at 004d17f7
;   FUN_00527d70 at 0052845d
;   FUN_005353e0 at 005357e3
;   FUN_0056b410 at 0056bc8c
;
; Referenced Globals:
;   TerminatedCString s_s_received_g_damage_hitp_005d6762
;   void* PTR_DAT_005f1690 = 007f7ea4
;   undefined4 DAT_007f7ea4
;
; Called Functions:
;   FUN_00441ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056ee20
        ;   Label: FUN_0056ee20
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056ee21
    CMP dword ptr [EBX + 0x174],0x7     ; 0056ee25
    JNZ 0x0056ee95                      ; 0056ee2c
        ;   XREF to: 0056ee95 (CONDITIONAL_JUMP)  ; LAB_0056ee95
    FLD float ptr [EBX + 0x370]         ; 0056ee2e
    FLDZ                                ; 0056ee34
    FCOMPP                              ; 0056ee36
    FNSTSW AX                           ; 0056ee38
    SAHF                                ; 0056ee3a
    JC 0x0056ee95                       ; 0056ee3b
        ;   XREF to: 0056ee95 (CONDITIONAL_JUMP)  ; LAB_0056ee95
    FLD float ptr [EBX + 0x2f8]         ; 0056ee3d
    FSUB float ptr [ESP + 0xc]          ; 0056ee43
    FST float ptr [EBX + 0x2f8]         ; 0056ee47
    FLDZ                                ; 0056ee4d
    FCOMPP                              ; 0056ee4f
    FNSTSW AX                           ; 0056ee51
    SAHF                                ; 0056ee53
    JBE 0x0056ee60                      ; 0056ee54
        ;   XREF to: 0056ee60 (CONDITIONAL_JUMP)  ; LAB_0056ee60
    MOV dword ptr [EBX + 0x2f8],0x0     ; 0056ee56
    SUB ESP,0x8                         ; 0056ee60
        ;   Label: LAB_0056ee60
    FLD float ptr [EBX + 0x2f8]         ; 0056ee63
    FSTP double ptr [ESP]               ; 0056ee69
    FLD float ptr [ESP + 0x14]          ; 0056ee6c
    SUB ESP,0x8                         ; 0056ee70
    FSTP double ptr [ESP]               ; 0056ee73
    PUSH EBX                            ; 0056ee76
    PUSH 0x5d6762                       ; 0056ee77 | = "%s received %g damage, hitpoints %g\n"
    MOV ECX,dword ptr [0x005f1690]      ; 0056ee7c | PTR_DAT_005f1690
    PUSH ECX                            ; 0056ee82 | DAT_007f7ea4
    CALL FUN_00441ff0                   ; 0056ee83
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ff0()
    ADD ESP,0x1c                        ; 0056ee88
    MOV dword ptr [EBX + 0x370],0x3f800000 ; 0056ee8b
    POP EBX                             ; 0056ee95
        ;   Label: LAB_0056ee95
    RET                                 ; 0056ee96


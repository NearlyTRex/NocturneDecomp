; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059be30(int param_1,float param_2)
;
; Local Variables:
; undefined8       Stack[-0x14]:8  local_14
; undefined8       Stack[-0xc]:8  local_c
;
; XREF[11]:
;   FUN_00409f20 at 0040a3c1
;   FUN_00449a50 at 00449dc3
;   FUN_0049e1a0 at 0049e6e8
;   FUN_004e8630 at 004e8e67
;   FUN_00500310 at 005007aa
;   FUN_00501a70 at 00501f0a
;   FUN_00540080 at 0054076d
;   FUN_0054fc20 at 0055005e
;   FUN_00561760 at 00561c99
;   FUN_00598420 at 00598c9c
;   ... and 1 more
;
; Referenced Globals:
;   TerminatedCString s_s_received_g_damage_hitp_005f81f3
;   void* PTR_DAT_00611100 = 007db5f0
;   undefined4 DAT_007db5f0
;
; Called Functions:
;   FUN_00445430
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059be30
        ;   Label: FUN_0059be30
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059be31
    CMP dword ptr [EBX + 0x174],0x7     ; 0059be35
    JNZ 0x0059bea5                      ; 0059be3c
        ;   XREF to: 0059bea5 (CONDITIONAL_JUMP)  ; LAB_0059bea5
    FLD float ptr [EBX + 0x370]         ; 0059be3e
    FLDZ                                ; 0059be44
    FCOMPP                              ; 0059be46
    FNSTSW AX                           ; 0059be48
    SAHF                                ; 0059be4a
    JC 0x0059bea5                       ; 0059be4b
        ;   XREF to: 0059bea5 (CONDITIONAL_JUMP)  ; LAB_0059bea5
    FLD float ptr [EBX + 0x2f8]         ; 0059be4d
    FSUB float ptr [ESP + 0xc]          ; 0059be53
    FST float ptr [EBX + 0x2f8]         ; 0059be57
    FLDZ                                ; 0059be5d
    FCOMPP                              ; 0059be5f
    FNSTSW AX                           ; 0059be61
    SAHF                                ; 0059be63
    JBE 0x0059be70                      ; 0059be64
        ;   XREF to: 0059be70 (CONDITIONAL_JUMP)  ; LAB_0059be70
    MOV dword ptr [EBX + 0x2f8],0x0     ; 0059be66
    SUB ESP,0x8                         ; 0059be70
        ;   Label: LAB_0059be70
    FLD float ptr [EBX + 0x2f8]         ; 0059be73
    FSTP double ptr [ESP]               ; 0059be79
    FLD float ptr [ESP + 0x14]          ; 0059be7c
    SUB ESP,0x8                         ; 0059be80
    FSTP double ptr [ESP]               ; 0059be83
    PUSH EBX                            ; 0059be86
    PUSH 0x5f81f3                       ; 0059be87 | = "%s received %g damage, hitpoints %g\n"
    MOV ECX,dword ptr [0x00611100]      ; 0059be8c | PTR_DAT_00611100
    PUSH ECX                            ; 0059be92 | DAT_007db5f0
    CALL FUN_00445430                   ; 0059be93
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined FUN_00445430()
    ADD ESP,0x1c                        ; 0059be98
    MOV dword ptr [EBX + 0x370],0x3f800000 ; 0059be9b
    POP EBX                             ; 0059bea5
        ;   Label: LAB_0059bea5
    RET                                 ; 0059bea6


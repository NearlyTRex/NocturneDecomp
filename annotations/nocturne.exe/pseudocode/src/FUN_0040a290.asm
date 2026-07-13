; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0040a290(int param_1,undefined4 param_2,float *param_3)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[76]:
;   FUN_0040a740 at 0040a828
;   FUN_0040b300 at 0040b656
;   FUN_00410cc0 at 00410cfd
;   FUN_0041ef90 at 0041efab
;   FUN_0041f190 at 0041f1b1
;   FUN_004247f0 at 0042484c
;   FUN_00424e90 at 00424ea3
;   FUN_00425cc0 at 00425e04
;   FUN_00428260 at 00428273
;   FUN_004282d0 at 004282ef
;   ... and 66 more
;
; Called Functions:
;   FUN_0044daa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040a290
        ;   Label: FUN_0040a290
    SUB ESP,0xc                         ; 0040a291
    MOV ECX,dword ptr [ESP + 0x14]      ; 0040a294
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040a298
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0040a29c
    LEA EAX,[ECX + 0x20]                ; 0040a2a0
    FLD float ptr [EDX]                 ; 0040a2a3
    FSUB float ptr [EAX]                ; 0040a2a5
    FSTP float ptr [ESP]                ; 0040a2a7
    FLD float ptr [EDX + 0x4]           ; 0040a2aa
    FSUB float ptr [EAX + 0x4]          ; 0040a2ad
    FSTP float ptr [ESP + 0x4]          ; 0040a2b0
    FLD float ptr [EDX + 0x8]           ; 0040a2b4
    FSUB float ptr [EAX + 0x8]          ; 0040a2b7
    MOV EAX,ESP                         ; 0040a2ba
    PUSH EAX                            ; 0040a2bc
    PUSH EBX                            ; 0040a2bd
    LEA EAX,[ECX + 0x3c]                ; 0040a2be
    PUSH EAX                            ; 0040a2c1
    FSTP float ptr [ESP + 0x14]         ; 0040a2c2
    CALL FUN_0044daa0                   ; 0040a2c6
        ;   XREF to: 0044daa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044daa0()
    ADD ESP,0xc                         ; 0040a2cb
    MOV EAX,EBX                         ; 0040a2ce
    ADD ESP,0xc                         ; 0040a2d0
    POP EBX                             ; 0040a2d3
    RET                                 ; 0040a2d4


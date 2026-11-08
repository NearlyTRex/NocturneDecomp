; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005738c0(undefined4 param_1)
;
;
; XREF[14]:
;   FUN_00401010 at 004010a7
;   FUN_00401590 at 00401596
;   FUN_00402940 at 00402954
;   FUN_004350a0 at 004350bf
;   FUN_00438ef0 at 00438f19
;   FUN_004af920 at 004afa9d
;   FUN_004bda10 at 004bdce7
;   FUN_004bdfb0 at 004be23b
;   FUN_00512fb0 at 00512fe5
;   FUN_00551620 at 00551727
;   ... and 4 more
;
; Referenced Globals:
;   undefined1* PTR_FUN_005e5a84 = 00573a40
;
; Called Functions:
;   FUN_00572530
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005738c0
        ;   Label: FUN_005738c0
    PUSH EDX                            ; 005738c4
    CALL FUN_00572530                   ; 005738c5
        ;   XREF to: 00572530 (UNCONDITIONAL_CALL)  ; undefined FUN_00572530()
    MOV dword ptr [EAX],0x5e5a84        ; 005738ca | PTR_FUN_005e5a84
    MOV dword ptr [EAX + 0x4],0x0       ; 005738d0
    MOV dword ptr [EAX + 0x8],0x0       ; 005738d7
    MOV dword ptr [EAX + 0xc],0x0       ; 005738de
    MOV dword ptr [EAX + 0x10],0x0      ; 005738e5
    MOV dword ptr [EAX + 0x14],0x0      ; 005738ec
    MOV dword ptr [EAX + 0x18],0x0      ; 005738f3
    MOV dword ptr [EAX + 0x1c],0x0      ; 005738fa
    MOV dword ptr [EAX + 0x20],0x0      ; 00573901
    ADD ESP,0x4                         ; 00573908
    MOV dword ptr [EAX + 0x24],0x0      ; 0057390b
    RET                                 ; 00573912


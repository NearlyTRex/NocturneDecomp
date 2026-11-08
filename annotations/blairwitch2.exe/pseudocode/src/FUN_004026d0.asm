; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004026d0(undefined4 param_1,int param_2,int param_3,undefined4 param_4)
;
;
; XREF[2]:
;   FUN_00402710 at 00402726
;   FUN_00467f70 at 004681c2
;
; Called Functions:
;   FUN_004018b0
;   FUN_00402440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004026d0
        ;   Label: FUN_004026d0
    PUSH ESI                            ; 004026d1
    MOV EDX,dword ptr [ESP + 0x18]      ; 004026d2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004026d6
    PUSH EDX                            ; 004026da
    MOV ESI,dword ptr [ESP + 0x10]      ; 004026db
    MOV ECX,dword ptr [ESP + 0x18]      ; 004026df
    PUSH ESI                            ; 004026e3
    ADD EBX,ECX                         ; 004026e4
    CALL FUN_004018b0                   ; 004026e6
        ;   XREF to: 004018b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004018b0()
    LEA EDX,[EBX + 0x1]                 ; 004026eb
    SUB EDX,EAX                         ; 004026ee
    INC EDX                             ; 004026f0
    MOV EAX,EDX                         ; 004026f1
    SAR EDX,0x1f                        ; 004026f3
    SUB EAX,EDX                         ; 004026f6
    SAR EAX,0x1                         ; 004026f8
    ADD ESP,0x4                         ; 004026fa
    PUSH EAX                            ; 004026fd
    PUSH ESI                            ; 004026fe
    CALL FUN_00402440                   ; 004026ff
        ;   XREF to: 00402440 (UNCONDITIONAL_CALL)  ; undefined FUN_00402440()
    ADD ESP,0xc                         ; 00402704
    POP ESI                             ; 00402707
    POP EBX                             ; 00402708
    RET                                 ; 00402709

